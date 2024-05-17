<?php

/**
 * @file
 * Hooks provided by the Commerce Mastercard module.
 */


/**
 * Allows modules to modify the data posted to Mastercard.
 *
 * @param $data
 *   The data to be POSTed to the Mastercard payment URL.
 * @param $order
 *   The order object being paid for.
 *
 */
function hook_commerce_mastercard_post_data_alter(&$data, $order) {
  // Add the billing address data.
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  $address = $order_wrapper->field_address->value();
  $data['billing.address.street'] = $address['address_line_1'];
  $data['billing.address.street2'] = $address['address_line_2'];
  $data['billing.address.city'] = $address['town'];
  $data['billing.address.stateProvince'] = $address['county'];
  $data['billing.address.country'] = $address['country'];
  $data['billing.address.postcodeZip'] = $address['postcode'];
}
