<?php

/**
 * @file
 * features_140_routes_search.default_openlayers_maps.inc
 */

/**
 * Implements hook_default_openlayers_maps().
 */
function features_140_routes_search_default_openlayers_maps() {
  $export = array();

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'openlayers_geofield_route_search_map';
  $ol_map->name = 'Route search map';
  $ol_map->description = '';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'components' => array(
      0 => 'route_zoom_to_source',
      1 => 'route_popup',
    ),
    'contextualLinks' => 1,
    'controls' => array(
      0 => 'openlayers_control_zoom',
      1 => 'openlayers_control_fullscreen',
      2 => 'openlayers_control_attribution',
    ),
    'height' => '640px',
    'interactions' => array(
      0 => 'openlayers_interaction_doubleclickzoom',
      1 => 'openlayers_interaction_dragpan',
      2 => 'openlayers_interaction_mousewheelzoom',
      3 => 'openlayers_interaction_pinchzoom',
      4 => 'openlayers_interaction_pointer',
      5 => 'openlayers_interaction_snap',
    ),
    'layers' => array(
      0 => 'basic_layer_osm_map',
      1 => 'route_search_layer',
    ),
    'provideBlock' => 1,
    'provideIframe' => 1,
    'renderer' => 'canvas',
    'view' => array(
      'center' => array(
        'lat' => 53.585255394012989,
        'lon' => -364.87348798298001,
      ),
      'maxZoom' => 11,
      'minZoom' => 4,
      'rotation' => 0,
      'zoom' => 6,
    ),
    'width' => 'auto',
  );
  $export['openlayers_geofield_route_search_map'] = $ol_map;

  return $export;
}
