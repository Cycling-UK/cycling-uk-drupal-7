<?php
/**
 * @file
 * features_content_type_basic_page.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function features_content_type_basic_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_level_3_';
  $ds_field->label = 'Menu Level 3+';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu_block|1',
    'block_render' => '1',
  );
  $export['menu_level_3_'] = $ds_field;

  return $export;
}
