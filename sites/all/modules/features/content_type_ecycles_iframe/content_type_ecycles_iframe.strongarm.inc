<?php

/**
 * @file
 * content_type_ecycles_iframe.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_ecycles_iframe_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ecycle_iframe';
  $strongarm->value = 0;
  $export['comment_anonymous_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ecycle_iframe';
  $strongarm->value = 1;
  $export['comment_default_mode_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ecycle_iframe';
  $strongarm->value = '50';
  $export['comment_default_per_page_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ecycle_iframe';
  $strongarm->value = '1';
  $export['comment_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ecycle_iframe';
  $strongarm->value = 1;
  $export['comment_form_location_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ecycle_iframe';
  $strongarm->value = '1';
  $export['comment_preview_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ecycle_iframe';
  $strongarm->value = 1;
  $export['comment_subject_field_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_ecycle_iframe';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_ecycle_iframe';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_ecycle_iframe';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ecycle_iframe';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'submitted_by' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '2',
          ),
        ),
      ),
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
      ),
    ),
    'view_modes' => array(
      'child_page' => array(
        'custom_settings' => FALSE,
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
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ecycle_iframe';
  $strongarm->value = array();
  $export['menu_options_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ecycle_iframe';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ecycle_iframe';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ecycle_iframe';
  $strongarm->value = '0';
  $export['node_preview_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ecycle_iframe';
  $strongarm->value = 0;
  $export['node_submitted_ecycle_iframe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_ecycle_iframe';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_ecycle_iframe'] = $strongarm;

  return $export;
}
