<?php


/**
 * @file
 */

/**
 * Class to handle saving Membership Renewal line item data to CARE.
 */
class CyclingUkCommerceMembershipRenewal extends CyclingUkCommerceLineItem {

  /**
   * @var int The member's ContactNumber.
   */
  protected $memberContactNumber = 0;

  /**
   * @var int The member's internal Membership number.
   */
  protected $memberMembershipNumber = 0;

  /**
   * @var string The date the member joined, dd/mm/yyyy.
   */
  protected $memberJoined = 'dd/mm/yyyy';

  /**
   * @var string The date the membership is due to renew.
   */
  protected $renewalDate = 'dd/mm/yyyy';

  /**
   * @var int Membership Payment Plan number.
   */
  protected $memberPaymentPlanNumber = 0;

  /**
   * @var string Previous membership type code letter.
   */
  protected $previousMembershipTypeCode = '';

  /**
   * @var string New membership type code letter.
   */
  protected $newMembershipTypeCode = '';

  public function __construct($order, $line_item) {
    $this->progress['BatchNumber'] = 0;
    $this->progress['TransactionNumber'] = 0;
    $this->progress['AutoPaymentNumber'] = 0;
    $this->progress['changedMembershipNumber'] = 0;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceMembershipRenewal saveToCare()...');
    parent::saveToCare();
    // Store data for use later.
    $this->memberContactNumber = $this->lineItem->field_membership_number->number->value();
    $membership = $this->lineItem->field_membership;
    $this->memberPaymentPlanNumber = $membership->payment_plan_number->value();
    $this->memberMembershipNumber = $membership->membership_number->value();
    $this->memberJoined = $membership->joined->value();
    $this->renewalDate = $membership->renewal_date->value();
    $this->previousMembershipTypeCode = $membership->membership_type->value();
    // Change membership type, if required.
    if ($this->lineItem->field_new_membership_type->value()) {
      /** @var \EntityDrupalWrapper $new_membership_type */
      $new_membership_type = entity_metadata_wrapper('commerce_product', $this->lineItem->field_new_membership_type->value());
      if ($new_membership_type && isset($new_membership_type->field_membership_code)) {
        $this->newMembershipTypeCode = $new_membership_type->field_membership_code->value();
      }
    }
    else {
      $this->newMembershipTypeCode = $this->previousMembershipTypeCode;
    }
    $this->changeMembershipType();
    $this->savePayment();
    $this->log('...CyclingUkCommerceMembershipRenewal saveToCare() done.');
  }

  /**
   * Save payment record to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function savePayment() {
    $this->log('savePayment()...');
    if ($this->paymentMethod == 'DD') {
      $this->saveDDPayment();
      $this->updatePaymentFrequency();
    }
    else {
      $this->saveCCPayment();
    }
    $this->log('...savePayment() done.');
  }

  /**
   * @throws \EntityMetadataWrapperException
   */
  protected function saveDDPayment() {
    if ($this->progress['AutoPaymentNumber']) {
      $this->log('AutoPaymentNumber %an already saved.', [
        '%an' => $this->progress['AutoPaymentNumber'],
      ]);
      return;
    }
    $raw_order = $this->order->raw();
    $direct_debit_data = $raw_order->data['cyclinguk_commerce_directdebit']['fieldset'];
    // Pre-save Sort Code, in case it's new.
    $sort_code_numeric = preg_replace('/\D+/', '', $direct_debit_data['sort_code']);
    $data_bank = ['SortCode' => $sort_code_numeric, 'BranchName' => 'Unknown'];
    care_call_method('AddBank', $data_bank, [], IGNORE_ERRORS);
    // Save DD data.
    $data = [
      'AutoPayContactNumber' => $this->billingContactNumber,
      'AutoPayAddressNumber' => $this->billingAddressNumber,
      'PaymentPlanNumber' => $this->memberPaymentPlanNumber,
      'Reference' => $this->memberContactNumber,
      'AccountName' => $direct_debit_data['account_name'],
      'SortCode' => $sort_code_numeric,
      'AccountNumber' => $direct_debit_data['account_number'],
      'MandateType' => 'P',
      'BankAccount' => 'CLUB',
      'AutoPaySource' => 'OI',
    ];
    $typedata = [
      'pAutoPaymentType' => 'ppAPMDD',
    ];
    $resultxml = care_call_method('AddAutoPaymentMethod', $data, $typedata);
    if (isset($resultxml->ErrorMessage)) {
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembershipRenewal failed to AddAutoPaymentMethod: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['AutoPaymentNumber'] = (string) $resultxml->AutoPaymentNumber;
      $this->saveProgress();
    }
  }

