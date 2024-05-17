<?php

/**
 * @file
 * features_display_suite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_display_suite_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|group|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '2',
    'children' => array(
      0 => 'field_group_contact_name',
      1 => 'field_group_phone_number',
      2 => 'field_group_website',
      3 => 'field_group_contact_email',
      4 => 'field_facebook',
      5 => 'field_instagram',
      6 => 'field_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_details|node|group|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|venue|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '6',
    'children' => array(
      0 => 'field_course_venue_address',
      1 => 'field_course_venue_telephone',
      2 => 'field_course_venue_website',
      3 => 'field_course_venue_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_details|node|venue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|course_details|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_teaser',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header inner wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-inner-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_inner_wrapper|node|course_details|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|group|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_group_type',
      1 => 'field_group_welcome',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header inner wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-inner-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_inner_wrapper|node|group|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|venue|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header inner wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-inner-wrapper field-group-div',
        'description' => '<span></span>',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_inner_wrapper|node|venue|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact details');
  t('Header inner wrapper');

  return $field_groups;
}
