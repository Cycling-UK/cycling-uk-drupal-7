<?php

/**
 * Base class to handle saving Membership line item data to CARE.
 *
 * Progress is stored in the $order->value()->data array, rather than
 * updating the field data on line items and profiles. Might be nice
 * to update the fields, but profile editing without copying is tricky,
 * see http://ryanszrama.com/blog/04-12-2013/
 * bypassing-drupal-commerce-customer-profile-duplication.
 */
class CyclingUkCommerceLineItem {

  /** @var \EntityDrupalWrapper Drupal Commerce order object. */
  protected $order;

  /** @var \EntityDrupalWrapper Drupal Commerce billing details object. */
  protected $billingDetails;

  /** @var \EntityDrupalWrapper Drupal Commerce line item object. */
  protected $lineItem;

  /** @var float Amount in decimal currency (GBP). */
  protected $amountDecimal;

  /** @var \CareUser CareUser object for order owner. */
  protected $careUser;

  /** @var string CARE Payment method code. */
  protected $paymentMethod;

  /** @var int CARE billing contact number. */
  protected $billingContactNumber;

  /** @var int CARE billing address number. */
  protected $billingAddressNumber;

  /** @var string Source Code (promotional code or where-did-you-hear) */
  protected $sourceCode = 'OI';

  protected $progress = [
    'billing_ContactNumber' => 0,
    'billing_AddressNumber' => 0,
    'gift_aid_declared' => 0,
    'subscription_saved' => 0,
  ];

  /**
   * Constructor.
   *
   * @param $order
   * @param $line_item
   *
   * @throws \EntityMetadataWrapperException
   */
  public function __construct($order, $line_item) {
    $this->order = $order;
    $this->lineItem = $line_item;
    // Load any existing progress data.
    $order_result = db_select('cyclinguk_commerce_order', 'o')
      ->fields('o')
      ->condition('order_id', $order->getIdentifier())
      ->execute();
    if ($order_result) {
      $order_progress = $order_result->fetchAssoc();
      if ($order_progress) {
        $this->progress = array_merge($this->progress, $order_progress);
      }
    }
    $line_item_result = db_select('cyclinguk_commerce_line_item', 'li')
      ->fields('li')
      ->condition('line_item_id', $line_item->getIdentifier())
      ->execute();
    if ($line_item_result) {
      $line_item_progress = $line_item_result->fetchAssoc();
      if ($line_item_progress) {
        $this->progress = array_merge($this->progress, $line_item_progress);
      }
    }
    $this->log('Processing line item %type', [
      '%type' => get_class($this),
    ], WATCHDOG_INFO);
    $user = user_load($this->order->uid->value(), TRUE);
    if ($user->uid == 0) {
      $user->mail = $this->order->mail;
    }
    $this->careUser = new CareUser($user);
    if ($order->commerce_customer_billing->value()) {
      $this->billingDetails = $order->commerce_customer_billing;
    }
    // Payment method (WEB or DD).
    if (isset($this->lineItem->field_payment_option) && strstr($this->lineItem->field_payment_option->value(), 'DD')) {
      $this->paymentMethod = 'DD';
    }
    else {
      $this->paymentMethod = 'WEB';
    }
    $line_item_total = $this->lineItem->commerce_total->amount->value();
    $line_item_currency_code = $this->lineItem->commerce_total->currency_code->value();
    $this->amountDecimal = commerce_currency_amount_to_decimal($line_item_total, $line_item_currency_code);
    if (isset($this->lineItem->field_promotional_code) && $this->lineItem->field_promotional_code->value()) {
      $this->sourceCode = $this->lineItem->field_promotional_code->value();
    }
    elseif (isset($this->order->field_promotional_code) && $this->order->field_promotional_code->value()) {
      $this->sourceCode = $this->order->field_promotional_code->value();
    }
    elseif (isset($this->order->field_where_did_you_hear) && $this->order->field_where_did_you_hear->value()) {
      $this->sourceCode = $this->order->field_where_did_you_hear->field_code->value();
    }
  }

