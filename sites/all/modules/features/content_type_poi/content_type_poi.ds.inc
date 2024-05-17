<?php

/**
 * @file
 * content_type_poi.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_poi_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|poi|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'poi';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'tags' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'exclude node title settings' => '1',
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
    ),
  );
  $export['node|poi|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_poi_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|poi|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'poi';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_gpx_map',
      ),
      'topleft' => array(
        1 => 'title',
        2 => 'body',
        3 => 'share_buttons',
        4 => 'tags',
      ),
      'topright' => array(
        5 => 'field_poi_type',
        6 => 'field_addressfield',
      ),
    ),
    'fields' => array(
      'field_gpx_map' => 'top',
      'title' => 'topleft',
      'body' => 'topleft',
      'share_buttons' => 'topleft',
      'tags' => 'topleft',
      'field_poi_type' => 'topright',
      'field_addressfield' => 'topright',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|poi|default'] = $ds_layout;

  return $export;
}
