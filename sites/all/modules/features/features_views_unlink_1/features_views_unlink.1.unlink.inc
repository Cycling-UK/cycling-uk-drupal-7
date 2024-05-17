<?php

/**
 * Unlink features_views_unlink_1_views_view().
 */
function features_views_unlink_1_views_view() {
$view = new view();
$view->name = 'accordion';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'field_collection_item';
$view->human_name = 'Accordion';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'views_accordion';
$handler->display->display_options['style_options']['row-start-open'] = '0';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Field collection item: Entity with the Accordion (field_accordion) */
$handler->display->display_options['relationships']['field_accordion_node']['id'] = 'field_accordion_node';
$handler->display->display_options['relationships']['field_accordion_node']['table'] = 'field_collection_item';
$handler->display->display_options['relationships']['field_accordion_node']['field'] = 'field_accordion_node';
/* Field: Field collection item: Accordion Title */
$handler->display->display_options['fields']['field_accordion_title']['id'] = 'field_accordion_title';
$handler->display->display_options['fields']['field_accordion_title']['table'] = 'field_data_field_accordion_title';
$handler->display->display_options['fields']['field_accordion_title']['field'] = 'field_accordion_title';
$handler->display->display_options['fields']['field_accordion_title']['label'] = '';
$handler->display->display_options['fields']['field_accordion_title']['element_label_colon'] = FALSE;
/* Field: Field collection item: Accordion Copy */
$handler->display->display_options['fields']['field_accordion_copy']['id'] = 'field_accordion_copy';
$handler->display->display_options['fields']['field_accordion_copy']['table'] = 'field_data_field_accordion_copy';
$handler->display->display_options['fields']['field_accordion_copy']['field'] = 'field_accordion_copy';
$handler->display->display_options['fields']['field_accordion_copy']['label'] = '';
$handler->display->display_options['fields']['field_accordion_copy']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_accordion_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Field collection item: Accordion Title (field_accordion_title) */
$handler->display->display_options['filters']['field_accordion_title_value']['id'] = 'field_accordion_title_value';
$handler->display->display_options['filters']['field_accordion_title_value']['table'] = 'field_data_field_accordion_title';
$handler->display->display_options['filters']['field_accordion_title_value']['field'] = 'field_accordion_title_value';
$handler->display->display_options['filters']['field_accordion_title_value']['operator'] = 'not empty';

/* Display: Accordion Field Colllection EVA Field */
$handler = $view->new_display('entity_view', 'Accordion Field Colllection EVA Field', 'entity_view_1');
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'landing_page',
);

$view->save();
$view = new view();
$view->name = 'advert_hero';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'bean';
$view->human_name = 'Advert hero';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['css_class'] = 'hero hero-advert wide-container';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
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
$handler->display->display_options['fields']['field_image']['type'] = 'picture';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'picture_mapping' => 'hero',
  'fallback_image_style' => '',
  'lazyload' => 1,
  'lazyload_aspect_ratio' => 0,
  'image_link' => '',
  'colorbox_settings' => array(
    'colorbox_group' => 'colorbox_gallery',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  ),
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
  12 => '12',
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
  14 => '14',
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
  15 => '15',
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

$view->save();
$view = new view();
$view->name = 'autocomplete';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Autocomplete';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '65';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'j M y';
$handler->display->display_options['fields']['created']['second_date_format'] = 'day_month';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
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
  'briefings' => 'briefings',
  'campaign' => 'campaign',
  'course_details' => 'course_details',
  'landing_page' => 'landing_page',
  'newsletter' => 'newsletter',
  'post' => 'post',
  'publication' => 'publication',
);

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_ride_type' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

$view->save();
$view = new view();
$view->name = 'carousel';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Carousel';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Featured';
$handler->display->display_options['css_class'] = 'carousel-triplet news listing-page';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-triplet';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_editorial_node']['id'] = 'reverse_field_editorial_node';
$handler->display->display_options['relationships']['reverse_field_editorial_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_editorial_node']['field'] = 'reverse_field_editorial_node';
$handler->display->display_options['relationships']['reverse_field_editorial_node']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_editorial_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Latest by Cycling Type Taxonomy */
$handler = $view->new_display('block', 'Latest by Cycling Type Taxonomy', 'block_carousel_cycle_type');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Cycling type (field_cycling_type) */
$handler->display->display_options['arguments']['field_cycling_type_tid']['id'] = 'field_cycling_type_tid';
$handler->display->display_options['arguments']['field_cycling_type_tid']['table'] = 'field_data_field_cycling_type';
$handler->display->display_options['arguments']['field_cycling_type_tid']['field'] = 'field_cycling_type_tid';
$handler->display->display_options['arguments']['field_cycling_type_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_cycling_type_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_cycling_type_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_cycling_type_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_cycling_type_tid']['specify_validation'] = TRUE;
$handler->display->display_options['block_description'] = 'Latest';

