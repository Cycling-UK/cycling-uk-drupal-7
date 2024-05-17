<?php

/**
 * @file
 * content_type_challenge.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_challenge_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_cycle_challenge';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cycle_challenge';
  $strongarm->value = 0;
  $export['comment_anonymous_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cycle_challenge';
  $strongarm->value = '1';
  $export['comment_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cycle_challenge';
  $strongarm->value = 0;
  $export['comment_default_mode_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cycle_challenge';
  $strongarm->value = '10';
  $export['comment_default_per_page_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cycle_challenge';
  $strongarm->value = 0;
  $export['comment_form_location_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cycle_challenge';
  $strongarm->value = '0';
  $export['comment_preview_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cycle_challenge';
  $strongarm->value = 0;
  $export['comment_subject_field_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_cycle_challenge';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_cycle_challenge';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_cycle_challenge';
  $strongarm->value = 'colorbox';
  $export['diff_view_mode_preview_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_cycle_challenge';
  $strongarm->value = array(
    0 => 'default',
  );
  $export['ds_extras_view_modes_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cycle_challenge';
  $strongarm->value = array(
    'view_modes' => array(
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
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
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'submitted_by' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'colorbox' => array(
            'weight' => '55',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_cycle_challenge';
  $strongarm->value = '';
  $export['maxlength_js_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_cycle_challenge';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cycle_challenge';
  $strongarm->value = array();
  $export['menu_options_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cycle_challenge';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__cycle_challenge';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cycle_challenge';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cycle_challenge';
  $strongarm->value = '1';
  $export['node_preview_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cycle_challenge';
  $strongarm->value = 0;
  $export['node_submitted_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_cycle_challenge';
  $strongarm->value = 0;
  $export['publishcontent_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_cycle_challenge';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_cycle_challenge';
  $strongarm->value = '';
  $export['submitted_by_comment_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_node_cycle_challenge';
  $strongarm->value = '';
  $export['submitted_by_comment_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_cycle_challenge';
  $strongarm->value = array(
    'full' => 'Submitted by [node:author] on [node:created]',
    'teaser' => 'Submitted by [node:author] on [node:created]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'amp' => 'Submitted by [node:author] on [node:created]',
    'colorbox' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'related' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_modes_cycle_challenge';
  $strongarm->value = array(
    0 => 'full',
    1 => 'teaser',
    2 => 'rss',
    3 => 'search_index',
    4 => 'search_result',
    5 => 'amp',
    6 => 'colorbox',
    7 => 'diff_standard',
    8 => 'token',
    9 => 'full_content_2',
    10 => 'child_page',
    11 => 'related',
    12 => 'revision',
  );
  $export['view_modes_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_cycle_challenge';
  $strongarm->value = 0;
  $export['webform_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_cycle_challenge';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_cycle_challenge';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_cycle_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_challenge';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_challenge'] = $strongarm;

  return $export;
}
