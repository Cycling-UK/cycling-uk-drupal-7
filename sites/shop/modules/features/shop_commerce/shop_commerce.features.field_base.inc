<?php
/**
 * @file
 * shop_commerce.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function shop_commerce_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'cyclinguk_membership_number'.
  $field_bases['cyclinguk_membership_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'cyclinguk_membership_number',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => 1,
    ),
    'translatable' => 0,
    'type' => 'care_membership_number',
  );

  // Exported field_base: 'field_care_product_rate'.
  $field_bases['field_care_product_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_product_rate',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 64,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_maximum_age'.
  $field_bases['field_maximum_age'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_maximum_age',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_minimum_age'.
  $field_bases['field_minimum_age'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_minimum_age',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
