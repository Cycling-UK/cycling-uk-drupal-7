<?php

/**
 * @file
 * feature_xl_landing_page.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_xl_landing_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'paragraph_full_width_and_title';
  $ds_field->label = 'Paragraph Full Width and Title';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['paragraph_full_width_and_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_xl_landing_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page_xl|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page_xl';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'group_container',
        1 => 'body',
        2 => 'field_paragraph',
      ),
    ),
    'fields' => array(
      'group_container' => 'top',
      'body' => 'top',
      'field_paragraph' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|landing_page_xl|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|calls_to_action_buttons_x4_with_|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'calls_to_action_buttons_x4_with_';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'paragraphs_entity_view_1',
      ),
    ),
    'fields' => array(
      'paragraphs_entity_view_1' => 'central',
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
  $export['paragraphs_item|calls_to_action_buttons_x4_with_|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_and_title|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_and_title';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'paragraphs_entity_view_2',
      ),
    ),
    'fields' => array(
      'paragraphs_entity_view_2' => 'central',
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
  $export['paragraphs_item|full_width_image_and_title|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|full_width_image_and_title|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'full_width_image_and_title';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_title',
      ),
    ),
    'fields' => array(
      'field_title' => 'central',
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
  $export['paragraphs_item|full_width_image_and_title|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_field|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_field';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_background_tint',
        1 => 'group_background',
        2 => 'field_title',
        3 => 'field_landing_page_text',
      ),
    ),
    'fields' => array(
      'group_background_tint' => 'central',
      'group_background' => 'central',
      'field_title' => 'central',
      'field_landing_page_text' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'container',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|text_field|default'] = $ds_layout;

  return $export;
}
