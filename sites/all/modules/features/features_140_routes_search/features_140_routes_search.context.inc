<?php

/**
 * @file
 * features_140_routes_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_140_routes_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '140_routes';
  $context->description = 'Add route search block to 140-routes page.';
  $context->tag = '140_routes';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '140-routes' => '140-routes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-route_search-route_search_block' => array(
          'module' => 'views',
          'delta' => 'route_search-route_search_block',
          'region' => 'content',
          'weight' => '45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('140_routes');
  t('Add route search block to 140-routes page.');
  $export['140_routes'] = $context;

  return $export;
}
