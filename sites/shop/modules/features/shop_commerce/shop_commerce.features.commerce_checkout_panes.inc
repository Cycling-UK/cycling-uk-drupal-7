<?php
/**
 * @file
 * shop_commerce.features.commerce_checkout_panes.inc
 */

/**
 * Implements hook_commerce_checkout_panes_default().
 */
function shop_commerce_commerce_checkout_panes_default() {
  $panes = array();

  $panes['account'] = array(
    'page' => 'checkout',
    'weight' => -20,
    'pane_id' => 'account',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['cart_contents'] = array(
    'page' => 'checkout_step_2',
    'weight' => -20,
    'pane_id' => 'cart_contents',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_completion_message'] = array(
    'page' => 'complete',
    'fieldset' => 0,
    'pane_id' => 'checkout_completion_message',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_donate'] = array(
    'page' => 'checkout_step_2',
    'fieldset' => 1,
    'enabled' => 1,
    'pane_id' => 'checkout_donate',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'review' => 1,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => 0,
    'pane_id' => 'checkout_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_fieldgroup_pane__group_comments'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__group_comments',
    'page' => 'review',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'review' => 1,
  );

  $panes['commerce_fieldgroup_pane__group_other'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__group_other',
    'page' => 'review',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'review' => 1,
  );

  $panes['commerce_giftaid_pane'] = array(
    'page' => 'checkout_step_3',
    'pane_id' => 'commerce_giftaid_pane',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_license'] = array(
    'page' => 'checkout',
    'fieldset' => 1,
    'enabled' => 1,
    'pane_id' => 'commerce_license',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -18,
    'review' => 1,
  );

  $panes['commerce_license_complete'] = array(
    'page' => 'complete',
    'fieldset' => 1,
    'enabled' => 1,
    'pane_id' => 'commerce_license_complete',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'review' => 1,
  );

  $panes['commerce_payment'] = array(
    'page' => 'review',
    'weight' => -14,
    'pane_id' => 'commerce_payment',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_payment_redirect'] = array(
    'page' => 'payment',
    'pane_id' => 'commerce_payment_redirect',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -20,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_shipping'] = array(
    'page' => 'checkout_step_2',
    'weight' => -19,
    'review' => 0,
    'pane_id' => 'commerce_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
  );

  $panes['customer_profile_billing'] = array(
    'page' => 'checkout',
    'weight' => -19,
    'pane_id' => 'customer_profile_billing',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['customer_profile_shipping'] = array(
    'page' => 'shipping',
    'weight' => -16,
    'pane_id' => 'customer_profile_shipping',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['cyclinguk_commerce_directdebit'] = array(
    'page' => 'step_4',
    'weight' => -19,
    'pane_id' => 'cyclinguk_commerce_directdebit',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['stock_validation_checkout_pane'] = array(
    'page' => 'checkout',
    'fieldset' => 0,
    'pane_id' => 'stock_validation_checkout_pane',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -17,
    'enabled' => 1,
    'review' => 1,
  );

  return $panes;
}
