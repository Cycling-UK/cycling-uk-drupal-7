<?php

/**
 * @file
 * leader_board_entry_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function leader_board_entry_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'leader_boards';
  $view->description = '';
  $view->tag = 'Leaderboard';
  $view->base_table = 'node';
  $view->human_name = 'Leader boards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cape Wrath';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_boards_firstname' => 'field_boards_firstname',
    'field_boards_lastname' => 'field_boards_lastname',
    'field_checkpoints' => 'field_checkpoints',
    'field_bcq_award_level' => 'field_bcq_award_level',
    'field_completed_date' => 'field_completed_date',
    'field_completed_date_editable' => 'field_completed_date_editable',
  );
  $handler->display->display_options['style_options']['class'] = 'bcq-table';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_boards_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_boards_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_checkpoints' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcq_award_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completed_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completed_date_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '50',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
/* For the standard odd/even */
tr.odd td.sorting_1 {
    background-color: transparent;
}

tr.odd td.sorting_2 {
    background-color: transparent;
}

tr.odd td.sorting_3 {
    background-color: transparent;
}

tr.even td.sorting_1 {
    background-color: transparent;
}

tr.even td.sorting_2 {
    background-color: transparent;
}

tr.even td.sorting_3 {
    background-color: transparent;
}


.main-container table.bcq-table tbody tr td,
.main-container table.leaderboard tbody tr td {
    border-right: 0;
    border-left: 0;
   padding: 8px 0 8px 8px;
}

.dataTables_filter input[type=text] {border: 1px solid lightgrey;}

