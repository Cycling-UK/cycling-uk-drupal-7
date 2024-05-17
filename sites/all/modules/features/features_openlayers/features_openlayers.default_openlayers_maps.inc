<?php

/**
 * @file
 * features_openlayers.default_openlayers_maps.inc
 */

/**
 * Implements hook_default_openlayers_maps().
 */
function features_openlayers_default_openlayers_maps() {
  $export = array();

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'basic_map';
  $ol_map->name = 'Basic Map';
  $ol_map->description = 'used for default view of openlayers(OSM) tiles + vectors';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'width' => 'auto',
    'height' => '400px',
    'contextualLinks' => 0,
    'view' => array(
      'center' => array(
        'lon' => -3.1640625,
        'lat' => 54.066267064136014,
      ),
      'rotation' => 0,
      'zoom' => 5,
      'minZoom' => 4,
      'maxZoom' => 17,
    ),
    'renderer' => 'canvas',
    'controls' => array(
      0 => 'openlayers_control_fullscreen',
      1 => 'openlayers_control_zoom',
    ),
    'interactions' => array(
      0 => 'openlayers_interaction_doubleclickzoom',
      1 => 'openlayers_interaction_dragpan',
      2 => 'openlayers_interaction_mousewheelzoom',
    ),
    'components' => array(
      0 => 'basic_component_zoom_to_source',
    ),
    'layers' => array(
      0 => 'basic_layer_osm_map',
      1 => 'basic_layer_vectors',
    ),
    'provideBlock' => 0,
  );
  $export['basic_map'] = $ol_map;

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'events_map';
  $ol_map->name = 'Events Map';
  $ol_map->description = 'display events';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'width' => 'auto',
    'height' => '800px',
    'contextualLinks' => 1,
    'view' => array(
      'center' => array(
        'lon' => -4.806023630173458,
        'lat' => 53.877319347567152,
      ),
      'rotation' => 0,
      'zoom' => 6,
      'minZoom' => 4,
      'maxZoom' => 11,
      'limit_extent' => 'projection',
      'extent' => '-24.40563300517346, 51.20569195788991, 1646814.4321207213, 7636153.1798083875',
    ),
    'renderer' => 'canvas',
    'layers' => array(
      0 => 'basic_layer_osm_map',
      1 => 'event_layer_cluster',
    ),
    'controls' => array(
      0 => 'openlayers_control_fullscreen',
      1 => 'openlayers_control_zoom',
    ),
    'interactions' => array(
      0 => 'openlayers_interaction_doubleclickzoom',
      1 => 'openlayers_interaction_pinchzoom',
      2 => 'openlayers_interaction_pointer',
      3 => 'openlayers_interaction_snap',
      4 => 'openlayers_interaction_dragpan',
      5 => 'openlayers_interaction_mousewheelzoom',
    ),
    'components' => array(
      0 => 'event_cluster_zoomtocluster',
      1 => 'openlayers_geofield_component_zoom_to_source_events',
      2 => 'event_cluster_popup',
    ),
    'provideBlock' => 1,
  );
  $export['events_map'] = $ol_map;

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'groups_map';
  $ol_map->name = 'Groups Map';
  $ol_map->description = 'display groups & affiliated centres';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'width' => 'auto',
    'height' => '800px',
    'contextualLinks' => 1,
    'view' => array(
      'center' => array(
        'lon' => -3.5793080530188375,
        'lat' => 54.83539377897597,
      ),
      'rotation' => 0,
      'zoom' => 5,
      'minZoom' => 3,
      'maxZoom' => 13,
    ),
    'renderer' => 'canvas',
    'layers' => array(
      0 => 'basic_layer_osm_map',
      1 => 'group_layer_cluster',
    ),
    'controls' => array(
      0 => 'openlayers_control_fullscreen',
      1 => 'openlayers_control_zoom',
    ),
    'interactions' => array(
      0 => 'openlayers_interaction_doubleclickzoom',
      1 => 'openlayers_interaction_pinchzoom',
      2 => 'openlayers_interaction_dragpan',
      3 => 'openlayers_interaction_mousewheelzoom',
      4 => 'openlayers_interaction_pointer',
      5 => 'openlayers_interaction_snap',
    ),
    'components' => array(
      0 => 'openlayers_geofield_component_zoom_to_source',
      1 => 'group_cluster_zoomtocluster',
      2 => 'group_cluster_popup',
    ),
    'provideBlock' => 1,
  );
  $export['groups_map'] = $ol_map;

  return $export;
}
