<?php
/**
 * @file
 * features_content_type_tro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_tro_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_tro_node_info() {
  $items = array(
    'traffic_regulation_order' => array(
      'name' => t('Traffic Regulation Order'),
      'base' => 'node_content',
      'description' => t('Traffic Regulations Orders'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
