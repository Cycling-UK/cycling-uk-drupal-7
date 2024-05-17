<?php
/**
 * @file
 * shop_courses.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function shop_courses_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|course|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_delegate_details',
        1 => 'field_care_name',
        2 => 'field_care_email',
        3 => 'field_care_telephone',
        4 => 'field_care_address',
      ),
    ),
    'fields' => array(
      'group_delegate_details' => 'central',
      'field_care_name' => 'central',
      'field_care_email' => 'central',
      'field_care_telephone' => 'central',
      'field_care_address' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|course|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course_booking|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course_booking';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'product:commerce_price',
        1 => 'field_products',
      ),
    ),
    'fields' => array(
      'product:commerce_price' => 'central',
      'field_products' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|course_booking|default'] = $ds_layout;

  return $export;
}
