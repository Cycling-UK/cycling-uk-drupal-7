<?php

/**
 * @file
 * content_type_partners.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_partners_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_partner_type'.
  $field_bases['field_partner_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_partner_type',
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
        'nhs' => 'NHS',
        'education' => 'Education',
        'public_sector' => 'Public Sector',
        'private_sector' => 'Private sector',
        'not_for_profit' => 'Not for profit',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
