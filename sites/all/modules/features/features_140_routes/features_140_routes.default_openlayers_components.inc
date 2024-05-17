<?php

/**
 * @file
 * features_140_routes.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function features_140_routes_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'route_map_zoom_to_source';
  $ol_component->name = 'Route Map Zoom to Source';
  $ol_component->description = 'basic zoom';
  $ol_component->factory_service = 'openlayers.Component:ZoomToSource';
  $ol_component->options = array(
    'animations' => array(
      'pan' => 2000,
      'zoom' => 2000,
    ),
    'enableAnimations' => 0,
    'max_zoom' => 14,
    'process_once' => 0,
    'source' => array(
      'route_map_source' => 'route_map_source',
    ),
    'zoom' => 'auto',
  );
  $export['route_map_zoom_to_source'] = $ol_component;

  return $export;
}
