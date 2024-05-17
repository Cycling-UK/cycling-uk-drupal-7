<?php

/**
 * @file
 * amp_integration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_integration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_advert_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'AMP advert hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'hero hero-advert wide-container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'amp_image';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'hero_tablet',
    'image_link' => '',
    'amp_layout' => 'responsive',
    'amp_fixed_height' => '300',
  );
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Field: Markup */
  $handler->display->display_options['fields']['field_markup']['id'] = 'field_markup';
  $handler->display->display_options['fields']['field_markup']['table'] = 'field_data_field_markup';
  $handler->display->display_options['fields']['field_markup']['field'] = 'field_markup';
  $handler->display->display_options['fields']['field_markup']['label'] = '';
  $handler->display->display_options['fields']['field_markup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_markup']['element_label_colon'] = FALSE;
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="middle-wrapper">
  <div class="inner-wrapper">
    <span class="yellow-line"></span>
    <div class="title">[title]</div>
    <div class="subtitle">[field_teaser]</div>
    <div class="markup">[field_markup]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'outer-wrapper';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Block: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'bean';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: Advert 1 */
  $handler = $view->new_display('block', 'Advert 1', 'block_1');

  /* Display: Advert 2 */
  $handler = $view->new_display('block', 'Advert 2', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA volunteer */
  $handler = $view->new_display('block', 'CTA volunteer', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA donate */
  $handler = $view->new_display('block', 'CTA donate', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA magazine */
  $handler = $view->new_display('block', 'CTA magazine', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    5881 => '5881',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA join */
  $handler = $view->new_display('block', 'CTA join', 'block_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    14121 => '14121',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA local groups */
  $handler = $view->new_display('block', 'CTA local groups', 'block_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hero' => 'hero',
  );
  /* Filter criterion: Block: Hero type (field_hero_type) */
  $handler->display->display_options['filters']['field_hero_type_tid']['id'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['table'] = 'field_data_field_hero_type';
  $handler->display->display_options['filters']['field_hero_type_tid']['field'] = 'field_hero_type_tid';
  $handler->display->display_options['filters']['field_hero_type_tid']['value'] = array(
    14126 => '14126',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';
  $export['amp_advert_hero'] = $view;

  $view = new view();
  $view->name = 'amp_view_desktop_site';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AMP view desktop site';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="btn btn-purple btn-shadow" href="[path]">View on desktop site</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['amp_view_desktop_site'] = $view;

  return $export;
}
