<?php
/**
 * @file
 * features_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
