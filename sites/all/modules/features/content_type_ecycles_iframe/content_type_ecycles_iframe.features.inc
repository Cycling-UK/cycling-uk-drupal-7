<?php

/**
 * @file
 * content_type_ecycles_iframe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_ecycles_iframe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function content_type_ecycles_iframe_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_ecycles_iframe_node_info() {
  $items = array(
    'ecycle_iframe' => array(
      'name' => t('eCycle iFrame'),
      'base' => 'node_content',
      'description' => t('Create iFrame content for the "Cycling made e-asy" project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
