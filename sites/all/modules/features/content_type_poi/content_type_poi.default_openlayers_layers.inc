<?php

/**
 * @file
 * content_type_poi.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function content_type_poi_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_bed_and_breakfast';
  $ol_layer->name = 'POI - bed and breakfast';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_bed_breakfast',
    'visible' => 1,
    'style' => 'poi_bed_and_breakfast',
  );
  $export['poi_bed_and_breakfast'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_bike_shop';
  $ol_layer->name = 'POI - bike shop';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_bike_shop',
    'visible' => 1,
    'style' => 'poi_bike_shop',
  );
  $export['poi_bike_shop'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_cafe_pub_restaurant';
  $ol_layer->name = 'POI - cafe, pub or restaurant';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_cafe_pub_restaurant',
    'visible' => 1,
    'style' => 'poi_cafe_pub_restaurant',
  );
  $export['poi_cafe_pub_restaurant'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_campsite';
  $ol_layer->name = 'POI - campsite';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_campsite',
    'visible' => 1,
    'style' => 'poi_campsite',
  );
  $export['poi_campsite'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_hostel';
  $ol_layer->name = 'POI - hostel';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_hostel',
    'visible' => 1,
    'style' => 'poi_hostel',
  );
  $export['poi_hostel'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_poi';
  $ol_layer->name = 'POI - poi';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_poi',
    'visible' => 1,
    'style' => 'poi_poi',
  );
  $export['poi_poi'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_railway_station';
  $ol_layer->name = 'POI - railway station';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_railway_station',
    'visible' => 1,
    'style' => 'poi_railway_station',
  );
  $export['poi_railway_station'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'poi_ranger_station';
  $ol_layer->name = 'POI - ranger station';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_poi_openlayers_poi_ranger_station',
    'visible' => 1,
    'style' => 'poi_ranger_station',
  );
  $export['poi_ranger_station'] = $ol_layer;

  return $export;
}
