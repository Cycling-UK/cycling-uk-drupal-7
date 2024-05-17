<?php

/**
 * @file
 * features_140_routes_search.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function features_140_routes_search_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'route_search_layer';
  $ol_layer->name = 'Route search layer';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_route_search_openlayers_1',
    'style' => 'route_search_style',
    'visible' => 1,
  );
  $export['route_search_layer'] = $ol_layer;

  return $export;
}
