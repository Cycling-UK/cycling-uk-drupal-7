<?php

/**
 * @file
 * content_type_billboards.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function content_type_billboards_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-billboard_main_site_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'billboard_main_site_button',
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
      'amptheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'amptheme',
        'weight' => 0,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 0,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => -65,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
