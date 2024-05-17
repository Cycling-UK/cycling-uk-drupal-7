<?php

/**
 * @file
 * features_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_blocks_default_fe_block_settings() {
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
      'wfoc' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -89,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-front_page_accordion'] = array(
    'cache' => -1,
    'css_class' => 'accordion front_page wide-container',
    'custom' => 0,
    'machine_name' => 'front_page_accordion',
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
        'weight' => -23,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -27,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -23,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => -27,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => -23,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => -27,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 88,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -27,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -27,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-join_today_banner'] = array(
    'cache' => -1,
    'css_class' => 'join-today-banner wide-container',
    'custom' => 0,
    'machine_name' => 'join_today_banner',
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
        'weight' => -18,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -16,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -18,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => -16,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => -18,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => -16,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 103,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -16,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -16,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-social_icons'] = array(
    'cache' => -1,
    'css_class' => 'social-icons',
    'custom' => 0,
    'machine_name' => 'social_icons',
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
        'weight' => 21,
      ),
      'bbr' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bbr',
        'weight' => -90,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 21,
      ),
      'cyclinguk' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclinguk',
        'weight' => -90,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 21,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => 4,
      ),
      'granddraw' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'granddraw',
        'weight' => -90,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => 1,
      ),
      'maps' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'maps',
        'weight' => -90,
      ),
      'wfoc' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -90,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-top_menu_icons'] = array(
    'cache' => -1,
    'css_class' => 'top-menu-block',
    'custom' => 0,
    'machine_name' => 'top_menu_icons',
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
        'weight' => 28,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => 33,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 28,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 33,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 28,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => 33,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 160,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => 33,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => 33,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => 33,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-top-menu'] = array(
    'cache' => -1,
    'css_class' => 'top-menu',
    'custom' => 0,
    'delta' => 'menu-top-menu',
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
        'weight' => 26,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => 32,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => 26,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 32,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 26,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => 32,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 159,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => 32,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => 32,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => 32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['scroll_button-scroll_button'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scroll_button',
    'module' => 'scroll_button',
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
        'weight' => 15,
      ),
      'bbr' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bbr',
        'weight' => -92,
      ),
      'bikeweek' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bikeweek',
        'weight' => -93,
      ),
      'cyclinguk' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclinguk',
        'weight' => -92,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 15,
      ),
      'cyclingukxl' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cyclingukxl',
        'weight' => 0,
      ),
      'granddraw' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'granddraw',
        'weight' => -92,
      ),
      'londonbikeshow' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'londonbikeshow',
        'weight' => 0,
      ),
      'maps' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'maps',
        'weight' => -92,
      ),
      'wfoc' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -92,
      ),
    ),
    'title' => 'Back to top',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'css_class' => 'top-menu top-menu-block',
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
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
        'weight' => 27,
      ),
      'bbr' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'bbr',
        'weight' => -92,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -94,
      ),
      'cyclinguk' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'cyclinguk',
        'weight' => -92,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => 27,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => -92,
      ),
      'granddraw' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'granddraw',
        'weight' => -92,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => 1,
      ),
      'maps' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'maps',
        'weight' => -92,
      ),
      'wfoc' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'wfoc',
        'weight' => -92,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
