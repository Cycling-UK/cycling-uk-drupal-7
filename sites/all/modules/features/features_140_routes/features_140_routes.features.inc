<?php

/**
 * @file
 * features_140_routes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_140_routes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_components") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_sources") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_styles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_140_routes_node_info() {
  $items = array(
    'route' => array(
      'name' => t('Route'),
      'base' => 'node_content',
      'description' => t('Cycling routes, initially for the 140 Women project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
