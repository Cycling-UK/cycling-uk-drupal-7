<?php

/**
 * @file
 * amp_integration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function amp_integration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-amp_dfp_advert_1'] = array(
    'cache' => -1,
    'css_class' => 'sponsored_advert',
    'custom' => 0,
    'machine_name' => 'amp_dfp_advert_1',
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
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -86,
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
        'weight' => -86,
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
        'weight' => -86,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 11,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -86,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -86,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -86,
      ),
    ),
    'title' => 'Sponsored advert',
    'visibility' => 0,
  );

  $export['block-amp_dfp_advert_2'] = array(
    'cache' => -1,
    'css_class' => 'sponsored_advert',
    'custom' => 0,
    'machine_name' => 'amp_dfp_advert_2',
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
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -85,
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
        'weight' => -85,
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
        'weight' => -85,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 12,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -85,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -85,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -85,
      ),
    ),
    'title' => 'Sponsored advert',
    'visibility' => 0,
  );

  $export['block-amp_dfp_advert_3'] = array(
    'cache' => -1,
    'css_class' => 'sponsored_advert',
    'custom' => 0,
    'machine_name' => 'amp_dfp_advert_3',
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
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -84,
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
        'weight' => -84,
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
        'weight' => -84,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 13,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -84,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -84,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -84,
      ),
    ),
    'title' => 'Sponsored advert',
    'visibility' => 0,
  );

  $export['block-amp_dfp_advert_4'] = array(
    'cache' => -1,
    'css_class' => 'sponsored_advert',
    'custom' => 0,
    'machine_name' => 'amp_dfp_advert_4',
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
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -83,
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
        'weight' => -83,
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
        'weight' => -83,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 14,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -83,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -83,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -83,
      ),
    ),
    'title' => 'Sponsored advert',
    'visibility' => 0,
  );

  $export['block-amp_dfp_advert_5'] = array(
    'cache' => -1,
    'css_class' => 'sponsored_advert',
    'custom' => 0,
    'machine_name' => 'amp_dfp_advert_5',
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
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -82,
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
        'weight' => -82,
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
        'weight' => -82,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 15,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -82,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -82,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -82,
      ),
    ),
    'title' => 'Sponsored advert',
    'visibility' => 0,
  );

  $export['menu-menu-amp-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-amp-menu',
    'module' => 'menu',
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
        'weight' => -77,
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
        'weight' => -77,
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
        'weight' => -77,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 20,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -77,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -77,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -77,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