/* Display: EVA Editorial Carousel */
$handler = $view->new_display('entity_view', 'EVA Editorial Carousel', 'entity_view_1');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'landing_page',
);
$handler->display->display_options['show_title'] = 1;

$view->save();
$view = new view();
$view->name = 'carousel_hero';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'bean';
$view->human_name = 'Carousel hero';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['css_class'] = 'hero hero-carousel wide-container';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-hero';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'picture';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'picture_mapping' => 'hero',
  'fallback_image_style' => '',
  'lazyload' => 1,
  'lazyload_aspect_ratio' => 0,
  'image_link' => '',
  'colorbox_settings' => array(
    'colorbox_group' => 'hero',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  ),
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
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  6 => '6',
);
$handler->display->display_options['filters']['field_hero_type_tid']['expose']['operator_id'] = 'field_hero_type_tid_op';
$handler->display->display_options['filters']['field_hero_type_tid']['expose']['label'] = 'Hero type (field_hero_type)';
$handler->display->display_options['filters']['field_hero_type_tid']['expose']['operator'] = 'field_hero_type_tid_op';
$handler->display->display_options['filters']['field_hero_type_tid']['expose']['identifier'] = 'field_hero_type_tid';
$handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';
$handler->display->display_options['filters']['field_hero_type_tid']['hierarchy'] = 1;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'child_pages';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Child Pages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'In this section';
$handler->display->display_options['css_class'] = 'child-list';
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
    'secondary_collapse_override' => '0',
  ),
  'field_cycling_type_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
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
);
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'responsive_grid';
$handler->display->display_options['style_options']['columns'] = '12';
$handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-4';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'child_page';
/* Relationship: Menu: Parent menu link id */
$handler->display->display_options['relationships']['plid']['id'] = 'plid';
$handler->display->display_options['relationships']['plid']['table'] = 'menu_links';
$handler->display->display_options['relationships']['plid']['field'] = 'plid';
$handler->display->display_options['relationships']['plid']['required'] = TRUE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
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
  'file_view_mode' => 'views640x240',
);
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['preserve_tags'] = '<img>';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'file_view_mode' => 'views640x240',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '65';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Image Custom */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Image Custom';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_hero][field_image]';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing_1']['empty'] = '<img typeof="foaf:Image" class="img-responsive" src="http://dev.cyclinguk.org/sites/default/files/styles/640x240/public/media/migrated/info/cyclinguk-rgb_tb_padding.jpg?itok=wmUxflI0" width="640" height="240" alt="">';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">
<span class="image">[nothing_1]</span>
<span class="inner-wrapper">
  <span class="title">[title]</span>
  <span class="btn btn-transparent">View</span>
</span>
</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Menu: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'menu_links';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Contextual filter: Menu: Node id */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'menu_links';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['depth'] = '1';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Menu: Hidden */
$handler->display->display_options['filters']['hidden']['id'] = 'hidden';
$handler->display->display_options['filters']['hidden']['table'] = 'menu_links';
$handler->display->display_options['filters']['hidden']['field'] = 'hidden';
$handler->display->display_options['filters']['hidden']['value']['value'] = '0';

/* Display: EVA Field */
$handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'page',
  1 => 'landing_page',
  2 => 'publication',
);
$handler->display->display_options['show_title'] = 1;

$view->save();
$view = new view();
$view->name = 'front_page_featured_events_carousel';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Front page featured events carousel';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'carousel-triplet event';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-triplet';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['label'] = 'Latest';
$handler->display->display_options['header']['area_text_custom']['content'] = 'Featured events';
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['label'] = 'View all';
$handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-standard btn-shadow" href="/events">View all events</a>
';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Field: Sticky pin marker */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['ui_name'] = 'Sticky pin marker';
$handler->display->display_options['fields']['sticky']['label'] = '';
$handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
$handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sticky']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['sticky']['empty_zero'] = TRUE;
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
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '320x200',
  'image_link' => '',
);
/* Field: Content: End of objection period */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'event',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
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
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="sticky">[sticky]</div>
<a class="sticky-[sticky_1]" href="[path]">
  <span class="image">[field_image]</span>
  <span class="date">[field_date]</span>
  <span class="yellow-line"></span>
  <span class="title">[title]</span>
  <span class="btn btn-transparent">View</span>
