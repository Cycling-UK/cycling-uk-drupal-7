<?php

/**
 * @file
 * content_type_poi.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_poi_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'poi';
  $view->description = 'View to extract Openlayers data for Points of Interest.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'POI';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_source_vector';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_gpx_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'title',
  );
  $handler->display->display_options['style_options']['attributes'] = array(
    'display' => array(
      'title' => 'title',
      'field_gpx_map' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: GPX map */
  $handler->display->display_options['fields']['field_gpx_map']['id'] = 'field_gpx_map';
  $handler->display->display_options['fields']['field_gpx_map']['table'] = 'field_data_field_gpx_map';
  $handler->display->display_options['fields']['field_gpx_map']['field'] = 'field_gpx_map';
  $handler->display->display_options['fields']['field_gpx_map']['label'] = '';
  $handler->display->display_options['fields']['field_gpx_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gpx_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_gpx_map']['settings'] = array(
    'data' => 'full',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_gpx_map']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17796 => '17796',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - bed and breakfast */
  $handler = $view->new_display('openlayers', 'Openlayers data - bed and breakfast', 'openlayers_poi_bed_breakfast');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Openlayers data - bike shop */
  $handler = $view->new_display('openlayers', 'Openlayers data - bike shop', 'openlayers_poi_bike_shop');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17781 => '17781',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - cafe, pub or restaurant */
  $handler = $view->new_display('openlayers', 'Openlayers data - cafe, pub or restaurant', 'openlayers_poi_cafe_pub_restaurant');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    16176 => '16176',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - campsite */
  $handler = $view->new_display('openlayers', 'Openlayers data - campsite', 'openlayers_poi_campsite');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17786 => '17786',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - hostel */
  $handler = $view->new_display('openlayers', 'Openlayers data - hostel', 'openlayers_poi_hostel');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    16171 => '16171',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - POI */
  $handler = $view->new_display('openlayers', 'Openlayers data - POI', 'openlayers_poi_poi');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17806 => '17806',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - railway station */
  $handler = $view->new_display('openlayers', 'Openlayers data - railway station', 'openlayers_poi_railway_station');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17801 => '17801',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';

  /* Display: Openlayers data - ranger station */
  $handler = $view->new_display('openlayers', 'Openlayers data - ranger station', 'openlayers_poi_ranger_station');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
  );
  /* Filter criterion: Content: POI type (field_poi_type) */
  $handler->display->display_options['filters']['field_poi_type_tid']['id'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['table'] = 'field_data_field_poi_type';
  $handler->display->display_options['filters']['field_poi_type_tid']['field'] = 'field_poi_type_tid';
  $handler->display->display_options['filters']['field_poi_type_tid']['value'] = array(
    17791 => '17791',
  );
  $handler->display->display_options['filters']['field_poi_type_tid']['vocabulary'] = 'points_of_interest';
  $export['poi'] = $view;

  return $export;
}
