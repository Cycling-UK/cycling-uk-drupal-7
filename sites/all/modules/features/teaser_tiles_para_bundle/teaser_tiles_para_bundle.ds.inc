<?php

/**
 * @file
 * teaser_tiles_para_bundle.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function teaser_tiles_para_bundle_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|teaser_tiles|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'teaser_tiles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_paragraph_title',
        1 => 'field_view_block_reference',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'central',
      'field_view_block_reference' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|teaser_tiles|default'] = $ds_layout;

  return $export;
}
