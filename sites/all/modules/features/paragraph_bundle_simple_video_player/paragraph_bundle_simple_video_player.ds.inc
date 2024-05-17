<?php

/**
 * @file
 * paragraph_bundle_simple_video_player.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function paragraph_bundle_simple_video_player_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|simple_video_player|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'simple_video_player';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_youtube_url',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'central',
      'field_text' => 'central',
      'field_youtube_url' => 'central',
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
  $export['paragraphs_item|simple_video_player|default'] = $ds_layout;

  return $export;
}
