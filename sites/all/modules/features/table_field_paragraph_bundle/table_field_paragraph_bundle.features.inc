<?php

/**
 * @file
 * table_field_paragraph_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function table_field_paragraph_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function table_field_paragraph_bundle_paragraphs_info() {
  $items = array(
    'table_field' => array(
      'name' => 'Table field',
      'bundle' => 'table_field',
      'locked' => '1',
    ),
  );
  return $items;
}
