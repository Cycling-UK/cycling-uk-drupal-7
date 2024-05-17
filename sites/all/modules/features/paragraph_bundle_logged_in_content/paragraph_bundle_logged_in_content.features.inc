<?php

/**
 * @file
 * paragraph_bundle_logged_in_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_bundle_logged_in_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function paragraph_bundle_logged_in_content_paragraphs_info() {
  $items = array(
    'logged_in_content' => array(
      'name' => 'Logged in content',
      'bundle' => 'logged_in_content',
      'locked' => '1',
    ),
  );
  return $items;
}
