<?php
/**
 * @file
 * simple_feedback_tab.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_feedback_tab_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
