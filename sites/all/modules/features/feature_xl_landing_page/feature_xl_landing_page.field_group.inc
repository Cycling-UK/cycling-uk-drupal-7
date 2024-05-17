<?php

/**
 * @file
 * feature_xl_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_xl_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|blocks|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'blocks';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'background-tint',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|blocks|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|calls_to_action_buttons_x4_with_|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calls_to_action_buttons_x4_with_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|calls_to_action_buttons_x4_with_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|code_field|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'code_field';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|code_field|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|faq|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'faq';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background tint',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'background-tint',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|faq|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|featured_articles_x4|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_articles_x4';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background tint',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'background-tint',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|featured_articles_x4|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|featured_video|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|featured_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|full_width_image_and_title|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'full_width_image_and_title';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|full_width_image_and_title|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|text_field|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_field';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background tint',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'background-tint',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|text_field|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_tint|paragraphs_item|videos|default';
  $field_group->group_name = 'group_background_tint';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'videos';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background tint',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background tint',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'background-tint',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background_tint|paragraphs_item|videos|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|blocks|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'blocks';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_background_tint';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_view_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|paragraphs_item|blocks|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|calls_to_action_buttons_x4_with_|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calls_to_action_buttons_x4_with_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background|paragraphs_item|calls_to_action_buttons_x4_with_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|code_field|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'code_field';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background|paragraphs_item|code_field|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|faq|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'faq';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_background_tint';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '3',
    'children' => array(
      0 => 'field_title',
      1 => 'field_faq',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|paragraphs_item|faq|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|featured_articles_x4|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_articles_x4';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_background_tint';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '3',
    'children' => array(
      0 => 'field_title',
      1 => 'paragraphs_entity_view_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|paragraphs_item|featured_articles_x4|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|featured_video|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background|paragraphs_item|featured_video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|full_width_image_and_title|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'full_width_image_and_title';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_background|paragraphs_item|full_width_image_and_title|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|text_field|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_field';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_background_tint';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '7',
    'children' => array(
      0 => 'field_landing_page_text',
      1 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|paragraphs_item|text_field|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|videos|default';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'videos';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_background_tint';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '2',
    'children' => array(
      0 => 'field_title',
      1 => 'paragraphs_entity_view_4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|paragraphs_item|videos|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|landing_page_xl|default';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page_xl';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|node|landing_page_xl|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|text_field|default';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_field';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-container field-group-div container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|paragraphs_item|text_field|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|blocks|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'blocks';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_view_ref',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'wrapper' => 'section',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_content|paragraphs_item|blocks|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|calls_to_action_buttons_x4_with_|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'calls_to_action_buttons_x4_with_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_image_paragraph',
      1 => 'field_paragraph_call_to_action',
      2 => 'field_subtitle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|calls_to_action_buttons_x4_with_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|featured_articles_x4|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_articles_x4';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_articles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|paragraphs_item|featured_articles_x4|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|featured_video|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_background_theme',
      1 => 'field_paragraph_call_to_action',
      2 => 'field_youtube_url',
      3 => 'field_paragraph_class',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|featured_video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|full_width_image_and_title|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'full_width_image_and_title';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_markup',
      2 => 'field_redirect_link',
      3 => 'field_subtitle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|full_width_image_and_title|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|text_field|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_field';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_landing_page_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|text_field|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|videos|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_videos_x4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-content field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|paragraphs_item|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_fields|node|landing_page_xl|form';
  $field_group->group_name = 'group_paragraph_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page_xl';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_hero',
      2 => 'field_paragraph',
      3 => 'field_featured_articles',
      4 => 'metatags',
      5 => 'path',
      6 => 'redirect',
      7 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-fields field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_paragraph_fields|node|landing_page_xl|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_width|paragraphs_item|text_field|default';
  $field_group->group_name = 'group_width';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_field';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text width',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_width|paragraphs_item|text_field|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Background tint');
  t('Container');
  t('Content');
  t('Fields');
  t('Text width');

  return $field_groups;
}
