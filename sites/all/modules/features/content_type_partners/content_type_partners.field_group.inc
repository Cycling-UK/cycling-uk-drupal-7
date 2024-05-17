<?php

/**
 * @file
 * content_type_partners.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_partners_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|partner|default';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_image',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-image-wrapper field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Image wrapper',
    ),
    'format_type' => 'div',
    'label' => 'Image wrapper',
    'weight' => '1',
  );
  $field_groups['group_image_wrapper|node|partner|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image wrapper');

  return $field_groups;
}
