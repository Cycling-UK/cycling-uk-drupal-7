<?php

/**
 * @file
 * table_field_paragraph_bundle.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function table_field_paragraph_bundle_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_table'.
  $field_bases['field_table'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_table',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tablefield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'tablefield',
  );

  return $field_bases;
}
