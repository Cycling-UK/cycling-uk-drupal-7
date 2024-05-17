<?php
/**
 * @file
 * features_100_women.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_100_women_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_100_women_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
