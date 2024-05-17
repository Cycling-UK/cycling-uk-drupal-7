<?php

function listingv2_group_page() {

  libraries_load('openlayers4');
  libraries_load('jsts');
  libraries_load('mustache');
  $module_path = drupal_get_path('module', 'listingv2');
  
  drupal_add_js($module_path . '/js/listingv2_group.js');
  drupal_add_css($module_path . '/css/listingv2.css');
  drupal_add_js(array('listingv2' => array(
      'jplannerapikey' => variable_get('jplanner_apikey', NULL),
      'path' => $module_path,
    )), 'setting');

  return theme('listingv2_group_page', array('content' => NULL));
}

function listingv2_group_data() {
  
  if ($cache = cache_get(__FUNCTION__)) {
    $output = $cache->data;
  } else {
    
    $output = array();

    $view = views_get_view('groups_v2');
    $view->execute();
    foreach ($view->result as $res) {
      $row = [];
      $row['nid'] = $res->nid;
      $row['title'] = $res->node_title;
      $row['content_type'] = $res->node_type;
      $row['group_type'] = $res->field_field_group_type[0]['rendered']['#markup'];
      $row['url'] = $res->views_url_alias_node_alias;
      $row['centroid'] = _listingv2_parse_centroid($res->field_field_area_covered[0]['rendered']['#markup']);
      $row['geometry_wkt'] = _listingv2_parse_geom($res->field_field_area_covered_1[0]['raw']['geom']);
      $row['activities'] = _listingv2_parse_activities($res->field_field_group_activities);
      $output[] = $row;
    }
  
    cache_set(__FUNCTION__,$output);
  }

  drupal_json_output($output);
}


function listingv2_event_page() {

  libraries_load('openlayers4');
  libraries_load('jsts');
  libraries_load('mustache');
  $module_path = drupal_get_path('module', 'listingv2');
  
  drupal_add_js($module_path . '/js/listingv2_event.js');
  drupal_add_css($module_path . '/css/listingv2.css');
  drupal_add_js(array('listingv2' => array(
      'jplannerapikey' => variable_get('jplanner_apikey', NULL),
      'path' => $module_path,
    )), 'setting');

  return theme('listingv2_event_page', array('content' => NULL));
}


function listingv2_event_data() {
  
  if ($cache = cache_get(__FUNCTION__)) {
    $output = $cache->data;
  } else {
    
    $output = array();

    $view = views_get_view('events_v2');
    $view->execute();
    foreach ($view->result as $res) {
      $row = [];
      $row['nid'] = $res->nid;
      $row['title'] = $res->node_title;
      $row['content_type'] = ucfirst($res->node_type);
      $row['url'] = $res->views_url_alias_node_alias;
      $row['centroid'] = _listingv2_parse_centroid($res->field_field_location[0]['rendered']['#markup']);
      $row['geometry_wkt'] = _listingv2_parse_geom($res->field_field_location[0]['raw']['geom']);
      $row['date'] = _listingv2_parse_date($res->field_field_date[0]['rendered']['#markup']);
      $output[] = $row;
    }

    cache_set(__FUNCTION__,$output);
  }

  drupal_json_output($output);
}


function _listingv2_parse_activities($data) {
  $row = array();
  foreach ($data as $d) {
    $row[] = $d['rendered']['#markup'];
  }
  return $row;
}


function _listingv2_parse_geom($geom) {
  
  preg_match_all('/GEOMETRYCOLLECTION \((.*)\)/', $geom, $out);
  
  if (isset($out[1][0])) {
    return $out[1][0];
  }
  
  return 'POINT (0.1 0.1)';
}

function _listingv2_parse_centroid($point) {
  
  preg_match_all('/POINT \((.*)\)/', $point, $out);
  
  if (isset($out[1][0])) {
    return explode(' ', trim($out[1][0]));
  }
  
  return array(0,0);
  
}

function _listingv2_parse_date($date) {
  return strip_tags($date); //remove html markup
}