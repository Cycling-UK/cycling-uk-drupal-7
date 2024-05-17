<?php

/**
 * @file
 * feature_member_benefits.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_member_benefits_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_member_benefit_category'.
  $field_bases['field_member_benefit_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_member_benefit_category',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'insurance' => 'Insurance',
        'discounts' => 'Discounts',
        'travel' => 'Travel',
        'exclusive' => 'Exclusive',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_public_only_content'.
  $field_bases['field_public_only_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_public_only_content',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
