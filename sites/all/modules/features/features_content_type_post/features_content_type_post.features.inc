<?php

/**
 * @file
 * features_content_type_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_post_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_post_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('A <em>post</em> is a core content type for creating a variety of editorial content such as Articles, Blogs, Case Studies, Cycle Magazine, Galleries, News and Press Releases.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
