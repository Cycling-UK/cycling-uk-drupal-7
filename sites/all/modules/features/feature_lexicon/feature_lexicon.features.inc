<?php

/**
 * @file
 * feature_lexicon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_lexicon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
