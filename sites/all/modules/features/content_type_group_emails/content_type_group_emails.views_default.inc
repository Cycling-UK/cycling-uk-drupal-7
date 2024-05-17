<?php

/**
 * @file
 * content_type_group_emails.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_group_emails_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'riders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Riders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'manage members';
  $handler->display->display_options['access']['group_id_arg'] = '2';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '200, 500, 1000';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="std-button"><a class="btn btn-standard btn-shadowh" href="/group/node/[og_group_ref_1]/members/edit">Edit records view (Registration Officers Only).</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '<p>&nbsp;</p>
Displaying @total records';
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/node/[nid]">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Central Email Suppression */
  $handler->display->display_options['fields']['field_rider_email_suppression']['id'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['table'] = 'field_data_field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['field'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['text'] = 'Sup';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['empty'] = '[field_rider_email_suppression] ';
  /* Field: Content: Postcode */
  $handler->display->display_options['fields']['field_rider_postcode']['id'] = 'field_rider_postcode';
  $handler->display->display_options['fields']['field_rider_postcode']['table'] = 'field_data_field_rider_postcode';
  $handler->display->display_options['fields']['field_rider_postcode']['field'] = 'field_rider_postcode';
  $handler->display->display_options['fields']['field_rider_postcode']['alter']['max_length'] = '4';
  $handler->display->display_options['fields']['field_rider_postcode']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_rider_postcode']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_rider_postcode']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_rider_postcode']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_rider_postcode']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Membership Type */
  $handler->display->display_options['fields']['field_membership_type']['id'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['field'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_rider_status']['id'] = 'field_rider_status';
  $handler->display->display_options['fields']['field_rider_status']['table'] = 'field_data_field_rider_status';
  $handler->display->display_options['fields']['field_rider_status']['field'] = 'field_rider_status';
  $handler->display->display_options['fields']['field_rider_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Rider Leader */
  $handler->display->display_options['fields']['field_rider_leader']['id'] = 'field_rider_leader';
  $handler->display->display_options['fields']['field_rider_leader']['table'] = 'field_data_field_rider_leader';
  $handler->display->display_options['fields']['field_rider_leader']['field'] = 'field_rider_leader';
  $handler->display->display_options['fields']['field_rider_leader']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_leader']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_leader']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Committee Member */
  $handler->display->display_options['fields']['field_committee_member']['id'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['field'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_committee_member']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_committee_member']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_active']['id'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['table'] = 'field_data_field_active';
  $handler->display->display_options['fields']['field_active']['field'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_active']['alter']['text'] = 'Yes';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['og_group_ref']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['label'] = 'Groups ID';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  /* Sort criterion: Content: contact_number (field_rider_contact_number) */
  $handler->display->display_options['sorts']['field_rider_contact_number_value']['id'] = 'field_rider_contact_number_value';
  $handler->display->display_options['sorts']['field_rider_contact_number_value']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['sorts']['field_rider_contact_number_value']['field'] = 'field_rider_contact_number_value';
  $handler->display->display_options['sorts']['field_rider_contact_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rider_contact_number_value']['expose']['label'] = 'Membership Number';
  /* Sort criterion: Content: Surname (field_rider_surname) */
  $handler->display->display_options['sorts']['field_rider_surname_value']['id'] = 'field_rider_surname_value';
  $handler->display->display_options['sorts']['field_rider_surname_value']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['sorts']['field_rider_surname_value']['field'] = 'field_rider_surname_value';
  $handler->display->display_options['sorts']['field_rider_surname_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rider_surname_value']['expose']['label'] = 'Surname';
  /* Sort criterion: Content: Active (field_active) */
  $handler->display->display_options['sorts']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['sorts']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['sorts']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['sorts']['field_active_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_active_value']['expose']['label'] = 'Active';
  /* Sort criterion: Content: Forename (field_rider_forename) */
  $handler->display->display_options['sorts']['field_rider_forename_value']['id'] = 'field_rider_forename_value';
  $handler->display->display_options['sorts']['field_rider_forename_value']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['sorts']['field_rider_forename_value']['field'] = 'field_rider_forename_value';
  /* Sort criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['sorts']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['sorts']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['sorts']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['sorts']['field_email_suppression_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_email_suppression_value']['expose']['label'] = 'Email Suppression';
  /* Sort criterion: Content: Postal Suppression (field_postal_suppression) */
  $handler->display->display_options['sorts']['field_postal_suppression_value']['id'] = 'field_postal_suppression_value';
  $handler->display->display_options['sorts']['field_postal_suppression_value']['table'] = 'field_data_field_postal_suppression';
  $handler->display->display_options['sorts']['field_postal_suppression_value']['field'] = 'field_postal_suppression_value';
  $handler->display->display_options['sorts']['field_postal_suppression_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_postal_suppression_value']['expose']['label'] = 'Postal Suppression';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['id'] = 'og_group_ref_target_id_1';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['default_argument_options']['glue'] = ',';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id_1']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: contact_number (field_rider_contact_number) */
  $handler->display->display_options['filters']['field_rider_contact_number_value']['id'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['field'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_contact_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['operator_id'] = 'field_rider_contact_number_value_op';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['label'] = 'Contact No.';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['operator'] = 'field_rider_contact_number_value_op';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['identifier'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Surname (field_rider_surname) */
  $handler->display->display_options['filters']['field_rider_surname_value']['id'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['filters']['field_rider_surname_value']['field'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['field_rider_surname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rider_surname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_surname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['operator_id'] = 'field_rider_surname_value_op';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['label'] = 'Surname';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['operator'] = 'field_rider_surname_value_op';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['identifier'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['field_rider_email_email']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['operator_id'] = 'field_rider_email_email_op';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['operator'] = 'field_rider_email_email_op';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['identifier'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['group'] = 1;
  $handler->display->display_options['filters']['field_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_active_value']['expose']['operator_id'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['field_active_value']['expose']['operator'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['identifier'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  $handler->display->display_options['filters']['field_active_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  /* Filter criterion: Content: Status (field_rider_status) */
  $handler->display->display_options['filters']['field_rider_status_value']['id'] = 'field_rider_status_value';
  $handler->display->display_options['filters']['field_rider_status_value']['table'] = 'field_data_field_rider_status';
  $handler->display->display_options['filters']['field_rider_status_value']['field'] = 'field_rider_status_value';
  $handler->display->display_options['filters']['field_rider_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_status_value']['expose']['operator_id'] = 'field_rider_status_value_op';
  $handler->display->display_options['filters']['field_rider_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_rider_status_value']['expose']['operator'] = 'field_rider_status_value_op';
  $handler->display->display_options['filters']['field_rider_status_value']['expose']['identifier'] = 'field_rider_status_value';
  $handler->display->display_options['filters']['field_rider_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    251 => 0,
    201 => 0,
    236 => 0,
    261 => 0,
    196 => 0,
    256 => 0,
    216 => 0,
    266 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    241 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Rider Leader (field_rider_leader) */
  $handler->display->display_options['filters']['field_rider_leader_value']['id'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['table'] = 'field_data_field_rider_leader';
  $handler->display->display_options['filters']['field_rider_leader_value']['field'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_leader_value']['expose']['operator_id'] = 'field_rider_leader_value_op';
  $handler->display->display_options['filters']['field_rider_leader_value']['expose']['label'] = 'Rider Leader (field_rider_leader)';
  $handler->display->display_options['filters']['field_rider_leader_value']['expose']['operator'] = 'field_rider_leader_value_op';
  $handler->display->display_options['filters']['field_rider_leader_value']['expose']['identifier'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_rider_leader_value']['group_info']['label'] = 'Rider Leader';
  $handler->display->display_options['filters']['field_rider_leader_value']['group_info']['identifier'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Ride Leader',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  /* Filter criterion: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['filters']['field_committee_member_value']['id'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['filters']['field_committee_member_value']['field'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_member_value']['expose']['operator_id'] = 'field_committee_member_value_op';
  $handler->display->display_options['filters']['field_committee_member_value']['expose']['label'] = 'Committee Member (field_committee_member)';
  $handler->display->display_options['filters']['field_committee_member_value']['expose']['operator'] = 'field_committee_member_value_op';
  $handler->display->display_options['filters']['field_committee_member_value']['expose']['identifier'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_committee_member_value']['group_info']['label'] = 'Committee Member';
  $handler->display->display_options['filters']['field_committee_member_value']['group_info']['identifier'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Committee Member',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  /* Filter criterion: Content: Postcode (field_rider_postcode) */
  $handler->display->display_options['filters']['field_rider_postcode_value']['id'] = 'field_rider_postcode_value';
  $handler->display->display_options['filters']['field_rider_postcode_value']['table'] = 'field_data_field_rider_postcode';
  $handler->display->display_options['filters']['field_rider_postcode_value']['field'] = 'field_rider_postcode_value';
  $handler->display->display_options['filters']['field_rider_postcode_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rider_postcode_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_postcode_value']['expose']['operator_id'] = 'field_rider_postcode_value_op';
  $handler->display->display_options['filters']['field_rider_postcode_value']['expose']['label'] = 'Postcode (contains)';
  $handler->display->display_options['filters']['field_rider_postcode_value']['expose']['operator'] = 'field_rider_postcode_value_op';
  $handler->display->display_options['filters']['field_rider_postcode_value']['expose']['identifier'] = 'field_rider_postcode_value';
  $handler->display->display_options['filters']['field_rider_postcode_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    251 => 0,
    201 => 0,
    236 => 0,
    261 => 0,
    196 => 0,
    256 => 0,
    216 => 0,
    266 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    241 => 0,
    291 => 0,
  );
  $handler->display->display_options['filters']['field_rider_postcode_value']['group_info']['label'] = 'Postcode (field_rider_postcode)';
  $handler->display->display_options['filters']['field_rider_postcode_value']['group_info']['identifier'] = 'field_rider_postcode_value';
  $handler->display->display_options['filters']['field_rider_postcode_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_rider_postcode_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Membership Type (field_membership_type) */
  $handler->display->display_options['filters']['field_membership_type_value']['id'] = 'field_membership_type_value';
  $handler->display->display_options['filters']['field_membership_type_value']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['filters']['field_membership_type_value']['field'] = 'field_membership_type_value';
  $handler->display->display_options['filters']['field_membership_type_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_membership_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_membership_type_value']['expose']['operator_id'] = 'field_membership_type_value_op';
  $handler->display->display_options['filters']['field_membership_type_value']['expose']['label'] = 'Membership Type (field_membership_type)';
  $handler->display->display_options['filters']['field_membership_type_value']['expose']['operator'] = 'field_membership_type_value_op';
  $handler->display->display_options['filters']['field_membership_type_value']['expose']['identifier'] = 'field_membership_type_value';
  $handler->display->display_options['filters']['field_membership_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    251 => 0,
    201 => 0,
    236 => 0,
    261 => 0,
    196 => 0,
    256 => 0,
    216 => 0,
    266 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    241 => 0,
    291 => 0,
  );
  $handler->display->display_options['filters']['field_membership_type_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_membership_type_value']['group_info']['label'] = 'Membership Type';
  $handler->display->display_options['filters']['field_membership_type_value']['group_info']['identifier'] = 'field_membership_type_value';
  $handler->display->display_options['filters']['field_membership_type_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Adult',
      'operator' => 'word',
      'value' => 'Adult Additional Disabled Unwaged Reduced',
    ),
    2 => array(
      'title' => 'Senior',
      'operator' => '=',
      'value' => 'Senior Membership (over 65)',
    ),
    3 => array(
      'title' => 'Junior',
      'operator' => 'word',
      'value' => 'young student',
    ),
    4 => array(
      'title' => 'Household',
      'operator' => 'contains',
      'value' => 'Household',
    ),
    5 => array(
      'title' => '5 Year',
      'operator' => 'word',
      'value' => '"Five Year Add. Membership" "Five Year Membership"',
    ),
    6 => array(
      'title' => 'Life',
      'operator' => 'contains',
      'value' => 'life',
    ),
    7 => array(
      'title' => 'Affiliated',
      'operator' => 'word',
      'value' => 'Affiliate "Go Bicycle"',
    ),
    8 => array(
      'title' => 'Club',
      'operator' => 'word',
      'value' => 'Affiliation Centre',
    ),
  );

  /* Display: Page - view */
  $handler = $view->new_display('page', 'Page - view', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'og_group_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_rider_contact_number' => 'field_rider_contact_number',
    'field_rider_forename' => 'field_rider_forename',
    'field_rider_surname' => 'field_rider_surname',
    'field_rider_email_suppression' => 'field_rider_email_suppression',
    'field_rider_email' => 'field_rider_email',
    'field_membership_type' => 'field_membership_type',
    'field_rider_new' => 'field_rider_new',
    'field_active' => 'field_active',
    'og_group_ref' => 'og_group_ref',
    'og_group_ref_1' => 'og_group_ref_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_forename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email_suppression' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_membership_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_new' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_active' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="std-button"><a class="btn btn-standard btn-shadowh" href="/node/[og_group_ref_1]">Group page</a>&nbsp;&nbsp;&nbsp;
<a class="btn btn-standard btn-shadowh" href="/node/[og_group_ref_1]/group">Group administration</a>&nbsp;&nbsp;&nbsp;
<a class="btn btn-standard btn-shadowh" href="/group/node/[og_group_ref_1]/members/edit">Edit records view (Registration Officers Only).</a></div>
<h1>Group Rider Details</h1>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p align="right" style="text-align: right">Displaying @total records</p>';
  $handler->display->display_options['path'] = 'group/node/%/members/view';
  $handler->display->display_options['menu']['title'] = 'Area Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-amp-menu';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Rules Group Details */
  $handler = $view->new_display('views_rules', 'Rules Group Details', 'views_rules_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_rider_contact_number' => 'field_rider_contact_number',
    'field_forename' => 'field_forename',
    'field_surname' => 'field_surname',
    'field_email' => 'field_email',
    'og_group_ref' => 'og_group_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_rider_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_forename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Email Audience */
  $handler->display->display_options['fields']['field_email_audience']['id'] = 'field_email_audience';
  $handler->display->display_options['fields']['field_email_audience']['table'] = 'field_data_field_email_audience';
  $handler->display->display_options['fields']['field_email_audience']['field'] = 'field_email_audience';
  $handler->display->display_options['fields']['field_email_audience']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_email_audience']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Banner Image */
  $handler->display->display_options['fields']['field_banner_image_paragraph']['id'] = 'field_banner_image_paragraph';
  $handler->display->display_options['fields']['field_banner_image_paragraph']['table'] = 'field_data_field_banner_image_paragraph';
  $handler->display->display_options['fields']['field_banner_image_paragraph']['field'] = 'field_banner_image_paragraph';
  $handler->display->display_options['fields']['field_banner_image_paragraph']['settings'] = array(
    'view_mode' => 'token',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Stories */
  $handler->display->display_options['fields']['field_stories']['id'] = 'field_stories';
  $handler->display->display_options['fields']['field_stories']['table'] = 'field_data_field_stories';
  $handler->display->display_options['fields']['field_stories']['field'] = 'field_stories';
  $handler->display->display_options['fields']['field_stories']['settings'] = array(
    'view_mode' => 'token',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_stories']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['label'] = 'Groups audience name';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'email_og_group_ref',
    ),
    'field_email_audience' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email Audience',
      'name' => 'email_audience',
    ),
    'field_banner_image_paragraph' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Banner Image',
      'name' => 'banner_image_paragraph',
    ),
    'field_stories' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Stories',
      'name' => 'stories',
    ),
    'og_group_ref_1' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience name',
      'name' => 'og_group_ref_1',
    ),
  );

  /* Display: Data export - Group IDs */
  $handler = $view->new_display('views_data_export', 'Data export - Group IDs', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group NID\'s';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Organisation member number */
  $handler->display->display_options['fields']['field_group_org_member_no']['id'] = 'field_group_org_member_no';
  $handler->display->display_options['fields']['field_group_org_member_no']['table'] = 'field_data_field_group_org_member_no';
  $handler->display->display_options['fields']['field_group_org_member_no']['field'] = 'field_group_org_member_no';
  $handler->display->display_options['fields']['field_group_org_member_no']['label'] = 'Organisation number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group Name';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: User: Emails */
  $handler->display->display_options['fields']['field_care_emails']['id'] = 'field_care_emails';
  $handler->display->display_options['fields']['field_care_emails']['table'] = 'field_data_field_care_emails';
  $handler->display->display_options['fields']['field_care_emails']['field'] = 'field_care_emails';
  $handler->display->display_options['fields']['field_care_emails']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_care_emails']['click_sort_column'] = 'communication_number';
  $handler->display->display_options['fields']['field_care_emails']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_care_name']['id'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['table'] = 'field_data_field_care_name';
  $handler->display->display_options['fields']['field_care_name']['field'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_care_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_care_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['path'] = 'export/group_nids.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Page - All Riders (Admin Only) */
  $handler = $view->new_display('page', 'Page - All Riders (Admin Only)', 'page_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    196 => '196',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '500, 2000, 5000';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'nid' => 'nid',
    'field_rider_contact_number' => 'field_rider_contact_number',
    'field_rider_forename' => 'field_rider_forename',
    'field_rider_surname' => 'field_rider_surname',
    'field_rider_email_suppression' => 'field_rider_email_suppression',
    'field_rider_email' => 'field_rider_email',
    'field_membership_type' => 'field_membership_type',
    'field_rider_new' => 'field_rider_new',
    'field_active' => 'field_active',
    'field_rider_renewal_date' => 'field_rider_renewal_date',
    'og_group_ref' => 'og_group_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_forename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email_suppression' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_membership_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_new' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_active' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_renewal_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/node/[nid]">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_field_group_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_field_group_node';
  /* Field: Content: Central Email Suppression */
  $handler->display->display_options['fields']['field_rider_email_suppression']['id'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['table'] = 'field_data_field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['field'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['fields']['field_rider_email_suppression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['text'] = 'Sup';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['fields']['field_rider_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['empty'] = '[field_rider_email_suppression] ';
  /* Field: Content: Membership Type */
  $handler->display->display_options['fields']['field_membership_type']['id'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['field'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['relationship'] = 'reverse_field_group_node';
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_active']['id'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['table'] = 'field_data_field_active';
  $handler->display->display_options['fields']['field_active']['field'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['relationship'] = 'reverse_field_group_node';
  /* Field: Content: Renewal Date */
  $handler->display->display_options['fields']['field_rider_renewal_date']['id'] = 'field_rider_renewal_date';
  $handler->display->display_options['fields']['field_rider_renewal_date']['table'] = 'field_data_field_rider_renewal_date';
  $handler->display->display_options['fields']['field_rider_renewal_date']['field'] = 'field_rider_renewal_date';
  $handler->display->display_options['fields']['field_rider_renewal_date']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['fields']['field_rider_renewal_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rider_renewal_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Group';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: contact_number (field_rider_contact_number) */
  $handler->display->display_options['filters']['field_rider_contact_number_value']['id'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['field'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_contact_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['operator_id'] = 'field_rider_contact_number_value_op';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['label'] = 'Contact No.';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['operator'] = 'field_rider_contact_number_value_op';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['identifier'] = 'field_rider_contact_number_value';
  $handler->display->display_options['filters']['field_rider_contact_number_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Surname (field_rider_surname) */
  $handler->display->display_options['filters']['field_rider_surname_value']['id'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['filters']['field_rider_surname_value']['field'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['filters']['field_rider_surname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rider_surname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_surname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['operator_id'] = 'field_rider_surname_value_op';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['label'] = 'Surname';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['operator'] = 'field_rider_surname_value_op';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['identifier'] = 'field_rider_surname_value';
  $handler->display->display_options['filters']['field_rider_surname_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['filters']['field_rider_email_email']['group'] = 1;
  $handler->display->display_options['filters']['field_rider_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['operator_id'] = 'field_rider_email_email_op';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['operator'] = 'field_rider_email_email_op';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['identifier'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['relationship'] = 'reverse_field_group_node';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['group'] = 1;
  $handler->display->display_options['filters']['field_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_active_value']['expose']['operator_id'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['field_active_value']['expose']['operator'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['identifier'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['expose']['remember_roles'] = array(
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
    296 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
    276 => 0,
    281 => 0,
    291 => 0,
  );
  $handler->display->display_options['filters']['field_active_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'riders/admin';

  /* Display: Rules Riders Details */
  $handler = $view->new_display('views_rules', 'Rules Riders Details', 'views_rules_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'field_rider_status_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Page - edit */
  $handler = $view->new_display('page', 'Page - edit', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'update field_active field';
  $handler->display->display_options['access']['group_id_arg'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'og_group_ref',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_rider_contact_number' => 'field_rider_contact_number',
    'field_rider_forename' => 'field_rider_forename',
    'field_rider_surname' => 'field_rider_surname',
    'field_rider_email_suppression' => 'field_rider_email_suppression',
    'field_rider_email' => 'field_rider_email',
    'field_email_suppression_editable' => 'field_email_suppression_editable',
    'field_postal_suppression_editable' => 'field_postal_suppression_editable',
    'field_active_editable' => 'field_active_editable',
    'og_group_ref' => 'og_group_ref',
    'og_group_ref_1' => 'og_group_ref_1',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_forename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email_suppression' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rider_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_suppression_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_suppression_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_active_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['save_messages'] = 'none';
  $handler->display->display_options['style_options']['batch'] = TRUE;
  $handler->display->display_options['style_options']['batch_size'] = '100';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="std-button"><a class="btn btn-standard btn-shadowh" href="/node/[og_group_ref_1]">Group page</a>&nbsp;&nbsp;&nbsp;
<a class="btn btn-standard btn-shadowh" href="/node/[og_group_ref_1]/group">Group administration</a>&nbsp;&nbsp;&nbsp;
<a class="btn btn-standard btn-shadowh" href="/group/node/[og_group_ref_1]/members/view">Back to members (view only) view.</a></a></div>
<h1>Update Group Rider Details</h1>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="std-button"><a class="btn btn-standard btn-shadowh" href="/group/node/[og_group_ref_1]/members/view">Back to members (view only) view.</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/node/[nid]">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Central Email Suppression */
  $handler->display->display_options['fields']['field_rider_email_suppression']['id'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['table'] = 'field_data_field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['field'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['text'] = 'Sup';
  $handler->display->display_options['fields']['field_rider_email_suppression']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['empty'] = '[field_rider_email_suppression] ';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_contact';
  $handler->display->display_options['fields']['field_rider_email']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Email Suppression (editable) */
  $handler->display->display_options['fields']['field_email_suppression_editable']['id'] = 'field_email_suppression_editable';
  $handler->display->display_options['fields']['field_email_suppression_editable']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['fields']['field_email_suppression_editable']['field'] = 'field_email_suppression_editable';
  $handler->display->display_options['fields']['field_email_suppression_editable']['label'] = 'Email Suppression';
  $handler->display->display_options['fields']['field_email_suppression_editable']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_email_suppression_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_email_suppression_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_email_suppression_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_email_suppression_editable']['suppress_value'] = 1;
  /* Field: Content: Postal Suppression (editable) */
  $handler->display->display_options['fields']['field_postal_suppression_editable']['id'] = 'field_postal_suppression_editable';
  $handler->display->display_options['fields']['field_postal_suppression_editable']['table'] = 'field_data_field_postal_suppression';
  $handler->display->display_options['fields']['field_postal_suppression_editable']['field'] = 'field_postal_suppression_editable';
  $handler->display->display_options['fields']['field_postal_suppression_editable']['label'] = 'Postal Suppression';
  $handler->display->display_options['fields']['field_postal_suppression_editable']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_postal_suppression_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_postal_suppression_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_postal_suppression_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_postal_suppression_editable']['suppress_value'] = 1;
  /* Field: Content: Active (editable) */
  $handler->display->display_options['fields']['field_active_editable']['id'] = 'field_active_editable';
  $handler->display->display_options['fields']['field_active_editable']['table'] = 'field_data_field_active';
  $handler->display->display_options['fields']['field_active_editable']['field'] = 'field_active_editable';
  $handler->display->display_options['fields']['field_active_editable']['label'] = 'Active in Group';
  $handler->display->display_options['fields']['field_active_editable']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_active_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_active_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_active_editable']['suppress_description'] = 1;
  $handler->display->display_options['fields']['field_active_editable']['suppress_value'] = 1;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['og_group_ref']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['label'] = 'Groups ID';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['path'] = 'group/node/%/members/edit';
  $handler->display->display_options['menu']['title'] = 'Area Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-group-members';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export - Riders */
  $handler = $view->new_display('views_data_export', 'Data export - Riders', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/node/[nid]">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Central Email Suppression */
  $handler->display->display_options['fields']['field_rider_email_suppression']['id'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['table'] = 'field_data_field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['field'] = 'field_rider_email_suppression';
  $handler->display->display_options['fields']['field_rider_email_suppression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email_suppression']['alter']['text'] = 'Sup';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['empty'] = '[field_rider_email_suppression] ';
  /* Field: Content: Membership Type */
  $handler->display->display_options['fields']['field_membership_type']['id'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['field'] = 'field_membership_type';
  $handler->display->display_options['fields']['field_membership_type']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_active']['id'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['table'] = 'field_data_field_active';
  $handler->display->display_options['fields']['field_active']['field'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_active']['alter']['text'] = 'Yes';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Group';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['og_group_ref']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['label'] = 'Groups ID';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['path'] = 'export/riders.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'page_4' => 0,
    'page_1' => 0,
  );

  /* Display: Rules Riders Details - welcome */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - welcome', 'views_rules_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Status (field_rider_status) */
  $handler->display->display_options['arguments']['field_rider_status_value']['id'] = 'field_rider_status_value';
  $handler->display->display_options['arguments']['field_rider_status_value']['table'] = 'field_data_field_rider_status';
  $handler->display->display_options['arguments']['field_rider_status_value']['field'] = 'field_rider_status_value';
  $handler->display->display_options['arguments']['field_rider_status_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_rider_status_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_rider_status_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_rider_status_value']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Welcome Email Sent (field_welcome_email_sent) */
  $handler->display->display_options['filters']['field_welcome_email_sent_value']['id'] = 'field_welcome_email_sent_value';
  $handler->display->display_options['filters']['field_welcome_email_sent_value']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['filters']['field_welcome_email_sent_value']['field'] = 'field_welcome_email_sent_value';
  $handler->display->display_options['filters']['field_welcome_email_sent_value']['operator'] = 'empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'field_rider_status_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - new/lapsed */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - new/lapsed', 'views_rules_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Status (field_rider_status) */
  $handler->display->display_options['arguments']['field_rider_status_value']['id'] = 'field_rider_status_value';
  $handler->display->display_options['arguments']['field_rider_status_value']['table'] = 'field_data_field_rider_status';
  $handler->display->display_options['arguments']['field_rider_status_value']['field'] = 'field_rider_status_value';
  $handler->display->display_options['arguments']['field_rider_status_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_rider_status_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rider_status_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_rider_status_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_rider_status_value']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'field_rider_status_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - subscribed */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - subscribed', 'views_rules_5');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Subscribed to groups emails (field_sub_to_groups_comms) */
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['id'] = 'field_sub_to_groups_comms_value';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['table'] = 'field_data_field_sub_to_groups_comms';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['field'] = 'field_sub_to_groups_comms_value';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - active and subscribed */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - active and subscribed', 'views_rules_6');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_rider_email_email']['group'] = 1;
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_email_suppression_value']['group'] = 1;
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['group'] = 2;
  /* Filter criterion: Content: Subscribed to groups emails (field_sub_to_groups_comms) */
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['id'] = 'field_sub_to_groups_comms_value';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['table'] = 'field_data_field_sub_to_groups_comms';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['field'] = 'field_sub_to_groups_comms_value';
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sub_to_groups_comms_value']['group'] = 2;
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - active */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - active', 'views_rules_7');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - ride leaders */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - ride leaders', 'views_rules_8');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Rider Leader (field_rider_leader) */
  $handler->display->display_options['filters']['field_rider_leader_value']['id'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['table'] = 'field_data_field_rider_leader';
  $handler->display->display_options['filters']['field_rider_leader_value']['field'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - committee */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - committee', 'views_rules_9');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['filters']['field_committee_member_value']['id'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['filters']['field_committee_member_value']['field'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - committee and ride leader */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - committee and ride leader', 'views_rules_10');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_rider_email_email']['group'] = 1;
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_email_suppression_value']['group'] = 1;
  /* Filter criterion: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['filters']['field_committee_member_value']['id'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['filters']['field_committee_member_value']['field'] = 'field_committee_member_value';
  $handler->display->display_options['filters']['field_committee_member_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_committee_member_value']['group'] = 2;
  /* Filter criterion: Content: Rider Leader (field_rider_leader) */
  $handler->display->display_options['filters']['field_rider_leader_value']['id'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['table'] = 'field_data_field_rider_leader';
  $handler->display->display_options['filters']['field_rider_leader_value']['field'] = 'field_rider_leader_value';
  $handler->display->display_options['filters']['field_rider_leader_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_rider_leader_value']['group'] = 2;
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'rider_status_value',
    ),
    'field_active_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Active (field_active)',
      'name' => 'active_value',
    ),
    'field_sub_to_groups_comms_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Subscribed to groups emails (field_sub_to_groups_comms)',
      'name' => 'sub_to_groups_comms_value',
    ),
    'field_committee_member_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Committee Member (field_committee_member)',
      'name' => 'committee_member_value',
    ),
    'field_rider_leader_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Rider Leader (field_rider_leader)',
      'name' => 'rider_leader_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details */
  $handler = $view->new_display('views_rules', 'Rules Riders Details', 'views_rules_11');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'field_rider_status_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );

  /* Display: Rules Riders Details - AGM */
  $handler = $view->new_display('views_rules', 'Rules Riders Details - AGM', 'views_rules_12');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    291 => '291',
    196 => '196',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: contact_number */
  $handler->display->display_options['fields']['field_rider_contact_number']['id'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['table'] = 'field_data_field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['field'] = 'field_rider_contact_number';
  $handler->display->display_options['fields']['field_rider_contact_number']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['fields']['field_rider_contact_number']['label'] = 'Contact No.';
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rider_contact_number']['alter']['text'] = '<a href="/rider/[nid]/update">[field_rider_contact_number]</a>';
  $handler->display->display_options['fields']['field_rider_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Forename */
  $handler->display->display_options['fields']['field_rider_forename']['id'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['table'] = 'field_data_field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['field'] = 'field_rider_forename';
  $handler->display->display_options['fields']['field_rider_forename']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_rider_surname']['id'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['table'] = 'field_data_field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['field'] = 'field_rider_surname';
  $handler->display->display_options['fields']['field_rider_surname']['relationship'] = 'reverse_og_group_ref_node';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_rider_email']['id'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['field'] = 'field_rider_email';
  $handler->display->display_options['fields']['field_rider_email']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_rider_email']['type'] = 'email_plain';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Welcome Email Sent */
  $handler->display->display_options['fields']['field_welcome_email_sent']['id'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['table'] = 'field_data_field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['field'] = 'field_welcome_email_sent';
  $handler->display->display_options['fields']['field_welcome_email_sent']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_rider_salutation']['id'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['table'] = 'field_data_field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['field'] = 'field_rider_salutation';
  $handler->display->display_options['fields']['field_rider_salutation']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_og_group_ref_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'rider' => 'rider',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Email (field_rider_email) */
  $handler->display->display_options['filters']['field_rider_email_email']['id'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['table'] = 'field_data_field_rider_email';
  $handler->display->display_options['filters']['field_rider_email_email']['field'] = 'field_rider_email_email';
  $handler->display->display_options['filters']['field_rider_email_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_rider_email_email']['group'] = 1;
  /* Filter criterion: Content: Email Suppression (field_email_suppression) */
  $handler->display->display_options['filters']['field_email_suppression_value']['id'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['table'] = 'field_data_field_email_suppression';
  $handler->display->display_options['filters']['field_email_suppression_value']['field'] = 'field_email_suppression_value';
  $handler->display->display_options['filters']['field_email_suppression_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_email_suppression_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_email_suppression_value']['group'] = 1;
  /* Filter criterion: Content: Voting Rights (field_voting_rights) */
  $handler->display->display_options['filters']['field_voting_rights_value']['id'] = 'field_voting_rights_value';
  $handler->display->display_options['filters']['field_voting_rights_value']['table'] = 'field_data_field_voting_rights';
  $handler->display->display_options['filters']['field_voting_rights_value']['field'] = 'field_voting_rights_value';
  $handler->display->display_options['filters']['field_voting_rights_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'og_group_ref_target_id' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Groups audience (og_group_ref)',
      'name' => 'og_group_ref_target_id',
    ),
    'field_rider_status_value' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Content: Status (field_rider_status)',
      'name' => 'field_rider_status_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'field_rider_contact_number' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Contact No.',
      'name' => 'rider_contact_number',
    ),
    'field_rider_forename' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Forename',
      'name' => 'rider_forename',
    ),
    'field_rider_surname' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Surname',
      'name' => 'rider_surname',
    ),
    'field_rider_email' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Email',
      'name' => 'rider_email',
    ),
    'og_group_ref' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Groups audience',
      'name' => 'rider_group',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'integer',
      'label' => 'Nid',
      'name' => 'nid',
    ),
    'field_welcome_email_sent' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'date',
      'label' => 'Welcome Email Sent',
      'name' => 'field_welcome_email_sent',
    ),
    'field_rider_salutation' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'Salutation',
      'name' => 'rider_salutation',
    ),
  );
  $export['riders'] = $view;

  return $export;
}
