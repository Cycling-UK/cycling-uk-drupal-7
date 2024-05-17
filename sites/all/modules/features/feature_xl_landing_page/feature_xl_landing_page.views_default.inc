<?php

/**
 * @file
 * feature_xl_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_xl_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'paragraphs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'Paragraphs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Paragraphs - video plus 4 calls to action';
  $handler->display->display_options['css_class'] = 'view-front-page-featured-content top-article';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Paragraphs item: Call to action (field_paragraph_call_to_action) */
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value']['id'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value']['table'] = 'field_data_field_paragraph_call_to_action';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value']['field'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value']['label'] = 'field collection item from field_paragraph_call_to_action1';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value']['delta'] = '0';
  /* Relationship: Paragraphs item: Call to action (field_paragraph_call_to_action) */
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_1']['id'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_1']['table'] = 'field_data_field_paragraph_call_to_action';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_1']['field'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_1']['label'] = 'field collection item from field_paragraph_call_to_action2';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_1']['delta'] = '1';
  /* Relationship: Paragraphs item: Call to action (field_paragraph_call_to_action) */
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_2']['id'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_2']['table'] = 'field_data_field_paragraph_call_to_action';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_2']['field'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_2']['label'] = 'field collection item from field_paragraph_call_to_action3';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_2']['delta'] = '2';
  /* Relationship: Paragraphs item: Call to action (field_paragraph_call_to_action) */
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_3']['id'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_3']['table'] = 'field_data_field_paragraph_call_to_action';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_3']['field'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_3']['label'] = 'field collection item from field_paragraph_call_to_action4';
  $handler->display->display_options['relationships']['field_paragraph_call_to_action_value_3']['delta'] = '3';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'picture_mapping' => 'clone_of_hero',
    'fallback_image_style' => 'hd_hero_homepage',
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
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Markup */
  $handler->display->display_options['fields']['field_markup']['id'] = 'field_markup';
  $handler->display->display_options['fields']['field_markup']['table'] = 'field_data_field_markup';
  $handler->display->display_options['fields']['field_markup']['field'] = 'field_markup';
  $handler->display->display_options['fields']['field_markup']['label'] = '';
  $handler->display->display_options['fields']['field_markup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_markup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_markup']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Redirect Link */
  $handler->display->display_options['fields']['field_redirect_link']['id'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Paragraphs item: Background Theme */
  $handler->display->display_options['fields']['field_background_theme']['id'] = 'field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['table'] = 'field_data_field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['field'] = 'field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['label'] = '';
  $handler->display->display_options['fields']['field_background_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_theme']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_background_theme']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<br>[field_subtitle]';
  $handler->display->display_options['fields']['field_subtitle']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_redirect_link]">
  <div class="featured-content-image">[field_image]</div>
</a>
 <div class="featured-content-title background-tint">[field_title]
