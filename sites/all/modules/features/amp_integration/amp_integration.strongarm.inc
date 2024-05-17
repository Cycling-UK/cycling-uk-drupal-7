<?php

/**
 * @file
 * amp_integration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amp_integration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_context_disable_non_amp_contexts';
  $strongarm->value = 1;
  $export['amp_context_disable_non_amp_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_adsense_1_data_ad_slot';
  $strongarm->value = 'sidebar_button_1';
  $export['amp_google_adsense_1_data_ad_slot'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_adsense_1_height';
  $strongarm->value = '250';
  $export['amp_google_adsense_1_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_adsense_1_width';
  $strongarm->value = '300';
  $export['amp_google_adsense_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_adsense_id';
  $strongarm->value = '';
  $export['amp_google_adsense_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_analytics_id';
  $strongarm->value = '';
  $export['amp_google_analytics_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_google_doubleclick_id';
  $strongarm->value = '/';
  $export['amp_google_doubleclick_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_library_process_full_html';
  $strongarm->value = 0;
  $export['amp_library_process_full_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_library_process_full_html_warnings';
  $strongarm->value = 0;
  $export['amp_library_process_full_html_warnings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_library_process_statistics';
  $strongarm->value = 0;
  $export['amp_library_process_statistics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_library_warnings_display';
  $strongarm->value = 0;
  $export['amp_library_warnings_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_metadata_options_post';
  $strongarm->value = array(
    'amp_metadata_config_schemaType' => 'NewsArticle',
    'amp_metadata_config_headline' => '[node:title]',
    'amp_metadata_config_datePublished' => '[node:created]',
    'amp_metadata_config_dateModified' => '[node:changed]',
    'amp_metadata_config_description' => '[node:summary]',
    'amp_metadata_config_author' => '[node:author:name]',
    'amp_metadata_config_image' => '[node:field_image]',
    'amp_metadata_config_imageStyle' => 'amp_metadata_content_image_min_696px_wide',
  );
  $export['amp_metadata_options_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_pixel';
  $strongarm->value = 0;
  $export['amp_pixel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_pixel_domain_name';
  $strongarm->value = '';
  $export['amp_pixel_domain_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_pixel_query_string';
  $strongarm->value = '';
  $export['amp_pixel_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_pixel_random_number';
  $strongarm->value = 0;
  $export['amp_pixel_random_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'amp_theme';
  $strongarm->value = 'cyclingukamp';
  $export['amp_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cyclingukamp_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => 'public://logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'jquery_update_jquery_version' => '',
    'magic_css_excludes' => '',
    'magic_footer_js' => 0,
    'magic_library_head' => 0,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
  );
  $export['theme_cyclingukamp_settings'] = $strongarm;

  return $export;
}
