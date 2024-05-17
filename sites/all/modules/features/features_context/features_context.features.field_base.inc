<?php

/**
 * @file
 * features_context.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function features_context_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_email_attachments'.
  $field_bases['field_email_attachments'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_attachments',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
