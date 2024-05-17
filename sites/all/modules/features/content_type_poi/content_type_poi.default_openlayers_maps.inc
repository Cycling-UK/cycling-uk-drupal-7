<?php

/**
 * @file
 * content_type_poi.default_openlayers_maps.inc
 */

/**
 * Implements hook_default_openlayers_maps().
 */
function content_type_poi_default_openlayers_maps() {
  $export = array();

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'poi';
  $ol_map->name = 'POI';
  $ol_map->description = 'Points of Interest map.';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'width' => 'auto',
    'height' => '600px',
    'provideBlock' => 1,
    'contextualLinks' => 1,
    'view' => array(
      'center' => array(
        'lon' => 358.21958466176432,
        'lat' => 53.272956601941672,
      ),
      'rotation' => 0,
      'zoom' => 6,
      'minZoom' => 0,
      'maxZoom' => 0,
    ),
    'renderer' => 'canvas',
    'layers' => array(
      0 => 'basic_layer_osm_map',
      1 => 'poi_bed_and_breakfast',
      2 => 'poi_bike_shop',
      3 => 'poi_cafe_pub_restaurant',
      4 => 'poi_campsite',
      5 => 'poi_hostel',
      6 => 'poi_poi',
      7 => 'poi_railway_station',
      8 => 'poi_ranger_station',
    ),
    'controls' => array(
      0 => 'openlayers_control_fullscreen',
      1 => 'openlayers_control_scaleline',
      2 => 'openlayers_control_zoom',
      3 => 'poi_layer_switcher',
    ),
    'interactions' => array(
      0 => 'openlayers_interaction_dragpan',
      1 => 'openlayers_interaction_pinchzoom',
      2 => 'openlayers_interaction_pointer',
      3 => 'openlayers_interaction_snap',
    ),
    'components' => array(
      0 => 'poi_popup',
    ),
  );
  $export['poi'] = $ol_map;

  return $export;
}
