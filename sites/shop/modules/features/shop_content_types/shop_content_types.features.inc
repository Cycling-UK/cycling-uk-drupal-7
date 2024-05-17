<?php
/**
 * @file
 * shop_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function shop_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function shop_content_types_node_info() {
  $items = array(
    'product_affiliate_membership' => array(
      'name' => t('Product membership affiliate (other)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_affiliate_membership_sel' => array(
      'name' => t('Product membership affiliate (self)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Product general'),
      'base' => 'node_content',
      'description' => t('Display a product for visitors to buy.'),
      'has_title' => '1',
      'title_label' => t('Product Title'),
      'help' => '',
    ),
    'product_donation' => array(
      'name' => t('Product donation'),
      'base' => 'node_content',
      'description' => t('A customisable donation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_family_membership' => array(
      'name' => t('Product membership family (other)'),
      'base' => 'node_content',
      'description' => t('A product display type that includes fields for the family member details.'),
      'has_title' => '1',
      'title_label' => t('Product Title'),
      'help' => '',
    ),
    'product_family_membership_self' => array(
      'name' => t('Product membership family (self)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_group_membership' => array(
      'name' => t('Product membership groups'),
      'base' => 'node_content',
      'description' => t('Membership for an affiliate club or group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_lejog_certificate' => array(
      'name' => t('Product LEJoG certificate'),
      'base' => 'node_content',
      'description' => t('A certificate product with additional fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_membership' => array(
      'name' => t('Product membership (other)'),
      'base' => 'node_content',
      'description' => t('A membership product display.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_membership_renewal' => array(
      'name' => t('Product membership renewal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_membership_self' => array(
      'name' => t('Product membership (self)'),
      'base' => 'node_content',
      'description' => t('Membership for the person filling in the form.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
