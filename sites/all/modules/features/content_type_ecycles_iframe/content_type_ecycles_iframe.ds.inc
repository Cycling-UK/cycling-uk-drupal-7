<?php

/**
 * @file
 * content_type_ecycles_iframe.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_ecycles_iframe_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ecycle_iframe|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ecycle_iframe';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'body',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|ecycle_iframe|default'] = $ds_layout;

  return $export;
}
