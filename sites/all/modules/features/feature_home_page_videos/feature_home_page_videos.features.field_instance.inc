<?php

/**
 * @file
 * feature_home_page_videos.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_home_page_videos_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-video-field_home_page_videos'.
  $field_instances['bean-video-field_home_page_videos'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_home_page_videos',
    'label' => 'Home page videos',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_home_page_videos-field_youtube_title'.
  $field_instances['field_collection_item-field_home_page_videos-field_youtube_title'] = array(
    'bundle' => 'field_home_page_videos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_youtube_title',
    'label' => 'YouTube title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 'basic',
          'code' => 'code',
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'public_filter' => 'public_filter',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic' => array(
              'weight' => -8,
            ),
            'code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
            'public_filter' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_home_page_videos-field_youtube_url'.
  $field_instances['field_collection_item-field_home_page_videos-field_youtube_url'] = array(
    'bundle' => 'field_home_page_videos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'colorbox' => array(
            'gallery' => 0,
            'parameters' => array(
              'autohide' => 0,
              'autoplay' => 1,
              'controls' => 0,
              'height' => 680,
              'iv_load_policy' => 0,
              'loop' => 0,
              'showinfo' => 0,
              'width' => 840,
            ),
          ),
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'image_link' => 'colorbox',
          'image_style' => '640x360',
        ),
        'type' => 'youtube_thumbnail',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_youtube_url',
    'label' => 'YouTube URL',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page videos');
  t('YouTube URL');
  t('YouTube title');

  return $field_instances;
}
