<?php
/**
 * @file
 * features_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_article_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_article_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_campaign_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_campaign_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_cycling_type_pattern';
  $strongarm->value = '[term:name]';
  $export['pathauto_taxonomy_term_cycling_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_dfp_ad_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_dfp_ad_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_facility_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_facility_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_hero_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_hero_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_page_management_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_page_management_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_post_type_pattern';
  $strongarm->value = '[term:title]';
  $export['pathauto_taxonomy_term_post_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ride_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ride_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_taxonomy_vocabularies';
  $strongarm->value = array(
    66 => '66',
    11 => '11',
    51 => '51',
    56 => '56',
    41 => '41',
    31 => '31',
    16 => '16',
    101 => '101',
    26 => '26',
    71 => '71',
    81 => '81',
    76 => '76',
    36 => '36',
    46 => '46',
    1 => '1',
    6 => 0,
    86 => 0,
    91 => 0,
    21 => 0,
    96 => 0,
    106 => 0,
    61 => 0,
  );
  $export['tagadelic_taxonomy_vocabularies'] = $strongarm;

  return $export;
}
