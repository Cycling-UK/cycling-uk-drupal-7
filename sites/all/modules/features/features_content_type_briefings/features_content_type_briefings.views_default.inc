<?php

/**
 * @file
 * features_content_type_briefings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_content_type_briefings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'briefings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Briefings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Views & Briefings';
  $handler->display->display_options['css_class'] = 'listing-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refine';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '1',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 1,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 1,
      ),
    ),
    'field_tags_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
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
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Search [current-page:title]',
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '12';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p style=" text-align: center;">Each briefing includes: headline messages (for those after a speedy overview); Cycling UK\'s formal views; quick key facts; and more detailed arguments and background information.</p>

<p style=" text-align: center;">Overall, the briefings are categorised into six core themes: commitment to cycling (health, environment, transport policies etc); designed for cycling; off-road access; promotion and encouragement; safe drivers and vehicles; and public transport.</p>

<p style=" text-align: center;">Key briefings include: <a href="/node/47716" target="_blank">cycling &amp; local transport</a>; <a href="/node/60996" target="_blank">health</a>; <a href="/node/60941" target="_blank">cycle-friendly planning &amp; design</a>; <a href="/node/61031" target="_blank">road safety</a>; <a href="/node/61051" target="_blank">road traffic law &amp; enforcement</a>; <a href="/node/61071" target="_blank">cyclists\' behaviour &amp; the law;</a> <a href="/node/61001" target="_blank">\'smarter choices\'</a>; <a href="/node/61101" target="_blank">cycling in schools</a> and <a href="/node/61061" target="_blank">cycle-friendly employers</a>.</p>

<p style=" text-align: center;">You can access the whole list below, or filter by theme.</p>

<p>&nbsp;<br></p>

';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Sort criterion: Content: Sticky status */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Latest';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['daycount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['daycount']['expose']['label'] = 'Popular';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Most Viewed';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'briefings' => 'briefings',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_tags_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['label'] = 'Campaigning Theme';
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Commitment to Cycling',
      'operator' => 'or',
      'value' => array(
        7271 => '7271',
      ),
    ),
    2 => array(
      'title' => 'Designed for Cycling',
      'operator' => 'or',
      'value' => array(
        7296 => '7296',
      ),
    ),
    3 => array(
      'title' => 'Off-road Access',
      'operator' => 'or',
      'value' => array(
        7311 => '7311',
      ),
    ),
    4 => array(
      'title' => 'Promotion and Encouragement',
      'operator' => 'or',
      'value' => array(
        7356 => '7356',
      ),
    ),
    5 => array(
      'title' => 'Public Transport',
      'operator' => 'or',
      'value' => array(
        7301 => '7301',
      ),
    ),
    6 => array(
      'title' => 'Safe Driver and Vehicles',
      'operator' => 'or',
      'value' => array(
        7306 => '7306',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'campaigns/briefings';
  $handler->display->display_options['menu']['title'] = 'Briefings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'promoted_article');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '640x410',
    'image_link' => '',
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
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = ' ';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'cycling_type' => 'cycling_type',
    'article_type' => 0,
    'dfp_ad_categories' => 0,
    'hero' => 0,
    'post_type' => 0,
    'publication' => 0,
    'tags' => 0,
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="promoted-article-wrapper">
  <div class="left-container">
    <span class="image">[field_image][field_hero]</span>
  </div>
  <div class="right-container">
    <div class="wrapper">
      <!--<span class="date">[created]</span>-->
      <span class="terms">[term_node_tid]</span>
      <span class="yellow-line line-width-140"></span>
      <span class="title">[title]</span>
      <a class="btn btn-transparent" href="[path]">View</a>
    </div>
  </div>
<div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['briefings'] = $view;

  return $export;
}
