<?php

/**
 * @file
 * content_type_poi.default_openlayers_controls.inc
 */

/**
 * Implements hook_default_openlayers_controls().
 */
function content_type_poi_default_openlayers_controls() {
  $export = array();

  $ol_control = new stdClass();
  $ol_control->disabled = FALSE; /* Edit this to true to make a default ol_control disabled initially */
  $ol_control->api_version = 1;
  $ol_control->machine_name = 'poi_layer_switcher';
  $ol_control->name = 'POI - layer switcher';
  $ol_control->description = 'Points of Interest layer switcher.';
  $ol_control->factory_service = 'openlayers.Control:LayerSwitcher';
  $ol_control->options = array(
    'label' => 'Points of interest',
    'layers' => array(
      'poi_bed_and_breakfast' => 'poi_bed_and_breakfast',
      'poi_bike_shop' => 'poi_bike_shop',
      'poi_cafe_pub_restaurant' => 'poi_cafe_pub_restaurant',
      'poi_campsite' => 'poi_campsite',
      'poi_hostel' => 'poi_hostel',
      'poi_poi' => 'poi_poi',
      'poi_railway_station' => 'poi_railway_station',
      'poi_ranger_station' => 'poi_ranger_station',
    ),
    'multiselect' => 1,
    'layer_labels' => array(
      'poi_bed_and_breakfast' => 'Bed and breakfast',
      'poi_bike_shop' => 'Bike shop',
      'poi_cafe_pub_restaurant' => 'Cafe, pub or restaurant',
      'poi_campsite' => 'Campsite',
      'poi_hostel' => 'Hostel',
      'poi_poi' => 'Point of interest',
      'poi_railway_station' => 'Railway station',
      'poi_ranger_station' => 'Ranger station',
    ),
  );
  $export['poi_layer_switcher'] = $ol_control;

  return $export;
}
