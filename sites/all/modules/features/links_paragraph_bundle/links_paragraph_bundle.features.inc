<?php

/**
 * @file
 * links_paragraph_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function links_paragraph_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function links_paragraph_bundle_paragraphs_info() {
  $items = array(
    'links' => array(
      'name' => 'Links',
      'bundle' => 'links',
      'locked' => '1',
    ),
  );
  return $items;
}