  /**
   * Save this line item's data to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  public function saveToCare() {
    $this->log('CyclingUkCommerceLineItem saveToCare()...');
    $this->saveBillingContact();
    $this->saveGiftAid();
    $this->saveSubscription();
    $this->log('...CyclingUkCommerceLineItem saveToCare() done.');
  }

  /**
   * Save Billing Contact.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function saveBillingContact() {
    $this->log('saveBillingContact()...');
    // Only once per order.
    if ($this->progress['billing_ContactNumber'] && $this->progress['billing_AddressNumber']) {
      $this->log('Billing Contact %cn already saved to CARE.', [
        '%cn' => $this->progress['billing_ContactNumber'],
      ]);
      $this->billingContactNumber = $this->progress['billing_ContactNumber'];
      $this->billingAddressNumber = $this->progress['billing_AddressNumber'];
      return;
    }
    $billing_name_field = $this->billingDetails->field_care_name;
    $billing_address_field = $this->billingDetails->field_care_address;
    $this->log('Using Order UID = %id', [
      '%id' => $this->order->uid->value(),
    ]);
    $account = user_load($this->order->uid->value(), TRUE);
    $billing_care_user = new CareUnknownUser($account);
    $billing_care_user->setNameField($billing_name_field);
    $billing_care_user->setTestEmail($this->order->value()->mail);
    $billing_care_user->setTestAddressField($billing_address_field);
    $billing_care_user->setMembershipNumber($billing_care_user->getBestMatchingContact());
    // Load existing CARE data from best matching record, if any.
    $billing_care_user->fetchBasicDetails();
    $billing_care_user->fetchCommunicationDetails();
    $billing_care_user->fetchAddressDetails();
    // Add entered form data.
    $billing_care_user->setNameField($billing_name_field);
    $billing_care_user->addEmail($this->order->value()->mail);
    $billing_care_user->addAddressFromField($billing_address_field);
    // Save any changes.
    $save_success = $billing_care_user->saveToCare();
    if ($save_success) {
      // Save to line item data to mark this as done.
      $billing_contact_number = $billing_care_user->getMembershipNumber();
      $billing_address_number = $billing_care_user->getAddressNumberFromField($billing_address_field);
      $this->log('New Billing Contact: contact %c, address %a', [
        '%c' => $billing_contact_number,
        '%a' => $billing_address_number,
      ]);
      // Save progress.
      $this->progress['billing_ContactNumber'] = $billing_contact_number;
      $this->progress['billing_AddressNumber'] = $billing_address_number;
      $this->saveProgress();
      // See if we already have an account with this membership number.
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'user');
      $query->fieldCondition('field_membership_number', 'number', $billing_contact_number, 'LIKE');
      $query->addMetaData('account', user_load(1));
      $result = $query->execute();
      if (count($result)) {
        $first = array_shift($result['user']);
        $this->order->uid = $first->uid;
      }
      // Save the order.
      $this->order->save();
      $this->billingContactNumber = $billing_contact_number;
      $this->billingAddressNumber = $billing_address_number;
    }
    $this->log('...saveBillingContact() done.');
  }

  /**
   * Save GiftAid details to CARE.
   */
  protected function saveGiftAid() {
    $this->log('saveGiftAid()...');
    // Only once per order.
    if ($this->progress['gift_aid_declared']) {
      $this->log('GiftAid already declared.');
      return;
    }
    $order = $this->order->value();
    if (commerce_giftaid_order_contains_eligible_items($order)) {
      module_load_include('inc', 'care', 'wrapper_functions');
      $result_xml = care_giftaid_declare($this->billingContactNumber, $order->data['commerce_giftaid']);
      if (isset($result_xml->ErrorMessage)) {
        $this->logError('saveGiftAid', (string) $result_xml->ErrorMessage);
      }
      else {
        // Save progress.
        $this->progress['gift_aid_declared'] = TRUE;
        $this->saveProgress();
        // Log status.
        $this->log('GiftAid declared.');
      }
    }
    else {
      $this->log('No Gift-Aid-Eligible items in order.');
    }
    $this->log('...saveGiftAid() done.');
  }

