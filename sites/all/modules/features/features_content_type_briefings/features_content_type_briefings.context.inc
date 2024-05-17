<?php
/**
 * @file
 * features_content_type_briefings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_content_type_briefings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'briefings';
  $context->description = '';
  $context->tag = 'View Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'campaigning/views-and-briefings2' => 'campaigning/views-and-briefings2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views--exp-briefings-page' => array(
          'module' => 'views',
          'delta' => '-exp-briefings-page',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('View Pages');
  $export['briefings'] = $context;

  return $export;
}
