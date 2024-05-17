<?php

/**
 * @file
 * features_140_routes.default_openlayers_sources.inc
 */

/**
 * Implements hook_default_openlayers_sources().
 */
function features_140_routes_default_openlayers_sources() {
  $export = array();

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'route_map_source';
  $ol_source->name = 'Route map source';
  $ol_source->description = '';
  $ol_source->factory_service = 'openlayers.Source:Vector';
  $ol_source->options = array();
  $export['route_map_source'] = $ol_source;

  return $export;
}
