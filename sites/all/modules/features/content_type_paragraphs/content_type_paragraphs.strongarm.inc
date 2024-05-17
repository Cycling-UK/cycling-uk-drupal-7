<?php

/**
 * @file
 * content_type_paragraphs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_paragraphs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_paragraphs';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_paragraphs';
  $strongarm->value = 0;
  $export['comment_anonymous_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_paragraphs';
  $strongarm->value = 1;
  $export['comment_default_mode_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_paragraphs';
  $strongarm->value = '50';
  $export['comment_default_per_page_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_paragraphs';
  $strongarm->value = 1;
  $export['comment_form_location_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_paragraphs';
  $strongarm->value = '1';
  $export['comment_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_paragraphs';
  $strongarm->value = '1';
  $export['comment_preview_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_paragraphs';
  $strongarm->value = 1;
  $export['comment_subject_field_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_paragraphs';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_paragraphs';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_paragraphs';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_paragraphs';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exclude_node_title_content_type_modes_paragraphs';
  $strongarm->value = array(
    'amp' => 0,
    'child_page' => 0,
    'colorbox' => 0,
    'diff_standard' => 0,
    'full' => 'full',
    'full_content_2' => 0,
    'nodeform' => 0,
    'related' => 0,
    'revision' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'teaser' => 0,
    'token' => 0,
  );
  $export['exclude_node_title_content_type_modes_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exclude_node_title_content_type_value_paragraphs';
  $strongarm->value = 'all';
  $export['exclude_node_title_content_type_value_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_paragraphs';
  $strongarm->value = 1;
  $export['features_admin_show_component_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_paragraphs';
  $strongarm->value = 0;
  $export['features_component_locked_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__paragraphs';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'submitted_by' => array(
          'child_page' => array(
            'visible' => FALSE,
            'weight' => '9',
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => '57',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '9',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '9',
          ),
          'teaser' => array(
            'visible' => TRUE,
            'weight' => '0',
          ),
        ),
      ),
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '13',
        ),
      ),
    ),
    'view_modes' => array(
      'amp' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'full_content_2' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__blockquote';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__blockquote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__hero_image_title_teaser_and_cta';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_paragraphs_item__hero_image_title_teaser_and_cta'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__simple_buttons';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__simple_buttons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__simple_text_block';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__simple_text_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__text_field_with_one_or_more_colu';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__text_field_with_one_or_more_colu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__text_left_and_image_right';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(),
    ),
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__text_left_and_image_right'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_paragraphs';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_paragraphs';
  $strongarm->value = '';
  $export['maxlength_js_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_paragraphs';
  $strongarm->value = array(
    0 => 'menu-bbr-main-menu',
    1 => 'menu-bw-main-menu',
    2 => 'main-menu',
    3 => 'menu-pumped-up',
    4 => 'menu-scotland-cycle-repair-schem',
    5 => 'menu-wfoc',
  );
  $export['menu_options_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_paragraphs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__paragraphs';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_paragraphs';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_paragraphs';
  $strongarm->value = '2';
  $export['node_preview_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_paragraphs';
  $strongarm->value = 0;
  $export['node_submitted_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_paragraphs_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_paragraphs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_paragraphs';
  $strongarm->value = 1;
  $export['publishcontent_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_paragraphs';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_node_paragraphs';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_node_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_paragraphs';
  $strongarm->value = 'Submitted by [comment:author] on [comment:created]';
  $export['submitted_by_comment_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_paragraphs';
  $strongarm->value = array(
    'amp' => 'Submitted by [node:author] on [node:created]',
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'colorbox' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'full' => 'Submitted by [node:author] on [node:created]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'related' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'teaser' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_modes_paragraphs';
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
  $export['view_modes_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_paragraphs';
  $strongarm->value = 0;
  $export['webform_node_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_paragraphs';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_paragraphs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_paragraphs';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_paragraphs'] = $strongarm;

  return $export;
}
