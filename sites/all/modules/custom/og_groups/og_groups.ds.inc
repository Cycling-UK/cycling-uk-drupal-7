<?php

/**
 * @file
 * og_groups.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function og_groups_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|affiliated_centre|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'affiliated_centre';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'affiliate_gallery' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:21:"owlcarousel_formatter";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:3:{s:11:"image_style";s:7:"640x410";s:10:"image_link";s:0:"";s:14:"settings_group";s:39:"owlcarousel_settings_gallery-attachment";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_image_gallery";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|affiliated_centre|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group_child_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group_child_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'node_changed' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_buttons' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|group_child_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function og_groups_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'og_node_content_links';
  $ds_field->label = 'OG node content links';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'og_extras|node_links',
    'block_render' => '1',
  );
  $export['og_node_content_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ride_date';
  $ds_field->label = 'Ride date and time';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ride_date'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ride_start_time';
  $ds_field->label = 'Ride start time';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ride_start_time'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'welcome_message_mobile';
  $ds_field->label = 'Welcome message mobile';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['welcome_message_mobile'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function og_groups_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|affiliated_centre|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'affiliated_centre';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image_gallery',
        1 => 'group_header_inner_wrapper',
        2 => 'title',
        3 => 'field_group_welcome',
      ),
      'left' => array(
        4 => 'field_about_centre',
        5 => 'field_partner_logo',
        6 => 'field_activities_available',
        7 => 'field_centre_activities',
        8 => 'field_centre_facilities',
        9 => 'field_facility_details',
        10 => 'field__cost',
        11 => 'field_volunteer_opportunities',
        12 => 'field__volunteer_form',
        13 => 'field_volunteer_form_external',
        14 => 'field_group_files',
        15 => 'field_links',
      ),
      'right' => array(
        16 => 'affiliate_gallery',
        17 => 'field_area_covered',
        18 => 'field__location_details',
        19 => 'field_opening_times',
        20 => 'group_contact_details',
        21 => 'og_extras_nodes_entity_view_1',
        22 => 'field_group_contact_name',
        23 => 'field_group_phone_number',
        24 => 'field_group_contact_email',
        25 => 'field_group_website',
        26 => 'field_extra_contact_details',
      ),
    ),
    'fields' => array(
      'field_image_gallery' => 'top',
      'group_header_inner_wrapper' => 'top',
      'title' => 'top',
      'field_group_welcome' => 'top',
      'field_about_centre' => 'left',
      'field_partner_logo' => 'left',
      'field_activities_available' => 'left',
      'field_centre_activities' => 'left',
      'field_centre_facilities' => 'left',
      'field_facility_details' => 'left',
      'field__cost' => 'left',
      'field_volunteer_opportunities' => 'left',
      'field__volunteer_form' => 'left',
      'field_volunteer_form_external' => 'left',
      'field_group_files' => 'left',
      'field_links' => 'left',
      'affiliate_gallery' => 'right',
      'field_area_covered' => 'right',
      'field__location_details' => 'right',
      'field_opening_times' => 'right',
      'group_contact_details' => 'right',
      'og_extras_nodes_entity_view_1' => 'right',
      'field_group_contact_name' => 'right',
      'field_group_phone_number' => 'right',
      'field_group_contact_email' => 'right',
      'field_group_website' => 'right',
      'field_extra_contact_details' => 'right',
    ),
    'limit' => array(
      'field_image_gallery' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|affiliated_centre|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group_child_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group_child_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'field_caption',
      ),
      'central' => array(
        2 => 'title',
        3 => 'node_changed',
        4 => 'field_teaser',
        5 => 'body',
        6 => 'field_additional_content',
        7 => 'field_gallery_image',
        8 => 'field_attachments',
        9 => 'og_group_ref',
        10 => 'share_buttons',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'field_caption' => 'top',
      'title' => 'central',
      'node_changed' => 'central',
      'field_teaser' => 'central',
      'body' => 'central',
      'field_additional_content' => 'central',
      'field_gallery_image' => 'central',
      'field_attachments' => 'central',
      'og_group_ref' => 'central',
      'share_buttons' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|group_child_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ride|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ride';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'group_header_inner_wrapper',
        4 => 'field_ride_section',
        7 => 'field_date_ride',
        10 => 'title',
        12 => 'group_header_location_wrapper',
      ),
      'left' => array(
        2 => 'body',
        3 => 'field_ride_type',
        5 => 'field_event_ride_audax',
        6 => 'field_event_facilities',
        8 => 'field_distance',
        9 => 'field_duration',
        11 => 'field_cost',
        13 => 'field_link_booknow',
        14 => 'field_gpx_map',
        15 => 'field_gpx_files',
      ),
      'right' => array(
        16 => 'field_contact_organisation',
        17 => 'field_location',
        18 => 'field_contact_name',
        19 => 'field_addressfield',
        20 => 'field_contact_number',
        21 => 'event_date_s_and_time',
        22 => 'field_contact_email',
        23 => 'field_address_information',
        24 => 'field_grid_reference',
        25 => 'field_link',
        26 => 'group_contact_details',
        27 => 'og_group_ref',
        28 => 'field_attachments',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'group_header_inner_wrapper' => 'top',
      'body' => 'left',
      'field_ride_type' => 'left',
      'field_ride_section' => 'top',
      'field_event_ride_audax' => 'left',
      'field_event_facilities' => 'left',
      'field_date_ride' => 'top',
      'field_distance' => 'left',
      'field_duration' => 'left',
      'title' => 'top',
      'field_cost' => 'left',
      'group_header_location_wrapper' => 'top',
      'field_link_booknow' => 'left',
      'field_gpx_map' => 'left',
      'field_gpx_files' => 'left',
      'field_contact_organisation' => 'right',
      'field_location' => 'right',
      'field_contact_name' => 'right',
      'field_addressfield' => 'right',
      'field_contact_number' => 'right',
      'event_date_s_and_time' => 'right',
      'field_contact_email' => 'right',
      'field_address_information' => 'right',
      'field_grid_reference' => 'right',
      'field_link' => 'right',
      'group_contact_details' => 'right',
      'og_group_ref' => 'right',
      'field_attachments' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|ride|default'] = $ds_layout;

  return $export;
}
