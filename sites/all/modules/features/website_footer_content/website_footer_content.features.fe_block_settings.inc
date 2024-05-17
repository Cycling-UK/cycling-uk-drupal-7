<?php

/**
 * @file
 * website_footer_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function website_footer_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer'] = array(
    'cache' => -1,
    'css_class' => 'footer-text',
    'custom' => 0,
    'machine_name' => 'footer',
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
        'weight' => 56,
      ),
      'bbr' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bbr',
        'weight' => -89,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -92,
      ),
      'cyclescotlandxl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclescotlandxl',
        'weight' => -89,
      ),
      'cyclinguk' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclinguk',
        'weight' => -89,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 56,
      ),
      'cyclingukxl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclingukxl',
        'weight' => 3,
      ),
      'granddraw' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'granddraw',
        'weight' => -89,
      ),
      'londonbikeshow' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'londonbikeshow',
        'weight' => 3,
      ),
      'maps' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'maps',
        'weight' => -89,
      ),
      'pumpedup' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'pumpedup',
        'weight' => -89,
      ),
      'wfoc' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -89,
      ),
      'wfocxl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfocxl',
        'weight' => -89,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
