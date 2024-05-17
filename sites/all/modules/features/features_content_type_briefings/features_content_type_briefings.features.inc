<?php

/**
 * @file
 * features_content_type_briefings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_briefings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_content_type_briefings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_content_type_briefings_node_info() {
  $items = array(
    'briefings' => array(
      'name' => t('Briefings'),
      'base' => 'node_content',
      'description' => t('Use <em>briefings</em> for your Cycling UK Campaign briefings.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
