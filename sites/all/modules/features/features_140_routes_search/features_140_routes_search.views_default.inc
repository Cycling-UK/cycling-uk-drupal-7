<?php

/**
 * @file
 * features_140_routes_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_140_routes_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'route_search';
  $view->description = 'Search for cycle routes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Route search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 1,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_geofield_distance_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_route_length_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_bike_type_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 1,
        'is_secondary' => 1,
        'any_label' => 'Any bike',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_ride_level_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 1,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'openlayers_source_vector';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_start_location',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Route name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start address */
  $handler->display->display_options['fields']['field_start_address']['id'] = 'field_start_address';
  $handler->display->display_options['fields']['field_start_address']['table'] = 'field_data_field_start_address';
  $handler->display->display_options['fields']['field_start_address']['field'] = 'field_start_address';
  $handler->display->display_options['fields']['field_start_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_address']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_start_address']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Type of bike */
  $handler->display->display_options['fields']['field_bike_type']['id'] = 'field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['table'] = 'field_data_field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['field'] = 'field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['label'] = 'Bike type';
  $handler->display->display_options['fields']['field_bike_type']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Level of ride */
  $handler->display->display_options['fields']['field_ride_level']['id'] = 'field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['table'] = 'field_data_field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['field'] = 'field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['label'] = 'Ride level';
  $handler->display->display_options['fields']['field_ride_level']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_route_length']['id'] = 'field_route_length';
  $handler->display->display_options['fields']['field_route_length']['table'] = 'field_data_field_route_length';
  $handler->display->display_options['fields']['field_route_length']['field'] = 'field_route_length';
  $handler->display->display_options['fields']['field_route_length']['label'] = 'Ride length';
  $handler->display->display_options['fields']['field_route_length']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Length (field_route_length) */
  $handler->display->display_options['sorts']['field_route_length_value']['id'] = 'field_route_length_value';
  $handler->display->display_options['sorts']['field_route_length_value']['table'] = 'field_data_field_route_length';
  $handler->display->display_options['sorts']['field_route_length_value']['field'] = 'field_route_length_value';
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
    'route' => 'route',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Start address (field_start_address) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance_1']['id'] = 'field_geofield_distance_1';
  $handler->display->display_options['filters']['field_geofield_distance_1']['table'] = 'field_data_field_start_address';
  $handler->display->display_options['filters']['field_geofield_distance_1']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance_1']['value'] = array(
    'distance' => '40',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance_1']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance_1']['expose']['operator_id'] = 'field_geofield_distance_1_op';
  $handler->display->display_options['filters']['field_geofield_distance_1']['expose']['operator'] = 'field_geofield_distance_1_op';
  $handler->display->display_options['filters']['field_geofield_distance_1']['expose']['identifier'] = 'field_geofield_distance_1';
  $handler->display->display_options['filters']['field_geofield_distance_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_geofield_distance_1']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance_1']['geofield_proximity_entity_url_field'] = 'field_gpx_map';
  $handler->display->display_options['filters']['field_geofield_distance_1']['geofield_proximity_current_user_field'] = 'field_gpx_map';
  $handler->display->display_options['filters']['field_geofield_distance_1']['geofield_proximity_geocoder_engine'] = 'bing';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
  );
  /* Filter criterion: Content: Length (field_route_length) */
  $handler->display->display_options['filters']['field_route_length_value']['id'] = 'field_route_length_value';
  $handler->display->display_options['filters']['field_route_length_value']['table'] = 'field_data_field_route_length';
  $handler->display->display_options['filters']['field_route_length_value']['field'] = 'field_route_length_value';
  $handler->display->display_options['filters']['field_route_length_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_route_length_value']['group'] = 1;
  $handler->display->display_options['filters']['field_route_length_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_route_length_value']['expose']['operator_id'] = 'field_route_length_value_op';
  $handler->display->display_options['filters']['field_route_length_value']['expose']['label'] = 'Max. distance (miles)';
  $handler->display->display_options['filters']['field_route_length_value']['expose']['operator'] = 'field_route_length_value_op';
  $handler->display->display_options['filters']['field_route_length_value']['expose']['identifier'] = 'field_route_length_value';
  $handler->display->display_options['filters']['field_route_length_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
  );
  $handler->display->display_options['filters']['field_route_length_value']['group_info']['label'] = 'Length (field_route_length)';
  $handler->display->display_options['filters']['field_route_length_value']['group_info']['identifier'] = 'field_route_length_value';
  $handler->display->display_options['filters']['field_route_length_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_route_length_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Type of bike (field_bike_type) */
  $handler->display->display_options['filters']['field_bike_type_target_id']['id'] = 'field_bike_type_target_id';
  $handler->display->display_options['filters']['field_bike_type_target_id']['table'] = 'field_data_field_bike_type';
  $handler->display->display_options['filters']['field_bike_type_target_id']['field'] = 'field_bike_type_target_id';
  $handler->display->display_options['filters']['field_bike_type_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_bike_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['operator_id'] = 'field_bike_type_target_id_op';
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['label'] = 'Type of bike';
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['operator'] = 'field_bike_type_target_id_op';
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['identifier'] = 'field_bike_type_target_id';
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bike_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
  );
  $handler->display->display_options['filters']['field_bike_type_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_bike_type_target_id']['group_info']['label'] = 'Type of bike';
  $handler->display->display_options['filters']['field_bike_type_target_id']['group_info']['identifier'] = 'field_bike_type_target_id';
  $handler->display->display_options['filters']['field_bike_type_target_id']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_bike_type_target_id']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_bike_type_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Any bike',
      'operator' => 'between',
      'value' => array(
        'value' => '16040',
        'min' => '16136',
        'max' => '16151',
      ),
    ),
    2 => array(
      'title' => 'Road bike',
      'operator' => '=',
      'value' => array(
        'value' => '16141',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Mountain bike',
      'operator' => '=',
      'value' => array(
        'value' => '16146',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Electric bike',
      'operator' => '=',
      'value' => array(
        'value' => '16151',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_bike_type_target_id']['shs_enabled'] = 0;
  /* Filter criterion: Content: Level of ride (field_ride_level) */
  $handler->display->display_options['filters']['field_ride_level_target_id']['id'] = 'field_ride_level_target_id';
  $handler->display->display_options['filters']['field_ride_level_target_id']['table'] = 'field_data_field_ride_level';
  $handler->display->display_options['filters']['field_ride_level_target_id']['field'] = 'field_ride_level_target_id';
  $handler->display->display_options['filters']['field_ride_level_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_ride_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ride_level_target_id']['expose']['operator_id'] = 'field_ride_level_target_id_op';
  $handler->display->display_options['filters']['field_ride_level_target_id']['expose']['label'] = 'Level of ride (field_ride_level)';
  $handler->display->display_options['filters']['field_ride_level_target_id']['expose']['operator'] = 'field_ride_level_target_id_op';
  $handler->display->display_options['filters']['field_ride_level_target_id']['expose']['identifier'] = 'field_ride_level_target_id';
  $handler->display->display_options['filters']['field_ride_level_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_ride_level_target_id']['group_info']['label'] = 'Level of ride';
  $handler->display->display_options['filters']['field_ride_level_target_id']['group_info']['identifier'] = 'field_ride_level_target_id';
  $handler->display->display_options['filters']['field_ride_level_target_id']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_ride_level_target_id']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_ride_level_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Any experience level',
      'operator' => 'between',
      'value' => array(
        'value' => '16037',
        'min' => '16156',
        'max' => '16166',
      ),
    ),
    2 => array(
      'title' => 'Beginner',
      'operator' => '=',
      'value' => array(
        'value' => '16156',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Intermediate',
      'operator' => '=',
      'value' => array(
        'value' => '16161',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Experienced',
      'operator' => '=',
      'value' => array(
        'value' => '16166',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_ride_level_target_id']['shs_enabled'] = 0;

  /* Display: Openlayers route start */
  $handler = $view->new_display('openlayers', 'Openlayers route start', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_source_vector';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_start_address',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '#row',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Route table attachment */
  $handler = $view->new_display('attachment', 'Route table attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_start_location' => 'field_start_location',
    'field_finish_location' => 'field_finish_location',
    'field_bike_type' => 'field_bike_type',
    'field_ride_level' => 'field_ride_level',
    'field_route_length' => 'field_route_length',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_finish_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_bike_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ride_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_route_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Route name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type of bike */
  $handler->display->display_options['fields']['field_bike_type']['id'] = 'field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['table'] = 'field_data_field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['field'] = 'field_bike_type';
  $handler->display->display_options['fields']['field_bike_type']['label'] = 'Bike type';
  $handler->display->display_options['fields']['field_bike_type']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Level of ride */
  $handler->display->display_options['fields']['field_ride_level']['id'] = 'field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['table'] = 'field_data_field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['field'] = 'field_ride_level';
  $handler->display->display_options['fields']['field_ride_level']['label'] = 'Ride level';
  $handler->display->display_options['fields']['field_ride_level']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_route_length']['id'] = 'field_route_length';
  $handler->display->display_options['fields']['field_route_length']['table'] = 'field_data_field_route_length';
  $handler->display->display_options['fields']['field_route_length']['field'] = 'field_route_length';
  $handler->display->display_options['fields']['field_route_length']['label'] = 'Ride length';
  $handler->display->display_options['fields']['field_route_length']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'route_search_block' => 'route_search_block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: Route Search Block */
  $handler = $view->new_display('block', 'Route Search Block', 'route_search_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map_views';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_start_address',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '#row',
  );
  $handler->display->display_options['style_options']['attributes'] = array(
    'display' => array(
      'title' => 'title',
      'field_start_address' => 'field_start_address',
      'field_bike_type' => 'field_bike_type',
      'field_ride_level' => 'field_ride_level',
      'field_route_length' => 'field_route_length',
      'name' => 'name',
      'description' => 'description',
    ),
  );
  $handler->display->display_options['style_options']['base_map_layer'] = 'openlayers_geofield_route_search_map:route_search_layer';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Route search block';
  $export['route_search'] = $view;

  return $export;
}
