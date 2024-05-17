<?php

/**
 * @file
 * paragraph_bundle_logged_in_content.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function paragraph_bundle_logged_in_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|logged_in_content|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'logged_in_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_title',
        1 => 'field_logged_in_content',
        2 => 'field_logged_in_attachments',
      ),
    ),
    'fields' => array(
      'field_title' => 'central',
      'field_logged_in_content' => 'central',
      'field_logged_in_attachments' => 'central',
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
  $export['paragraphs_item|logged_in_content|default'] = $ds_layout;

  return $export;
}
