<?php

/**
 * @file
 * features_openlayers.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function features_openlayers_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'basic_layer_osm_map';
  $ol_layer->name = 'Basic Layer OSM map';
  $ol_layer->description = 'basic OSM tiles map';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'source' => 'openlayers_source_osm',
    'visible' => 1,
    'style' => 'openlayers_style_default',
    'opacity' => 1,
  );
  $export['basic_layer_osm_map'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'basic_layer_vectors';
  $ol_layer->name = 'Basic Layer Vectors';
  $ol_layer->description = 'to display vectors';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'basic_source_vector',
    'visible' => 1,
    'style' => 'openlayers_style_select',
  );
  $export['basic_layer_vectors'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'event_layer_cluster';
  $ol_layer->name = 'Event Layer Cluster';
  $ol_layer->description = 'event layer ';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'event_source_cluster',
    'visible' => 1,
    'style' => 'event_style_cluster',
  );
  $export['event_layer_cluster'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'group_layer_cluster';
  $ol_layer->name = 'Group Layer Cluster';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'group_source_cluster',
    'visible' => 1,
    'style' => 'group_style_cluster',
  );
  $export['group_layer_cluster'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'groups';
  $ol_layer->name = 'groups';
  $ol_layer->description = 'tmp';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_source_osm',
    'visible' => 1,
  );
  $export['groups'] = $ol_layer;

  return $export;
}
