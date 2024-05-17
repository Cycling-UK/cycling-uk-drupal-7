<?php

/**
 * @file
 * features_openlayers.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function features_openlayers_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'basic_component_zoom_to_source';
  $ol_component->name = 'Basic Component zoom to source';
  $ol_component->description = 'basic zoom';
  $ol_component->factory_service = 'openlayers.Component:ZoomToSource';
  $ol_component->options = array(
    'source' => array(
      'openlayers_geofield_source_vector' => 'openlayers_geofield_source_vector',
    ),
    'zoom' => 'auto',
    'max_zoom' => 14,
    'process_once' => 0,
    'enableAnimations' => 0,
    'animations' => array(
      'pan' => 2000,
      'zoom' => 2000,
    ),
  );
  $export['basic_component_zoom_to_source'] = $ol_component;

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'event_cluster_popup';
  $ol_component->name = 'Event Cluster Popup';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'frontend_layers' => array(
      'event_layer_cluster' => 'event_layer_cluster',
      'clone_of_event_layer_cluster' => 'clone_of_event_layer_cluster',
      'event_layer_cluster_bike_week' => 'event_layer_cluster_bike_week',
      'event_layer_cluster_trivets3' => 'event_layer_cluster_trivets3',
      'event_layer_cluster_wfoc' => 'event_layer_cluster_wfoc',
    ),
    'closer' => 1,
    'positioning' => 'top-center',
    'autoPan' => 0,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
  );
  $export['event_cluster_popup'] = $ol_component;

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'event_cluster_zoomtocluster';
  $ol_component->name = 'Event Cluster ZoomToCluster';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:ZoomToCluster';
  $ol_component->options = array(
    'source' => array(
      'event_source_cluster' => 'event_source_cluster',
    ),
    'zoom' => 12,
    'max_zoom' => 10,
    'process_once' => 0,
    'enableAnimations' => 1,
    'animations' => array(
      'pan' => 500,
      'zoom' => 500,
    ),
  );
  $export['event_cluster_zoomtocluster'] = $ol_component;

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'group_cluster_popup';
  $ol_component->name = 'Group Cluster Popup';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'frontend_layers' => array(
      'group_layer_cluster' => 'group_layer_cluster',
    ),
    'closer' => 1,
    'positioning' => 'top-center',
    'autoPan' => 0,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
  );
  $export['group_cluster_popup'] = $ol_component;

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'group_cluster_zoomtocluster';
  $ol_component->name = 'Group Cluster ZoomToCluster';
  $ol_component->description = '';
  $ol_component->factory_service = 'openlayers.Component:ZoomToCluster';
  $ol_component->options = array(
    'source' => array(
      'group_source_cluster' => 'group_source_cluster',
    ),
  );
  $export['group_cluster_zoomtocluster'] = $ol_component;

  return $export;
}
