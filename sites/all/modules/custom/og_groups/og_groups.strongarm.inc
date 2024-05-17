<?php

/**
 * @file
 * og_groups.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function og_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_group';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_group_child_page';
  $strongarm->value = 'edit-xmlsitemap';
  $export['additional_settings__active_tab_group_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_group_post';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_group_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_group';
  $strongarm->value = 0;
  $export['clone_reset_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_group_child_page';
  $strongarm->value = 0;
  $export['clone_reset_group_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_group_post';
  $strongarm->value = 0;
  $export['clone_reset_group_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_apikey_google';
  $strongarm->value = 'AIzaSyBAiqJN4H7JElPsVzbGl4GSf2fa_HXcTtk';
  $export['geocoder_apikey_google'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_google_auth_method';
  $strongarm->value = '2';
  $export['geocoder_google_auth_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_google_client_id';
  $strongarm->value = 'cycling-uk-websi-1487678524446';
  $export['geocoder_google_client_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_google_delay';
  $strongarm->value = '0';
  $export['geocoder_google_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geocoder_google_private_key';
  $strongarm->value = 'AIzaSyDuprMy4Y-HgL5JmGTEtVsbzjnYU-jR1zU ';
  $export['geocoder_google_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_map_google_apikey';
  $strongarm->value = 'AIzaSyBAiqJN4H7JElPsVzbGl4GSf2fa_HXcTtk';
  $export['geofield_map_google_apikey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_map_google_auth_method';
  $strongarm->value = '1';
  $export['geofield_map_google_auth_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_map_google_client_id';
  $strongarm->value = '';
  $export['geofield_map_google_client_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geofield_map_google_private_key';
  $strongarm->value = '';
  $export['geofield_map_google_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_api_key';
  $strongarm->value = 'AIzaSyBAiqJN4H7JElPsVzbGl4GSf2fa_HXcTtk';
  $export['gmap_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_default';
  $strongarm->value = array(
    'width' => '100%',
    'height' => '450px',
    'latlong' => '54.422721528831744,-4.077971734874257',
    'zoom' => '6',
    'maxzoom' => '14',
    'styles' => array(
      'line_default' => array(
        0 => '0000ff',
        1 => '5',
        2 => '45',
        3 => '',
        4 => '',
      ),
      'poly_default' => array(
        0 => '000000',
        1 => '3',
        2 => '25',
        3 => 'ff0000',
        4 => '45',
      ),
      'highlight_color' => 'ff0000',
    ),
    'controltype' => 'Small',
    'pancontrol' => 1,
    'streetviewcontrol' => 0,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 0,
      'Hybrid' => 0,
      'Physical' => 1,
    ),
    'behavior' => array(
      'locpick' => FALSE,
      'nodrag' => 0,
      'nokeyboard' => 1,
      'nomousezoom' => 0,
      'nocontzoom' => 0,
      'autozoom' => 0,
      'dynmarkers' => 0,
      'overview' => 0,
      'collapsehack' => 0,
      'scale' => 0,
      'extramarkerevents' => FALSE,
      'clickableshapes' => FALSE,
      'highlight' => 0,
    ),
    'markermode' => '0',
    'line_colors' => array(
      0 => '#00cc00',
      1 => '#ff0000',
      2 => '#0000ff',
    ),
  );
  $export['gmap_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_markermanager';
  $strongarm->value = array(
    'markermanager' => array(
      'filename' => 'markermanager_packed.js',
      'borderPadding' => '256',
      'maxZoom' => '4',
      'trackMarkers' => 0,
      'markerMinZoom' => '4',
      'markerMaxZoom' => '0',
    ),
    'markerclusterer' => array(
      'filename' => 'markerclusterer_packed.js',
      'gridSize' => 60,
      'maxZoom' => 17,
      'styles' => array(),
    ),
    'clusterer' => array(
      'filename' => 'Clusterer2.js',
      'marker' => 'cluster',
      'max_nocluster' => '150',
      'cluster_min' => '5',
      'max_lines' => '10',
      'popup_mode' => 'orig',
    ),
    'clustermarker' => array(
      'filename' => 'ClusterMarker.js',
      'borderPadding' => '256',
      'clusteringEnabled' => 1,
      'clusterMarkerIcon' => '',
      'clusterMarkerTitle' => '',
      'fitMapMaxZoom' => '0',
      'intersectPadding' => '0',
    ),
  );
  $export['gmap_markermanager'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_custom_dir';
  $strongarm->value = 'no value';
  $export['gmap_marker_custom_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_file';
  $strongarm->value = '142441';
  $export['gmap_marker_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_mm_type';
  $strongarm->value = 'gmap';
  $export['gmap_mm_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_ride_section_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_ride_section_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_group';
  $strongarm->value = array(
    'full' => 'Submitted by [node:author] on [node:created]',
    'teaser' => 'Submitted by [node:author] on [node:created]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'related' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_group_child_page';
  $strongarm->value = array(
    'full' => 'Submitted by [node:author] on [node:created]',
    'teaser' => 'Submitted by [node:author] on [node:created]',
    'rss' => 'Submitted by [node:author] on [node:created]',
    'search_index' => 'Submitted by [node:author] on [node:created]',
    'search_result' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'Submitted by [node:author] on [node:created]',
    'full_content_2' => 'Submitted by [node:author] on [node:created]',
    'child_page' => 'Submitted by [node:author] on [node:created]',
    'related' => 'Submitted by [node:author] on [node:created]',
    'revision' => 'Submitted by [node:author] on [node:created]',
  );
  $export['submitted_by_group_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_group_post';
  $strongarm->value = array(
    'full' => '<span>By</span> [node:author]',
    'teaser' => 'By [node:author]',
    'rss' => 'By [node:author]',
    'search_index' => 'By [node:author]',
    'search_result' => 'By [node:author]',
    'amp' => 'Submitted by [node:author] on [node:created]',
    'diff_standard' => 'Submitted by [node:author] on [node:created]',
    'token' => 'By [node:author]',
    'full_content_2' => 'By [node:author]',
    'child_page' => 'By [node:author]',
    'related' => 'By [node:author]',
    'revision' => 'By [node:author]',
  );
  $export['submitted_by_group_post'] = $strongarm;

  return $export;
}
