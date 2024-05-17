<?php

/**
 * @file
 * feature_content_type_biography.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_content_type_biography_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function feature_content_type_biography_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_content_type_biography_node_info() {
  $items = array(
    'biography' => array(
      'name' => t('Biography'),
      'base' => 'node_content',
      'description' => t('A <em>biography</em> allows you to add a detailed profile on the website with a photo, short and long versions and social media links.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
