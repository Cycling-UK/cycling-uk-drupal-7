<?php

/**
 * @file
 * content_type_poi.default_openlayers_styles.inc
 */

/**
 * Implements hook_default_openlayers_styles().
 */
function content_type_poi_default_openlayers_styles() {
  $export = array();

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_bed_and_breakfast';
  $ol_style->name = 'POI - bed and breakfast';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-bed-breakfast.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_bed_and_breakfast'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_bike_shop';
  $ol_style->name = 'POI - bike shop';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-bike-shop.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_bike_shop'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_cafe_pub_restaurant';
  $ol_style->name = 'POI - cafe, pub or restaurant';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-cafe-pub-restaurant.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_cafe_pub_restaurant'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_campsite';
  $ol_style->name = 'POI - campsite';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-campsite.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_campsite'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_hostel';
  $ol_style->name = 'POI - hostel';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-hostel.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_hostel'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_poi';
  $ol_style->name = 'POI - poi';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-point-of-interest.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_poi'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_railway_station';
  $ol_style->name = 'POI - railway station';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-railway-station.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_railway_station'] = $ol_style;

  $ol_style = new stdClass();
  $ol_style->disabled = FALSE; /* Edit this to true to make a default ol_style disabled initially */
  $ol_style->api_version = 1;
  $ol_style->machine_name = 'poi_ranger_station';
  $ol_style->name = 'POI - ranger station';
  $ol_style->description = '';
  $ol_style->factory_service = 'openlayers.Style:Icon';
  $ol_style->options = array(
    'path' => '/sites/all/themes/cyclinguk/images/map/map-pin-ranger-station.png',
    'scale' => 0.69999999999999996,
    'anchor' => array(
      0 => 0.5,
      1 => 0.5,
    ),
  );
  $export['poi_ranger_station'] = $ol_style;

  return $export;
}
