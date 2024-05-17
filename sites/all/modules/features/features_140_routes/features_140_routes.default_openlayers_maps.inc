<?php

/**
 * @file
 * features_140_routes.default_openlayers_maps.inc
 */

/**
 * Implements hook_default_openlayers_maps().
 */
function features_140_routes_default_openlayers_maps() {
  $export = array();

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'route_map';
  $ol_map->name = 'Route Map';
  $ol_map->description = '';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'components' => array(
      0 => 'route_map_zoom_to_source',
    ),
    'contextualLinks' => 1,
    'controls' => array(
      0 => 'openlayers_control_zoom',
      1 => 'openlayers_control_fullscreen',
      2 => 'openlayers_control_scaleline',
      3 => 'openlayers_control_zoomslider',
      4 => 'openlayers_control_attribution',
    ),
    'height' => '300px',
    'interactions' => array(
      0 => 'openlayers_interaction_doubleclickzoom',
      1 => 'openlayers_interaction_dragpan',
    ),
    'layers' => array(
      0 => 'openlayers_layer_tile_osm',
      1 => 'route_map_layer',
    ),
    'provideBlock' => 1,
    'provideIframe' => 1,
    'view' => array(
      'center' => array(
        'lat' => 0,
        'lon' => 0,
      ),
      'rotation' => 0,
      'zoom' => 2,
    ),
    'width' => 'auto',
  );
  $export['route_map'] = $ol_map;

  return $export;
}
