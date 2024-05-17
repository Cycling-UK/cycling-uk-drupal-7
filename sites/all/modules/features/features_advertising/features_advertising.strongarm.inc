<?php

/**
 * @file
 * features_advertising.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_advertising_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_dfp_tags';
  $strongarm->value = array();
  $export['default_dfp_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_adtest_adunit';
  $strongarm->value = '';
  $export['dfp_adtest_adunit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_async_rendering';
  $strongarm->value = 1;
  $export['dfp_async_rendering'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_click_url';
  $strongarm->value = '';
  $export['dfp_click_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_collapse_empty_divs';
  $strongarm->value = '1';
  $export['dfp_collapse_empty_divs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_default_adunit';
  $strongarm->value = '[dfp_tag:slot]';
  $export['dfp_default_adunit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_default_slug';
  $strongarm->value = 'Sponsored Advert';
  $export['dfp_default_slug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_disable_init_load';
  $strongarm->value = 0;
  $export['dfp_disable_init_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_enable_ad_categories';
  $strongarm->value = 0;
  $export['dfp_enable_ad_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_enable_ad_categories_bundles';
  $strongarm->value = array(
    'tags' => 0,
    'article_type' => 0,
    'post_type' => 0,
    'cycling_type' => 0,
    'hero' => 0,
  );
  $export['dfp_enable_ad_categories_bundles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_injected_js';
  $strongarm->value = '';
  $export['dfp_injected_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_injected_js2';
  $strongarm->value = '';
  $export['dfp_injected_js2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_more_targets';
  $strongarm->value = 'Add another target';
  $export['dfp_more_targets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_network_id';
  $strongarm->value = '22754483';
  $export['dfp_network_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_single_request';
  $strongarm->value = 1;
  $export['dfp_single_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_slug_placement';
  $strongarm->value = 1;
  $export['dfp_slug_placement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_targeting';
  $strongarm->value = array();
  $export['dfp_targeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dfp_token_cache_lifetime';
  $strongarm->value = '0';
  $export['dfp_token_cache_lifetime'] = $strongarm;

  return $export;
}
