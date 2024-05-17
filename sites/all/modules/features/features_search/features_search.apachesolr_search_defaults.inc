<?php

/**
 * @file
 * features_search.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function features_search_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Site Search';
  $searcher->description = 'Search the site.';
  $searcher->search_path = 'search/site-old';
  $searcher->page_title = 'Site Search';
  $searcher->env_id = 'acquia_search_server_1';
  $searcher->settings = array(
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'blocks',
    'apachesolr_search_custom_enable' => 0,
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_spellcheck' => 1,
    'fq' => array(),
  );
  $export['core_search'] = $searcher;

  return $export;
}
