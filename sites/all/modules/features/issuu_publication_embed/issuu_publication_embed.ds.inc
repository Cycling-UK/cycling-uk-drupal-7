<?php

/**
 * @file
 * issuu_publication_embed.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function issuu_publication_embed_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|issuu_publication_insert|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'issuu_publication_insert';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_issuu_embed_code',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_text' => 'central',
      'field_issuu_embed_code' => 'central',
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
  $export['paragraphs_item|issuu_publication_insert|default'] = $ds_layout;

  return $export;
}
