<?php

/**
 * @file
 * features_content_type_webform.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_content_type_webform_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['webform-client-block-63011'] = array(
    'cache' => -1,
    'css_class' => 'newsletter-signup',
    'custom' => 0,
    'delta' => 'client-block-63011',
    'module' => 'webform',
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
        'weight' => 55,
      ),
      'bbr' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bbr',
        'weight' => -91,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 55,
      ),
      'cyclinguk' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclinguk',
        'weight' => -91,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 55,
      ),
      'cyclingukxl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclingukxl',
        'weight' => 2,
      ),
      'granddraw' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'granddraw',
        'weight' => -91,
      ),
      'londonbikeshow' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'londonbikeshow',
        'weight' => 2,
      ),
      'maps' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'maps',
        'weight' => -91,
      ),
      'wfoc' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -91,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
