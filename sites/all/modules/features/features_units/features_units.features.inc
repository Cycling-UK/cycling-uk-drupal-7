<?php

/**
 * @file
 * features_units.features.inc
 */

/**
 * Implements hook_default_units_measure().
 */
function features_units_default_units_measure() {
  $items = array();
  $items['length'] = entity_import('units_measure', '{
    "measure" : "length",
    "label" : "Length",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_units_unit().
 */
function features_units_default_units_unit() {
  $items = array();
  $items['kilometers'] = entity_import('units_unit', '{
    "measure" : "length",
    "machine_name" : "kilometers",
    "label" : "Kilometers",
    "symbol" : "km",
    "description" : "",
    "factor" : "0.621371",
    "rdf_mapping" : []
  }');
  $items['miles'] = entity_import('units_unit', '{
    "measure" : "length",
    "machine_name" : "miles",
    "label" : "Miles",
    "symbol" : "miles",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
