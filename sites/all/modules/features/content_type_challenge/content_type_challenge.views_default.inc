<?php

/**
 * @file
 * content_type_challenge.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type_challenge_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'challenge_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Challenge Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bike Week 2021 Challenges 2021';
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
    'term_node_tid_depth' => array(
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
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '6';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Challenge group and type (field_challenge_group_and_type) */
  $handler->display->display_options['relationships']['field_challenge_group_and_type_tid']['id'] = 'field_challenge_group_and_type_tid';
  $handler->display->display_options['relationships']['field_challenge_group_and_type_tid']['table'] = 'field_data_field_challenge_group_and_type';
  $handler->display->display_options['relationships']['field_challenge_group_and_type_tid']['field'] = 'field_challenge_group_and_type_tid';
  $handler->display->display_options['relationships']['field_challenge_group_and_type_tid']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'square_it',
    'image_link' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Challenge group and type */
  $handler->display->display_options['fields']['field_challenge_group_and_type']['id'] = 'field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['table'] = 'field_data_field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['field'] = 'field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_challenge_group_and_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_group_and_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="colorbox-node colorbox-node-gallery btn btn-transparent" rel="gallery" href="[path]?width=280"><span>Read</span><i class="fal fa-external-link"></i></a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['relationship'] = 'field_challenge_group_and_type_tid';
  $handler->display->display_options['fields']['field_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_level']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="challenge_image [field_level]">[field_image]</div>
<div class="challenge-level  [field_challenge_group_and_type]">[field_challenge_group_and_type]</div>
<div class="challenge-title">[title]</div>
<div class="challenge-headline">[field_headline]</div>
<div class="challenge-link">[path]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'cycle_challenge' => 'cycle_challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = array(
    18698 => '18698',
    18699 => '18699',
    18697 => '18697',
    18696 => '18696',
    18700 => '18700',
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'challenge';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    18698 => '18698',
    18699 => '18699',
    18697 => '18697',
    18700 => '18700',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Challenge type';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'challenge-level';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'challenge';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Bike Week Challenges */
  $handler = $view->new_display('page', 'Bike Week Challenges', 'bikeweek_challenges_page');
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
    'image_style' => 'square_it',
    'image_link' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Challenge group and type */
  $handler->display->display_options['fields']['field_challenge_group_and_type']['id'] = 'field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['table'] = 'field_data_field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['field'] = 'field_challenge_group_and_type';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_challenge_group_and_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_group_and_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_challenge_group_and_type']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="colorbox-node colorbox-node-gallery btn btn-transparent" rel="gallery" href="[path]?width=280"><span>Read</span><i class="fal fa-external-link"></i></a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['relationship'] = 'field_challenge_group_and_type_tid';
  $handler->display->display_options['fields']['field_level']['label'] = '';
  $handler->display->display_options['fields']['field_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_level']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="challenge_image [field_level]">[field_image]</div>
<div class="challenge-level  [field_challenge_group_and_type]">[field_challenge_group_and_type]</div>
<div class="challenge-title">[title]</div>
<div class="challenge-headline">[field_headline]</div>
<div class="challenge-link">[path]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'bikeweek/challenges';

  /* Display: WFOC Challenges */
  $handler = $view->new_display('page', 'WFOC Challenges', 'wfoc_challenges_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Women\'s Festival of Cycling Challenges';
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
    'cycle_challenge' => 'cycle_challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = array(
    18693 => '18693',
    18695 => '18695',
    18694 => '18694',
    18692 => '18692',
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'challenge';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '1';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    18693 => '18693',
    18694 => '18694',
    18702 => '18702',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Challenge type';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'challenge-level';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'challenge';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['path'] = 'womensfestival/challenges';
  $export['challenge_grid'] = $view;

  return $export;
}
