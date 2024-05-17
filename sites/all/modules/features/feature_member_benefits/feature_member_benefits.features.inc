<?php

/**
 * @file
 * feature_member_benefits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_member_benefits_ctools_plugin_api($module = NULL, $api = NULL) {
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
function feature_member_benefits_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_member_benefits_node_info() {
  $items = array(
    'member_benefit' => array(
      'name' => t('Member benefit'),
      'base' => 'node_content',
      'description' => t('Add a <em>member benefit</em> to the website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function feature_member_benefits_paragraphs_info() {
  $items = array(
    'member_benefit' => array(
      'name' => 'Member benefit',
      'bundle' => 'member_benefit',
      'locked' => '1',
    ),
  );
  return $items;
}
