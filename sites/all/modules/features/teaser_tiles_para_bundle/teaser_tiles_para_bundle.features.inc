<?php

/**
 * @file
 * teaser_tiles_para_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_tiles_para_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function teaser_tiles_para_bundle_paragraphs_info() {
  $items = array(
    'teaser_tiles' => array(
      'name' => 'Teaser tiles',
      'bundle' => 'teaser_tiles',
      'locked' => '1',
    ),
  );
  return $items;
}
