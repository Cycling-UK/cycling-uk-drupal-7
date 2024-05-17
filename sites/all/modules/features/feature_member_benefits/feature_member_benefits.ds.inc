<?php

/**
 * @file
 * feature_member_benefits.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_member_benefits_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|member_benefit|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'member_benefit';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'exclude node title settings' => '0',
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
    ),
  );
  $export['node|member_benefit|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_member_benefits_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|member_benefit|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'member_benefit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_hero',
        1 => 'group_title_wrapper',
        2 => 'title',
        3 => 'field_teaser',
        4 => 'field_paragraph',
        5 => 'share_buttons',
      ),
    ),
    'fields' => array(
      'field_hero' => 'central',
      'group_title_wrapper' => 'central',
      'title' => 'central',
      'field_teaser' => 'central',
      'field_paragraph' => 'central',
      'share_buttons' => 'central',
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
  $export['node|member_benefit|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|member_benefit|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'member_benefit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_member_only_content',
        1 => 'field_public_only_content',
      ),
    ),
    'fields' => array(
      'field_member_only_content' => 'central',
      'field_public_only_content' => 'central',
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
  $export['paragraphs_item|member_benefit|default'] = $ds_layout;

  return $export;
}
