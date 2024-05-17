<?php

/**
 * @file
 * og_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function og_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_layout_group';
  $context->description = 'Content types that share the same general page design and layout as the Group content type.';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'affiliated_centre' => 'affiliated_centre',
        'course_details' => 'course_details',
        'event' => 'event',
        'group' => 'group',
        'publication' => 'publication',
        'ride' => 'ride',
        'venue' => 'venue',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'page-layout-group',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types that share the same general page design and layout as the Group content type.');
  t('layout');
  $export['page_layout_group'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_banner_group_news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_post' => 'group_post',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-51' => array(
          'module' => 'block',
          'delta' => '51',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['post_banner_group_news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_cta_local_groups';
  $context->description = 'Local groups call to action';
  $context->tag = 'cta';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'post' => 'post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        13481 => 13481,
        14126 => 14126,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-advert_hero-block_7' => array(
          'module' => 'views',
          'delta' => 'advert_hero-block_7',
          'region' => 'content',
          'weight' => '60',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Local groups call to action');
  t('cta');
  $export['post_cta_local_groups'] = $context;

  return $export;
}