</a>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Filter criterion: Content: Published */
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
  'event' => 'event',
);
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
/* Filter criterion: Content: End of objection period (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -4 hours';
/* Filter criterion: Field: Image (field_image:fid) */
$handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
$handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'front_page_local_events';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Front page local events';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'event-listing-strip';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['label'] = 'Local events';
$handler->display->display_options['header']['area_text_custom']['content'] = 'Local events';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Day number */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['ui_name'] = 'Day number';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'day_number',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Day name */
$handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
$handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date_1']['ui_name'] = 'Day name';
$handler->display->display_options['fields']['field_date_1']['label'] = '';
$handler->display->display_options['fields']['field_date_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date_1']['settings'] = array(
  'format_type' => 'day_name',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Day month */
$handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
$handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Day month';
$handler->display->display_options['fields']['field_date_2']['label'] = '';
$handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date_2']['settings'] = array(
  'format_type' => 'day_month',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Year */
$handler->display->display_options['fields']['field_date_3']['id'] = 'field_date_3';
$handler->display->display_options['fields']['field_date_3']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date_3']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date_3']['ui_name'] = 'Year';
$handler->display->display_options['fields']['field_date_3']['label'] = '';
$handler->display->display_options['fields']['field_date_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date_3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date_3']['settings'] = array(
  'format_type' => 'year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Address - Locality (i.e. City) */
$handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
$handler->display->display_options['fields']['field_address_locality']['label'] = '';
$handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
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
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="date day-number">[field_date]</div>
<div class="date day-name">[field_date_1]</div>
<div class="date day-month">[field_date_2]</div>
<div class="date year">[field_date_3]</div>
<span class="purple-line"></span>
<div class="location">[field_address_locality]</div>
<div class="title">[title]</div>
<a href="[path]" class="btn btn-purple">View</a>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Filter criterion: Content: Published */
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
  'event' => 'event',
);
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '0';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'front_page_news_carousel';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Front page news carousel';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'carousel-triplet news listing-page';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-triplet';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['label'] = 'Latest';
$handler->display->display_options['header']['area_text_custom']['content'] = 'Latest';
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['label'] = 'View all';
$handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-standard btn-shadow" href="/news">View all</a>
';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'hour';
/* Filter criterion: Content: Published */
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
  'post' => 'post',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'join_heroes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'bean';
$view->human_name = 'Join heroes';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['css_class'] = 'hero hero-carousel wide-container';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-hero';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'picture';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'picture_mapping' => 'hero',
  'fallback_image_style' => '',
  'lazyload' => 0,
  'lazyload_aspect_ratio' => 0,
  'image_link' => '',
  'colorbox_settings' => array(
    'colorbox_group' => 'colorbox_gallery',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  ),
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
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  21 => '21',
);
$handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';
$handler->display->display_options['filters']['field_hero_type_tid']['hierarchy'] = 1;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'listings';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'News listing';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Cycling news';
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
    'secondary_collapse_override' => '0',
  ),
  'field_cycling_type_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
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
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
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
  'post_type' => 0,
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
/* Sort criterion: Content: Promoted to front page */
$handler->display->display_options['sorts']['promote']['id'] = 'promote';
$handler->display->display_options['sorts']['promote']['table'] = 'node';
$handler->display->display_options['sorts']['promote']['field'] = 'promote';
$handler->display->display_options['sorts']['promote']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
$handler->display->display_options['filters']['field_post_type_tid']['value'] = array(
  96 => '96',
);
$handler->display->display_options['filters']['field_post_type_tid']['group'] = 1;
$handler->display->display_options['filters']['field_post_type_tid']['reduce_duplicates'] = TRUE;
$handler->display->display_options['filters']['field_post_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_post_type_tid']['vocabulary'] = 'post_type';
$handler->display->display_options['filters']['field_post_type_tid']['hierarchy'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'post' => 'post',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'news-listing';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Full Listing';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-content';
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
  'default' => 0,
);
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

$view->save();
$view = new view();
$view->name = 'magazine_carousel';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Magazine carousel';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'carousel-triplet magazine';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-triplet';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['label'] = 'Browse';
$handler->display->display_options['header']['area_text_custom']['content'] = 'Previous issues';
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['label'] = 'View all';
$handler->display->display_options['footer']['area']['content'] = '<!--<a class="btn btn-standard btn-shadow" href="/news">View all</a>-->
';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Magazine cover */
$handler->display->display_options['fields']['field_magazine_cover']['id'] = 'field_magazine_cover';
$handler->display->display_options['fields']['field_magazine_cover']['table'] = 'field_data_field_magazine_cover';
$handler->display->display_options['fields']['field_magazine_cover']['field'] = 'field_magazine_cover';
$handler->display->display_options['fields']['field_magazine_cover']['label'] = '';
$handler->display->display_options['fields']['field_magazine_cover']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_magazine_cover']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_magazine_cover']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_magazine_cover']['settings'] = array(
  'image_style' => 'large',
  'image_link' => '',
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="sticky-No" href="[path]">
  <span class="date">[title]</span>
  <span class="image">[field_magazine_cover]</span>
  <span class="btn btn-transparent">View</span>
