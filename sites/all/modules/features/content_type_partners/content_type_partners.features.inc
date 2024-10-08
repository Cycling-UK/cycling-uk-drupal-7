<?php

/**
 * @file
 * content_type_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_partners_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type_partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Add a <em>partner</em> to the website. Partners are typically associated with projects such as Big Bike Revival and Bike Week and typically have a logo, short and long biographies and a call to action.'),
      'has_title' => '1',
      'title_label' => t('Partner name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
