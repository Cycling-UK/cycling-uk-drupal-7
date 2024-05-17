<?php
/**
 * @file
 * migrate_extras_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function migrate_extras_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function migrate_extras_media_node_info() {
  $items = array(
    'migrate_extras_media_example' => array(
      'name' => t('Migrate Extras Media Example'),
      'base' => 'node_content',
      'description' => t('Content type for testing Migrate Extras support for the Media module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
