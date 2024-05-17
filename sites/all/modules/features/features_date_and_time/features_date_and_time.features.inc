<?php

/**
 * @file
 * features_date_and_time.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_date_and_time_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function features_date_and_time_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['Y'] = 'Y';
  $custom_date_formats['g:ia'] = 'g:ia';
  $custom_date_formats['j'] = 'j';
  $custom_date_formats['j F'] = 'j F';
  $custom_date_formats['j F Y'] = 'j F Y';
  $custom_date_formats['l'] = 'l';
  $custom_date_formats['l j F Y'] = 'l j F Y';
  $custom_date_formats['l, j F Y'] = 'l, j F Y';
  $custom_date_formats['l, j F Y H:i'] = 'l, j F Y H:i';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function features_date_and_time_date_format_types() {
  $format_types = array();
  // Exported date format type: day_month
  $format_types['day_month'] = 'Day month';
  // Exported date format type: day_name
  $format_types['day_name'] = 'Day name';
  // Exported date format type: day_number
  $format_types['day_number'] = 'Day number';
  // Exported date format type: event
  $format_types['event'] = 'Event';
  // Exported date format type: time
  $format_types['time'] = 'Time';
  // Exported date format type: year
  $format_types['year'] = 'Year';
  return $format_types;
}
