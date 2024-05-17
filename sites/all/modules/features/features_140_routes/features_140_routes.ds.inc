<?php

/**
 * @file
 * features_140_routes.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_140_routes_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|route|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'route';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '22',
    ),
    'post_date' => array(
      'format' => 'ds_post_date_day_month',
      'label' => 'hidden',
      'weight' => '3',
    ),
    'related_posts' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '21',
    ),
    'tags' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '8',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '4',
    ),
  );
  $export['node|route|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|route|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'route';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'related_posts' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '14',
    ),
    'share_buttons' => array(
      'format' => 'default',
      'label' => 'hidden',
      'weight' => '5',
    ),
    'title' => array(
      'format' => 'default',
      'formatter_settings' => array(
        'class' => '',
        'link' => '0',
        'wrapper' => 'h1',
      ),
      'label' => 'hidden',
      'weight' => '1',
    ),
  );
  $export['node|route|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_140_routes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|route|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'route';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'topleft',
      'comments' => 'bottomleft',
      'field_author' => 'topright',
      'field_bike_type' => 'topright',
      'field_circular_route' => 'topright',
      'field_finish_address' => 'topright',
      'field_gpx_files' => 'topleft',
      'field_gpx_map' => 'top',
      'field_hero' => 'top',
      'field_link_to_articles' => 'topright',
      'field_link_to_author' => 'topright',
      'field_related_county_guides' => 'topright',
      'field_ride_level' => 'topright',
      'field_route_features' => 'topright',
      'field_route_length' => 'topright',
      'field_route_length_kilometres' => 'topright',
      'field_start_address' => 'topright',
      'post_date' => 'topleft',
      'related_posts' => 'central',
      'submitted_by' => 'topleft',
      'tags' => 'topleft',
      'title' => 'topleft',
    ),
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'regions' => array(
      'bottomleft' => array(
        21 => 'comments',
      ),
      'central' => array(
        20 => 'related_posts',
      ),
      'top' => array(
        0 => 'field_hero',
        1 => 'field_gpx_map',
      ),
      'topleft' => array(
        2 => 'submitted_by',
        3 => 'post_date',
        4 => 'title',
        5 => 'body',
        6 => 'field_gpx_files',
        7 => 'tags',
      ),
      'topright' => array(
        8 => 'field_route_length',
        9 => 'field_route_length_kilometres',
        10 => 'field_ride_level',
        11 => 'field_bike_type',
        12 => 'field_circular_route',
        13 => 'field_route_features',
        14 => 'field_author',
        15 => 'field_link_to_author',
        16 => 'field_link_to_articles',
        17 => 'field_related_county_guides',
        18 => 'field_start_address',
        19 => 'field_finish_address',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'central' => 'div',
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
    ),
  );
  $export['node|route|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|route|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'route';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'classes' => array(),
    'fields' => array(
      'body' => 'topleft',
      'field_author' => 'topleft',
      'field_bike_type' => 'topright',
      'field_gpx_files' => 'topright',
      'field_gpx_map' => 'top',
      'field_link_to_articles' => 'topright',
      'field_link_to_author' => 'topright',
      'field_related_county_guides' => 'topright',
      'field_ride_level' => 'topright',
      'field_route_length' => 'topright',
      'field_route_length_kilometres' => 'topright',
      'field_tags' => 'topleft',
      'related_posts' => 'central',
      'share_buttons' => 'topleft',
      'title' => 'topleft',
    ),
    'hide_page_title' => '0',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_disable_css' => FALSE,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_wrapper' => 'div',
    'page_option_title' => '',
    'regions' => array(
      'central' => array(
        14 => 'related_posts',
      ),
      'top' => array(
        0 => 'field_gpx_map',
      ),
      'topleft' => array(
        1 => 'title',
        2 => 'field_author',
        3 => 'body',
        4 => 'field_tags',
        5 => 'share_buttons',
      ),
      'topright' => array(
        6 => 'field_gpx_files',
        7 => 'field_route_length',
        8 => 'field_route_length_kilometres',
        9 => 'field_ride_level',
        10 => 'field_bike_type',
        11 => 'field_link_to_author',
        12 => 'field_link_to_articles',
        13 => 'field_related_county_guides',
      ),
    ),
    'wrappers' => array(
      'bottom' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'central' => 'div',
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
    ),
  );
  $export['node|route|full'] = $ds_layout;

  return $export;
}
