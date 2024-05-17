<?php
/**
 * @file
 * shop_courses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shop_courses_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_details|commerce_line_item|course|form';
  $field_group->group_name = 'group_additional_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Details',
    'weight' => '11',
    'children' => array(
      0 => 'field_dietary_requirements',
      1 => 'field_learning_difficulties',
      2 => 'field_medical_details',
      3 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional_details|commerce_line_item|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_booking_terms|commerce_order|commerce_order|form';
  $field_group->group_name = 'group_course_booking_terms';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Booking Terms',
    'weight' => '11',
    'children' => array(
      0 => 'field_course_booking_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-booking-terms field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_course_booking_terms|commerce_order|commerce_order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_booking|node|course_booking|default';
  $field_group->group_name = 'group_course_booking';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_booking';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cycling UK Course Booking',
    'weight' => '34',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cycling UK Course Booking',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-course-booking field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_course_booking|node|course_booking|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_participant|commerce_line_item|course|form';
  $field_group->group_name = 'group_course_participant';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participant Details',
    'weight' => '10',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_email',
      2 => 'field_care_name',
      3 => 'field_care_telephone',
      4 => 'field_membership_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Participant Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-course-participant field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_course_participant|commerce_line_item|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delegate_details|commerce_line_item|course|shopping_basket';
  $field_group->group_name = 'group_delegate_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'course';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_email',
      2 => 'field_care_name',
      3 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-delegate-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_delegate_details|commerce_line_item|course|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_next_of_kin|field_collection_item|field_next_of_kin|form';
  $field_group->group_name = 'group_next_of_kin';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_next_of_kin';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_care_name',
      1 => 'field_care_telephones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-next-of-kin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_next_of_kin|field_collection_item|field_next_of_kin|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Details');
  t('Course Booking Terms');
  t('Cycling UK Course Booking');
  t('Participant Details');

  return $field_groups;
}
