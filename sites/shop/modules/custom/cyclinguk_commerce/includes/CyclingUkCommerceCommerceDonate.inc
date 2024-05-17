<?php


/**
 * @file
 */

/**
 * Class to handle saving Affiliate Membership line item data to CARE.
 */
class CyclingUkCommerceCommerceDonate extends CyclingUkCommerceLineItem {

  /**
   * Constructor.
   */
  public function __construct($order, $line_item) {
    $this->progress['PaymentPlanNumber'] = 0;
    $this->progress['BatchNumber'] = 0;
    $this->progress['TransactionNumber'] = 0;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceDonate saveToCare()...');
    parent::saveToCare();
    $this->saveDonation();
    $this->log('...CyclingUkCommerceDonate saveToCare() done.');
  }

  /**
   * Save record of this donation.
   */
  protected function saveDonation() {
    $payment_option = $this->lineItem->field_payment_option->value();
    $this->log('saveDonation()...');
    if ($payment_option == 'DDM') {
      $this->saveDirectDebitDonation();
    }
    elseif ($payment_option == 'CCA') {
      $this->saveCreditCardDonation();
    }
    $this->log('...saveDonation() done.');
  }

  /**
   * Save record of regular direct debit donation.
   */
  protected function saveDirectDebitDonation() {
    $this->log('saveDonation() - direct debit...');
    if ($this->progress['PaymentPlanNumber']) {
      $this->log('PaymentPlan %p already saved to CARE.', [
        '%p' => $this->progress['PaymentPlanNumber'],
      ]);
      return;
    }
    $raw_order = $this->order->raw();
    $direct_debit_data = $raw_order->data['cyclinguk_commerce_directdebit']['fieldset'];
    $sort_code_numeric = preg_replace('/[^0-9]+/', '', $direct_debit_data['sort_code']);
    // Pre-save Sort Code, in case it's new.
    $data_bank = ['SortCode' => $sort_code_numeric, 'BranchName' => 'Unknown'];
    care_call_method('AddBank', $data_bank, [], IGNORE_ERRORS);
    try {
      $product_sku = $this->lineItem->commerce_product->sku->value();
    } catch (Exception $e) {
      $product_sku = 'GEN';
    }
    // Save DD data.
    $data = [
      'PayerContactNumber' => $this->billingContactNumber,
      'PayerAddressNumber' => $this->billingAddressNumber,
      'AutoPayContactNumber' => $this->billingContactNumber,
      'AutoPayAddressNumber' => $this->billingAddressNumber,
      'SortCode' => $sort_code_numeric,
      'AccountName' => $direct_debit_data['account_name'],
      'AccountNumber' => $direct_debit_data['account_number'],
      'FixedAmount' => $this->amountDecimal,
      'DetailFixedAmount' => $this->amountDecimal,
      'AutoPayFixedAmount' => $this->amountDecimal,
      'StartDate' => date('d/m/Y'),
      'Reference' => $this->billingContactNumber,
      'PaymentFrequency' => 'R',
      'ReasonForDespatch' => 'DON',
      'AutoPaySource' => 'DOI',
      'EligibleForGiftAid' => 'Y',
      'MandateType' => 'P',
      'Product' => $product_sku,
      'Rate' => 0,
      'Source' => 'DOI',
      'BankAccount' => 'CLUB',
    ];
    $typedata = [
      'pPlanType' => 'pptDD',
    ];
    $resultxml = care_call_method('AddPaymentPlan', $data, $typedata);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceCommerceDonate failed to AddPaymentPlan: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['PaymentPlanNumber'] = (string) $resultxml->PaymentPlanNumber;
      $this->saveProgress();
      // Log status.
      $this->log('AddPaymentPlan: PaymentPlanNumber = %p', [
        '%p' => (string) $resultxml->PaymentPlanNumber,
      ]);
    }
    $this->log('...saveDonation() - direct debit - Done.');
  }

  /**
   * Save record of one-off credit card donation.
   */
  protected function saveCreditCardDonation() {
    $this->log('saveDonation() - credit card...');
    if ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']) {
      $this->log(' Payment Batch-TransactionNumber %bn-%tn already saved to CARE.', [
        '%bn' => $this->progress['BatchNumber'],
        '%tn' => $this->progress['TransactionNumber'],
      ]);
      return;
    }
    try {
      $product_sku = $this->lineItem->commerce_product->sku->value();
    } catch (Exception $e) {
      $product_sku = 'GEN';
    }
    $data = [
      'ContactNumber' => $this->billingContactNumber,
      'AddressNumber' => $this->billingAddressNumber,
      'Quantity' => 1,
      'Amount' => $this->amountDecimal,
      'Reference' => $this->order->order_number->value(),
      'NoClaimRequired' => 'Y',
      'Product' => $product_sku,
      'Rate' => 0,
      'Source' => 'OI',
      'BankAccount' => 'CLUB',
    ];
    $resultxml = care_call_method('AddProductSale', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceCommerceDonate failed to AddProductSale: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      $this->progress['BatchNumber'] = (string) $resultxml->BatchNumber;
      $this->progress['TransactionNumber'] = (string) $resultxml->TransactionNumber;
      $this->saveProgress();
      // Log status.
      $this->log(' AddProductSale: BatchNumber = %b, TransactionNumber = %t', [
        '%b' => (string) $resultxml->BatchNumber,
        '%t' => (string) $resultxml->TransactionNumber,
      ]);
    }
    $this->log('...saveDonation() - credit card - Done.');
  }

  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $payment_option = $this->lineItem->field_payment_option->value();
    $cc_completed = ($payment_option != 'CCA' || ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']));
    $dd_completed = ($payment_option != 'DDM' || $this->progress['PaymentPlanNumber']);
    return ($parent_completed && $cc_completed && $dd_completed);
  }

}
