<?php

/**
 * @file
 * features_advertising.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_advertising_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
