<?php

/**
 * @file
 * table_field_paragraph_bundle.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function table_field_paragraph_bundle_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__table_field';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__table_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tablefield_csv_separator';
  $strongarm->value = ',';
  $export['tablefield_csv_separator'] = $strongarm;

  return $export;
}
