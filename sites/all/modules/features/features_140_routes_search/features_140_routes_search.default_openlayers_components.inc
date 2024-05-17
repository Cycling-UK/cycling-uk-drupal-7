<?php

/**
 * @file
 * features_140_routes_search.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function features_140_routes_search_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'route_popup';
  $ol_component->name = 'Route popup';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'autoPan' => 0,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
    'closer' => 1,
    'frontend_layers' => array(
      'route_search_layer' => 'route_search_layer',
    ),
    'positioning' => 'top-left',
  );
  $export['route_popup'] = $ol_component;

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'route_zoom_to_source';
  $ol_component->name = 'Route zoom to source';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:ZoomToSource';
  $ol_component->options = array(
    'animations' => array(
      'pan' => 500,
      'zoom' => 500,
    ),
    'enableAnimations' => 1,
    'max_zoom' => 14,
    'process_once' => 0,
    'source' => array(
      'openlayers_views_source_route_search_openlayers_1' => 'openlayers_views_source_route_search_openlayers_1',
    ),
    'zoom' => 'auto',
  );
  $export['route_zoom_to_source'] = $ol_component;

  return $export;
}