.views-exposed-form .views-exposed-widget .form-submit {
    margin-top: 4px;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_boards_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_boards_lastname']['id'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['table'] = 'field_data_field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['field'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date (editable) */
  $handler->display->display_options['fields']['field_completed_date_editable']['id'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_editable']['field'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['label'] = 'Completed date';
  $handler->display->display_options['fields']['field_completed_date_editable']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y F',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_completed_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_value'] = 0;
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
    'leader_board_entry' => 'leader_board_entry',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '18623',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: British Cycle Quest Participants */
  $handler = $view->new_display('page', 'British Cycle Quest Participants', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'British Cycle Quest';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_boards_firstname' => 'field_boards_firstname',
    'field_boards_lastname' => 'field_boards_lastname',
    'field_checkpoints' => 'field_checkpoints',
    'field_bcq_award_level' => 'field_bcq_award_level',
    'field_completed_date_editable' => 'field_completed_date_editable',
  );
  $handler->display->display_options['style_options']['class'] = 'bcq-table';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_boards_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_boards_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_checkpoints' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcq_award_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completed_date_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '50',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
/* For the standard odd/even */
tr.odd td.sorting_1 {
    background-color: transparent;
}

tr.odd td.sorting_2 {
    background-color: transparent;
}

tr.odd td.sorting_3 {
    background-color: transparent;
}

tr.even td.sorting_1 {
    background-color: transparent;
}

tr.even td.sorting_2 {
    background-color: transparent;
}

tr.even td.sorting_3 {
    background-color: transparent;
}


.main-container table.bcq-table tbody tr td,
.main-container table.leaderboard tbody tr td {
    border-right: 0;
    border-left: 0;
   padding: 8px 0 8px 8px;
}

.dataTables_filter input[type=text] {border: 1px solid lightgrey;}



.views-exposed-form .views-exposed-widget .form-submit {
    margin-top: 2.6em;
}



table.bcq-table  {table-layout: auto;}
.main-container table.bcq-table thead tr th.views-field-field-boards-firstname {max-width: 176px;}
.views-field-field-award-level, .views-field-field-award-level {text-indent: 30px;}

</style>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_boards_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_boards_lastname']['id'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['table'] = 'field_data_field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['field'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Checkpoints */
  $handler->display->display_options['fields']['field_checkpoints']['id'] = 'field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['table'] = 'field_data_field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['field'] = 'field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_checkpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: BCQ Award level */
  $handler->display->display_options['fields']['field_bcq_award_level']['id'] = 'field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['table'] = 'field_data_field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['field'] = 'field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['label'] = 'Award level';
  $handler->display->display_options['fields']['field_bcq_award_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bcq_award_level']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date (editable) */
  $handler->display->display_options['fields']['field_completed_date_editable']['id'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_editable']['field'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_completed_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_completed_date_editable']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y F',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_completed_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_value'] = 0;
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
    'leader_board_entry' => 'leader_board_entry',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '18681',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: BCQ Award level (field_bcq_award_level) */
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['id'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['table'] = 'field_data_field_bcq_award_level';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['field'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['operator_id'] = 'field_bcq_award_level_tid_op';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['label'] = 'Award level:';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['operator'] = 'field_bcq_award_level_tid_op';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['identifier'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['vocabulary'] = 'british_cycle_quest_level';
  $handler->display->display_options['path'] = 'board/british-cycle-quest';

  /* Display: Cape Wrath Fellowship */
  $handler = $view->new_display('page', 'Cape Wrath Fellowship', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cape Wrath Fellowship';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_boards_firstname' => 'field_boards_firstname',
    'field_boards_lastname' => 'field_boards_lastname',
    'field_closing_date' => 'field_closing_date',
    'field_closing_date_1' => 'field_closing_date_1',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_boards_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_boards_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_closing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_closing_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '50',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_boards_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_boards_lastname']['id'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['table'] = 'field_data_field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['field'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date */
  $handler->display->display_options['fields']['field_completed_date']['id'] = 'field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['field'] = 'field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date */
  $handler->display->display_options['fields']['field_completed_date_1']['id'] = 'field_completed_date_1';
  $handler->display->display_options['fields']['field_completed_date_1']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_1']['field'] = 'field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_completed_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_completed_date_1']['settings'] = array(
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Completed date (field_completed_date) */
  $handler->display->display_options['sorts']['field_completed_date_value']['id'] = 'field_completed_date_value';
  $handler->display->display_options['sorts']['field_completed_date_value']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['sorts']['field_completed_date_value']['field'] = 'field_completed_date_value';
  $handler->display->display_options['sorts']['field_completed_date_value']['order'] = 'DESC';
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
    'leader_board_entry' => 'leader_board_entry',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '18686',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'board/cape-wrath-fellowship';

  /* Display: Cape Wrath Fellowship members block */
  $handler = $view->new_display('block', 'Cape Wrath Fellowship members block', 'cape_wrath_members_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cape Wrath Fellowship';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_boards_firstname' => 'field_boards_firstname',
    'field_boards_lastname' => 'field_boards_lastname',
    'field_completed_date_editable' => 'field_completed_date_editable',
  );
  $handler->display->display_options['style_options']['class'] = 'bcq-table';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_boards_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_boards_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completed_date_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '25',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
/* For the standard odd/even */
tr.odd td.sorting_1 {
    background-color: transparent;
}

tr.odd td.sorting_2 {
    background-color: transparent;
}

tr.odd td.sorting_3 {
    background-color: transparent;
}

tr.even td.sorting_1 {
    background-color: transparent;
}

tr.even td.sorting_2 {
    background-color: transparent;
}

tr.even td.sorting_3 {
    background-color: transparent;
}


.main-container table.bcq-table tbody tr td,
.main-container table.leaderboard tbody tr td {
    border-right: 0;
    border-left: 0;
   padding: 8px 0 8px 8px;
}

.main-container table.bcq-table tbody tr th.views-field-field-boards-firstname {max-width: 72px;}

.dataTables_filter input[type=text] {border: 1px solid lightgrey;}
.views-field-field-boards-lastname.sorting,
.views-field-field-boards-lastname.sorting_asc,
.views-field-field-boards-lastname.sorting_desc {
   background-position: center left;
}
</style>
<h2>Members of the Cape Wrath Fellowship</h2>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_boards_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_boards_lastname']['id'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['table'] = 'field_data_field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['field'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date (editable) */
  $handler->display->display_options['fields']['field_completed_date_editable']['id'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_editable']['field'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_completed_date_editable']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_completed_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_value'] = 0;
  /* Field: Content: Completed date */
  $handler->display->display_options['fields']['field_completed_date']['id'] = 'field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['field'] = 'field_completed_date';
  $handler->display->display_options['fields']['field_completed_date']['label'] = '';
  $handler->display->display_options['fields']['field_completed_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_completed_date']['settings'] = array(
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'leader_board_entry' => 'leader_board_entry',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '18686',
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: British Cycle Quest view block */
  $handler = $view->new_display('block', 'British Cycle Quest view block', 'block_bcq');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'British Cycle Quest';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
/* For the standard odd/even */
tr.odd td.sorting_1 {
    background-color: transparent;
}

tr.odd td.sorting_2 {
    background-color: transparent;
}

tr.odd td.sorting_3 {
    background-color: transparent;
}

tr.even td.sorting_1 {
    background-color: transparent;
}

tr.even td.sorting_2 {
    background-color: transparent;
}

tr.even td.sorting_3 {
    background-color: transparent;
}


.main-container table.bcq-table tbody tr td,
.main-container table.leaderboard tbody tr td {
    border-right: 0;
    border-left: 0;
   padding: 8px 0 8px 8px;
}

.dataTables_filter input[type=text] {border: 1px solid lightgrey;}

.views-exposed-form .views-exposed-widget .form-submit {
    margin-top: 4px;
}

@media only screen and (min-width: 400px) {
.views-exposed-form .views-exposed-widget {
    margin-bottom: -30px;
}
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
  $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Name';
  $handler->display->display_options['fields']['field_boards_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_firstname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_boards_lastname']['id'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['table'] = 'field_data_field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['field'] = 'field_boards_lastname';
  $handler->display->display_options['fields']['field_boards_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Checkpoints */
  $handler->display->display_options['fields']['field_checkpoints']['id'] = 'field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['table'] = 'field_data_field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['field'] = 'field_checkpoints';
  $handler->display->display_options['fields']['field_checkpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: BCQ Award level */
  $handler->display->display_options['fields']['field_bcq_award_level']['id'] = 'field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['table'] = 'field_data_field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['field'] = 'field_bcq_award_level';
  $handler->display->display_options['fields']['field_bcq_award_level']['label'] = 'Award level';
  $handler->display->display_options['fields']['field_bcq_award_level']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bcq_award_level']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Completed date (editable) */
  $handler->display->display_options['fields']['field_completed_date_editable']['id'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['table'] = 'field_data_field_completed_date';
  $handler->display->display_options['fields']['field_completed_date_editable']['field'] = 'field_completed_date_editable';
  $handler->display->display_options['fields']['field_completed_date_editable']['label'] = 'Completed date';
  $handler->display->display_options['fields']['field_completed_date_editable']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y F',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_completed_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_description'] = 0;
  $handler->display->display_options['fields']['field_completed_date_editable']['suppress_value'] = 0;
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
    'leader_board_entry' => 'leader_board_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '18681',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: BCQ Award level (field_bcq_award_level) */
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['id'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['table'] = 'field_data_field_bcq_award_level';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['field'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['operator_id'] = 'field_bcq_award_level_tid_op';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['label'] = 'Award level:';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['operator'] = 'field_bcq_award_level_tid_op';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['identifier'] = 'field_bcq_award_level_tid';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bcq_award_level_tid']['vocabulary'] = 'british_cycle_quest_level';
  $export['leader_boards'] = $view;

  return $export;
}
