<?php

/**
 * @file
 * features_cta.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_cta_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-new_ctas-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new_ctas-block_3',
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
      'amptheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'amptheme',
        'weight' => 0,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => 0,
      ),
      'bbrxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbrxl',
        'weight' => 0,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 0,
      ),
      'bikeweekxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweekxl',
        'weight' => 0,
      ),
      'cyclescotlandxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclescotlandxl',
        'weight' => 0,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 0,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 0,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => 0,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 0,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => 0,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => 0,
      ),
      'pumpedup' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pumpedup',
        'weight' => 0,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => 0,
      ),
      'wfocxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfocxl',
        'weight' => 0,
      ),
      'workplacesxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplacesxl',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
