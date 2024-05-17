<?php

/**
 * @file
 * features_cta.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function features_cta_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gtm_identifier'.
  $field_bases['field_gtm_identifier'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gtm_identifier',
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
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
