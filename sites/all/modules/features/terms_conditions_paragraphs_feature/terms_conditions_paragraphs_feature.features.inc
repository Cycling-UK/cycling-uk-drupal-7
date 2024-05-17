<?php

/**
 * @file
 * terms_conditions_paragraphs_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function terms_conditions_paragraphs_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function terms_conditions_paragraphs_feature_paragraphs_info() {
  $items = array(
    'terms_and_conditions' => array(
      'name' => 'Terms and Conditions',
      'bundle' => 'terms_and_conditions',
      'locked' => '1',
    ),
  );
  return $items;
}
