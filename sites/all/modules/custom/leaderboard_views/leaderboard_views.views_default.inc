<?php


/**
 * Implements hook_views_default_views().
 */
function leaderboard_views_views_default_views() {

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
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => 'views-align-center',
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
    /* Relationship: Content: Taxonomy terms on node */
    $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
    $handler->display->display_options['enabled'] = FALSE;
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'field_boards_firstname' => 'field_boards_firstname',
      'field_boards_lastname' => 'field_boards_lastname',
      'field_checkpoints' => 'field_checkpoints',
      'field_bcq_award_level' => 'field_bcq_award_level',
      'field_completed_date_editable' => 'field_completed_date_editable',
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
        'sortable' => 0,
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
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_completed_date_editable' => array(
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
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Content: Taxonomy terms on node */
    $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
      'british_cycle_quest_level' => 'british_cycle_quest_level',
      'article_type' => 0,
      'bike_type' => 0,
      'campaign' => 0,
      'care_taxonomy_mailing_suppression_code' => 0,
      'care_taxonomy_membership_code' => 0,
      'care_taxonomy_promotion_code' => 0,
      'care_taxonomy_source_code' => 0,
      'cycling_type' => 0,
      'cycling_uk_section' => 0,
      'dfp_ad_categories' => 0,
      'event_facility' => 0,
      'event_type' => 0,
      'hero' => 0,
      'nested_test' => 0,
      'newsletter' => 0,
      'page_management' => 0,
      'points_of_interest' => 0,
      'post_type' => 0,
      'publication' => 0,
      'ride_level' => 0,
      'ride_section' => 0,
      'ride_type' => 0,
      'route_type' => 0,
      'status' => 0,
      'tags' => 0,
    );
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
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Taxonomy term: Weight */
    $handler->display->display_options['sorts']['weight']['id'] = 'weight';
    $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['sorts']['weight']['field'] = 'weight';
    $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    $handler->display->display_options['enabled'] = FALSE;
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
    $handler->display->display_options['defaults']['pager'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '100';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '6';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'field_boards_firstname' => 'field_boards_firstname',
      'field_boards_lastname' => 'field_boards_lastname',
      'field_completion_year' => 'field_completion_year',
    );
    $handler->display->display_options['style_options']['class'] = '';
    $handler->display->display_options['style_options']['default'] = 'field_completion_year';
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
      'field_completion_year' => array(
        'sortable' => 1,
        'default_sort_order' => 'desc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
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
    .field-name-body .view-display-id-cape_wrath_members_block ul li {
      padding-left: 0;
      text-indent: 0 !important;
      margin-bottom: 0;
    }


    .field-name-body ul li:before {
      display:none;
    }
    </style>
    <h2 style="text-align: center; margin-top: 44px;">Members of the Cape Wrath Fellowship</h2>';
    $handler->display->display_options['header']['area']['format'] = 'code';
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: First Name */
    $handler->display->display_options['fields']['field_boards_firstname']['id'] = 'field_boards_firstname';
    $handler->display->display_options['fields']['field_boards_firstname']['table'] = 'field_data_field_boards_firstname';
    $handler->display->display_options['fields']['field_boards_firstname']['field'] = 'field_boards_firstname';
    $handler->display->display_options['fields']['field_boards_firstname']['label'] = 'Initial';
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
    $handler->display->display_options['fields']['field_boards_lastname']['label'] = 'Last name';
    $handler->display->display_options['fields']['field_boards_lastname']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_boards_lastname']['type'] = 'text_plain';
    $handler->display->display_options['fields']['field_boards_lastname']['settings'] = array(
      'empty_fields_handler' => '',
      'empty_fields_emptyfieldtext_empty_text' => '',
    );
    /* Field: Content: Year */
    $handler->display->display_options['fields']['field_completion_year']['id'] = 'field_completion_year';
    $handler->display->display_options['fields']['field_completion_year']['table'] = 'field_data_field_completion_year';
    $handler->display->display_options['fields']['field_completion_year']['field'] = 'field_completion_year';
    $handler->display->display_options['fields']['field_completion_year']['settings'] = array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
      'empty_fields_handler' => '',
      'empty_fields_emptyfieldtext_empty_text' => '',
    );
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Content: Year (field_completion_year) */
    $handler->display->display_options['sorts']['field_completion_year_value']['id'] = 'field_completion_year_value';
    $handler->display->display_options['sorts']['field_completion_year_value']['table'] = 'field_data_field_completion_year';
    $handler->display->display_options['sorts']['field_completion_year_value']['field'] = 'field_completion_year_value';
    $handler->display->display_options['sorts']['field_completion_year_value']['order'] = 'DESC';
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
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'datatables';
    $handler->display->display_options['style_options']['default_row_class'] = FALSE;
    $handler->display->display_options['style_options']['columns'] = array(
      'weight' => 'weight',
      'field_boards_firstname' => 'field_boards_firstname',
      'field_boards_lastname' => 'field_boards_lastname',
      'field_checkpoints' => 'field_checkpoints',
      'field_bcq_award_level' => 'field_bcq_award_level',
      'field_completed_date_editable' => 'field_completed_date_editable',
    );
    $handler->display->display_options['style_options']['class'] = 'bcq-table';
    $handler->display->display_options['style_options']['default'] = 'weight';
    $handler->display->display_options['style_options']['info'] = array(
      'weight' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
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
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => 'views-align-center',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_completed_date_editable' => array(
        'sortable' => 0,
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

        .views-field-field-boards-lastname.sorting,
        .views-field-field-boards-lastname.sorting_asc,
        .views-field-field-boards-lastname.sorting_desc {
            background-position: center left;
        }

        .main-container table.bcq-table tbody tr td,
        .main-container table.leaderboard tbody tr td {
            border-right: 0;
            border-left: 0;
            padding: 8px 0 8px 8px;
        }

        table.bcq-table thead tr th.views-field-field-boards-firstname,
        table.bcq-table tbody tr td.views-field-field-boards-firstname {
            max-width: 78px;
        }

        .dataTables_filter input[type="text"] {
            border: 1px solid lightgrey;
        }

        .views-exposed-form .views-exposed-widget .form-submit {
            margin-top: 4px;
        }

        table.bcq-table thead tr th.views-field-field-checkpoints,
        table.bcq-table tbody tr td.views-field-field-checkpoints,
        table.bcq-table thead tr th.views-field-field-bcq-award-level,
        table.bcq-table tbody tr td.views-field-field-bcq-award-level {
            text-align: center;
        }

        .form-item-field-bcq-award-level-tid .form-control {
            padding: 10px 40px 10px 20px;
        }

        @media only screen and (min-width: 400px) {
        /*  .views-exposed-form .views-exposed-widget {
                margin-bottom: -30px;
            } */

            table.bcq-table thead tr th.views-field-field-completed-date-editable,
            table.bcq-table tbody tr td.views-field-field-completed-date-editable {
                text-indent: 20%;
            }
        }


        </style>';
    $handler->display->display_options['header']['area']['format'] = 'code';
    $handler->display->display_options['defaults']['relationships'] = FALSE;
    /* Relationship: Content: Taxonomy terms on node */
    $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
      'british_cycle_quest_level' => 'british_cycle_quest_level',
      'article_type' => 0,
      'bike_type' => 0,
      'campaign' => 0,
      'care_taxonomy_mailing_suppression_code' => 0,
      'care_taxonomy_membership_code' => 0,
      'care_taxonomy_promotion_code' => 0,
      'care_taxonomy_source_code' => 0,
      'cycling_type' => 0,
      'cycling_uk_section' => 0,
      'dfp_ad_categories' => 0,
      'event_facility' => 0,
      'event_type' => 0,
      'hero' => 0,
      'nested_test' => 0,
      'newsletter' => 0,
      'page_management' => 0,
      'points_of_interest' => 0,
      'post_type' => 0,
      'publication' => 0,
      'ride_level' => 0,
      'ride_section' => 0,
      'ride_type' => 0,
      'route_type' => 0,
      'status' => 0,
      'tags' => 0,
    );
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Taxonomy term: Weight */
    $handler->display->display_options['fields']['weight']['id'] = 'weight';
    $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['fields']['weight']['field'] = 'weight';
    $handler->display->display_options['fields']['weight']['relationship'] = 'term_node_tid';
    $handler->display->display_options['fields']['weight']['exclude'] = TRUE;
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
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    /* Sort criterion: Taxonomy term: Weight */
    $handler->display->display_options['sorts']['weight']['id'] = 'weight';
    $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
    $handler->display->display_options['sorts']['weight']['field'] = 'weight';
    $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
      
    $views[$view->name] = $view;

  return $views;
}