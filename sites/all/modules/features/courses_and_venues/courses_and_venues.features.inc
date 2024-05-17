<?php

/**
 * @file
 * courses_and_venues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function courses_and_venues_ctools_plugin_api($module = NULL, $api = NULL) {
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
function courses_and_venues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function courses_and_venues_node_info() {
  $items = array(
    'course_calendar' => array(
      'name' => t('Course Calendar'),
      'base' => 'node_content',
      'description' => t('Calendar of courses including dates, price and venues'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_details' => array(
      'name' => t('Course Details'),
      'base' => 'node_content',
      'description' => t('A <em>course detail</em> is an individual course that collectively makes up a course scheme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('Venues for courses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
