<?php

/**
 * @file
 * courses_and_venues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function courses_and_venues_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|venue|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '22',
    'children' => array(
      0 => 'field_attachments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attachments field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_attachments|node|venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_details|node|course_details|form';
  $field_group->group_name = 'group_course_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Course details',
    'weight' => '35',
    'children' => array(
      0 => 'field_course_availability',
      1 => 'field_course_duration',
      2 => 'field_course_terrain',
      3 => 'field_course_fitness_level',
      4 => 'field_course_group_size',
      5 => 'field_skill_level',
      6 => 'field_price_summary',
      7 => 'field_course_assessment',
      8 => 'field_course_tutor',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_course_details|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_prerequisites|node|course_details|form';
  $field_group->group_name = 'group_course_prerequisites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Prerequisites and progression',
    'weight' => '36',
    'children' => array(
      0 => 'field_prerequisite_courses',
      1 => 'field_feed_in_courses',
      2 => 'field_course_prerequisites',
      3 => 'field_progression',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-prerequisites field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_course_prerequisites|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_resources|node|course_details|form';
  $field_group->group_name = 'group_course_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '37',
    'children' => array(
      0 => 'field_course_resources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-resources field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_course_resources|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|course_details|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '38',
    'children' => array(
      0 => 'field_gallery_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gallery|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|venue|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '23',
    'children' => array(
      0 => 'field_location',
      1 => 'field_course_venue_address',
      2 => 'field_course_venue_telephone',
      3 => 'field_course_venue_website',
      4 => 'field_course_venue_email',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|course_details|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Page management',
    'weight' => '40',
    'children' => array(
      0 => 'field_old_nid',
      1 => 'field_page_management',
      2 => 'field_review_date',
      3 => 'field_review_comments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-management field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_page_management|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|venue|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Page management',
    'weight' => '24',
    'children' => array(
      0 => 'field_old_nid',
      1 => 'field_page_management',
      2 => 'field_review_date',
      3 => 'field_review_comments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-management field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_page_management|node|venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|course_details|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Publishing',
    'weight' => '39',
    'children' => array(
      0 => 'field_status',
      1 => 'field_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publishing field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publishing|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|venue|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Publishing',
    'weight' => '21',
    'children' => array(
      0 => 'field_cycling_uk_section',
      1 => 'field_status',
      2 => 'field_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publishing field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publishing|node|venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|course_details|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_details';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '7',
    'children' => array(
      0 => 'group_course_details',
      1 => 'group_course_prerequisites',
      2 => 'group_course_resources',
      3 => 'group_gallery',
      4 => 'group_publishing',
      5 => 'group_page_management',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tab-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tab_group|node|course_details|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|venue|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '13',
    'children' => array(
      0 => 'group_page_management',
      1 => 'group_publishing',
      2 => 'group_attachments',
      3 => 'group_location',
      4 => 'group_venue_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tab-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tab_group|node|venue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_details|node|venue|form';
  $field_group->group_name = 'group_venue_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Venue details',
    'weight' => '20',
    'children' => array(
      0 => 'field_venue_type',
      1 => 'field_cycling_uk_venue',
      2 => 'field_course_venue_accommodation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-venue-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_venue_details|node|venue|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Course details');
  t('Gallery');
  t('Location');
  t('Page management');
  t('Prerequisites and progression');
  t('Publishing');
  t('Resources');
  t('Tab group');
  t('Venue details');

  return $field_groups;
}
