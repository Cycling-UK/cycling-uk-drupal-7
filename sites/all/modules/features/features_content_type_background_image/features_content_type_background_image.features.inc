<?php
/**
 * @file
 * features_content_type_background_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_background_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_background_image_node_info() {
  $items = array(
    'background_image' => array(
      'name' => t('Background image'),
      'base' => 'node_content',
      'description' => t('Add a high resolution image that can be used as background wallpaper on certain pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
