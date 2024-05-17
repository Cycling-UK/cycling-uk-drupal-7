<?php

/**
 * @file
 * og_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function og_groups_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|ride|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab';
  $field_group->data = array(
    'label' => 'Downloads',
    'weight' => '7',
    'children' => array(
      0 => 'field_gpx_files',
      1 => 'field_gpx_map',
      2 => 'field_attachments',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Downloads',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_attachments|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|field_collection_item|field_rides_and_activities|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_rides_and_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_date_and_time',
      1 => 'field_event_ride_name',
      2 => 'field_event_ride_type',
      3 => 'field_distance',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_basic|field_collection_item|field_rides_and_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|affiliated_centre|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'affiliated_centre';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '20',
    'children' => array(
      0 => 'field_extra_contact_details',
      1 => 'field_group_contact_name',
      2 => 'field_group_phone_number',
      3 => 'field_group_website',
      4 => 'field_group_contact_email',
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
  $field_groups['group_contact_details|node|affiliated_centre|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|event|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '12',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_contact_email',
      2 => 'field_contact_name',
      3 => 'field_contact_number',
      4 => 'field_link',
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
  $field_groups['group_contact_details|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|event|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '31',
    'children' => array(
      0 => 'field_contact_address',
      1 => 'field_contact_email',
      2 => 'field_contact_name',
      3 => 'field_contact_number',
      4 => 'field_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|ride|default';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '17',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_contact_name',
      2 => 'field_contact_number',
      3 => 'field_link',
      4 => 'field_contact_organisation',
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
  $field_groups['group_contact_details|node|ride|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|group|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Contact and website details',
    'weight' => '6',
    'children' => array(
      0 => 'field_extra_contact_details',
      1 => 'field_group_contact_name',
      2 => 'field_group_phone_number',
      3 => 'field_group_website',
      4 => 'field_group_contact_email',
      5 => 'field_redirect_website',
      6 => 'field_facebook',
      7 => 'field_instagram',
      8 => 'field_twitter',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Contact and website details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact field-group-htab',
        'description' => '<span class="input-help">Contact details for the group.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_contact|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|ride|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_contact_name',
      2 => 'field_contact_number',
      3 => 'field_contact_organisation',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Contact details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_contact|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|ride|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab';
  $field_group->data = array(
    'label' => 'Date and time of event',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_ride',
      1 => 'field_duration',
      2 => 'field_end_time',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Date and time of event',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-date field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_date|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|event|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Image and description',
    'weight' => '29',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|ride|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab';
  $field_group->data = array(
    'label' => 'Image and description',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_description|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_basics|node|event|form';
  $field_group->group_name = 'group_event_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Event basics',
    'weight' => '28',
    'children' => array(
      0 => 'field_date',
      1 => 'field_cost',
      2 => 'field_event_type',
      3 => 'field_risk_assessment',
      4 => 'field_cancelled',
      5 => 'field_town',
      6 => 'field_attachments',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Event basics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<span class="input-help">Use this tab to enter the basic information for the event, such as the date and cost of the event. To improve your listing use the additional tabs above to add a location so the ride shows on the event listing map and a photo to promote the ride.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_basics|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '1',
    'children' => array(
      0 => 'group_tab_group',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|ride|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add a new event',
    'weight' => '0',
    'children' => array(
      0 => 'group_images_attachments',
      1 => 'group_location',
      2 => 'group_ride_basics',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extras|field_collection_item|field_rides_and_activities|form';
  $field_group->group_name = 'group_extras';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_rides_and_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_event_ride_audax',
      1 => 'field_event_ride_datc',
      2 => 'field_event_ride_description',
      3 => 'field_event_ride_start',
      4 => 'field_gpx_files',
      5 => 'field_link_booknow',
      6 => 'field_paypal_code',
      7 => 'field_tri_vet_event',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Extra Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Enter additional details for the ride or activity including booking details, categorisations and start details',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_extras|field_collection_item|field_rides_and_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_facilities|node|event|form';
  $field_group->group_name = 'group_facilities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Facilities',
    'weight' => '32',
    'children' => array(
      0 => 'field_event_facilities',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_facilities|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|group|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Gallery and downloads',
    'weight' => '7',
    'children' => array(
      0 => 'field_group_files',
      1 => 'field_gallery_image',
      2 => 'field_partners',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Gallery and downloads',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-gallery field-group-htab',
        'description' => '<span class="input-help">Upload images and other files to help promote your group.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_gallery|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|group|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Activities and information',
    'weight' => '4',
    'children' => array(
      0 => 'field_group_activities',
      1 => 'field_group_ride_info',
      2 => 'field_group_ride_programme',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Activities and information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-general field-group-htab',
        'description' => '<span class="input-help">Select the activities the group offers.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_general|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups|node|event|form';
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '33',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_groups|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups|node|ride|form';
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '8',
    'children' => array(
      0 => 'field_address_information',
      1 => 'field_location',
      2 => 'field_postcode',
      3 => 'field_town',
      4 => 'og_group_ref',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_groups|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|affiliated_centre|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'affiliated_centre';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_group_welcome',
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
  $field_groups['group_header_inner_wrapper|node|affiliated_centre|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|event|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_date',
      1 => 'title',
      2 => 'group_header_location_wrapper',
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
  $field_groups['group_header_inner_wrapper|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|ride|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header inner wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_date_ride',
      1 => 'title',
      2 => 'group_header_location_wrapper',
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
  $field_groups['group_header_inner_wrapper|node|ride|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_location_wrapper|node|event|default';
  $field_group->group_name = 'group_header_location_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header_inner_wrapper';
  $field_group->data = array(
    'label' => 'Header location wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_postcode',
      1 => 'field_town',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header location wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-location-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_location_wrapper|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_location_wrapper|node|ride|default';
  $field_group->group_name = 'group_header_location_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header_inner_wrapper';
  $field_group->data = array(
    'label' => 'Header location wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'field_ride_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header location wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-location-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_location_wrapper|node|ride|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images_attachments|node|ride|form';
  $field_group->group_name = 'group_images_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Images and Attachments',
    'weight' => '3',
    'children' => array(
      0 => 'field_gpx_files',
      1 => 'field_gpx_map',
      2 => 'field_attachments',
      3 => 'group_main_image_div',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_images_attachments|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '30',
    'children' => array(
      0 => 'field_location',
      1 => 'field_address_information',
      2 => 'field_grid_reference',
      3 => 'field_postcode',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|group|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_area_covered',
      1 => 'field_group_postcodes',
      2 => 'field_group_region',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-location field-group-htab',
        'description' => '<span class="input-help">Tools to define where your group rides.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_location|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|ride|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Additional Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_cost',
      1 => 'field_grid_reference',
      2 => 'field_location',
      3 => 'field_postcode',
      4 => 'field_town',
      5 => 'og_group_ref',
      6 => 'field_event_facilities',
      7 => 'field_event_ride_audax',
      8 => 'field_paypal_code',
      9 => 'field_link_booknow',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_image_div|node|ride|form';
  $field_group->group_name = 'group_main_image_div';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_images_attachments';
  $field_group->data = array(
    'label' => 'Main Image',
    'weight' => '55',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_image_div|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office|node|group|form';
  $field_group->group_name = 'group_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Office use only',
    'weight' => '8',
    'children' => array(
      0 => 'field_group_org_member_no',
      1 => 'field_group_owner_member_no',
      2 => 'field_group_parent',
      3 => 'field_group_type',
      4 => 'field_renewal_date',
      5 => 'field_inclusive_cycling',
      6 => 'group_group',
      7 => 'field_tags',
      8 => 'field_cycling_uk_section',
      9 => 'path',
      10 => 'redirect',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Office use only',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-office field-group-htab',
        'description' => '<span class="input-help">Office use only.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_office|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page|node|event|form';
  $field_group->group_name = 'group_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_event_details',
      1 => 'group_ride_activities',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Page Group',
      'instance_settings' => array(
        'classes' => 'group-page field-group-multipage-group',
        'page_header' => '3',
        'page_counter' => '1',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $field_groups['group_page|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ride_activities|node|event|form';
  $field_group->group_name = 'group_ride_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Rides and Activities',
    'weight' => '2',
    'children' => array(
      0 => 'field_rides_and_activities',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ride-activities',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ride_activities|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ride_basics|node|ride|form';
  $field_group->group_name = 'group_ride_basics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Ride basics',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_address_information',
      2 => 'field_cancelled',
      3 => 'field_contact_email',
      4 => 'field_contact_name',
      5 => 'field_contact_number',
      6 => 'field_link',
      7 => 'field_ride_type',
      8 => 'field_distance',
      9 => 'field_date_ride',
      10 => 'field_attendance_size',
      11 => 'field_contact_organisation',
      12 => 'field_duration',
      13 => 'field_insurance_required_',
      14 => 'field_mailing_preferences',
      15 => 'field_ride_section',
      16 => 'field_addressfield',
      17 => 'field_risk_assessment',
      18 => 'field_open_to_over_200_participa',
      19 => 'field_date_and_start_time_ride',
      20 => 'title',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Ride basics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ride_basics|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|event|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_details';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '3',
    'children' => array(
      0 => 'group_contact_details',
      1 => 'group_description',
      2 => 'group_event_basics',
      3 => 'group_facilities',
      4 => 'group_groups',
      5 => 'group_location',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tab_group|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|group|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab Group',
    'weight' => '4',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_gallery',
      2 => 'group_general',
      3 => 'group_location',
      4 => 'group_office',
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
  $field_groups['group_tab_group|node|group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab|node|ride|form';
  $field_group->group_name = 'group_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ride';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Tab',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_groups',
      2 => 'group_location',
      3 => 'group_ride_basics',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Group Tab',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'effect' => 'bounceslide',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_tab|node|ride|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_volunteering|node|affiliated_centre|form';
  $field_group->group_name = 'group_volunteering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'affiliated_centre';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Volunteering',
    'weight' => '39',
    'children' => array(
      0 => 'field__volunteer_form',
      1 => 'field_volunteer_form_external',
      2 => 'field_volunteer_opportunities',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Volunteering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-volunteering field-group-htab',
        'description' => '<span class="input-help">Use this section to advertise for volunteers either with a direct message, a form on this website or a link on another website.</span>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_volunteering|node|affiliated_centre|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities and information');
  t('Add a new event');
  t('Additional Details');
  t('Basic Details');
  t('Contact and website details');
  t('Contact details');
  t('Date and time of event');
  t('Downloads');
  t('Event Details');
  t('Event basics');
  t('Extra Details');
  t('Facilities');
  t('Gallery and downloads');
  t('Group Tab');
  t('Groups');
  t('Header inner wrapper');
  t('Header location wrapper');
  t('Image and description');
  t('Images and Attachments');
  t('Location');
  t('Main Image');
  t('Office use only');
  t('Page Group');
  t('Ride basics');
  t('Rides and Activities');
  t('Tab Group');
  t('Tab group');
  t('Volunteering');

  return $field_groups;
}
