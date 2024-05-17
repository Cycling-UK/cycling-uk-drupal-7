<?php

/**
 * @file
 * content_type_partners.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_partners_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partner_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partner grid';
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
    'field_partner_type_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'image_style' => 'medium',
    'image_link' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Partner type */
  $handler->display->display_options['fields']['field_partner_type_1']['id'] = 'field_partner_type_1';
  $handler->display->display_options['fields']['field_partner_type_1']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['fields']['field_partner_type_1']['field'] = 'field_partner_type';
  $handler->display->display_options['fields']['field_partner_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_partner_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_type_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Partner type key */
  $handler->display->display_options['fields']['field_partner_type']['id'] = 'field_partner_type';
  $handler->display->display_options['fields']['field_partner_type']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['fields']['field_partner_type']['field'] = 'field_partner_type';
  $handler->display->display_options['fields']['field_partner_type']['ui_name'] = 'Partner type key';
  $handler->display->display_options['fields']['field_partner_type']['label'] = '';
  $handler->display->display_options['fields']['field_partner_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_type']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_partner_type']['settings'] = array(
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
  /* Field: Content: Headline */
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="partner_image [field_partner_type]">[field_image]</div>
<div class="partner_category">[field_partner_type_1]</div>
<div class="partner_title">[title]</div>
<div class="partner_headline">[field_headline]</div>
<div class="partner_link">[path]</div>';
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

  /* Display: Workplace partners */
  $handler = $view->new_display('page', 'Workplace partners', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accredited organisations';
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
    'partner' => 'partner',
  );
  /* Filter criterion: Content: Partner type (field_partner_type) */
  $handler->display->display_options['filters']['field_partner_type_value']['id'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['filters']['field_partner_type_value']['field'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_type_value']['expose']['operator_id'] = 'field_partner_type_value_op';
  $handler->display->display_options['filters']['field_partner_type_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_partner_type_value']['expose']['operator'] = 'field_partner_type_value_op';
  $handler->display->display_options['filters']['field_partner_type_value']['expose']['identifier'] = 'field_partner_type_value';
  $handler->display->display_options['filters']['field_partner_type_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'workplaces/partners';
  $export['partner_grid'] = $view;

  return $export;
}
