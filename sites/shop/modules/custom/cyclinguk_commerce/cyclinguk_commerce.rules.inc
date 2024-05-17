<?php

/**
 * @file
 * Main file for Rules API code.
 */

/**
 * Implements hook_rules_action_info().
 */
function cyclinguk_commerce_rules_action_info() {
  $actions = array();
  $actions['cyclinguk_commerce_handle_memberships'] = array(
    'label' => 'Handle Order membership line items',
    'group' => 'Cycling UK Commerce',
    'parameter' => array(
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce Order'),
      ),
    ),
  );
  $actions['cyclinguk_commerce_address_line_to_order'] = array(
    'label' => 'Copy line-item name and address to order billing address',
    'group' => 'Cycling UK Commerce',
    'parameter' => array(
      'line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Commerce Line Item'),
      ),
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce Order'),
      ),
    ),
  );
  $actions['cyclinguk_commerce_line_item_email_to_order'] = array(
    'label' => 'Copy line-item email address to order',
    'group' => 'Cycling UK Commerce',
    'parameter' => array(
      'line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Commerce Line Item'),
      ),
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Commerce Order'),
      ),
    ),
  );
  $actions['cyclinguk_commerce_ordernumber_assign'] = array(
    'label' => t('Set C-########-# order number on order'),
    'parameter' => array(
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
    ),
    'group' => t('Cycling UK Commerce')
  );
  $actions['cyclinguk_commerce_copy_membership_number'] = array(
    'label' => t('Copy Billing membership number from order to user'),
    'parameter' => array(
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
      'user' => array(
        'type' => 'user',
        'label' => t('User'),
      ),
    ),
    'group' => t('Cycling UK Commerce'),
  );
  return $actions;
}

/**
 * Sets invoice number on order.
 *
 * Used as Rules action callback.
 */
function cyclinguk_commerce_ordernumber_assign($order) {
  // Assign an order number (which can never match any order_id)
  // if not already assigned.
  if (substr($order->order_number, 0, 2) != 'C-') {
    // Lock to prevent interference from other requests.
    $lock_name = 'cyclinguk_commerce_ordernumber_assigning';
    while (!lock_acquire($lock_name)) {
      lock_wait($lock_name);
    }
    // Create new order number.
    $args = array(
      ':numstring' => 'C-' . date('ymd') . '-%',
    );
    $query = db_query("SELECT COUNT(*)
                         FROM {commerce_order}
                        WHERE order_number LIKE :numstring", $args);
    $count = $query->fetchField();
    $new_order_number = 'C-' . date('ymd') . '-' . ($count + 1);
    // Check if we have a unique order number. If not, write a watchdog error
    // and do not change the order number.
    if (!commerce_order_validate_number_unique($new_order_number, $order->order_id)) {
      watchdog('hbb_commerce_ordernumber', 'Error: Order number %number for order %id already exists.', array(
        '%number' => $new_order_number,
        '%id' => $order->order_id,
      ), WATCHDOG_ERROR);
    }
    else {
      $order->order_number = $new_order_number;
      commerce_order_save($order);
    }
    lock_release($lock_name);
  }
}

/**
 * Take an order and perform the required CARE calls for line items.
 */
function cyclinguk_commerce_handle_memberships($commerce_order) {
  $order = entity_metadata_wrapper('commerce_order', $commerce_order);
  foreach ($order->commerce_line_items as $line_item) {
    $line_item_type = $line_item->getBundle();
    $line_item_type_camelcase = str_replace(' ', '', ucwords(str_replace('_', ' ', $line_item_type)));
    $class = 'CyclingUkCommerce' . $line_item_type_camelcase;
    if (class_exists($class, TRUE)) {
      $handler = new $class($order, $line_item);
      $handler->saveToCare();
      $handler->saveCompletion();
    }
    else {
      $link = l(t('View Order ' . $commerce_order->order_id), 'admin/commerce/orders/' . $commerce_order->order_id);
      watchdog('cyclinguk_commerce', 'Class %class not defined', array(
        '%class' => $class,
      ), WATCHDOG_WARNING, $link);
    }
  }
}

/**
 * Copy name, address, email from line item to order.
 */
function cyclinguk_commerce_address_line_to_order($line_item, $order) {
  // Only update orders in cart state, so we can't rewrite history.
  $order_status = commerce_order_status_load($order->status);
  if (!$order_status['cart']) {
    return;
  }
  $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  if ($line_item_wrapper->field_care_address->value()) {
    $line_item_name = $line_item_wrapper->field_care_name->value();
    $line_item_address = $line_item_wrapper->field_care_address->value();
    $billing_profile = $order_wrapper->commerce_customer_billing->value();
    if (!$billing_profile) {
      // Create and assign a new billing profile if we don't have one yet.
      $profile = commerce_customer_profile_new('billing', $order->uid);
      $profile_wrapper = entity_metadata_wrapper('commerce_customer_profile', $profile);
      // $profile_wrapper->field_care_name->set($line_item_name);
      // $profile_wrapper->field_care_address->set($line_item_address);
      $profile_wrapper->save();
      $order_wrapper->commerce_customer_billing = $profile_wrapper;
      $order_wrapper->save();
    }
    $order_wrapper->commerce_customer_billing->field_care_name = $line_item_name;
    $order_wrapper->commerce_customer_billing->field_care_name->local_unsent_changes = CARE_FIELDS_CHANGED;
    $order_wrapper->commerce_customer_billing->field_care_address = $line_item_address;
    $order_wrapper->commerce_customer_billing->field_care_address->address_number = 0;
    $order_wrapper->commerce_customer_billing->field_care_address->local_unsent_changes = CARE_FIELDS_CHANGED;
    $order_wrapper->commerce_customer_billing->save();
    $order_wrapper->save();
  }
}

/**
 * Copy email address from a line item to the order.
 */
function cyclinguk_commerce_line_item_email_to_order($line_item, $order) {
  // Only update orders in cart state, so we can't rewrite history.
  $order_status = commerce_order_status_load($order->status);
  if (!$order_status['cart']) {
    return;
  }
  $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  if (isset($line_item_wrapper->field_care_email) and $line_item_wrapper->field_care_email->value()) {
    $email = $line_item_wrapper->field_care_email->email->value();
    $order_wrapper->mail = $email;
    $order_wrapper->save();
  }
}

/**
 * Copy Billing membership number from order to user account
 */
function cyclinguk_commerce_copy_membership_number($order, $account) {
  if (isset($order->data['cyclinguk_commerce']) and isset($order->data['cyclinguk_commerce']['billing_contact_number'])) {
    $number = $order->data['cyclinguk_commerce']['billing_contact_number'];
    $account_wrapper = entity_metadata_wrapper('user', $account);
    $account_wrapper->field_membership_number = array(
      'number' => $number,
      'local_unsent_changes' => CARE_FIELDS_UNCHANGED,
    );
    $account_wrapper->save();
  }
  else {
    watchdog('cyclinguk_commerce', 'Order @order_number has no billing_contact_number', array(
      '@order_number' => $order->order_number,
    ), WATCHDOG_WARNING);
  }
}
