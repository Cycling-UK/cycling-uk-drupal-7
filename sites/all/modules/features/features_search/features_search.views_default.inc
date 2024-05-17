<?php

/**
 * @file
 * features_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_results';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__acquia_search_server_3';
  $view->human_name = 'Search Results';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 1,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Please enter your search above and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'keyword' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'sm_field_author' => 'sm_field_author',
    'tos_name_formatted' => 'tos_name_formatted',
    'bundle' => 'bundle',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['bundle']['id'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['bundle']['field'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['label'] = '';
  $handler->display->display_options['fields']['bundle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bundle']['alter']['text'] = '<div class="[bundle]">[bundle]</div>';
  $handler->display->display_options['fields']['bundle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['bundle_name']['id'] = 'bundle_name';
  $handler->display->display_options['fields']['bundle_name']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['bundle_name']['field'] = 'bundle_name';
  $handler->display->display_options['fields']['bundle_name']['label'] = '';
  $handler->display->display_options['fields']['bundle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['bundle_name']['alter']['text'] = '<div class="[bundle]">[bundle_name]</div>';
  $handler->display->display_options['fields']['bundle_name']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['label']['element_type'] = 'h3';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Published';
  /* Field: Apache Solr: Snippet */
  $handler->display->display_options['fields']['snippet']['id'] = 'snippet';
  $handler->display->display_options['fields']['snippet']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['snippet']['field'] = 'snippet';
  $handler->display->display_options['fields']['snippet']['label'] = '';
  $handler->display->display_options['fields']['snippet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['snippet']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['label'] = '';
  $handler->display->display_options['fields']['teaser']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['teaser']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: Score */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  $handler->display->display_options['fields']['score']['label'] = '';
  $handler->display->display_options['fields']['score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['score']['element_label_colon'] = FALSE;
  /* Sort criterion: Apache Solr: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  $handler->display->display_options['sorts']['score']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['score']['expose']['label'] = 'Relevance';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['ds_changed']['id'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['sorts']['ds_changed']['field'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_changed']['expose']['label'] = 'Date Changed';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['ds_created']['id'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['sorts']['ds_created']['field'] = 'ds_created';
  $handler->display->display_options['sorts']['ds_created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['ds_created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['ds_created']['expose']['label'] = 'Date created';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__acquia_search_server_3';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'site-search';
  $export['search_results'] = $view;

  return $export;
}
