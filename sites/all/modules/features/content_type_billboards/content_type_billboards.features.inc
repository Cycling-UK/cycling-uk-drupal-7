<?php

/**
 * @file
 * content_type_billboards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_billboards_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function content_type_billboards_node_info() {
  $items = array(
    'billboard' => array(
      'name' => t('Billboard'),
      'base' => 'node_content',
      'description' => t('<em>Billboards</em> are high-performance, streamlined landing pages to support Google AdGrant campaigns and other similar inward bound marketing campaigns.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'billboard_icon' => array(
      'name' => t('Billboard icon'),
      'base' => 'node_content',
      'description' => t('<em>Billboards icons</em> are a collection of reusable assets that are used to create Billboard pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'billboard_text' => array(
      'name' => t('Billboard text'),
      'base' => 'node_content',
      'description' => t('<em>Billboards texts</em> are a collection of reusable assets that are used to create Billboard pages.'),
      'has_title' => '1',
      'title_label' => t('Administrative title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
