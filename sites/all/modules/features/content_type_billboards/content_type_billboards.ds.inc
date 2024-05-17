<?php

/**
 * @file
 * content_type_billboards.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_billboards_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|billboard_icon|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'billboard_icon';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => 'billboard-icon-title',
        'link' => '0',
        'wrapper' => 'div',
      ),
      'label' => 'hidden',
      'weight' => '2',
    ),
  );
  $export['node|billboard_icon|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|billboard_text|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'billboard_text';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '0',
        'wrapper' => '',
      ),
      'label' => 'hidden',
      'weight' => '1',
    ),
  );
  $export['node|billboard_text|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|billboard|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'billboard';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '47',
    ),
  );
  $export['node|billboard|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_billboards_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|billboard_icon|amp';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'billboard_icon';
  $ds_layout->view_mode = 'amp';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_subtitle' => 'ds_content',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_subtitle',
      ),
    ),
    'wrappers' => array(),
  );
  $export['node|billboard_icon|amp'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|billboard_icon|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'billboard_icon';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'group_icon_wrapper' => 'ds_content',
      'title' => 'ds_content',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'ds_content' => array(
        0 => 'group_icon_wrapper',
        1 => 'field_image',
        2 => 'title',
        3 => 'field_subtitle',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
  );
  $export['node|billboard_icon|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|billboard_text|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'billboard_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'top',
      'field_body_bottom' => 'bottom',
      'field_body_middle' => 'top',
      'field_button_a' => 'central',
      'field_button_b' => 'central',
      'field_image' => 'bottom',
      'field_subtitle' => 'top',
      'field_title' => 'top',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'bottom' => array(
        6 => 'field_image',
        7 => 'field_body_bottom',
      ),
      'central' => array(
        4 => 'field_button_a',
        5 => 'field_button_b',
      ),
      'top' => array(
        0 => 'field_subtitle',
        1 => 'field_title',
        2 => 'body',
        3 => 'field_body_middle',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'central' => 'div',
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
    ),
  );
  $export['node|billboard_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|billboard|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'billboard';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_billboard_paragraph_text' => 'central',
      'field_body_bottom' => 'bottom',
      'field_hero' => 'top',
      'field_icons' => 'central',
      'field_markup' => 'top',
      'field_terms_and_conditions' => 'bottom',
      'field_welcome_message' => 'top',
      'group_header_inner_wrapper' => 'top',
      'title' => 'top',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'bottom' => array(
        4 => 'field_body_bottom',
        5 => 'field_terms_and_conditions',
      ),
      'central' => array(
        2 => 'field_icons',
        3 => 'field_billboard_paragraph_text',
      ),
      'top' => array(
        0 => 'field_hero',
        1 => 'group_header_inner_wrapper',
        6 => 'title',
        7 => 'field_welcome_message',
        8 => 'field_markup',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'central' => 'div',
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
    ),
  );
  $export['node|billboard|default'] = $ds_layout;

  return $export;
}
