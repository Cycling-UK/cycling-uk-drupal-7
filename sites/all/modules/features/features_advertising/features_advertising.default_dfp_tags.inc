<?php
/**
 * @file
 * features_advertising.default_dfp_tags.inc
 */

/**
 * Implements hook_default_dfp_tag().
 */
function features_advertising_default_dfp_tag() {
  $export = array();

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'sidebar_button_2';
  $tag->slot = 'sidebar_button_2';
  $tag->adunit = '';
  $tag->size = '300x250,300x140';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(),
  );
  $export['sidebar_button_2'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'sidebar_button_3';
  $tag->slot = 'sidebar_button_3';
  $tag->adunit = '';
  $tag->size = '300x250,300x140';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => 'image',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(),
  );
  $export['sidebar_button_3'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'sidebar_button_4';
  $tag->slot = 'sidebar_button_4';
  $tag->adunit = '';
  $tag->size = '300x250,300x140';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(),
  );
  $export['sidebar_button_4'] = $tag;

  $tag = new stdClass();
  $tag->disabled = FALSE; /* Edit this to true to make a default tag disabled initially */
  $tag->api_version = 1;
  $tag->machinename = 'sidebar_button_5';
  $tag->slot = 'sidebar_button_5';
  $tag->adunit = '';
  $tag->size = '300x250,300x140';
  $tag->block = 1;
  $tag->settings = array(
    'out_of_page' => 0,
    'slug' => '',
    'short_tag' => 0,
    'adsense_ad_types' => '',
    'adsense_channel_ids' => '',
    'adsense_colors' => array(
      'background' => '',
      'border' => '',
      'link' => '',
      'text' => '',
      'url' => '',
    ),
    'targeting' => array(),
    'breakpoints' => array(),
  );
  $export['sidebar_button_5'] = $tag;

  return $export;
}
