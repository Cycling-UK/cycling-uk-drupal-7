<?php

/**
 * @file
 * features_content_type_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_link_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link or Stub'),
      'base' => 'node_content',
      'description' => t('Quick summary with either link to another page or external URL (if supplied) or stub. The user should never go to these nodes and can only see the contents via listings on other pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
