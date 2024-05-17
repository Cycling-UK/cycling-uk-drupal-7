<?php
/**
 * @file
 * shop_courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function shop_courses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_bookings';
  $view->description = 'When and Where current Course is taking place.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming courses';
  $handler->display->display_options['css_class'] = 'page-layout-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course dates */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates']['alter']['text'] = 'on: [field_course_dates]';
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Course venue */
  $handler->display->display_options['fields']['field_course_venue']['id'] = 'field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['table'] = 'field_data_field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['field'] = 'field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['label'] = '';
  $handler->display->display_options['fields']['field_course_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_venue']['alter']['text'] = 'at venue: [field_course_venue] ';
  $handler->display->display_options['fields']['field_course_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_venue']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Day number */
  $handler->display->display_options['fields']['field_course_dates_1']['id'] = 'field_course_dates_1';
  $handler->display->display_options['fields']['field_course_dates_1']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_1']['ui_name'] = 'Day number';
  $handler->display->display_options['fields']['field_course_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_1']['settings'] = array(
    'format_type' => 'day_number',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Day name */
  $handler->display->display_options['fields']['field_course_dates_2']['id'] = 'field_course_dates_2';
  $handler->display->display_options['fields']['field_course_dates_2']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_2']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_2']['ui_name'] = 'Day name';
  $handler->display->display_options['fields']['field_course_dates_2']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_2']['settings'] = array(
    'format_type' => 'day_name',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Day month */
  $handler->display->display_options['fields']['field_course_dates_3']['id'] = 'field_course_dates_3';
  $handler->display->display_options['fields']['field_course_dates_3']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_3']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_3']['ui_name'] = 'Day month';
  $handler->display->display_options['fields']['field_course_dates_3']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_3']['settings'] = array(
    'format_type' => 'day_month',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Year */
  $handler->display->display_options['fields']['field_course_dates_4']['id'] = 'field_course_dates_4';
  $handler->display->display_options['fields']['field_course_dates_4']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_4']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates_4']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_course_dates_4']['label'] = '';
  $handler->display->display_options['fields']['field_course_dates_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_dates_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates_4']['settings'] = array(
    'format_type' => 'year',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="icon">
  <div class="date day-number">[field_course_dates_1]</div>
  <div class="date day-name">[field_course_dates_2]</div>
  <div class="date day-month">[field_course_dates_3]</div>
  <div class="date year">[field_course_dates_4]</div>
</div>
<div class="details">
  <div class="course-title-title">Course title</div>
  <div class="course-title">[title]</div>
  <div class="course-venue-title">Venue</div>
  <div class="course-venue">[field_course_venue]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Course dates -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  /* Contextual filter: Content: Course type (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_target_id']['id'] = 'field_course_type_target_id';
  $handler->display->display_options['arguments']['field_course_type_target_id']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_target_id']['field'] = 'field_course_type_target_id';
  $handler->display->display_options['arguments']['field_course_type_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_course_type_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Course dates -  start date (field_course_dates) */
  $handler->display->display_options['filters']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['filters']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['filters']['field_course_dates_value']['field'] = 'field_course_dates_value';
  $handler->display->display_options['filters']['field_course_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_dates_value']['expose']['operator_id'] = 'field_course_dates_value_op';
  $handler->display->display_options['filters']['field_course_dates_value']['expose']['label'] = 'Course date(s)';
  $handler->display->display_options['filters']['field_course_dates_value']['expose']['operator'] = 'field_course_dates_value_op';
  $handler->display->display_options['filters']['field_course_dates_value']['expose']['identifier'] = 'field_course_dates_value';
  $handler->display->display_options['filters']['field_course_dates_value']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_course_dates_value']['default_date'] = 'now -1 day';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course_booking' => 'course_booking',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Courses';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_course_venue_link' => 'field_course_venue_link',
    'field_course_type_link' => 'field_course_type_link',
  );
  /* Filter criterion: Content: Course Category (field_course_category) */
  $handler->display->display_options['filters']['field_course_category_value']['id'] = 'field_course_category_value';
  $handler->display->display_options['filters']['field_course_category_value']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['filters']['field_course_category_value']['field'] = 'field_course_category_value';
  $handler->display->display_options['filters']['field_course_category_value']['value'] = array(
    'OPEN' => 'OPEN',
  );
  $handler->display->display_options['filters']['field_course_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_category_value']['expose']['operator_id'] = 'field_course_category_value_op';
  $handler->display->display_options['filters']['field_course_category_value']['expose']['label'] = 'Course Category';
  $handler->display->display_options['filters']['field_course_category_value']['expose']['operator'] = 'field_course_category_value_op';
  $handler->display->display_options['filters']['field_course_category_value']['expose']['identifier'] = 'field_course_category_value';
  $handler->display->display_options['filters']['field_course_category_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Course status (field_course_status) */
  $handler->display->display_options['filters']['field_course_status_value']['id'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['table'] = 'field_data_field_course_status';
  $handler->display->display_options['filters']['field_course_status_value']['field'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['value'] = array(
    'PROV' => 'PROV',
    'CONF' => 'CONF',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_course_dates' => 'field_course_dates',
    'view_node' => 'view_node',
    'field_course_venue_link' => 'field_course_venue_link',
    'field_course_type_link' => 'field_course_type_link',
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
    'field_course_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_venue_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_type_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['style_options']['responsive'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course dates */
  $handler->display->display_options['fields']['field_course_dates']['id'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['field'] = 'field_course_dates';
  $handler->display->display_options['fields']['field_course_dates']['label'] = 'Date';
  $handler->display->display_options['fields']['field_course_dates']['alter']['text'] = 'on: [field_course_dates]';
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_dates']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'D, j M Y',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Course Venue */
  $handler->display->display_options['fields']['field_course_venue_link']['id'] = 'field_course_venue_link';
  $handler->display->display_options['fields']['field_course_venue_link']['table'] = 'field_data_field_course_venue_link';
  $handler->display->display_options['fields']['field_course_venue_link']['field'] = 'field_course_venue_link';
  $handler->display->display_options['fields']['field_course_venue_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_venue_link']['click_sort_column'] = 'url';
  /* Field: Content: Course Type */
  $handler->display->display_options['fields']['field_course_type_link']['id'] = 'field_course_type_link';
  $handler->display->display_options['fields']['field_course_type_link']['table'] = 'field_data_field_course_type_link';
  $handler->display->display_options['fields']['field_course_type_link']['field'] = 'field_course_type_link';
  $handler->display->display_options['fields']['field_course_type_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type_link']['click_sort_column'] = 'url';
  /* Field: Content: Course Category */
  $handler->display->display_options['fields']['field_course_category']['id'] = 'field_course_category';
  $handler->display->display_options['fields']['field_course_category']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['fields']['field_course_category']['field'] = 'field_course_category';
  $handler->display->display_options['fields']['field_course_category']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-standard btn-shadow';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Book now';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'course-bookings/calendar';
  $export['course_bookings'] = $view;

  $view = new view();
  $view->name = 'course_redirect';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Redirect';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Redirect';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Event Number (field_event_number) */
  $handler->display->display_options['arguments']['field_event_number_value']['id'] = 'field_event_number_value';
  $handler->display->display_options['arguments']['field_event_number_value']['table'] = 'field_data_field_event_number';
  $handler->display->display_options['arguments']['field_event_number_value']['field'] = 'field_event_number_value';
  $handler->display->display_options['arguments']['field_event_number_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_event_number_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_number_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_number_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_number_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'course/%';
  $export['course_redirect'] = $view;

  $view = new view();
  $view->name = 'entity_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'course_booking' => 'course_booking',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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
    'course_booking' => 'course_booking',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['entity_reference'] = $view;

  $view = new view();
  $view->name = 'term_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Term Reference';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'description' => 'description',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['term_reference'] = $view;

  return $export;
}
