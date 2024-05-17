<?php

/**
 * @file
 * feature_member_benefits.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_member_benefits_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|member_benefit|default';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'member_benefit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_wrapper|node|member_benefit|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Title wrapper');

  return $field_groups;
}
