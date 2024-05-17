<?php

/**
 * @file
 * features_cta.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_cta_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_text|bean|call_to_action|default';
  $field_group->group_name = 'group_cta_text';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'call_to_action';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA text',
    'weight' => '0',
    'children' => array(
      0 => 'field_link',
      1 => 'field_text',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'CTA text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cta-text field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cta_text|bean|call_to_action|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTA text');

  return $field_groups;
}
