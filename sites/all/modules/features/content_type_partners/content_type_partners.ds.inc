<?php

/**
 * @file
 * content_type_partners.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_partners_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
  );
  $export['node|partner|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '6',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
        'empty_fields_handler' => '',
        'exclude node title settings' => '1',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '0',
    ),
  );
  $export['node|partner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_partners_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'field_headline' => 'central',
      'field_image' => 'central',
      'field_link' => 'central',
      'field_partner_type' => 'central',
      'title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_image',
        1 => 'field_partner_type',
        2 => 'title',
        3 => 'field_headline',
        4 => 'body',
        5 => 'field_link',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|partner|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_2_8_2';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'field_headline' => 'central',
      'field_image' => 'central',
      'field_link' => 'central',
      'field_partner_type' => 'central',
      'group_image_wrapper' => 'central',
      'share_buttons' => 'central',
      'title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'group_image_wrapper',
        2 => 'field_partner_type',
        3 => 'field_image',
        4 => 'field_headline',
        5 => 'body',
        6 => 'field_link',
        7 => 'share_buttons',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|partner|default'] = $ds_layout;

  return $export;
}
