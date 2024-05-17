<?php

/**
 * @file
 * publications_magazine_block.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function publications_magazine_block_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|publications_block|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'publications_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_paragraph_title',
        1 => 'field_insert_block_type',
      ),
    ),
    'fields' => array(
      'field_paragraph_title' => 'central',
      'field_insert_block_type' => 'central',
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
  $export['paragraphs_item|publications_block|default'] = $ds_layout;

  return $export;
}
