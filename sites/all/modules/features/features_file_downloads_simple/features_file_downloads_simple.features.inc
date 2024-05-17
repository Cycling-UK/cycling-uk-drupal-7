<?php

/**
 * @file
 * features_file_downloads_simple.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_file_downloads_simple_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function features_file_downloads_simple_paragraphs_info() {
  $items = array(
    'file_downloads_simple' => array(
      'name' => 'File Downloads Simple',
      'bundle' => 'file_downloads_simple',
      'locked' => '1',
    ),
  );
  return $items;
}
