<?php

/**
 * @file
 * features_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['apachesolr_search-mlt-001'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mlt-001',
    'module' => 'apachesolr_search',
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
        'weight' => -59,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -72,
      ),
      'bbrxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbrxl',
        'weight' => 16,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -59,
      ),
      'bikeweekxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweekxl',
        'weight' => 16,
      ),
      'cyclescotlandxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclescotlandxl',
        'weight' => -72,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 16,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => -59,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => -72,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 25,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -72,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -72,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -72,
      ),
      'wfocxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfocxl',
        'weight' => -72,
      ),
      'workplaces_slim' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplaces_slim',
        'weight' => 16,
      ),
      'workplacesxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplacesxl',
        'weight' => 16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['apachesolr_search-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'apachesolr_search',
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
        'weight' => -60,
      ),
      'bbr' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbr',
        'weight' => -73,
      ),
      'bbrxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bbrxl',
        'weight' => 15,
      ),
      'bikeweek' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweek',
        'weight' => -60,
      ),
      'bikeweekxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bikeweekxl',
        'weight' => 15,
      ),
      'cyclescotlandxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclescotlandxl',
        'weight' => -73,
      ),
      'cyclinguk' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclinguk',
        'weight' => 15,
      ),
      'cyclingukamp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukamp',
        'weight' => -60,
      ),
      'cyclingukxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cyclingukxl',
        'weight' => -73,
      ),
      'granddraw' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'granddraw',
        'weight' => 24,
      ),
      'londonbikeshow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'londonbikeshow',
        'weight' => -73,
      ),
      'maps' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'maps',
        'weight' => -73,
      ),
      'wfoc' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfoc',
        'weight' => -73,
      ),
      'wfocxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wfocxl',
        'weight' => -73,
      ),
      'workplaces_slim' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplaces_slim',
        'weight' => 15,
      ),
      'workplacesxl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplacesxl',
        'weight' => 15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-blank_block'] = array(
    'cache' => -1,
    'css_class' => 'blank-block',
    'custom' => 0,
    'machine_name' => 'blank_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'site-search',
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
        'region' => 'sidebar_second',
        'status' => 1,
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
      'workplaces_slim' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'workplaces_slim',
        'weight' => 0,
      ),
      'workplacesxl' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'workplacesxl',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['facetapi-2oSZEo4iHzPoi0Verf9Tmw1QcN1m121f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2oSZEo4iHzPoi0Verf9Tmw1QcN1m121f',
    'module' => 'facetapi',
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
      'workplaces_slim' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'workplaces_slim',
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
