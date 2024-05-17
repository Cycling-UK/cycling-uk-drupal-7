<?php
/**
 * @file
 * features_100_women.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_100_women_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest';
  $handler->display->display_options['css_class'] = 'listing-page';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refine';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '<none>';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 1,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '2',
    ),
    'field_cycling_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '12';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-6';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Content: Hero (field_hero:fid) */
  $handler->display->display_options['relationships']['field_hero_fid']['id'] = 'field_hero_fid';
  $handler->display->display_options['relationships']['field_hero_fid']['table'] = 'field_data_field_hero';
  $handler->display->display_options['relationships']['field_hero_fid']['field'] = 'field_hero_fid';
  /* Field: Sticky pin marker */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['ui_name'] = 'Sticky pin marker';
  $handler->display->display_options['fields']['sticky']['label'] = '';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky']['type'] = 'custom';
  $handler->display->display_options['fields']['sticky']['type_custom_true'] = '<span class="wrapper"><span>Yes</span></span>';
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Field: Sticky panel marker */
  $handler->display->display_options['fields']['sticky_1']['id'] = 'sticky_1';
  $handler->display->display_options['fields']['sticky_1']['table'] = 'node';
  $handler->display->display_options['fields']['sticky_1']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky_1']['ui_name'] = 'Sticky panel marker';
  $handler->display->display_options['fields']['sticky_1']['label'] = '';
  $handler->display->display_options['fields']['sticky_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky_1']['not'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l, j F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Hero */
  $handler->display->display_options['fields']['field_hero']['id'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['table'] = 'field_data_field_hero';
  $handler->display->display_options['fields']['field_hero']['field'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['label'] = '';
  $handler->display->display_options['fields']['field_hero']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['field_hero']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_hero']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['field_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_hero']['settings'] = array(
    'file_view_mode' => 'views640x410',
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '#[term_node_tid-name]';
  $handler->display->display_options['fields']['term_node_tid']['alter']['max_length'] = '4';
  $handler->display->display_options['fields']['term_node_tid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'cycling_type' => 'cycling_type',
    'post_type' => 'post_type',
    'area' => 0,
    'article_type' => 0,
    'campaign' => 0,
    'campaign_theme' => 0,
    'category' => 0,
    'cycling_tribe' => 0,
    'dfp_ad_categories' => 0,
    'event_facility' => 0,
    'event_type' => 0,
    'glossary' => 0,
    'hero' => 0,
    'nested_test' => 0,
    'page_management' => 0,
    'project' => 0,
    'publication' => 0,
    'ride_type' => 0,
    'section' => 0,
    'status' => 0,
    'subject' => 0,
    'tags' => 0,
  );
  /* Field: Taxonomy fix */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Taxonomy fix';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[term_node_tid]';
  $handler->display->display_options['fields']['nothing_1']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="sticky">[sticky]</div>
<a class="sticky-[sticky_1]" href="[path]">
<span class="date">[created]</span>
<span class="image">[field_hero]</span>
<span class="terms">[nothing_1]</span>
<span class="yellow-line line-width-140"></span>
<span class="title">[title]</span>
<span class="btn btn-transparent">View</span>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Sort by latest';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['daycount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['daycount']['expose']['label'] = 'Sort by popular';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Sort by most viewed';
  /* Contextual filter: term and tags */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['ui_name'] = 'term and tags';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'article_type' => 'article_type',
    'campaign' => 'campaign',
    'cycling_type' => 'cycling_type',
    'cycling_uk_section' => 'cycling_uk_section',
    'newsletter' => 'newsletter',
    'page_management' => 'page_management',
    'post_type' => 'post_type',
    'publication' => 'publication',
    'ride_type' => 'ride_type',
    'status' => 'status',
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
  /* Contextual filter: Content: Post type (field_post_type) */
  $handler->display->display_options['arguments']['field_post_type_tid']['id'] = 'field_post_type_tid';
  $handler->display->display_options['arguments']['field_post_type_tid']['table'] = 'field_data_field_post_type';
  $handler->display->display_options['arguments']['field_post_type_tid']['field'] = 'field_post_type_tid';
  $handler->display->display_options['arguments']['field_post_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_post_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_post_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_post_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_post_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_post_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_post_type_tid']['validate_options']['vocabularies'] = array(
    'post_type' => 'post_type',
  );
  $handler->display->display_options['arguments']['field_post_type_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_post_type_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Article type (field_article_type) */
  $handler->display->display_options['arguments']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['arguments']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['arguments']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['arguments']['field_article_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_article_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_article_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_article_type_tid']['validate_options']['vocabularies'] = array(
    'article_type' => 'article_type',
  );
  $handler->display->display_options['arguments']['field_article_type_tid']['validate_options']['type'] = 'tids';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Cycling type (field_cycling_type) */
  $handler->display->display_options['filters']['field_cycling_type_tid']['id'] = 'field_cycling_type_tid';
  $handler->display->display_options['filters']['field_cycling_type_tid']['table'] = 'field_data_field_cycling_type';
  $handler->display->display_options['filters']['field_cycling_type_tid']['field'] = 'field_cycling_type_tid';
  $handler->display->display_options['filters']['field_cycling_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cycling_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['operator_id'] = 'field_cycling_type_tid_op';
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['label'] = 'Cycling type';
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['operator'] = 'field_cycling_type_tid_op';
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['identifier'] = 'field_cycling_type_tid';
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_cycling_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
    26 => 0,
    36 => 0,
    41 => 0,
    46 => 0,
    31 => 0,
    191 => 0,
    196 => 0,
    201 => 0,
    206 => 0,
    211 => 0,
    216 => 0,
    221 => 0,
    226 => 0,
    231 => 0,
    236 => 0,
    241 => 0,
    246 => 0,
    251 => 0,
  );
  $handler->display->display_options['filters']['field_cycling_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_cycling_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cycling_type_tid']['vocabulary'] = 'cycling_type';
  /* Filter criterion: Content: Post type (field_post_type) */
  $handler->display->display_options['filters']['field_post_type_tid']['id'] = 'field_post_type_tid';
  $handler->display->display_options['filters']['field_post_type_tid']['table'] = 'field_data_field_post_type';
  $handler->display->display_options['filters']['field_post_type_tid']['field'] = 'field_post_type_tid';
  $handler->display->display_options['filters']['field_post_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_post_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['operator_id'] = 'field_post_type_tid_op';
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['label'] = 'Post type';
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['operator'] = 'field_post_type_tid_op';
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['identifier'] = 'field_post_type_tid';
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_post_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_post_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_post_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_post_type_tid']['vocabulary'] = 'post_type';
  /* Filter criterion: Content: Article type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['operator_id'] = 'field_article_type_tid_op';
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['label'] = 'Article type';
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['operator'] = 'field_article_type_tid_op';
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['identifier'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_article_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_type';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Thumbnail Grid 100 Women */
  $handler = $view->new_display('block', 'Thumbnail Grid 100 Women', 'thumbnail_grid_100_women');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'one-hundred-women';
  $handler->display->display_options['display_description'] = 'Block that displays a grid of content thumbnails, used for 100 Women.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero */
  $handler->display->display_options['fields']['field_hero']['id'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['table'] = 'field_data_field_hero';
  $handler->display->display_options['fields']['field_hero']['field'] = 'field_hero';
  $handler->display->display_options['fields']['field_hero']['label'] = '';
  $handler->display->display_options['fields']['field_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_hero']['settings'] = array(
    'file_view_mode' => '10x_grid',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Latest';
  $export['taxonomy_grid'] = $view;

  return $export;
}
