<?php

/**
 * @file
 * features_file_downloads_simple.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_file_downloads_simple_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|file_downloads_simple|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'file_downloads_simple';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_attachments',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_text' => 'central',
      'field_attachments' => 'central',
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
  $export['paragraphs_item|file_downloads_simple|default'] = $ds_layout;

  return $export;
}
