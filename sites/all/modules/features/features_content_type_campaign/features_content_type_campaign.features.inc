<?php
/**
 * @file
 * features_content_type_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_content_type_campaign_node_info() {
  $items = array(
    'campaign' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => t('Cycling UK Campaigns'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
