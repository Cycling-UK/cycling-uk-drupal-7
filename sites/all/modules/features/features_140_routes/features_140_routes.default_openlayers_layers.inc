<?php

/**
 * @file
 * features_140_routes.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function features_140_routes_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'route_map_layer';
  $ol_layer->name = 'Route map layer';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'route_map_source',
    'style' => 'route_map_style',
    'visible' => 1,
  );
  $export['route_map_layer'] = $ol_layer;

  return $export;
}
