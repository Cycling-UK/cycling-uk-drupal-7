<?php

/**
 * @file
 * features_140_routes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_140_routes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '140_routes_legal';
  $context->description = 'Display legal copy block on route pages.';
  $context->tag = '140_routes';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'route' => 'route',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-121' => array(
          'module' => 'block',
          'delta' => '121',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('140_routes');
  t('Display legal copy block on route pages.');
  $export['140_routes_legal'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_layout_full_screen';
  $context->description = 'Content types that share the same general full screen page design.';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'poi' => 'poi',
        'route' => 'route',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'page-layout-fullscreen',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types that share the same general full screen page design.');
  t('layout');
  $export['page_layout_full_screen'] = $context;

  return $export;
}
