<?php


/**
 * @file
 */

/**
 * Class to handle saving Membership line item data to CARE.
 */
class CyclingUkCommerceMembership extends CyclingUkCommerceLineItem {

  /**
   * CARE contact number.
   */
  protected $memberContactNumber;

  /**
   * CARE address number.
   */
  protected $memberAddressNumber;

  /**
   * CARE payment plan number.
   */
  protected $paymentPlanNumber;

  /**
   * CARE membership record number.
   */
  protected $membershipNumber;

  /**
   * CARE member's Branch
   */
  protected $branch = 'WW';

  /**
   * Constructor.
   *
   * @param $order
   * @param $line_item
   *
   * @throws \EntityMetadataWrapperException
   */
  public function __construct($order, $line_item) {
    $this->progress['member_ContactNumber'] = 0;
    $this->progress['member_AddressNumber'] = 0;
    $this->progress['branch'] = 0;
    $this->progress['gift_message_DocumentNumber'] = 0;
    $this->progress['MembershipNumber'] = 0;
    $this->progress['PaymentPlanNumber'] = 0;
    $this->progress['BatchNumber'] = 0;
    $this->progress['TransactionNumber'] = 0;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceMembership saveToCare()...');
    parent::saveToCare();
    if ($this->lineItem->getBundle() != 'group_membership') {
      $this->saveMemberContact();
      $this->saveMembership();
      $this->saveGiftMessage();
      $this->savePayment();
    }
    $this->log('...CyclingUkCommerceMembership saveToCare() done.');
  }

