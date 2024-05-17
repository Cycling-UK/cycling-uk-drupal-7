<?php

/**
 * @file
 * feature_content_type_biography.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_content_type_biography_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'biography_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Biography grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pumped Up Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_biography_category_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'View all',
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '6';
  $handler->display->display_options['style_options']['columns_sm'] = '4';
  $handler->display->display_options['style_options']['columns_md'] = '3';
  $handler->display->display_options['style_options']['columns_lg'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'crop_square',
    'image_link' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Biography category */
  $handler->display->display_options['fields']['field_biography_category']['id'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['field'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['label'] = '';
  $handler->display->display_options['fields']['field_biography_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_category']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Biography category key */
  $handler->display->display_options['fields']['field_biography_category_1']['id'] = 'field_biography_category_1';
  $handler->display->display_options['fields']['field_biography_category_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['fields']['field_biography_category_1']['field'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category_1']['ui_name'] = 'Biography category key';
  $handler->display->display_options['fields']['field_biography_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_biography_category_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_category_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_biography_category_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_headline']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Short biography */
  $handler->display->display_options['fields']['field_short_biography']['id'] = 'field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['table'] = 'field_data_field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['field'] = 'field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['label'] = '';
  $handler->display->display_options['fields']['field_short_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_biography']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_short_biography']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_biography']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="colorbox-node colorbox-node-gallery btn btn-transparent" rel="gallery" href="[path]?width=280"><span>Read</span><i class="fal fa-external-link"></i></a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="biography_image [field_biography_category_1]">[field_image]</div>
<div class="biography_category">[field_biography_category]</div>
<div class="biography_title">[title]</div>
<div class="biography_headline">[field_headline]</div>
<!--<div class="biography_short_biography">[field_short_biography]</div>-->
<div class="biography_link">[path]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value']['id'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['value'] = array(
    'community_champion' => 'community_champion',
    'industry_mogul' => 'industry_mogul',
    'cycle_influencer' => 'cycle_influencer',
    'sporting_hero' => 'sporting_hero',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator_id'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['identifier'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );

  /* Display: 100 Women */
  $handler = $view->new_display('page', '100 Women', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '100 Women in Cycling 2020';
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value']['id'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['value'] = array(
    'community_champion' => 'community_champion',
    'industry_mogul' => 'industry_mogul',
    'cycle_influencer' => 'cycle_influencer',
    'sporting_hero' => 'sporting_hero',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator_id'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['identifier'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );
  $handler->display->display_options['path'] = 'womensfestival/100women/2020-old';

  /* Display: Pumped Up */
  $handler = $view->new_display('page', 'Pumped Up', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pumped Up Portraits';
  $handler->display->display_options['enabled'] = FALSE;
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );
  $handler->display->display_options['path'] = 'pumpedup/portraits';

  /* Display: 100 Women 2020 */
  $handler = $view->new_display('page', '100 Women 2020', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '100 Women in Cycling 2020';
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value']['id'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['value'] = array(
    'community_champion' => 'community_champion',
    'industry_mogul' => 'industry_mogul',
    'cycle_influencer' => 'cycle_influencer',
    'sporting_hero' => 'sporting_hero',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator_id'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['identifier'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );
  /* Filter criterion: Content: Biography section (field_biography_section) */
  $handler->display->display_options['filters']['field_biography_section_tid']['id'] = 'field_biography_section_tid';
  $handler->display->display_options['filters']['field_biography_section_tid']['table'] = 'field_data_field_biography_section';
  $handler->display->display_options['filters']['field_biography_section_tid']['field'] = 'field_biography_section_tid';
  $handler->display->display_options['filters']['field_biography_section_tid']['value'] = array(
    19241 => '19241',
  );
  $handler->display->display_options['filters']['field_biography_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biography_section_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'womensfestival/100women/2020';

  /* Display: 100 Women 2021 */
  $handler = $view->new_display('page', '100 Women 2021', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '100 Women in Cycling 2021';
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value']['id'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['value'] = array(
    'community_champion' => 'community_champion',
    'industry_mogul' => 'industry_mogul',
    'cycle_influencer' => 'cycle_influencer',
    'sporting_hero' => 'sporting_hero',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator_id'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['identifier'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );
  /* Filter criterion: Content: Biography section (field_biography_section) */
  $handler->display->display_options['filters']['field_biography_section_tid']['id'] = 'field_biography_section_tid';
  $handler->display->display_options['filters']['field_biography_section_tid']['table'] = 'field_data_field_biography_section';
  $handler->display->display_options['filters']['field_biography_section_tid']['field'] = 'field_biography_section_tid';
  $handler->display->display_options['filters']['field_biography_section_tid']['value'] = array(
    19246 => '19246',
  );
  $handler->display->display_options['filters']['field_biography_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biography_section_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'womensfestival/100women/2021';

  /* Display: 100 Women 2022 */
  $handler = $view->new_display('page', '100 Women 2022', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '100 Women in Cycling 2022';
  $handler->display->display_options['display_description'] = 'v2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'crop_square',
    'image_link' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Biography category */
  $handler->display->display_options['fields']['field_biography_category']['id'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['field'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category']['label'] = '';
  $handler->display->display_options['fields']['field_biography_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_category']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Biography category key */
  $handler->display->display_options['fields']['field_biography_category_1']['id'] = 'field_biography_category_1';
  $handler->display->display_options['fields']['field_biography_category_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['fields']['field_biography_category_1']['field'] = 'field_biography_category';
  $handler->display->display_options['fields']['field_biography_category_1']['ui_name'] = 'Biography category key';
  $handler->display->display_options['fields']['field_biography_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_biography_category_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography_category_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_biography_category_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_headline']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Short biography */
  $handler->display->display_options['fields']['field_short_biography']['id'] = 'field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['table'] = 'field_data_field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['field'] = 'field_short_biography';
  $handler->display->display_options['fields']['field_short_biography']['label'] = '';
  $handler->display->display_options['fields']['field_short_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_biography']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_short_biography']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_short_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_biography']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="colorbox-node colorbox-node-gallery btn btn-transparent" rel="gallery" href="[path]?width=280"><span>Read</span><i class="fal fa-external-link"></i></a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="biography_image [field_biography_category_1]">[field_image]</div>
<div class="biography_category">[field_biography_category]</div>
<div class="biography_title">[title]</div>
<div class="biography_headline">[field_headline]</div>
<!--<div class="biography_short_biography">[field_short_biography]</div> -->
<div class="biography_link">[path]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'biography' => 'biography',
  );
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value']['id'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['value'] = array(
    'community_champion' => 'community_champion',
    'industry_mogul' => 'industry_mogul',
    'cycle_influencer' => 'cycle_influencer',
    'sporting_hero' => 'sporting_hero',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator_id'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['operator'] = 'field_biography_category_value_op';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['identifier'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_biography_category_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Biography category (field_biography_category) */
  $handler->display->display_options['filters']['field_biography_category_value_1']['id'] = 'field_biography_category_value_1';
  $handler->display->display_options['filters']['field_biography_category_value_1']['table'] = 'field_data_field_biography_category';
  $handler->display->display_options['filters']['field_biography_category_value_1']['field'] = 'field_biography_category_value';
  $handler->display->display_options['filters']['field_biography_category_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_biography_category_value_1']['value'] = array(
    'pumped_up' => 'pumped_up',
  );
  /* Filter criterion: Content: Biography section v2 (field_biography_section_v2) */
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['id'] = 'field_biography_section_v2_tid';
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['table'] = 'field_data_field_biography_section_v2';
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['field'] = 'field_biography_section_v2_tid';
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['value'] = array(
    19251 => '19251',
  );
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biography_section_v2_tid']['vocabulary'] = 'cycling_uk_section';
  $handler->display->display_options['path'] = '100women/2022';
  $export['biography_grid'] = $view;

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
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'post_type' => 'post_type',
  );
  /* Filter criterion: Taxonomy term: Content Type (field_content_type) */
  $handler->display->display_options['filters']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['filters']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['value'] = array(
    'post' => 'post',
  );

  /* Display: Term Reference -  Post */
  $handler = $view->new_display('term_reference', 'Term Reference -  Post', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Term Reference - Landing page */
  $handler = $view->new_display('term_reference', 'Term Reference - Landing page', 'term_reference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'post_type' => 'post_type',
  );
  /* Filter criterion: Taxonomy term: Content Type (field_content_type) */
  $handler->display->display_options['filters']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['filters']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['value'] = array(
    'landing_page' => 'landing_page',
  );

  /* Display: Term Reference -  Briefings */
  $handler = $view->new_display('term_reference', 'Term Reference -  Briefings', 'term_reference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'post_type' => 'post_type',
  );
  /* Filter criterion: Taxonomy term: Content Type (field_content_type) */
  $handler->display->display_options['filters']['field_content_type_value']['id'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['table'] = 'field_data_field_content_type';
  $handler->display->display_options['filters']['field_content_type_value']['field'] = 'field_content_type_value';
  $handler->display->display_options['filters']['field_content_type_value']['value'] = array(
    'briefing' => 'briefing',
  );

  /* Display: Term Reference - WFoC */
  $handler = $view->new_display('term_reference', 'Term Reference - WFoC', 'term_reference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'cycling_uk_section' => 'cycling_uk_section',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'starts';
  $handler->display->display_options['filters']['name']['value'] = '100 Women in Cycling';
  $export['term_reference'] = $view;

  return $export;
}