  /**
   * Update the PaymentPlan payment frequency.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function updatePaymentFrequency() {
    if ($this->progress['PaymentFrequency']) {
      $this->log('PaymentFrequency %an already saved.', [
        '%an' => $this->progress['PaymentFrequency'],
      ]);
      return;
    }
    if (isset($this->lineItem->field_payment_option)) {
      if ($this->lineItem->field_payment_option->value() == 'DDM') {
        $frequency_code = 'M';
      }
      else {
        $frequency_code = 'A';
      }
      $data = [
        'PaymentPlanNumber' => $this->memberPaymentPlanNumber,
        'PaymentFrequency' => $frequency_code,
      ];
      $resultxml = care_call_method('UpdatePaymentPlanInfo', $data);
      if (isset($resultxml->ErrorMessage)) {
        watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembershipRenewal failed to UpdatePaymentPlanInfo: %error.', [
          '%error' => (string) $resultxml->ErrorMessage,
        ], WATCHDOG_CRITICAL);
      }
      else {
        // Save progress (UpdatePaymentPlanInfo only returns PaymentPlanNumber).
        $this->progress['PaymentFrequency'] = $frequency_code;
        $this->saveProgress();
      }
    }
  }

  /**
   * @throws \EntityMetadataWrapperException
   */
  protected function saveCCPayment() {
    if ($this->progress['TransactionNumber'] && $this->progress['BatchNumber']) {
      $this->log('Payment Batch-TransactionNumber %bn-%tn already saved.', [
        '%bn' => $this->progress['BatchNumber'],
        '%tn' => $this->progress['TransactionNumber'],
      ]);
      return;
    }
    $data = [
      'ContactNumber' => $this->billingContactNumber,
      'AddressNumber' => $this->billingAddressNumber,
      'PaymentPlanNumber' => $this->memberPaymentPlanNumber,
      'BankAccount' => 'CLUB',
      'Notes' => 'Payment for website Order ID: ' . $this->order->order_id->value(),
      'Reference' => $this->order->order_number->value(),
      'Amount' => $this->amountDecimal,
      'NoClaimRequired' => 'Y',
      'Source' => 'OI',
    ];
    $resultxml = care_call_method('AddPaymentPlanPayment', $data);
    if (isset($resultxml->ErrorMessage)) {
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembershipRenewal failed to AddPaymentPlanPayment: %error.', ['%error' => (string) $resultxml->ErrorMessage,], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['BatchNumber'] = (string) $resultxml->BatchNumber;
      $this->progress['TransactionNumber'] = (string) $resultxml->TransactionNumber;
      $this->saveProgress();
    }
  }

  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $cc_completed = ($this->paymentMethod != 'CC' || ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']));
    $dd_completed = ($this->paymentMethod != 'DD' || ($this->progress['AutoPaymentNumber']));
    $change_completed = (($this->newMembershipTypeCode == $this->previousMembershipTypeCode) || $this->progress['changedMembershipNumber']);
    return ($parent_completed && $cc_completed && $dd_completed && $change_completed);
  }

