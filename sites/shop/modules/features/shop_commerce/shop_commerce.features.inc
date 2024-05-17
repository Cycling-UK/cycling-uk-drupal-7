<?php
/**
 * @file
 * shop_commerce.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function shop_commerce_commerce_flat_rate_default_services() {
  $items = array(
    'standard_shipping' => array(
      'name' => 'standard_shipping',
      'base' => 'standard_shipping',
      'display_title' => 'Postage & Packing',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_standard_shipping',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'standard_shipping_details_form',
        'details_form_validate' => 'standard_shipping_details_form_validate',
        'details_form_submit' => 'standard_shipping_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Standard Shipping',
      'base_rate' => array(
        'amount' => 400,
        'currency_code' => 'GBP',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_line_item_default_types().
 */
function shop_commerce_commerce_line_item_default_types() {
  $items = array(
    'affiliate_membership' => array(
      'name' => 'Affiliate Membership (Other)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'affiliate_membership_self' => array(
      'name' => 'Affiliate Membership (Self)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'family_membership' => array(
      'name' => 'Family membership (Other)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'family_membership_self' => array(
      'name' => 'Family membership (Self)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'group_membership' => array(
      'name' => 'Group Membership',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'lejog_certificate' => array(
      'name' => 'LEJoG certificate',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'membership' => array(
      'name' => 'Membership (other)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'membership_renewal' => array(
      'name' => 'Membership renewal',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
    'membership_self' => array(
      'name' => 'Membership (self)',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function shop_commerce_commerce_product_default_types() {
  $items = array(
    'download' => array(
      'type' => 'download',
      'name' => 'Download',
      'description' => 'A downloadable file.',
      'help' => '',
      'revision' => 1,
    ),
    'membership' => array(
      'type' => 'membership',
      'name' => 'Membership',
      'description' => 'An ordinary individual membership product type.',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function shop_commerce_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => 0,
      'round_mode' => 0,
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function shop_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
