<?php

/**
 * @file
 * features_140_routes_search.default_openlayers_styles.inc
 */

/**
 * Implements hook_default_openlayers_styles().
 */
function features_140_routes_search_default_openlayers_styles() {
  $export = array();

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'route_search_style';
  $ol_style->name = 'Route search style';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'LineString' => array(
      'enabled' => 1,
      'fill' => array(
        'color' => '51,153,204,1',
      ),
      'image' => array(
        'fill' => array(
          'color' => '255,255,255,0.4',
        ),
        'radius' => 5,
        'stroke' => array(
          'color' => '51,153,204,1',
          'lineDash' => '0,0',
          'width' => 2.25,
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'lineDash' => '0,0',
        'width' => 2.25,
      ),
    ),
    'anchor' => array(
      0 => 0.5,
      1 => 1,
    ),
    'default' => array(
      'fill' => array(
        'color' => '51,153,204,1',
      ),
      'image' => array(
        'fill' => array(
          'color' => '255,255,255,0.4',
        ),
        'radius' => 5,
        'stroke' => array(
          'color' => '51,153,204,1',
          'lineDash' => '0,0',
          'width' => 1.25,
        ),
      ),
      'stroke' => array(
        'color' => '51,153,204,1',
        'lineDash' => '0,0',
        'width' => 1.25,
      ),
    ),
    'path' => '/sites/default/files/images/maps/map-pin-blue.png',
    'scale' => 0.5,
  );
  $export['route_search_style'] = $ol_style;

  return $export;
}
