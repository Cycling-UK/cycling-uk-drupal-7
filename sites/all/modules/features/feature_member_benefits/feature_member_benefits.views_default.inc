<?php

/**
 * @file
 * feature_member_benefits.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_member_benefits_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'member_benefits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Member benefits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pumped Up Profiles';
  $handler->display->display_options['use_ajax'] = TRUE;
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
    'field_member_benefit_category_value' => array(
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-6 col-sm-6 col-md-4 col-lg-3 col-xl-2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Member benefit category */
  $handler->display->display_options['fields']['field_member_benefit_category']['id'] = 'field_member_benefit_category';
  $handler->display->display_options['fields']['field_member_benefit_category']['table'] = 'field_data_field_member_benefit_category';
  $handler->display->display_options['fields']['field_member_benefit_category']['field'] = 'field_member_benefit_category';
  $handler->display->display_options['fields']['field_member_benefit_category']['label'] = '';
  $handler->display->display_options['fields']['field_member_benefit_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_benefit_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_benefit_category']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Member benefit key */
  $handler->display->display_options['fields']['field_member_benefit_category_1']['id'] = 'field_member_benefit_category_1';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['table'] = 'field_data_field_member_benefit_category';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['field'] = 'field_member_benefit_category';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['ui_name'] = 'Member benefit key';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_benefit_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_benefit_category_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_member_benefit_category_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Hero */
  $handler->display->display_options['fields']['field_hero']['id'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['table'] = 'field_data_field_hero';
  $handler->display->display_options['fields']['field_hero']['field'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['label'] = '';
  $handler->display->display_options['fields']['field_hero']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_hero']['settings'] = array(
    'file_view_mode' => 'views640x240',
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="colorbox-node colorbox-node-gallery btn btn-transparent" rel="gallery" href="[path]"><span>View</span></a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="member_benefit_container [field_member_benefit_category_1]">
  <div class="member_benefit_image [field_member_benefit_category_1]">[field_hero]</div>
  <div class="member_benefit_category">[field_member_benefit_category]</div>
  <div class="member_benefit_title_wrapper">
    <div class="member_benefit_title">[title]</div>
  </div>
  <!--<div class="member_benefit_button">View</div>-->
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'member_benefits:member_benefits_admin';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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

  /* Display: Member benefits */
  $handler = $view->new_display('page', 'Member benefits', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Member benefits';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div align="center"><h2 style="color:black;">Become a Cycling UK member to take advantage of these benefits</h2></div>
<div>&nbsp;</div>
<div align="center"><a class="btn" href="/join">Join today</a></div>
<div>&nbsp;</div>
<div>&nbsp;</div>
<div>&nbsp;</div>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'member_benefits:member_benefits_admin';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'member_benefit' => 'member_benefit',
  );
  /* Filter criterion: Content: Member benefit category (field_member_benefit_category) */
  $handler->display->display_options['filters']['field_member_benefit_category_value']['id'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['table'] = 'field_data_field_member_benefit_category';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['field'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['operator_id'] = 'field_member_benefit_category_value_op';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['operator'] = 'field_member_benefit_category_value_op';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['identifier'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'member-benefits';

  /* Display: Member benefits admin */
  $handler = $view->new_display('page', 'Member benefits admin', 'member_benefits_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Member benefits administration';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    196 => '196',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_member_benefit_category' => 'field_member_benefit_category',
    'field_member_benefit_category_1' => 'field_member_benefit_category_1',
    'field_hero' => 'field_hero',
    'title' => 'title',
    'path' => 'path',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_member_benefit_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_benefit_category_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hero' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '800';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'member_benefits:member_benefits_admin';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'member_benefit' => 'member_benefit',
  );
  $handler->display->display_options['path'] = 'member-benefits/admin';

  /* Display: Member benefits block */
  $handler = $view->new_display('block', 'Member benefits block', 'member_benefits_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Member benefits';
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
    'member_benefit' => 'member_benefit',
  );
  /* Filter criterion: Content: Member benefit category (field_member_benefit_category) */
  $handler->display->display_options['filters']['field_member_benefit_category_value']['id'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['table'] = 'field_data_field_member_benefit_category';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['field'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['operator_id'] = 'field_member_benefit_category_value_op';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['operator'] = 'field_member_benefit_category_value_op';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['identifier'] = 'field_member_benefit_category_value';
  $handler->display->display_options['filters']['field_member_benefit_category_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $export['member_benefits'] = $view;

  return $export;
}
