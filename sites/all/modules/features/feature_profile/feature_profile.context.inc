<?php

/**
 * @file
 * feature_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_layout_user';
  $context->description = 'User pages that share the same general page design and layout as each other.';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user*' => 'user*',
      ),
    ),
    'user_page' => array(
      'values' => array(
        'form' => 'form',
        'register' => 'register',
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'page-layout-user',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User pages that share the same general page design and layout as each other.');
  t('layout');
  $export['page_layout_user'] = $context;

  return $export;
}
