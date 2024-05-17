<?php
/**
 * @file
 * features_content_type_briefings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_content_type_briefings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-briefings_sidebar_copy'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'briefings_sidebar_copy',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 0,
      ),
    ),
    'title' => 'Top Campaigning Articles',
    'visibility' => 0,
  );

  $export['views--exp-briefings-page'] = array(
    'cache' => -1,
    'css_class' => 'H2',
    'custom' => 0,
    'delta' => '-exp-briefings-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 0,
      ),
    ),
    'title' => 'Filters',
    'visibility' => 0,
  );

  return $export;
}
