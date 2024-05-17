<?php

/**
 * @file
 * features_140_routes.default_openlayers_styles.inc
 */

/**
 * Implements hook_default_openlayers_styles().
 */
function features_140_routes_default_openlayers_styles() {
  $export = array();

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'route_map_style';
  $ol_style->name = 'Route map style';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Circle';
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
        'width' => 3.5,
      ),
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
        'width' => 3.5,
      ),
    ),
  );
  $export['route_map_style'] = $ol_style;

  return $export;
}
