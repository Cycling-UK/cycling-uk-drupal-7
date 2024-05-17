<?php
/**
 * @file
 * shop_courses.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function shop_courses_commerce_line_item_default_types() {
  $items = array(
    'course' => array(
      'name' => 'Course',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function shop_courses_commerce_product_default_types() {
  $items = array(
    'course' => array(
      'type' => 'course',
      'name' => 'Course',
      'description' => 'Cycling UK Courses',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function shop_courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
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
function shop_courses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function shop_courses_node_info() {
  $items = array(
    'course_booking' => array(
      'name' => t('Course Booking'),
      'base' => 'node_content',
      'description' => t('Booking form for Cycling UK courses'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
