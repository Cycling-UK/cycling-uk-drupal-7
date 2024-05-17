<?php

/**
 * @file
 * content_type_billboards.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type_billboards_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'billboard';
  $context->description = 'Billboard layouts';
  $context->tag = 'Landing page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'billboard' => 'billboard',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-126' => array(
          'module' => 'block',
          'delta' => '126',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'scroll_button-scroll_button' => array(
          'module' => 'scroll_button',
          'delta' => 'scroll_button',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'webform-client-block-63011' => array(
          'module' => 'webform',
          'delta' => 'client-block-63011',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Billboard layouts');
  t('Landing page');
  $export['billboard'] = $context;

  return $export;
}