<div class="featured-content-subtitle">[field_subtitle]</div>
<div class="featured-content-markup">[field_markup]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';

  /* Display: Paragraph - Full image and title */
  $handler = $view->new_display('block', 'Paragraph - Full image and title', 'block');
  $handler->display->display_options['block_description'] = 'Paragraph - Full image and title';

  /* Display: Paragraphs 4 calls to action */
  $handler = $view->new_display('entity_view', 'Paragraphs 4 calls to action', 'entity_view_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Redirect */
  $handler->display->display_options['fields']['field_redirect_link']['id'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_redirect_link']['ui_name'] = 'CTA1 Redirect';
  $handler->display->display_options['fields']['field_redirect_link']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Title */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_title_1']['ui_name'] = 'CTA1 Title';
  $handler->display->display_options['fields']['field_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Icon */
  $handler->display->display_options['fields']['field_icon_class']['id'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_icon_class']['ui_name'] = 'CTA1 Icon';
  $handler->display->display_options['fields']['field_icon_class']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_1']['id'] = 'field_redirect_link_1';
  $handler->display->display_options['fields']['field_redirect_link_1']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_1']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_1']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_redirect_link_1']['ui_name'] = 'CTA2 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Title */
  $handler->display->display_options['fields']['field_title_2']['id'] = 'field_title_2';
  $handler->display->display_options['fields']['field_title_2']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_2']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_2']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_title_2']['ui_name'] = 'CTA2 Title';
  $handler->display->display_options['fields']['field_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_2']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_2']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Icon */
  $handler->display->display_options['fields']['field_icon_class_1']['id'] = 'field_icon_class_1';
  $handler->display->display_options['fields']['field_icon_class_1']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_1']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_1']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_icon_class_1']['ui_name'] = 'CTA2 Icon';
  $handler->display->display_options['fields']['field_icon_class_1']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_2']['id'] = 'field_redirect_link_2';
  $handler->display->display_options['fields']['field_redirect_link_2']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_2']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_2']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_redirect_link_2']['ui_name'] = 'CTA3 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_2']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_2']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Title */
  $handler->display->display_options['fields']['field_title_3']['id'] = 'field_title_3';
  $handler->display->display_options['fields']['field_title_3']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_3']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_3']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_title_3']['ui_name'] = 'CTA3 Title';
  $handler->display->display_options['fields']['field_title_3']['label'] = '';
  $handler->display->display_options['fields']['field_title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_3']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_3']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Icon */
  $handler->display->display_options['fields']['field_icon_class_2']['id'] = 'field_icon_class_2';
  $handler->display->display_options['fields']['field_icon_class_2']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_2']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_2']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_icon_class_2']['ui_name'] = 'CTA3 Icon';
  $handler->display->display_options['fields']['field_icon_class_2']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_2']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_3']['id'] = 'field_redirect_link_3';
  $handler->display->display_options['fields']['field_redirect_link_3']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_3']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_3']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_redirect_link_3']['ui_name'] = 'CTA4 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_3']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_3']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_3']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_3']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Title */
  $handler->display->display_options['fields']['field_title_4']['id'] = 'field_title_4';
  $handler->display->display_options['fields']['field_title_4']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_4']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_4']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_title_4']['ui_name'] = 'CTA4 Title';
  $handler->display->display_options['fields']['field_title_4']['label'] = '';
  $handler->display->display_options['fields']['field_title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_4']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_4']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Icon */
  $handler->display->display_options['fields']['field_icon_class_3']['id'] = 'field_icon_class_3';
  $handler->display->display_options['fields']['field_icon_class_3']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_3']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_3']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_icon_class_3']['ui_name'] = 'CTA4 Icon';
  $handler->display->display_options['fields']['field_icon_class_3']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_3']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_3']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Paragraphs item: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'picture_mapping' => 'clone_of_hero',
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
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="mapping-icons" style="background-image: none;">
	
	<h2>[field_title] </h2>
	<h3>[field_subtitle]</h3>
	
	<div class="mapping-icons-container clearfix">
		
		<div class="col-xs-6 col-sm-3 col-md-3 icon icon-1">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link]">
				<i class="fal [field_icon_class]"></i>
			</a>
			<div class="icon-label">[field_title_1]</div>
		</div>

		<div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_1]">
				<i class="fal [field_icon_class_1]"></i>
			</a>
			<div class="icon-label">[field_title_2]</div>
		</div>

		<div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_2]">
				<i class="fal [field_icon_class_2]"></i>
			</a>
			<div class="icon-label">[field_title_3]</div>
		</div>
		<div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_3]">
				<i class="fal [field_icon_class_3]"></i>
			</a>
			<div class="icon-label">[field_title_4]</div>
		</div>
	
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'calls_to_action_buttons_x4_with_',
  );

  /* Display: Paragraphs - Full width */
  $handler = $view->new_display('entity_view', 'Paragraphs - Full width', 'entity_view_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'full_width_image_and_title',
  );

  /* Display: Paragraphs - 4 Articles */
  $handler = $view->new_display('entity_view', 'Paragraphs - 4 Articles', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Paragraphs - 4 Articles';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'carousel-triplet news listing-page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Stories */
  $handler->display->display_options['fields']['field_featured_articles']['id'] = 'field_featured_articles';
  $handler->display->display_options['fields']['field_featured_articles']['table'] = 'field_data_field_featured_articles';
  $handler->display->display_options['fields']['field_featured_articles']['field'] = 'field_featured_articles';
  $handler->display->display_options['fields']['field_featured_articles']['ui_name'] = 'Stories';
  $handler->display->display_options['fields']['field_featured_articles']['label'] = '';
  $handler->display->display_options['fields']['field_featured_articles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_articles']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_featured_articles']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
    'use_content_language' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_featured_articles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_featured_articles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_featured_articles']['multi_type'] = 'ul';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_1']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => '',
    'title_class' => 'container',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'featured_articles_x4',
    1 => 'four_featured_articles',
  );

  /* Display: Paragraphs - 4 Videos */
  $handler = $view->new_display('entity_view', 'Paragraphs - 4 Videos', 'entity_view_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Paragraphs - 4 videos';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'carousel-triplet news listing-page home-page-video';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['manual_load'] = 1;
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['style_options']['column_class'] = 'flexvid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Paragraphs item: Videos (field_videos_x4) */
  $handler->display->display_options['relationships']['field_videos_x4_value']['id'] = 'field_videos_x4_value';
  $handler->display->display_options['relationships']['field_videos_x4_value']['table'] = 'field_data_field_videos_x4';
  $handler->display->display_options['relationships']['field_videos_x4_value']['field'] = 'field_videos_x4_value';
  $handler->display->display_options['relationships']['field_videos_x4_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: YouTube title */
  $handler->display->display_options['fields']['field_youtube_title']['id'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['table'] = 'field_data_field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['field'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['relationship'] = 'field_videos_x4_value';
  $handler->display->display_options['fields']['field_youtube_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_title']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['relationship'] = 'field_videos_x4_value';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_youtube_url']['settings'] = array(
    'image_style' => 'video_thumbnail_470x250',
    'image_link' => 'colorbox',
    'colorbox' => array(
      'parameters' => array(
        'width' => '1240',
        'height' => '750',
        'autoplay' => 1,
        'loop' => 0,
        'showinfo' => 0,
        'controls' => 0,
        'autohide' => 0,
        'iv_load_policy' => 0,
      ),
      'gallery' => 0,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="outer-wrapper">
  <div class="video">[field_youtube_url]</div>
  <div class="title"><span class="inner-container">[field_youtube_title]</span></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'videos',
  );

  /* Display: Paragraphs video plus 4 calls to action */
  $handler = $view->new_display('entity_view', 'Paragraphs video plus 4 calls to action', 'entity_view_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'main-video-block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Redirect */
  $handler->display->display_options['fields']['field_redirect_link']['id'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_redirect_link']['ui_name'] = 'CTA1 Redirect';
  $handler->display->display_options['fields']['field_redirect_link']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Title */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_1']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_title_1']['ui_name'] = 'CTA1 Title';
  $handler->display->display_options['fields']['field_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA1 Icon */
  $handler->display->display_options['fields']['field_icon_class']['id'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_icon_class']['ui_name'] = 'CTA1 Icon';
  $handler->display->display_options['fields']['field_icon_class']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_1']['id'] = 'field_redirect_link_1';
  $handler->display->display_options['fields']['field_redirect_link_1']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_1']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_1']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_redirect_link_1']['ui_name'] = 'CTA2 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Title */
  $handler->display->display_options['fields']['field_title_2']['id'] = 'field_title_2';
  $handler->display->display_options['fields']['field_title_2']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_2']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_2']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_title_2']['ui_name'] = 'CTA2 Title';
  $handler->display->display_options['fields']['field_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_2']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_2']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA2 Icon */
  $handler->display->display_options['fields']['field_icon_class_1']['id'] = 'field_icon_class_1';
  $handler->display->display_options['fields']['field_icon_class_1']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_1']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_1']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_icon_class_1']['ui_name'] = 'CTA2 Icon';
  $handler->display->display_options['fields']['field_icon_class_1']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_2']['id'] = 'field_redirect_link_2';
  $handler->display->display_options['fields']['field_redirect_link_2']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_2']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_2']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_redirect_link_2']['ui_name'] = 'CTA3 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_2']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_2']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Title */
  $handler->display->display_options['fields']['field_title_3']['id'] = 'field_title_3';
  $handler->display->display_options['fields']['field_title_3']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_3']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_3']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_title_3']['ui_name'] = 'CTA3 Title';
  $handler->display->display_options['fields']['field_title_3']['label'] = '';
  $handler->display->display_options['fields']['field_title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_3']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_3']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA3 Icon */
  $handler->display->display_options['fields']['field_icon_class_2']['id'] = 'field_icon_class_2';
  $handler->display->display_options['fields']['field_icon_class_2']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_2']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_2']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_icon_class_2']['ui_name'] = 'CTA3 Icon';
  $handler->display->display_options['fields']['field_icon_class_2']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_2']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Redirect */
  $handler->display->display_options['fields']['field_redirect_link_3']['id'] = 'field_redirect_link_3';
  $handler->display->display_options['fields']['field_redirect_link_3']['table'] = 'field_data_field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_3']['field'] = 'field_redirect_link';
  $handler->display->display_options['fields']['field_redirect_link_3']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_redirect_link_3']['ui_name'] = 'CTA4 Redirect';
  $handler->display->display_options['fields']['field_redirect_link_3']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_link_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_link_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_link_3']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_redirect_link_3']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_redirect_link_3']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Title */
  $handler->display->display_options['fields']['field_title_4']['id'] = 'field_title_4';
  $handler->display->display_options['fields']['field_title_4']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title_4']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title_4']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_title_4']['ui_name'] = 'CTA4 Title';
  $handler->display->display_options['fields']['field_title_4']['label'] = '';
  $handler->display->display_options['fields']['field_title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_4']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_title_4']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: CTA4 Icon */
  $handler->display->display_options['fields']['field_icon_class_3']['id'] = 'field_icon_class_3';
  $handler->display->display_options['fields']['field_icon_class_3']['table'] = 'field_data_field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_3']['field'] = 'field_icon_class';
  $handler->display->display_options['fields']['field_icon_class_3']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_icon_class_3']['ui_name'] = 'CTA4 Icon';
  $handler->display->display_options['fields']['field_icon_class_3']['label'] = '';
  $handler->display->display_options['fields']['field_icon_class_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_class_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_class_3']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_class_3']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Paragraphs item: Background Theme */
  $handler->display->display_options['fields']['field_background_theme']['id'] = 'field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['table'] = 'field_data_field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['field'] = 'field_background_theme';
  $handler->display->display_options['fields']['field_background_theme']['label'] = '';
  $handler->display->display_options['fields']['field_background_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_background_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_theme']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_background_theme']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube title */
  $handler->display->display_options['fields']['field_youtube_title']['id'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['table'] = 'field_data_field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['field'] = 'field_youtube_title';
  $handler->display->display_options['fields']['field_youtube_title']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_youtube_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: YouTube URL */
  $handler->display->display_options['fields']['field_youtube_url']['id'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['table'] = 'field_data_field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['field'] = 'field_youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_url']['alter']['text'] = '[field_youtube_url-video_id] ';
  $handler->display->display_options['fields']['field_youtube_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_url']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_url']['type'] = 'youtube_url';
  $handler->display->display_options['fields']['field_youtube_url']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field collection item: Icon library */
  $handler->display->display_options['fields']['field_icon_library']['id'] = 'field_icon_library';
  $handler->display->display_options['fields']['field_icon_library']['table'] = 'field_data_field_icon_library';
  $handler->display->display_options['fields']['field_icon_library']['field'] = 'field_icon_library';
  $handler->display->display_options['fields']['field_icon_library']['relationship'] = 'field_paragraph_call_to_action_value';
  $handler->display->display_options['fields']['field_icon_library']['label'] = '';
  $handler->display->display_options['fields']['field_icon_library']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_library']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_library']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field collection item: Icon library */
  $handler->display->display_options['fields']['field_icon_library_1']['id'] = 'field_icon_library_1';
  $handler->display->display_options['fields']['field_icon_library_1']['table'] = 'field_data_field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_1']['field'] = 'field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_1']['relationship'] = 'field_paragraph_call_to_action_value_1';
  $handler->display->display_options['fields']['field_icon_library_1']['label'] = '';
  $handler->display->display_options['fields']['field_icon_library_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_library_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_library_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_library_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field collection item: Icon library */
  $handler->display->display_options['fields']['field_icon_library_2']['id'] = 'field_icon_library_2';
  $handler->display->display_options['fields']['field_icon_library_2']['table'] = 'field_data_field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_2']['field'] = 'field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_2']['relationship'] = 'field_paragraph_call_to_action_value_2';
  $handler->display->display_options['fields']['field_icon_library_2']['label'] = '';
  $handler->display->display_options['fields']['field_icon_library_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_library_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_library_2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_library_2']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field collection item: Icon library */
  $handler->display->display_options['fields']['field_icon_library_3']['id'] = 'field_icon_library_3';
  $handler->display->display_options['fields']['field_icon_library_3']['table'] = 'field_data_field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_3']['field'] = 'field_icon_library';
  $handler->display->display_options['fields']['field_icon_library_3']['relationship'] = 'field_paragraph_call_to_action_value_3';
  $handler->display->display_options['fields']['field_icon_library_3']['label'] = '';
  $handler->display->display_options['fields']['field_icon_library_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_library_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_library_3']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_library_3']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="main-video">
	<div class="inner-wrapper container">
		<div class="video-player">
                   <iframe src="https://www.youtube.com/embed/[field_youtube_url]?loop=1&modestbranding=1&rel=0&theme=light&color=white" width="560" height="315" frameborder="0" allowfullscreen></iframe>
		</div>
		<div class="mapping-icons-container clearfix">
		
		  <div class="col-xs-6 col-sm-3 col-md-3 icon icon-1">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link]">
				<i class="[field_icon_library] [field_icon_class]"></i>
			</a>
			<div class="icon-label">[field_title_1]</div>
		  </div>

		  <div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_1]">
				<i class="[field_icon_library_1]  [field_icon_class_1]"></i>
			</a>
			<div class="icon-label">[field_title_2]</div>
		  </div>

		  <div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_2]">
				<i class="[field_icon_library_2]  [field_icon_class_2]"></i>
			</a>
			<div class="icon-label">[field_title_3]</div>
		  </div>
		  <div class="col-xs-6 col-sm-3 col-md-3 icon icon-2">
			<a class="icon-button btn btn-standard btn-shadow" href="[field_redirect_link_3]">
				<i class="[field_icon_library_3]  [field_icon_class_3]"></i>
			</a>
			<div class="icon-label">[field_title_4]</div>
		  </div>

            </div>
	</div>
	<div class="background-tint"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['entity_type'] = 'paragraphs_item';
  $handler->display->display_options['bundles'] = array(
    0 => 'featured_video',
    1 => 'video_player',
  );
  $export['paragraphs'] = $view;

  return $export;
}
