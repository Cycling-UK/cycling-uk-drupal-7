<?php

/**
 * @file
 * content_type_poi.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_poi_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_poi';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_poi';
  $strongarm->value = 0;
  $export['comment_anonymous_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_poi';
  $strongarm->value = 1;
  $export['comment_default_mode_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_poi';
  $strongarm->value = '50';
  $export['comment_default_per_page_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_poi';
  $strongarm->value = 1;
  $export['comment_form_location_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_poi';
  $strongarm->value = '1';
  $export['comment_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_poi';
  $strongarm->value = '1';
  $export['comment_preview_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_poi';
  $strongarm->value = 1;
  $export['comment_subject_field_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_poi';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_poi';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_poi';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_poi';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__poi';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'amp' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_content_2' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'submitted_by' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_poi';
  $strongarm->value = array();
  $export['menu_options_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_poi';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__poi';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_poi';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_poi';
  $strongarm->value = '0';
  $export['node_preview_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_poi';
  $strongarm->value = 0;
  $export['node_submitted_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_poi';
  $strongarm->value = 0;
  $export['publishcontent_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_poi';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_node_poi';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_node_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_poi';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_poi';
  $strongarm->value = array(
    'full' => 'Submitted by [node:author] on [node:created]',
    'teaser' => 'Submitted by [node:author] on [node:created]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'amp' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'related' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_modes_poi';
  $strongarm->value = array(
    0 => 'full',
    1 => 'teaser',
    2 => 'rss',
    3 => 'search_index',
    4 => 'search_result',
    5 => 'amp',
    6 => 'diff_standard',
    7 => 'token',
    8 => 'full_content_2',
    9 => 'child_page',
    10 => 'related',
    11 => 'revision',
  );
  $export['view_modes_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_poi';
  $strongarm->value = 0;
  $export['webform_node_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_poi';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_poi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_poi';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_poi'] = $strongarm;

  return $export;
}
