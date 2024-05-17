<?php

/**
 * @file
 * teaser_tiles_para_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function teaser_tiles_para_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-teaser_tiles-field_paragraph_title'.
  $field_instances['paragraphs_item-teaser_tiles-field_paragraph_title'] = array(
    'bundle' => 'teaser_tiles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'enable_trim' => 0,
          'title_class' => 'center',
          'title_link' => '',
          'title_style' => 'h2',
          'trim_length' => 50,
        ),
        'type' => 'title_linked',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 'basic',
          'code' => 'code',
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'paragraphs' => 'paragraphs',
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
            'paragraphs' => array(
              'weight' => -9,
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
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-teaser_tiles-field_view_block_reference'.
  $field_instances['paragraphs_item-teaser_tiles-field_view_block_reference'] = array(
    'bundle' => 'teaser_tiles',
    'default_value' => array(
      0 => array(
        'view_id' => 'taxonomy:block_9',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the node ID numbers of pages.  For "and" use "," : "or" use "+"',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'viewreference_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_view_block_reference',
    'label' => 'View block reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewreference',
      'settings' => array(),
      'type' => 'viewreference_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter the node ID numbers of pages.  For "and" use "," : "or" use "+"');
  t('Title');
  t('View block reference');

  return $field_instances;
}
