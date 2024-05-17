<?php

/**
 * @file
 * feature_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordian|user|user|form';
  $field_group->group_name = 'group_accordian';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordian',
    'weight' => '0',
    'children' => array(
      0 => 'group_other',
      1 => 'group_personal_details',
      2 => 'group_profile',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-accordian field-group-accordion',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_accordian|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|user|user|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_other';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '17',
    'children' => array(
      0 => 'field_memberships',
      1 => 'mimemail',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hidden field-group-html-element hidden',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_hidden|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|user|user|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_accordian';
  $field_group->data = array(
    'label' => 'Office use only',
    'weight' => '5',
    'children' => array(
      0 => 'og_user_node',
      1 => 'ckeditor',
      2 => 'timezone',
      3 => 'group_hidden',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Office use only',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_other|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_details|user|user|form';
  $field_group->group_name = 'group_personal_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_accordian';
  $field_group->data = array(
    'label' => 'Personal details',
    'weight' => '4',
    'children' => array(
      0 => 'field_care_addresses',
      1 => 'field_care_dob',
      2 => 'field_care_emails',
      3 => 'field_care_name',
      4 => 'field_care_telephones',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Personal details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_personal_details|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_accordian';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_picture',
      1 => 'field_type_of_cycling',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_profile|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordian');
  t('Hidden');
  t('Office use only');
  t('Personal details');
  t('Profile');

  return $field_groups;
}