  /**
   * Save the member contact details to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function saveMemberContact() {
    // Get fields, if they exist in the lineItem.
    $name_field = $this->lineItem->field_care_name ?? NULL;
    $dob_field = $this->lineItem->field_care_dob ?? NULL;
    $address_field = $this->lineItem->field_care_address ?? NULL;
    $email_field = $this->lineItem->field_care_email ?? NULL;
    $telephone_field = $this->lineItem->field_care_telephone ?? NULL;
    $this->log('saveMemberContact()...');
    // Check progress if we have started saving this member before.
    if ($this->progress['member_ContactNumber'] && $this->progress['member_AddressNumber']) {
      $this->log('Member %cn already saved to CARE.', [
        '%cn' => $this->progress['member_ContactNumber'],
      ]);
      $this->memberContactNumber = $this->progress['member_ContactNumber'];
      $this->memberAddressNumber = $this->progress['member_AddressNumber'];
      return;
    }
    $member_care_user = new CareUnknownUser();
    if (isset($this->lineItem->field_membership_number) && $this->lineItem->field_membership_number->value() && $this->lineItem->field_membership_number->number->value()) {
      $this->memberContactNumber = $this->lineItem->field_membership_number->number->value();
      $this->log('Using supplied Membership Number: %mn...', [
        '%mn' => $this->memberContactNumber,
      ]);
    }
    else {
      $member_care_user->setNameField($name_field);
      if ($email_field && $email_field->value()) {
        $member_care_user->setTestEmail($email_field->email->value());
      }
      $member_care_user->setTestAddressField($address_field);
      $this->memberContactNumber = $member_care_user->getBestMatchingContact();
      if ($this->memberContactNumber) {
        $this->log('Using matching Membership Number: %mn...', [
          '%mn' => $this->memberContactNumber,
        ]);
      }
      else {
        $this->log('Creating new member Contact record...');
      }
    }
    // Load existing CARE data from best matching record, if any.
    if ($this->memberContactNumber) {
      $member_care_user->setMembershipNumber($this->memberContactNumber);
      $member_care_user->fetchBasicDetails();
      $member_care_user->fetchCommunicationDetails();
      $member_care_user->fetchAddressDetails();
    }
    // Add entered form data.
    $member_care_user->setNameField($name_field);
    $member_care_user->setDobField($dob_field);
    $member_care_user->addEmailFromField($email_field);
    $member_care_user->addTelephoneFromField($telephone_field);
    $member_care_user->addAddressFromField($address_field);
    // Save any changes.
    $save_success = $member_care_user->saveToCare();
    if ($save_success) {
      // Save to line item data to mark this as done.
      $member_contact_number = $member_care_user->getMembershipNumber();
      $member_address_number = $member_care_user->getAddressNumberFromField($address_field);
      $this->log('saveMemberContact(): contact %c, address %a', [
        '%c' => $member_contact_number,
        '%a' => $member_address_number,
      ]);
      $this->progress['member_ContactNumber'] = $member_contact_number;
      $this->progress['member_AddressNumber'] = $member_address_number;
      $this->saveProgress();
      $this->memberContactNumber = $member_contact_number;
      $this->memberAddressNumber = $member_address_number;
    }
    $this->log('saveMemberContact() ContactNumber = %c, AddressNumber = %a', [
      '%c' => $this->memberContactNumber,
      '%a' => $this->memberAddressNumber,
    ]);
    $this->log('...saveMemberContact() done.');
  }

  /**
   * Save Gift message details, if gift membership.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function saveGiftMessage() {
    if (isset($this->lineItem->field_gift) && $this->lineItem->field_gift->value()) {
      $this->log('saveGiftMessage()...');
      if ($this->progress['gift_message_DocumentNumber']) {
        $this->log('Gift Message %dn already saved to CARE.', [
          '%dn' => $this->progress['gift_message_DocumentNumber'],
        ]);
        return;
      }
      // Save Gift occasion and message.
      $cyclinguk_address_number = 160835;
      $cyclinguk_contact_number = 3;
      $data = [
        'AddresseeContactNumber' => $cyclinguk_contact_number,
        'AddresseeAddressNumber' => $cyclinguk_address_number,
        'SenderContactNumber' => $this->billingContactNumber,
        'SenderAddressNumber' => $this->billingAddressNumber,
        'Dated' => date('d/m/Y'),
        'Direction' => 'I',
        'DocumentType' => 'I',
        'Topic' => 'WEB',
        'SubTopic' => 'GIFT',
        'DocumentClass' => 'DC',
        'DocumentSubject' => $this->lineItem->field_gift_occasion->value(),
        'Precis' => $this->lineItem->field_gift_message->value(),
      ];
      $result_xml = care_call_method('AddCommunicationsLog', $data);
      if (isset($result_xml->ErrorMessage)) {
        $this->logError('AddCommunicationsLog', (string) $result_xml->ErrorMessage);
      }
      else {
        // Save to line item data to mark this as done.
        $this->progress['gift_message_DocumentNumber'] = (string) $result_xml->DocumentNumber;
        $this->saveProgress();
        // Log status.
        $this->log('AddCommunicationsLog: DocumentNumber = %d', [
          '%d' => (string) $result_xml->DocumentNumber,
        ]);
      }
      $this->log('...saveGiftMessage() done.');
    }
  }

  /**
   * Save membership record to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function saveMembership() {
    $this->log('saveMembership()...');
    if ($this->progress['MembershipNumber'] && $this->progress['PaymentPlanNumber']) {
      $this->log('Membership %mn already saved to CARE.', [
        '%mn' => $this->progress['MembershipNumber'],
      ]);
      $this->paymentPlanNumber = $this->progress['PaymentPlanNumber'];
      $this->membershipNumber = $this->progress['MembershipNumber'];
      $this->branch = $this->progress['branch'];
      return;
    }
    if (!$this->memberContactNumber) {
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembership can\'t AddMembership: no memberContactNumber.', [], WATCHDOG_CRITICAL);
      return;
    }
    if (!$this->memberAddressNumber) {
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembership can\'t AddMembership: no memberAddressNumber.', [], WATCHDOG_CRITICAL);
      return;
    }
    // Find auto-discovered Branch for the new member.
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
    $this->progress['branch'] = $this->branch;
    $this->saveProgress();
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
      'MemberAddressNumber' => $this->memberAddressNumber,
      'PayerContactNumber' => $this->memberContactNumber,
      'PayerAddressNumber' => $this->memberAddressNumber,
      'MembershipType' => $product->field_membership_code->value(),
      'StartDate' => date('d/m/Y'),
      'Joined' => date('d/m/Y'),
      'PaymentMethod' => $this->paymentMethod,
      'PaymentFrequency' => $frequency_code,
      'Source' => $this->sourceCode,
      'PlanTerm' => ($frequency_code == 'F' ? 5 : 1),
      'Branch' => $this->branch,
      'BankAccount' => 'CLUB',
      'ReasonForDespatch' => $product->field_membership_code->value(),
      'Reference' => $this->order->order_number->value(),
    ];
    //handle NHS memberships - 3 months
    if ($product->field_membership_code->value() == 'NHS') {
      $data['PlanTerm'] = 3;
      $data['Balance'] = 0;
      $data['MemberFixedAmount'] = 0;
      $data['PaymentMethod'] = 'TRL';
      $renewal_date = new DateTime("+3 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $data['RenewalDate'] = $renewal_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IMS') {
      $data['Balance'] = 0;
      $data['MemberFixedAmount'] = 0;
      $data['PaymentMethod'] = 'TRL';
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IM') {
      //$data['Balance'] = 0;
      //$data['MemberFixedAmount'] = 0;
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IMC') {
      //$data['Balance'] = 0;
      //$data['MemberFixedAmount'] = 0;
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IMP') {
      //$data['Balance'] = 0;
      //$data['MemberFixedAmount'] = 0;
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IMF') {
      //$data['Balance'] = 0;
      //$data['MemberFixedAmount'] = 0;
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    if ($product->field_membership_code->value() == 'IMH') {
      //$data['Balance'] = 0;
      //$data['MemberFixedAmount'] = 0;
      $renewal_date = new DateTime("+6 months");
      $data['NextPaymentDue'] = $renewal_date->format("d/m/Y");
      //adding renewal date means that the membership is set to pending and so does not get renewed by the standard care renewal process
      $start_date = new DateTime("-6 months");
      $data['StartDate'] = $start_date->format("d/m/Y");
    }
    // Handle differences for Gift membership.
    if (isset($this->lineItem->field_gift) && $this->lineItem->field_gift->value()) {
      // Gift membership.
      $data['PayerContactNumber'] = $this->billingContactNumber;
      $data['PayerAddressNumber'] = $this->billingAddressNumber;
      $data['PackToMember'] = $this->lineItem->field_send_starter_pack->value() == 'recipient' ? 'Y' : 'N';
      $start_date = new DateTime();
      $start_date->setTimestamp($this->lineItem->field_gift_start_date->value());
      $data['StartDate'] = $start_date->format('d/m/Y');
      $data['Joined'] = $data['StartDate'];
      $data['GiftMembership'] = 'Y';
    }
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
      $this->paymentPlanNumber = (string) $result_xml->PaymentPlanNumber;
      $this->membershipNumber = (string) $result_xml->MembershipNumber;
      // Save to line item data to mark this as done.
      $this->progress['MembershipNumber'] = $this->membershipNumber;
      $this->progress['PaymentPlanNumber'] = $this->paymentPlanNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddMembership: PaymentPlanNumber = %p, MembershipNumber = %m', [
        '%p' => $this->paymentPlanNumber,
        '%m' => $this->membershipNumber,
      ]);
    }
    $this->log('...saveMembership() done.');
  }

  /**
   * Save payment record to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function savePayment() {
    $this->log('savePayment()...');
    if ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']) {
      $this->log('Payment %btn-%tn already saved to CARE.', [
        '%bn' => $this->progress['BatchNumber'],
        '%tn' => $this->progress['TransactionNumber'],
      ]);
      return;
    }
    /** @noinspection DegradedSwitchInspection */
    switch ($this->paymentMethod) {
      case 'DD':
        // Direct Debit.
        // AddMembership calls AddAutoPaymentMethod internally.
        // Log status.
        $this->log('AddPaymentPlanPayment: nothing to do for DD.');
        break;
      default:
        // Any other payment method.
        if (!$this->paymentPlanNumber) {
          watchdog('cyclinguk_commerce', 'CyclingUkCommerceMembership can\'t AddPaymentPlanPayment: no PaymentPlanNumber.', [], WATCHDOG_CRITICAL);
          return;
        }
        if ($this->lineItem->type() == 'group_membership') {
          $contact_number = $this->memberContactNumber;
          $address_number = $this->memberAddressNumber;
        }
        else {
          $contact_number = $this->billingContactNumber;
          $address_number = $this->billingAddressNumber;
        }
        $data = [
          'ContactNumber' => $contact_number,
          'AddressNumber' => $address_number,
          'PaymentPlanNumber' => $this->paymentPlanNumber,
          'BankAccount' => 'CLUB',
          'Notes' => 'Payment for website Order ID: ' . $this->order->order_id->value(),
          'Reference' => $this->order->order_number->value(),
          'Amount' => $this->amountDecimal,
          'NoClaimRequired' => 'Y',
          'Source' => 'OI',
        ];
        $result_xml = care_call_method('AddPaymentPlanPayment', $data);
        if (isset($result_xml->ErrorMessage)) {
          $this->logError('AddPaymentPlanPayment', (string) $result_xml->ErrorMessage);
        }
        else {
          // Save to line item data to mark this as done.
          $this->progress['TransactionNumber'] = (string) $result_xml->TransactionNumber;
          $this->progress['BatchNumber'] = (string) $result_xml->BatchNumber;
          $this->saveProgress();
          // Log status.
          $this->log('AddPaymentPlanPayment: BatchNumber = %b, TransactionNumber = %t', [
            '%b' => (string) $result_xml->BatchNumber,
            '%t' => (string) $result_xml->TransactionNumber,
          ]);
        }
    }
    $this->log('...savePayment() done.');
  }

  /**
   * Return whether this line item's CARE calls are all completed.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $member_completed = ($this->progress['member_ContactNumber'] && $this->progress['member_AddressNumber']);
    $membership_completed = ($this->progress['MembershipNumber'] && $this->progress['PaymentPlanNumber']);
    $gift_message_completed = (!(isset($this->lineItem->field_gift) && $this->lineItem->field_gift->value()) || $this->progress['gift_message_DocumentNumber']);
    $payment_completed = ($this->paymentMethod == 'DD' || ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']));
    return ($parent_completed && $member_completed && $membership_completed && $gift_message_completed && $payment_completed);
  }

}
