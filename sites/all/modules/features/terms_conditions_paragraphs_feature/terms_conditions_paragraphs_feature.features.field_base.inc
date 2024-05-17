<?php

/**
 * @file
 * terms_conditions_paragraphs_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function terms_conditions_paragraphs_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_all_uppercase'.
  $field_bases['field_all_uppercase'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_all_uppercase',
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
        'all-uppercase' => 'Yes',
        'normal-case' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
