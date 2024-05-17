<?php

/**
 * @file
 * content_type_challenge.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_challenge_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cycle_challenge|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cycle_challenge';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|cycle_challenge|colorbox'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_challenge_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cycle_challenge|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cycle_challenge';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_image',
        1 => 'field_challenge_group_and_type',
        2 => 'title',
        3 => 'field_headline',
        4 => 'group_social_links',
        5 => 'body',
        6 => 'field_facebook',
        7 => 'field_challenge_link',
        8 => 'field_twitter',
        9 => 'field_instagram',
        10 => 'field_youtube',
        11 => 'field_linkedin',
        12 => 'field_website',
        13 => 'field_group_website',
      ),
    ),
    'fields' => array(
      'field_image' => 'central',
      'field_challenge_group_and_type' => 'central',
      'title' => 'central',
      'field_headline' => 'central',
      'group_social_links' => 'central',
      'body' => 'central',
      'field_facebook' => 'central',
      'field_challenge_link' => 'central',
      'field_twitter' => 'central',
      'field_instagram' => 'central',
      'field_youtube' => 'central',
      'field_linkedin' => 'central',
      'field_website' => 'central',
      'field_group_website' => 'central',
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
  $export['node|cycle_challenge|colorbox'] = $ds_layout;

  return $export;
}
