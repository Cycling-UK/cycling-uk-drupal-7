<?php

/**
 * @file
 * features_openlayers.default_openlayers_sources.inc
 */

/**
 * Implements hook_default_openlayers_sources().
 */
function features_openlayers_default_openlayers_sources() {
  $export = array();

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'basic_source_vector';
  $ol_source->name = 'Basic Source Vector';
  $ol_source->description = '';
  $ol_source->factory_service = 'openlayers.Source:Vector';
  $ol_source->options = array();
  $export['basic_source_vector'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'event_source_cluster';
  $ol_source->name = 'Event Source Cluster';
  $ol_source->description = '';
  $ol_source->factory_service = 'openlayers.Source:Cluster';
  $ol_source->options = array(
    'source' => 'openlayers_views_source_events_events_ol_data',
    'distance' => 50,
  );
  $export['event_source_cluster'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'group_source_cluster';
  $ol_source->name = 'Group Source Cluster';
  $ol_source->description = '';
  $ol_source->factory_service = 'openlayers.Source:Cluster';
  $ol_source->options = array(
    'source' => 'openlayers_views_source_groups_groups_ol_data',
    'distance' => 50,
  );
  $export['group_source_cluster'] = $ol_source;

  return $export;
}
