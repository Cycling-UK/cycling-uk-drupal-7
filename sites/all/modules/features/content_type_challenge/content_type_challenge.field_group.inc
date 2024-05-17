<?php

/**
 * @file
 * content_type_challenge.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_challenge_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|cycle_challenge|colorbox';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cycle_challenge';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social links',
    'weight' => '4',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_instagram',
      3 => 'field_youtube',
      4 => 'field_linkedin',
      5 => 'field_website',
      6 => 'field_group_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-social-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social_links|node|cycle_challenge|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|cycle_challenge|form';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cycle_challenge';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social links',
    'weight' => '8',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_instagram',
      3 => 'field_youtube',
      4 => 'field_linkedin',
      5 => 'field_website',
      6 => 'field_group_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-links field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_social_links|node|cycle_challenge|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Social links');

  return $field_groups;
}
