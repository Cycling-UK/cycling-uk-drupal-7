<?php

/**
 * @file
 * publications_magazine_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function publications_magazine_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function publications_magazine_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_paragraphs_info().
 */
function publications_magazine_block_paragraphs_info() {
  $items = array(
    'publications_block' => array(
      'name' => 'Cycling Magazine -  Latest 4 Block',
      'bundle' => 'publications_block',
      'locked' => '1',
    ),
  );
  return $items;
}
