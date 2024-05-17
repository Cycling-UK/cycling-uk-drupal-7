<?php

/**
 * @file
 * amp_integration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amp_integration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide-amp';
  $context->description = 'Sitewide content for AMP pages';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'is_amp_request' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'top_menu',
          'weight' => '-7',
        ),
        'views-amp_view_desktop_site-block' => array(
          'module' => 'views',
          'delta' => 'amp_view_desktop_site-block',
          'region' => 'content',
          'weight' => '25',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide content for AMP pages');
  t('sitewide');
  $export['sitewide-amp'] = $context;

  return $export;
}
