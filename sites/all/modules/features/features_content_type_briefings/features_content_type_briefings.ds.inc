<?php

/**
 * @file
 * features_content_type_briefings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_content_type_briefings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|briefings|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'briefings';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'menu_level_3_' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
    'comments' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long_date_only',
    ),
  );
  $export['node|briefings|default'] = $ds_fieldsetting;

  return $export;
}
