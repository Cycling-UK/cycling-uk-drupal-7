<?php


/**
 * @file
 */

/**
 * Class to handle saving Product line item data to CARE.
 */
class CyclingUkCommerceShipping extends CyclingUkCommerceLineItem {

  /**
   * Constructor.
   */
  public function __construct($order, $line_item) {
    $this->progress['BatchNumber'] = 0;
    $this->progress['TransactionNumber'] = 0;
    parent::__construct($order, $line_item);
  }

  /**
   * Save this line item's data to CARE.
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceShipping saveToCare()...');
    $this->saveBillingContact();
    $this->saveShipping();
    $this->log('...CyclingUkCommerceShipping saveToCare() done.');
  }

  /**
   * Save record of one-off credit card shipping payment.
   */
  protected function saveShipping() {
    $this->log('saveShipping()...');
    if ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']) {
      $this->log(' Payment Batch-TransactionNumber %bn-%tn already saved to CARE.', [
        '%bn' => $this->progress['BatchNumber'],
        '%tn' => $this->progress['TransactionNumber'],
      ]);
      return;
    }
    $data = [
      'ContactNumber' => $this->billingContactNumber,
      'AddressNumber' => $this->billingAddressNumber,
      'Quantity' => 1,
      'Amount' => $this->amountDecimal,
      'Reference' => $this->order->order_number->value(),
      'NoClaimRequired' => 'Y',
      'Product' => 'SPOST',
      'Rate' => 0,
      'Source' => 'OI',
      'BankAccount' => 'CLUB',
    ];
    $resultxml = care_call_method('AddProductSale', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceShipping failed to AddProductSale: %error.', [
        '%error' => (string) $resultxml->ErrorMessage,
      ], WATCHDOG_CRITICAL);
    }
    else {
      // Save progress.
      $this->progress['BatchNumber'] = (string) $resultxml->BatchNumber;
      $this->progress['TransactionNumber'] = (string) $resultxml->TransactionNumber;
      $this->saveProgress();
      // Log status.
      $this->log(' AddProductSale: BatchNumber = %b, TransactionNumber = %t', [
        '%b' => (string) $resultxml->BatchNumber,
        '%t' => (string) $resultxml->TransactionNumber,
      ]);
    }
    $this->log('...saveShipping() - Done.');
  }

  protected function isCompleted() {
    $billing_completed = ($this->progress['billing_ContactNumber'] && $this->progress['billing_AddressNumber']);
    $shipping_completed = ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']);
    return ($billing_completed && $shipping_completed);
  }
}
