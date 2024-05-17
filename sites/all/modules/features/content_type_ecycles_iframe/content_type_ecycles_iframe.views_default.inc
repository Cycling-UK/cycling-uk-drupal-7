<?php

/**
 * @file
 * content_type_ecycles_iframe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_ecycles_iframe_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ecycles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eCycles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'eCycles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there aren\'t any loans to display at the moment.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ecycle_location']['id'] = 'field_ecycle_location';
  $handler->display->display_options['fields']['field_ecycle_location']['table'] = 'field_data_field_ecycle_location';
  $handler->display->display_options['fields']['field_ecycle_location']['field'] = 'field_ecycle_location';
  $handler->display->display_options['fields']['field_ecycle_location']['label'] = '';
  $handler->display->display_options['fields']['field_ecycle_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecycle_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecycle_location']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Loan period */
  $handler->display->display_options['fields']['field_ecycle_loan_period']['id'] = 'field_ecycle_loan_period';
  $handler->display->display_options['fields']['field_ecycle_loan_period']['table'] = 'field_data_field_ecycle_loan_period';
  $handler->display->display_options['fields']['field_ecycle_loan_period']['field'] = 'field_ecycle_loan_period';
  $handler->display->display_options['fields']['field_ecycle_loan_period']['label'] = '';
  $handler->display->display_options['fields']['field_ecycle_loan_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecycle_loan_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecycle_loan_period']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'F',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Hub */
  $handler->display->display_options['fields']['field_ecycle_hub']['id'] = 'field_ecycle_hub';
  $handler->display->display_options['fields']['field_ecycle_hub']['table'] = 'field_data_field_ecycle_hub';
  $handler->display->display_options['fields']['field_ecycle_hub']['field'] = 'field_ecycle_hub';
  $handler->display->display_options['fields']['field_ecycle_hub']['label'] = '';
  $handler->display->display_options['fields']['field_ecycle_hub']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecycle_hub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecycle_hub']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="ecycles-button">
  <a target="_blank" href="[path]">
    <span class="loan-period">[field_ecycle_loan_period] loan</span>
    <span class="date">[field_date]</span>
    <span class="hub">[field_ecycle_hub]</span>
  </a>
<span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Content: Location (field_ecycle_location) */
  $handler->display->display_options['arguments']['field_ecycle_location_value']['id'] = 'field_ecycle_location_value';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['table'] = 'field_data_field_ecycle_location';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['field'] = 'field_ecycle_location_value';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['default_argument_options']['argument'] = 'Sorry, there aren\'t any loans to display';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ecycle_location_value']['limit'] = '0';
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
    'ecycle_iframe' => 'ecycle_iframe',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Loans */
  $handler = $view->new_display('page', 'Loans', 'page');
  $handler->display->display_options['path'] = 'ecycles/%';
  $export['ecycles'] = $view;

  return $export;
}
