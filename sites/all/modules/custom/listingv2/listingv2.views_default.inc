<?php
/**
 * @file
 * listingv2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function listingv2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_v2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events v2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['alias']['id'] = 'alias';
  $handler->display->display_options['fields']['alias']['table'] = 'views_url_alias_node';
  $handler->display->display_options['fields']['alias']['field'] = 'alias';
  $handler->display->display_options['fields']['alias']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['alias']['label'] = '';
  $handler->display->display_options['fields']['alias']['element_label_colon'] = FALSE;
  /* Field: Centroid */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Centroid';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Content: End of objection period */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j M y - H:i',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Filter criterion: Content: Published */
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
    'event' => 'event',
    'ride' => 'ride',
  );
  $export['events_v2'] = $view;

  $view = new view();
  $view->name = 'groups_v2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groups v2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: URL */
  $handler->display->display_options['fields']['alias']['id'] = 'alias';
  $handler->display->display_options['fields']['alias']['table'] = 'views_url_alias_node';
  $handler->display->display_options['fields']['alias']['field'] = 'alias';
  $handler->display->display_options['fields']['alias']['ui_name'] = 'URL';
  $handler->display->display_options['fields']['alias']['label'] = '';
  $handler->display->display_options['fields']['alias']['element_label_colon'] = FALSE;
  /* Field: Centroid */
  $handler->display->display_options['fields']['field_area_covered']['id'] = 'field_area_covered';
  $handler->display->display_options['fields']['field_area_covered']['table'] = 'field_data_field_area_covered';
  $handler->display->display_options['fields']['field_area_covered']['field'] = 'field_area_covered';
  $handler->display->display_options['fields']['field_area_covered']['ui_name'] = 'Centroid';
  $handler->display->display_options['fields']['field_area_covered']['label'] = '';
  $handler->display->display_options['fields']['field_area_covered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_covered']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_area_covered']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_area_covered']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_area_covered']['settings'] = array(
    'data' => 'centroid',
  );
  /* Field: Geometry */
  $handler->display->display_options['fields']['field_area_covered_1']['id'] = 'field_area_covered_1';
  $handler->display->display_options['fields']['field_area_covered_1']['table'] = 'field_data_field_area_covered';
  $handler->display->display_options['fields']['field_area_covered_1']['field'] = 'field_area_covered';
  $handler->display->display_options['fields']['field_area_covered_1']['ui_name'] = 'Geometry';
  $handler->display->display_options['fields']['field_area_covered_1']['label'] = '';
  $handler->display->display_options['fields']['field_area_covered_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_covered_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_area_covered_1']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Centre activities */
  $handler->display->display_options['fields']['field_centre_activities']['id'] = 'field_centre_activities';
  $handler->display->display_options['fields']['field_centre_activities']['table'] = 'field_data_field_centre_activities';
  $handler->display->display_options['fields']['field_centre_activities']['field'] = 'field_centre_activities';
  $handler->display->display_options['fields']['field_centre_activities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_centre_activities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centre_activities']['hide_alter_empty'] = FALSE;
  /* Field: Activities */
  $handler->display->display_options['fields']['field_group_activities']['id'] = 'field_group_activities';
  $handler->display->display_options['fields']['field_group_activities']['table'] = 'field_data_field_group_activities';
  $handler->display->display_options['fields']['field_group_activities']['field'] = 'field_group_activities';
  $handler->display->display_options['fields']['field_group_activities']['ui_name'] = 'Activities';
  $handler->display->display_options['fields']['field_group_activities']['label'] = '';
  $handler->display->display_options['fields']['field_group_activities']['alter']['text'] = '[field_group_activities][field_centre_activities]';
  $handler->display->display_options['fields']['field_group_activities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_activities']['empty'] = '[field_centre_activities]';
  $handler->display->display_options['fields']['field_group_activities']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_group_activities']['delta_offset'] = '0';
  /* Field: type of group */
  $handler->display->display_options['fields']['field_group_type']['id'] = 'field_group_type';
  $handler->display->display_options['fields']['field_group_type']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['fields']['field_group_type']['field'] = 'field_group_type';
  $handler->display->display_options['fields']['field_group_type']['ui_name'] = 'type of group';
  $handler->display->display_options['fields']['field_group_type']['label'] = '';
  $handler->display->display_options['fields']['field_group_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_type']['empty'] = 'Affiliated Centre';
  $handler->display->display_options['fields']['field_group_type']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_group_type']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Type of group (field_group_type) */
  $handler->display->display_options['sorts']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['sorts']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['sorts']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['sorts']['field_group_type_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
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
    'affiliated_centre' => 'affiliated_centre',
    'group' => 'group',
  );
  $export['groups_v2'] = $view;

  return $export;
}
