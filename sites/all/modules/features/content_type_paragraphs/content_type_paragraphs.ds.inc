<?php

/**
 * @file
 * content_type_paragraphs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_paragraphs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|paragraphs|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'paragraphs';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'share_buttons' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
        'empty_fields_handler' => '',
        'exclude node title settings' => '0',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '2',
    ),
  );
  $export['node|paragraphs|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_paragraphs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|paragraphs|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'paragraphs';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_hero' => 'central',
      'field_link' => 'central',
      'field_paragraph' => 'central',
      'field_teaser' => 'central',
      'group_title_wrapper' => 'central',
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
        0 => 'field_hero',
        1 => 'group_title_wrapper',
        2 => 'field_teaser',
        3 => 'title',
        4 => 'field_paragraph',
        5 => 'field_link',
        6 => 'share_buttons',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['node|paragraphs|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|background_colour_and_text_panel|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'background_colour_and_text_panel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_image' => 'right',
      'field_links' => 'left',
      'field_subtitle' => 'left',
      'field_text' => 'left',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_links',
      ),
      'right' => array(
        3 => 'field_image',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['paragraphs_item|background_colour_and_text_panel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|background_image_with_panel|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'background_image_with_panel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_links' => 'central',
      'field_subtitle' => 'central',
      'field_text' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_links',
      ),
    ),
    'wrappers' => array(),
  );
  $export['paragraphs_item|background_image_with_panel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|background_image_with_text_panel|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'background_image_with_text_panel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_links' => 'central',
      'field_subtitle' => 'central',
      'field_text' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_links',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['paragraphs_item|background_image_with_text_panel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|basic_related_content|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'basic_related_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_basic_related_articles' => 'central',
      'field_paragraph_title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_paragraph_title',
        1 => 'field_basic_related_articles',
      ),
    ),
    'wrappers' => array(),
  );
  $export['paragraphs_item|basic_related_content|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|parallax_image|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'parallax_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_links' => 'central',
      'field_subtitle' => 'central',
      'field_title' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_title',
        1 => 'field_subtitle',
        2 => 'field_links',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['paragraphs_item|parallax_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_left_and_image_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_left_and_image_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_image' => 'right',
      'field_links' => 'left',
      'field_subtitle' => 'left',
      'field_text' => 'left',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        0 => 'field_subtitle',
        1 => 'field_text',
        2 => 'field_links',
      ),
      'right' => array(
        3 => 'field_image',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['paragraphs_item|text_left_and_image_right|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_right_and_image_left|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_right_and_image_left';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_5_7';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_image' => 'left',
      'field_links' => 'right',
      'field_subtitle' => 'right',
      'field_text' => 'right',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_subtitle',
        2 => 'field_text',
        3 => 'field_links',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
  );
  $export['paragraphs_item|text_right_and_image_left|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|video_player|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'video_player';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'field_subtitle' => 'central',
      'paragraphs_entity_view_5' => 'central',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'central' => array(
        0 => 'field_subtitle',
        1 => 'paragraphs_entity_view_5',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
  );
  $export['paragraphs_item|video_player|default'] = $ds_layout;

  return $export;
}
