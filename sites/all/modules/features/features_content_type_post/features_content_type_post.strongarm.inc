<?php

/**
 * @file
 * features_content_type_post.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_content_type_post_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_post';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_post';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_post';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__post';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'accordion_entity_view_1' => array(
          'amp' => array(
            'visible' => FALSE,
            'weight' => '13',
          ),
          'child_page' => array(
            'visible' => TRUE,
            'weight' => '10',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '8',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '7',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '11',
          ),
        ),
        'submitted_by' => array(
          'amp' => array(
            'visible' => TRUE,
            'weight' => '0',
          ),
          'child_page' => array(
            'visible' => FALSE,
            'weight' => '2',
          ),
          'default' => array(
            'visible' => TRUE,
            'weight' => '3',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '10',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '6',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '25',
          ),
        ),
        'tags_entity_view_tags' => array(
          'default' => array(
            'visible' => FALSE,
            'weight' => '57',
          ),
          'search_index' => array(
            'visible' => FALSE,
            'weight' => '57',
          ),
          'search_result' => array(
            'visible' => FALSE,
            'weight' => '57',
          ),
        ),
      ),
      'form' => array(
        'metatags' => array(
          'weight' => '12',
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
          'weight' => '11',
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
  $export['field_bundle_settings_node__post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_post';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_post';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_post';
  $strongarm->value = '0';
  $export['node_preview_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_post';
  $strongarm->value = 1;
  $export['node_submitted_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_post_pattern';
  $strongarm->value = '[node:field_post_type]/[node:title]';
  $export['pathauto_node_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_bike_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_bike_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_cycling_uk_section_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_cycling_uk_section_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ride_level_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ride_level_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_post';
  $strongarm->value = array(
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'colorbox' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'full' => '<span>By</span> [node:author]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'related' => 'By [node:author]',
    'revision' => 'By [node:author]',
    'rss' => 'By [node:author]',
    'search_index' => 'By [node:author]',
    'search_result' => 'By [node:author]',
    'teaser' => 'By [node:author]',
    'token' => 'By [node:author]',
  );
  $export['submitted_by_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_level_of_engagement';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_level_of_engagement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_personal_attributes_';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_personal_attributes_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_reason_for_cycling_';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '0',
  );
  $export['xmlsitemap_settings_taxonomy_term_reason_for_cycling_'] = $strongarm;

  return $export;
}
