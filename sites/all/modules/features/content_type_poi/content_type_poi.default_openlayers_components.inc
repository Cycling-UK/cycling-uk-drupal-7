<?php

/**
 * @file
 * content_type_poi.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function content_type_poi_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'poi_popup';
  $ol_component->name = 'POI popup';
  $ol_component->description = 'Popup bubble for POI to display the title.';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'frontend_layers' => array(
      'poi_bed_and_breakfast' => 'poi_bed_and_breakfast',
      'poi_bike_shop' => 'poi_bike_shop',
      'poi_cafe_pub_restaurant' => 'poi_cafe_pub_restaurant',
      'poi_campsite' => 'poi_campsite',
      'poi_hostel' => 'poi_hostel',
      'poi_poi' => 'poi_poi',
      'poi_railway_station' => 'poi_railway_station',
      'poi_ranger_station' => 'poi_ranger_station',
    ),
    'closer' => 1,
    'positioning' => 'top-left',
    'autoPan' => 0,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
  );
  $export['poi_popup'] = $ol_component;

  return $export;
}
