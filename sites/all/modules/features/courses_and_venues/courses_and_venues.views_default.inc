<?php

/**
 * @file
 * courses_and_venues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function courses_and_venues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_schedule';
  $view->description = 'When and Where current Course is taking place.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course schedule';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_course_category',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
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
  /* Field: Content: Booking */
  $handler->display->display_options['fields']['field_course_booking']['id'] = 'field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['table'] = 'field_data_field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['field'] = 'field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_booking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_booking']['alter']['text'] = '[field_course_booking-url] ';
  $handler->display->display_options['fields']['field_course_booking']['click_sort_column'] = 'url';
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
  <div class="course-title-title">Course</div>
  <div class="course-title">[title]</div>
  <div class="course-venue-title">Venue</div>
  <div class="course-venue">[field_course_venue]</div>
  <div class="course-booking"><a href="[field_course_booking]" class="btn btn-purple">Book Now</a></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Course Category */
  $handler->display->display_options['fields']['field_course_category']['id'] = 'field_course_category';
  $handler->display->display_options['fields']['field_course_category']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['fields']['field_course_category']['field'] = 'field_course_category';
  $handler->display->display_options['fields']['field_course_category']['label'] = '';
  $handler->display->display_options['fields']['field_course_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_category']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Course Category (field_course_category) */
  $handler->display->display_options['sorts']['field_course_category_value']['id'] = 'field_course_category_value';
  $handler->display->display_options['sorts']['field_course_category_value']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['sorts']['field_course_category_value']['field'] = 'field_course_category_value';
  $handler->display->display_options['sorts']['field_course_category_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Published status */
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Course status (field_course_status) */
  $handler->display->display_options['filters']['field_course_status_value']['id'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['table'] = 'field_data_field_course_status';
  $handler->display->display_options['filters']['field_course_status_value']['field'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['value'] = array(
    'PROV' => 'PROV',
    'CONF' => 'CONF',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_course_dates' => 'field_course_dates',
    'field_course_type' => 'field_course_type',
    'field_course_venue' => 'field_course_venue',
    'view_node' => 'view_node',
    'field_course_booking' => 'field_course_booking',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_venue' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_booking' => array(
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
    'format_type' => 'short_date_only',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = 'Type of course';
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Course venue */
  $handler->display->display_options['fields']['field_course_venue']['id'] = 'field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['table'] = 'field_data_field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['field'] = 'field_course_venue';
  $handler->display->display_options['fields']['field_course_venue']['label'] = 'Venue';
  $handler->display->display_options['fields']['field_course_venue']['alter']['text'] = 'at venue: [field_course_venue] ';
  $handler->display->display_options['fields']['field_course_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_venue']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-purple btn-shadow';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Book';
  /* Field: Content: Booking */
  $handler->display->display_options['fields']['field_course_booking']['id'] = 'field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['table'] = 'field_data_field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['field'] = 'field_course_booking';
  $handler->display->display_options['fields']['field_course_booking']['label'] = '';
  $handler->display->display_options['fields']['field_course_booking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_booking']['alter']['text'] = '<a href="[field_course_booking-url]" class="btn btn-purple btn-shadow">Book</a>';
  $handler->display->display_options['fields']['field_course_booking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_booking']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Course Category (field_course_category) */
  $handler->display->display_options['filters']['field_course_category_value']['id'] = 'field_course_category_value';
  $handler->display->display_options['filters']['field_course_category_value']['table'] = 'field_data_field_course_category';
  $handler->display->display_options['filters']['field_course_category_value']['field'] = 'field_course_category_value';
  $handler->display->display_options['filters']['field_course_category_value']['value'] = array(
    'OPEN' => 'OPEN',
  );
  $handler->display->display_options['filters']['field_course_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_category_value']['expose']['operator_id'] = 'field_course_category_value_op';
  $handler->display->display_options['filters']['field_course_category_value']['expose']['label'] = 'Type of Course';
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
  $handler->display->display_options['filters']['field_course_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_status_value']['expose']['operator_id'] = 'field_course_status_value_op';
  $handler->display->display_options['filters']['field_course_status_value']['expose']['label'] = 'Course status (field_course_status)';
  $handler->display->display_options['filters']['field_course_status_value']['expose']['operator'] = 'field_course_status_value_op';
  $handler->display->display_options['filters']['field_course_status_value']['expose']['identifier'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_course_status_value']['group_info']['label'] = 'Course status';
  $handler->display->display_options['filters']['field_course_status_value']['group_info']['identifier'] = 'field_course_status_value';
  $handler->display->display_options['filters']['field_course_status_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_course_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Current',
      'operator' => 'or',
      'value' => array(
        'PROV' => 'PROV',
        'CONF' => 'CONF',
      ),
    ),
    2 => array(
      'title' => 'Cancelled',
      'operator' => 'or',
      'value' => array(
        'CANC' => 'CANC',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'courses/calendar';
  $export['course_schedule'] = $view;

  $view = new view();
  $view->name = 'upcoming_courses_per_venue';
  $view->description = 'What courses are planned for this venue';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming courses per venue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming courses';
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
  $handler->display->display_options['fields']['field_course_dates']['element_label_colon'] = FALSE;
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
  /* Field: Content: Course type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['settings'] = array(
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
  <!--<div class="course-title-title">Course title</div>-->
  <div class="course-title">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Course dates -  start date (field_course_dates) */
  $handler->display->display_options['sorts']['field_course_dates_value']['id'] = 'field_course_dates_value';
  $handler->display->display_options['sorts']['field_course_dates_value']['table'] = 'field_data_field_course_dates';
  $handler->display->display_options['sorts']['field_course_dates_value']['field'] = 'field_course_dates_value';
  /* Contextual filter: Content: Course venue (field_course_venue) */
  $handler->display->display_options['arguments']['field_course_venue_target_id']['id'] = 'field_course_venue_target_id';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['table'] = 'field_data_field_course_venue';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['field'] = 'field_course_venue_target_id';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_venue_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
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
  $handler->display->display_options['filters']['field_course_dates_value']['default_date'] = 'now -1 day';
  $export['upcoming_courses_per_venue'] = $view;

  $view = new view();
  $view->name = 'venue_teaser_per_course_calendar';
  $view->description = 'Teaser view of venue details on course calendar page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'venue teaser per course calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Venue details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_venue_target_id']['id'] = 'field_course_venue_target_id';
  $handler->display->display_options['relationships']['field_course_venue_target_id']['table'] = 'field_data_field_course_venue';
  $handler->display->display_options['relationships']['field_course_venue_target_id']['field'] = 'field_course_venue_target_id';
  $handler->display->display_options['relationships']['field_course_venue_target_id']['label'] = 'ref to venues';
  $handler->display->display_options['relationships']['field_course_venue_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_course_venue_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_course_venue_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'openlayers_geofield';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'map_layer_preset' => 'basic_map:basic_layer_vectors',
    'data' => 'centroid',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_course_venue_address']['id'] = 'field_course_venue_address';
  $handler->display->display_options['fields']['field_course_venue_address']['table'] = 'field_data_field_course_venue_address';
  $handler->display->display_options['fields']['field_course_venue_address']['field'] = 'field_course_venue_address';
  $handler->display->display_options['fields']['field_course_venue_address']['relationship'] = 'field_course_venue_target_id';
  $handler->display->display_options['fields']['field_course_venue_address']['label'] = '';
  $handler->display->display_options['fields']['field_course_venue_address']['element_label_colon'] = FALSE;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_course_venue_telephone']['id'] = 'field_course_venue_telephone';
  $handler->display->display_options['fields']['field_course_venue_telephone']['table'] = 'field_data_field_course_venue_telephone';
  $handler->display->display_options['fields']['field_course_venue_telephone']['field'] = 'field_course_venue_telephone';
  $handler->display->display_options['fields']['field_course_venue_telephone']['relationship'] = 'field_course_venue_target_id';
  $handler->display->display_options['fields']['field_course_venue_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_course_venue_telephone']['alter']['text'] = 'tel: [field_course_venue_telephone]';
  $handler->display->display_options['fields']['field_course_venue_telephone']['element_label_colon'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_course_venue_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-standard';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'click for more';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['venue_teaser_per_course_calendar'] = $view;

  return $export;
}