</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'day';
/* Filter criterion: Content: Published */
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
  'publication' => 'publication',
);
/* Filter criterion: Content: Publication type (field_publication_type) */
$handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
$handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
$handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
$handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
  12571 => '12571',
);
$handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

$view->save();
$view = new view();
$view->name = 'page_management';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Page management';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Page management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Page management */
$handler->display->display_options['fields']['field_page_management']['id'] = 'field_page_management';
$handler->display->display_options['fields']['field_page_management']['table'] = 'field_data_field_page_management';
$handler->display->display_options['fields']['field_page_management']['field'] = 'field_page_management';
$handler->display->display_options['fields']['field_page_management']['label'] = 'Page issues';
$handler->display->display_options['fields']['field_page_management']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_page_management']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_page_management']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_page_management']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_page_management']['multi_type'] = 'ul';
/* Field: Content: Review comments */
$handler->display->display_options['fields']['field_review_comments']['id'] = 'field_review_comments';
$handler->display->display_options['fields']['field_review_comments']['table'] = 'field_data_field_review_comments';
$handler->display->display_options['fields']['field_review_comments']['field'] = 'field_review_comments';
$handler->display->display_options['fields']['field_review_comments']['label'] = 'Comments';
$handler->display->display_options['fields']['field_review_comments']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_review_comments']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_review_comments']['type'] = 'text_plain';
/* Field: Content: Review date */
$handler->display->display_options['fields']['field_review_date']['id'] = 'field_review_date';
$handler->display->display_options['fields']['field_review_date']['table'] = 'field_data_field_review_date';
$handler->display->display_options['fields']['field_review_date']['field'] = 'field_review_date';
$handler->display->display_options['fields']['field_review_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_review_date']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_review_date']['settings'] = array(
  'format_type' => 'event',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'btn btn-standard';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit page';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

$view->save();
$view = new view();
$view->name = 'related';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Related Content View';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['css_class'] = 'listing-page carousel-triplet';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'responsive_grid';
$handler->display->display_options['style_options']['columns'] = '12';
$handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-4';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'child_page';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Further Reading';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_further_reading_target_id']['id'] = 'field_further_reading_target_id';
$handler->display->display_options['relationships']['field_further_reading_target_id']['table'] = 'field_data_field_further_reading';
$handler->display->display_options['relationships']['field_further_reading_target_id']['field'] = 'field_further_reading_target_id';
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
$handler->display->display_options['fields']['created']['second_date_format'] = 'day_month';
/* Field: Content: Hero */
$handler->display->display_options['fields']['field_hero']['id'] = 'field_hero';
$handler->display->display_options['fields']['field_hero']['table'] = 'field_data_field_hero';
$handler->display->display_options['fields']['field_hero']['field'] = 'field_hero';
$handler->display->display_options['fields']['field_hero']['label'] = '';
$handler->display->display_options['fields']['field_hero']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_hero']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_hero']['alter']['preserve_tags'] = '<img>';
$handler->display->display_options['fields']['field_hero']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_hero']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_hero']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_hero']['settings'] = array(
  'file_view_mode' => 'views640x410',
);
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['preserve_tags'] = '<img>';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['type'] = 'file_rendered';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'file_view_mode' => 'views640x410',
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
/* Field: Content: All taxonomy terms */
$handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
$handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['fields']['term_node_tid']['label'] = '';
$handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
$handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
$handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
  'cycling_type' => 'cycling_type',
  'post_type' => 'post_type',
  'article_type' => 0,
  'campaign' => 0,
  'cycling_uk_section' => 0,
  'dfp_ad_categories' => 0,
  'event_facility' => 0,
  'event_type' => 0,
  'hero' => 0,
  'nested_test' => 0,
  'newsletter' => 0,
  'page_management' => 0,
  'publication' => 0,
  'ride_type' => 0,
  'status' => 0,
  'tags' => 0,
);
/* Field: Taxonomy fix */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Taxonomy fix';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[term_node_tid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
$handler->display->display_options['fields']['nothing_2']['table'] = 'views';
$handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_2']['label'] = '';
$handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="sticky"></div>
<a class="sticky-No" href="[path]">
<span class="date">[created]</span>
<span class="image">[field_hero][field_image]</span>
<span class="terms">[nothing]</span>
<span class="yellow-line line-width-140"></span>
<span class="title">[title]</span>
<span class="btn btn-transparent">View</span>
</a>';
$handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_further_reading_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Related - Block */
$handler = $view->new_display('block', 'Related - Block', 'related_nodes');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'responsive_grid';
$handler->display->display_options['style_options']['columns'] = '12';
$handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-4';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'child_page';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_further_reading_node']['id'] = 'reverse_field_further_reading_node';
$handler->display->display_options['relationships']['reverse_field_further_reading_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_further_reading_node']['field'] = 'reverse_field_further_reading_node';
$handler->display->display_options['relationships']['reverse_field_further_reading_node']['label'] = 'Referencing Further Reading';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_further_reading_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['block_description'] = 'Related Content View';

