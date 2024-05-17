<?php

/**
 * @file
 * features_cta.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_cta_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_insurance';
  $context->description = 'Insurance CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        18780 => 18780,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_3' => array(
          'module' => 'views',
          'delta' => 'new_ctas-block_3',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Insurance CTA');
  t('New CTAs');
  $export['new_cta_insurance'] = $context;

  return $export;
}
