<?php

/**
 * @file
 * features_content_type_webform.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_content_type_webform_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_webform';
  $strongarm->value = 0;
  $export['comment_anonymous_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_webform';
  $strongarm->value = 1;
  $export['comment_default_mode_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_webform';
  $strongarm->value = '50';
  $export['comment_default_per_page_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_webform';
  $strongarm->value = 1;
  $export['comment_form_location_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_webform';
  $strongarm->value = '1';
  $export['comment_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_webform';
  $strongarm->value = 1;
  $export['comment_subject_field_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_webform';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_webform';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_webform';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__webform';
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'full_content_2' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'amp' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(
        'webform' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '55',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_webform';
  $strongarm->value = array();
  $export['menu_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_webform';
  $strongarm->value = 'menu-bw-main-menu:0';
  $export['menu_parent_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webform';
  $strongarm->value = array();
  $export['node_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_webform';
  $strongarm->value = '1';
  $export['node_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_webform';
  $strongarm->value = 0;
  $export['node_submitted_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_webform';
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
  $export['submitted_by_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_blocks';
  $strongarm->value = array(
    'client-block-15' => array(
      'display' => 'form',
      'pages_block' => '1',
      'confirmation_block' => '0',
    ),
    'client-block-1066' => array(
      'display' => 'form',
      'pages_block' => '1',
      'confirmation_block' => '0',
    ),
    'client-block-63011' => array(
      'display' => 'form',
      'pages_block' => '0',
      'confirmation_block' => '0',
    ),
    'client-block-483001' => array(
      'display' => 'form',
      'pages_block' => '0',
      'confirmation_block' => '0',
    ),
    'client-block-489051' => array(
      'display' => 'form',
      'pages_block' => '0',
      'confirmation_block' => '0',
    ),
    'client-block-490281' => array(
      'display' => 'form',
      'pages_block' => '0',
      'confirmation_block' => '0',
    ),
  );
  $export['webform_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_post';
  $strongarm->value = 0;
  $export['webform_node_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_webform';
  $strongarm->value = 1;
  $export['webform_node_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_webform';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_webform'] = $strongarm;

  return $export;
}