/* Display: Linked To  - Block */
$handler = $view->new_display('block', 'Linked To  - Block', 'linked_to');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Related Articles';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_further_reading_target_id']['id'] = 'field_further_reading_target_id';
$handler->display->display_options['relationships']['field_further_reading_target_id']['table'] = 'field_data_field_further_reading';
$handler->display->display_options['relationships']['field_further_reading_target_id']['field'] = 'field_further_reading_target_id';
$handler->display->display_options['relationships']['field_further_reading_target_id']['label'] = 'Referenced From Further Reading';

$view->save();
$view = new view();
$view->name = 'taxonomy';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Taxonomy';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Latest';
$handler->display->display_options['css_class'] = 'listing-page';
$handler->display->display_options['use_more'] = TRUE;
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
    'allow_secondary' => 1,
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
/* Contextual filter: term1 */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['ui_name'] = 'term1';
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
  'post_type' => 'post_type',
  'publication' => 'publication',
  'tags' => 'tags',
);
$handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Search: Search Terms */
$handler->display->display_options['filters']['keys']['id'] = 'keys';
$handler->display->display_options['filters']['keys']['table'] = 'search_index';
$handler->display->display_options['filters']['keys']['field'] = 'keys';
$handler->display->display_options['filters']['keys']['exposed'] = TRUE;
$handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
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
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '1';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'taxonomy/term/%';
$handler->display->display_options['menu']['title'] = 'Full Listing';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-content';
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
  'default' => 0,
);
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

/* Display: Block Carousel Taxonomy */
$handler = $view->new_display('block', 'Block Carousel Taxonomy', 'block_carousel_taxonomy');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_related-content';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'day';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['block_description'] = 'Latest';

/* Display: Block Listing Taxonomy */
$handler = $view->new_display('block', 'Block Listing Taxonomy', 'block_listing_taxonomy');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['granularity'] = 'day';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['block_description'] = 'Latest';

/* Display: Block Video Taxonomy */
$handler = $view->new_display('block', 'Block Video Taxonomy', 'block_video_taxonomy');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'owlcarousel';
$handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_carousel-hero';
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
$handler->display->display_options['fields']['field_hero']['alter']['max_length'] = '0';
$handler->display->display_options['fields']['field_hero']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_hero']['alter']['preserve_tags'] = '<img>';
$handler->display->display_options['fields']['field_hero']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_hero']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_hero']['type'] = 'file_video';
$handler->display->display_options['fields']['field_hero']['settings'] = array(
  'controls' => 1,
  'autoplay' => 0,
  'loop' => 0,
  'muted' => 0,
  'width' => '1100',
  'height' => '600',
  'preload' => '',
  'multiple_file_behavior' => 'tags',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div class="middle-wrapper">
  <div class="inner-wrapper">
    <div class="title">[title]</div>
  </div>
</div>';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Latest';
$handler->display->display_options['sorts']['created']['granularity'] = 'minute';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

$view->save();
$view = new view();
$view->name = 'taxonomy_manager';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Taxonomy Manager';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Taxonomy Manager';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'secondary_collapse_override' => '0',
  ),
  'machine_name' => array(
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
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'name' => 'name',
  'nid' => 'nid',
);
$handler->display->display_options['style_options']['default'] = 'nid';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['views_bulk_operations']['element_wrapper_class'] = 'checkbox';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_change_owner_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'log' => 0,
    ),
  ),
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Count';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['exposed'] = TRUE;
$handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
$handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Vocabulary';
$handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
$handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['expose']['remember_roles'] = array(
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
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'admin/taxonomy-manager';

$view->save();
}
