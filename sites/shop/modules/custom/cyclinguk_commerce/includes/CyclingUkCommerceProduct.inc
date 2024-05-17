<?php


/**
 * @file
 */

/**
 * Class to handle saving Product line item data to CARE.
 */
class CyclingUkCommerceProduct extends CyclingUkCommerceLineItem {

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
    $this->log('CyclingUkCommerceProduct saveToCare()...');
    parent::saveToCare();
    $this->saveCreditCardPayment();
    $this->log('...CyclingUkCommerceProduct saveToCare() done.');
  }

  /**
   * Save record of one-off credit card donation.
   */
  protected function saveCreditCardPayment() {
    $this->log('saveCreditCardPayment()...');
    if ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']) {
      $this->log(' Payment Batch-TransactionNumber %bn-%tn already saved to CARE.', [
        '%bn' => $this->progress['BatchNumber'],
        '%tn' => $this->progress['TransactionNumber'],
      ]);
      return;
    }
    if (isset($this->lineItem->commerce_product->field_care_product_rate)) {
      $product_rate = $this->lineItem->commerce_product->field_care_product_rate->value();
      list ($product, $rate) = explode('-', $product_rate);
      if (strlen($product) == 0) {
        $product = '???';
      }
      if (!isset($rate)) {
        $rate = 0;
      }
    }
    else {
      watchdog('cyclinguk_commerce', 'Line item product has no field_care_product_rate!', [], WATCHDOG_ERROR);
      $product = '???';
      $rate = 0;
    }
    $data = [
      'ContactNumber' => $this->billingContactNumber,
      'AddressNumber' => $this->billingAddressNumber,
      'Quantity' => $this->lineItem->quantity->value(),
      'Amount' => $this->amountDecimal,
      'Reference' => $this->order->order_number->value(),
      'NoClaimRequired' => 'Y',
      'Product' => $product,
      'Rate' => $rate,
      'Source' => 'OI',
      'BankAccount' => 'CLUB',
    ];
    $resultxml = care_call_method('AddProductSale', $data);
    if (isset($resultxml->ErrorMessage)) {
      // Log failure.
      watchdog('cyclinguk_commerce', 'CyclingUkCommerceCommerceProduct failed to AddProductSale: %error.', [
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
    $this->log('...saveCreditCardPayment() - Done.');
  }

  /**
   * Return whether this line item's CARE calls are all completed.
   */
  protected function isCompleted() {
    $parent_completed = parent::isCompleted();
    $payment_completed = ($this->progress['BatchNumber'] && $this->progress['TransactionNumber']);
    return ($parent_completed && $payment_completed);
  }
}
