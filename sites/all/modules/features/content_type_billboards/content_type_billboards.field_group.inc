<?php

/**
 * @file
 * content_type_billboards.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_billboards_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|billboard|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'billboard';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_markup',
      1 => 'field_welcome_message',
      2 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-header-inner-wrapper field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Header inner wrapper',
    ),
    'format_type' => 'div',
    'label' => 'Header inner wrapper',
    'weight' => '1',
  );
  $field_groups['group_header_inner_wrapper|node|billboard|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header inner wrapper');

  return $field_groups;
}