  /**
   * Save subscription details to CARE.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function saveSubscription() {
    $this->log('saveSubscription()...');
    // Only once per order.
    if ($this->progress['subscription_saved']) {
      $this->log('Subscription already saved.');
      return;
    }
    if ($this->order->field_cycling_uk_information->value()) {
      // Add activity adding subscription.
      $data = [
        'ContactNumber' => $this->billingContactNumber,
        'ActivityDate' => date('d/m/Y'),
        'ValidFrom' => date('d/m/Y'),
        'ValidTo' => date('d/m/Y', time() + 60 * 60 * 24),
        'Activity' => 'SUB',
        'ActivityValue' => 'CC',
        'Quantity' => 1,
        'Source' => 'WEB',
      ];
      $result_xml = care_call_method('AddActivity', $data);
      if (isset($result_xml->ErrorMessage)) {
        $this->logError('AddActivity', (string) $result_xml->ErrorMessage);
      }
      else {
        // Save to line item data to mark this as done.
        $this->progress['subscription_saved'] = TRUE;
        $this->saveProgress();
        // Log status.
        $this->log('Subscription saved.');
      }
    }
    $this->log('...saveSubscription() done.');
  }

  protected function saveProgress() {
    $primary_keys = isset($this->progress['order_id']) ? ['order_id'] : [];
    $this->progress['order_id'] = $this->order->getIdentifier();
    drupal_write_record('cyclinguk_commerce_order', $this->progress, $primary_keys);
    $primary_keys = isset($this->progress['line_item_id']) ? ['line_item_id'] : [];
    $this->progress['line_item_id'] = $this->lineItem->getIdentifier();
    drupal_write_record('cyclinguk_commerce_line_item', $this->progress, $primary_keys);
  }

  /**
   * Utility function to optionally log progress.
   *
   * @param $message
   * @param array $args
   * @param int $severity
   */
  protected function log($message, $args = [], $severity = WATCHDOG_NOTICE) {
    $link_args = [
      '%o' => $this->order->getIdentifier(),
      '%i' => $this->lineItem->getIdentifier(),
    ];
    $link_options = [
      'html' => TRUE,
    ];
    $link = l(t('Order %o (line item %i)', $link_args), 'admin/commerce/orders/' . $this->order->getIdentifier(), $link_options);
    if (variable_get('cyclinguk_commerce_log')) {
      watchdog('cyclinguk_commerce', $message, $args, $severity, $link);
    }
  }

  /**
   * Log an error to watchdog and the cyclinguk_commerce_line_item_errors table.
   *
   * @param $care_call
   * @param $error_message
   */
  protected function logError($care_call, $error_message) {
    $data = [
      'timestamp' => time(),
      'line_item_id' => $this->lineItem->getIdentifier(),
      'care_call' => $care_call,
      'error_message' => $error_message,
    ];
    watchdog('cyclinguk_commerce', '%class %call: %error.', [
      '%class' => get_class($this),
      '%call' => $care_call,
      '%error' => $error_message,
    ], WATCHDOG_CRITICAL);
    drupal_write_record('cyclinguk_commerce_line_item_errors', $data);
  }

  /**
   * @throws \EntityMetadataWrapperException
   */
  public function saveCompletion() {
    if ($this->isCompleted()) {
      $this->progress['completed'] = 1;
      $this->saveProgress();
    }
  }

  /**
   * Return whether this line item's CARE calls are all completed.
   *
   * @throws \EntityMetadataWrapperException
   */
  protected function isCompleted() {
    $billing_done = ($this->progress['billing_ContactNumber'] && $this->progress['billing_AddressNumber']);
    $gift_aid_done = (!commerce_giftaid_order_contains_eligible_items($this->order->value()) || $this->progress['gift_aid_declared']);
    $subs_done = (!$this->order->field_cycling_uk_information->value() || $this->progress['subscription_saved']);
    return ($billing_done && $gift_aid_done && $subs_done);
  }

}
