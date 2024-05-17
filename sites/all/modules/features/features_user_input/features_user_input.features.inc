<?php
/**
 * @file
 * features_user_input.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_user_input_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
