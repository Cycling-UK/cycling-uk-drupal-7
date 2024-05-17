<?php

/**
 * @file
 * feature_content_type_biography.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_content_type_biography_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|biography|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'biography';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '2',
    ),
    'view_full_node' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'ctools' => 'a:3:{s:4:"conf";a:7:{s:14:"override_title";i:1;s:19:"override_title_text";s:19:"View full biography";s:10:"build_mode";s:4:"full";s:10:"identifier";s:3:"btn";s:4:"link";i:1;s:7:"context";s:25:"argument_entity_id:node_1";s:22:"override_title_heading";s:4:"span";}s:4:"type";s:10:"node_links";s:7:"subtype";s:10:"node_links";}',
        'empty_fields_emptyfieldtext_empty_text' => '',
        'empty_fields_handler' => '',
        'load_terms' => 0,
        'show_title' => 1,
        'title_wrapper' => '',
      ),
      'label' => 'hidden',
      'weight' => '6',
    ),
  );
  $export['node|biography|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|biography|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'biography';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '7',
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
      'weight' => '2',
    ),
  );
  $export['node|biography|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_content_type_biography_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_full_node';
  $ds_field->label = 'View full node';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'ctools' => array(
        'type' => 'ctools',
      ),
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'description' => 'Eg: h1, h2, p',
        'type' => 'textfield',
      ),
    ),
  );
  $export['view_full_node'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_content_type_biography_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|biography|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'biography';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_biography_category' => 'central',
      'field_facebook' => 'central',
      'field_group_website' => 'central',
      'field_headline' => 'central',
      'field_image' => 'central',
      'field_instagram' => 'central',
      'field_linkedin' => 'central',
      'field_short_biography' => 'central',
      'field_twitter' => 'central',
      'field_website' => 'central',
      'field_youtube' => 'central',
      'group_social_links' => 'central',
      'title' => 'central',
      'view_full_node' => 'central',
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
        1 => 'field_biography_category',
        2 => 'title',
        3 => 'field_headline',
        4 => 'group_social_links',
        5 => 'field_facebook',
        6 => 'field_short_biography',
        7 => 'view_full_node',
        8 => 'field_instagram',
        9 => 'field_twitter',
        10 => 'field_youtube',
        11 => 'field_linkedin',
        12 => 'field_website',
        13 => 'field_group_website',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|biography|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|biography|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'biography';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_2_8_2';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'central',
      'field_biography_category' => 'central',
      'field_facebook' => 'central',
      'field_group_website' => 'central',
      'field_headline' => 'central',
      'field_image' => 'central',
      'field_instagram' => 'central',
      'field_linkedin' => 'central',
      'field_twitter' => 'central',
      'field_website' => 'central',
      'field_youtube' => 'central',
      'group_social_links' => 'central',
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
        0 => 'field_image',
        1 => 'field_biography_category',
        2 => 'title',
        3 => 'field_headline',
        4 => 'group_social_links',
        5 => 'field_facebook',
        6 => 'field_instagram',
        7 => 'body',
        8 => 'field_twitter',
        9 => 'share_buttons',
        10 => 'field_youtube',
        11 => 'field_linkedin',
        12 => 'field_website',
        13 => 'field_group_website',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['node|biography|default'] = $ds_layout;

  return $export;
}
