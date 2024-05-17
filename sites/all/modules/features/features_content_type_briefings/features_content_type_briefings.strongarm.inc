<?php

/**
 * @file
 * features_content_type_briefings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_content_type_briefings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_briefings';
  $strongarm->value = 0;
  $export['comment_anonymous_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_briefings';
  $strongarm->value = '2';
  $export['comment_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_briefings';
  $strongarm->value = 1;
  $export['comment_default_mode_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_briefings';
  $strongarm->value = '50';
  $export['comment_default_per_page_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_briefings';
  $strongarm->value = 1;
  $export['comment_form_location_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_briefings';
  $strongarm->value = '1';
  $export['comment_preview_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_briefings';
  $strongarm->value = 1;
  $export['comment_subject_field_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_briefings';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_briefings';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_briefings';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__briefings';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'accordion_entity_view_1' => array(
          'default' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '9',
          ),
        ),
        'child_pages_entity_view_1' => array(
          'child_page' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'search_index' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
        ),
        'submitted_by' => array(
          'child_page' => array(
            'visible' => FALSE,
            'weight' => '27',
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => '48',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '11',
          ),
        ),
      ),
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
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
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'views' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_briefings';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_briefings';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_briefings';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_briefings';
  $strongarm->value = '0';
  $export['node_preview_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_briefings';
  $strongarm->value = 0;
  $export['node_submitted_briefings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_briefings_pattern';
  $strongarm->value = '[node:menu-link:parent:url:path]/[node:title]';
  $export['pathauto_node_briefings_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_briefings';
  $strongarm->value = array(
    'priority' => '0.6',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_briefings'] = $strongarm;

  return $export;
}
