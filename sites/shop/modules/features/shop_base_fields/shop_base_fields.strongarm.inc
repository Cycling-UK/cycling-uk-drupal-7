<?php
/**
 * @file
 * shop_base_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function shop_base_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_care_fields_source_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_care_fields_source_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_payment_frequencies_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_payment_frequencies_pattern'] = $strongarm;

  return $export;
}
