<?php

/**
 * @file
 * features_cta.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_cta_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_ctas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'New CTAs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'new-cta';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Block: Google Tag Manager identifier */
  $handler->display->display_options['fields']['field_gtm_identifier']['id'] = 'field_gtm_identifier';
  $handler->display->display_options['fields']['field_gtm_identifier']['table'] = 'field_data_field_gtm_identifier';
  $handler->display->display_options['fields']['field_gtm_identifier']['field'] = 'field_gtm_identifier';
  $handler->display->display_options['fields']['field_gtm_identifier']['label'] = '';
  $handler->display->display_options['fields']['field_gtm_identifier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gtm_identifier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gtm_identifier']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_gtm_identifier']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Button link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a href="[field_link-url]" id="[field_gtm_identifier]">[field_link-title]</a>
';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'custom_title' => '',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'bg_image_formatter';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'hero_tablet',
    'multiple' => 0,
    'bg_image_output_type' => 'css',
    'css_settings' => array(
      'bg_image_selector' => '.cta-image',
      'classes' => '',
      'bg_image_color' => '#FFFFFF',
      'bg_image_x' => 'left',
      'bg_image_y' => 'top',
      'bg_image_attachment' => 'scroll',
      'bg_image_repeat' => 'no-repeat',
      'bg_image_background_size' => '',
      'bg_image_background_size_ie8' => 0,
      'bg_image_media_query' => 'all',
      'bg_image_important' => 1,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cta outer-wrapper">
  <div class="inner-wrapper-text">
    <span class="cta-title">[title]</span>
    <span class="cta-text">[field_text]</span>
    <span class="cta-link">[field_link]</span>
  </div>
  <div class="inner-wrapper-image">
    <span class="cta-image">[field_image]</span>
  </div>
</div>';
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
    1 => '1',
  );
  $handler->display->display_options['filters']['field_hero_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_type_tid']['vocabulary'] = 'hero';

  /* Display: CTA insurance */
  $handler = $view->new_display('block', 'CTA insurance', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: Call to action (field_call_to_action) */
  $handler->display->display_options['filters']['field_call_to_action_tid']['id'] = 'field_call_to_action_tid';
  $handler->display->display_options['filters']['field_call_to_action_tid']['table'] = 'field_data_field_call_to_action';
  $handler->display->display_options['filters']['field_call_to_action_tid']['field'] = 'field_call_to_action_tid';
  $handler->display->display_options['filters']['field_call_to_action_tid']['value'] = array(
    18946 => '18946',
  );
  $handler->display->display_options['filters']['field_call_to_action_tid']['vocabulary'] = 'hero';
  $export['new_ctas'] = $view;

  return $export;
}