  /**
   * Call CARE methods to change membership type, if required.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function changeMembershipType() {
    // Return if membership type hasn't changed.
    if ($this->newMembershipTypeCode == $this->previousMembershipTypeCode) {
      return;
    }
    $this->log('Changing membership: ' . $this->previousMembershipTypeCode . ' -> ' . $this->newMembershipTypeCode);
    if ($this->progress['changedMembershipNumber']) {
      $this->log('changed MembershipNumber %mn already saved.', ['%mn' => $this->progress['changedMembershipNumber'],]);
      return;
    }
    // Find any existing new future memberships.
    $contact_number = $this->lineItem->field_membership_number->number->value();
    $data = ['ContactNumber' => $contact_number];
    $result_xml = care_call_method('GetNextPaymentData', $data);
    foreach ($result_xml->DataRow as $index => $row) {
      $future_payment_plan = (int) $row->PaymentPlanNumber;
      if ($this->memberPaymentPlanNumber == $future_payment_plan) {
        // Cancel this pre-existing future membership change.
        $data = [
          'PaymentPlanNumber' => $this->memberPaymentPlanNumber,
          'ContactNumber' => $this->memberContactNumber,
          'MembershipNumber' => $this->memberMembershipNumber,
          'CancelMembership' => 'Y',
          'StatusDate' => date('d/m/Y'),
          'CancellationReason' => 'CMT',
        ];
        $type_data = ['pMenuType' => 'xpmtCancelMember'];
        $resultxml = care_call_method('ProcessPaymentPlanMenu', $data, $type_data);
        if (isset($resultxml->ErrorMessage)) {
          watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembershipRenewal failed to ProcessPaymentPlanMenu: %error.', ['%error' => (string) $resultxml->ErrorMessage,], WATCHDOG_CRITICAL);
        }
        // Add replacement membership record.
        $this->addReplacementMembership();
        return;
      }
    }
    // Change membership type when no existing future payments found.
    $data = [
      'ContactNumber' => $this->memberContactNumber,
      'MemberNumber' => $this->memberContactNumber,
      'MembershipNumber' => $this->memberMembershipNumber,
      'CancellationReason' => 'CMT',
      'MembershipType' => $this->newMembershipTypeCode,
      'Joined' => $this->memberJoined,
    ];
    $resultxml = care_call_method('ChangeMembershipType', $data);
    if (isset($resultxml->ErrorMessage)) {
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembershipRenewal failed to changeMembershipType: %error.', ['%error' => (string) $resultxml->ErrorMessage,], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['changedMembershipNumber'] = (string) $resultxml->MembershipNumber;
      $this->saveProgress();
    }
  }

  /**
   * Add a replacement membership record.
   *
   * @throws \EntityMetadataWrapperException
   */
  private function addReplacementMembership() {
    $this->log('addReplacementMembership()...');
    $member_address_number = 0;
    // Find auto-discovered Branch for the member.
    $data = [
      'ContactNumber' => $this->memberContactNumber,
    ];
    $result_xml = care_call_method('FindContacts', $data);
    if ((string) $result_xml->DataRow->Branch) {
      $this->branch = (string) $result_xml->DataRow->Branch;
    }
    else {
      $this->branch = 'WW';
    }
    if ((string) $result_xml->DataRow->AddressNumber) {
      $member_address_number = (string) $result_xml->DataRow->AddressNumber;
    }
    // Product.
    $product = $this->lineItem->commerce_product;
    // Payment frequency.
    $frequency_code = $product->field_payment_frequency->field_code->value();
    if (isset($this->lineItem->field_payment_option) && $this->lineItem->field_payment_option->value() == 'DDM') {
      $frequency_code = 'M';
    }
    // Payer and Member should be the same for most memberships.
    $data = [
      'MemberContactNumber' => $this->memberContactNumber,
      'MemberAddressNumber' => $member_address_number,
      'PayerContactNumber' => $this->memberContactNumber,
      'PayerAddressNumber' => $member_address_number,
      'MembershipType' => $this->newMembershipTypeCode,
      'StartDate' => $this->renewalDate,
      'Joined' => $this->memberJoined,
      'PaymentMethod' => $this->paymentMethod,
      'PaymentFrequency' => $frequency_code,
      'Source' => $this->sourceCode,
      'PlanTerm' => ($frequency_code == 'F' ? 5 : 1),
      'Branch' => $this->branch,
      'BankAccount' => 'CLUB',
      'ReasonForDespatch' => $this->newMembershipTypeCode,
      'Reference' => $this->order->order_number->value(),
    ];
    if ($this->paymentMethod == 'DD') {
      // Additional info for Direct Debit payments.
      $raw_order = $this->order->raw();
      $direct_debit_data = $raw_order->data['cyclinguk_commerce_directdebit']['fieldset'];
      $sort_code_numeric = preg_replace('/\D+/', '', $direct_debit_data['sort_code']);
      // Pre-save Sort Code, in case it's new.
      $data_bank = [
        'SortCode' => $sort_code_numeric,
        'BranchName' => 'Unknown',
      ];
      care_call_method('AddBank', $data_bank, [], IGNORE_ERRORS);
      $data = array_merge($data, [
        'SortCode' => $sort_code_numeric,
        'AccountNumber' => $direct_debit_data['account_number'],
        'AccountName' => $direct_debit_data['account_name'],
        'AutoPayContactNumber' => $this->billingContactNumber,
        'AutoPayAddressNumber' => $this->billingAddressNumber,
        'AutoPayFixedAmount' => $this->amountDecimal,
        'AutoPaySource' => 'OI',
        'MandateType' => 'P',
        'Reference' => $this->billingContactNumber,
        'TheirReference' => $this->order->order_number->value(),
      ]);
    }
    $result_xml = care_call_method('AddMembership', $data);
    if (isset($result_xml->ErrorMessage)) {
      $this->logError('AddMembership', (string) $result_xml->ErrorMessage);
    }
    else {
      // Update numbers.
      $this->memberPaymentPlanNumber = (string) $result_xml->PaymentPlanNumber;
      $this->memberMembershipNumber = (string) $result_xml->MembershipNumber;
      // Save progress to mark this as done.
      $this->progress['changedMembershipNumber'] = (string) $result_xml->MembershipNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddMembership: PaymentPlanNumber = %p, MembershipNumber = %m', [
        '%p' => $this->memberPaymentPlanNumber,
        '%m' => $this->memberMembershipNumber,
      ]);
    }
    $this->log('...addReplacementMembership() done.');
  }

}
