<?php

/**
 * @file
 * feature_content_type_biography.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_content_type_biography_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|biography|colorbox';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biography';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_instagram',
      1 => 'field_facebook',
      2 => 'field_twitter',
      3 => 'field_youtube',
      4 => 'field_group_website',
      5 => 'field_linkedin',
      6 => 'field_website',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-social-links field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Social links',
    ),
    'format_type' => 'div',
    'label' => 'Social links',
    'weight' => '4',
  );
  $field_groups['group_social_links|node|biography|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|biography|default';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biography';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_group_website',
      2 => 'field_instagram',
      3 => 'field_linkedin',
      4 => 'field_twitter',
      5 => 'field_website',
      6 => 'field_youtube',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-social-links field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Social links',
    ),
    'format_type' => 'div',
    'label' => 'Social links',
    'weight' => '4',
  );
  $field_groups['group_social_links|node|biography|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Social links');

  return $field_groups;
}
