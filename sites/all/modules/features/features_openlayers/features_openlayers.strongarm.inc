<?php

/**
 * @file
 * features_openlayers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_openlayers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_config';
  $strongarm->value = array(
    'openlayers' => array(
      'variant' => 'cdnjs:ol3:4.3.4',
      'debug' => 0,
    ),
  );
  $export['openlayers_config'] = $strongarm;

  return $export;
}
