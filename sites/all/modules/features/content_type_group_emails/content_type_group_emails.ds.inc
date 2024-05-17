<?php

/**
 * @file
 * content_type_group_emails.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_type_group_emails_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group_email|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group_email';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-layout-post field-name-title',
      ),
    ),
  );
  $export['node|group_email|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group_email|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group_email';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|group_email|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group_email|token';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group_email';
  $ds_fieldsetting->view_mode = 'token';
  $ds_fieldsetting->settings = array(
    'dividing_line' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|group_email|token'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|newsletter_story|token';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'newsletter_story';
  $ds_fieldsetting->view_mode = 'token';
  $ds_fieldsetting->settings = array(
    'dividing_line' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['paragraphs_item|newsletter_story|token'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_type_group_emails_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group_email|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group_email';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_3_6_3';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_banner_image_paragraph',
        1 => 'title',
        2 => 'body',
        3 => 'field_stories',
        4 => 'field_email_footer',
        5 => 'og_group_ref',
        6 => 'field_email_status',
      ),
    ),
    'fields' => array(
      'field_banner_image_paragraph' => 'central',
      'title' => 'central',
      'body' => 'central',
      'field_stories' => 'central',
      'field_email_footer' => 'central',
      'og_group_ref' => 'central',
      'field_email_status' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|group_email|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group_email|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group_email';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_3_6_3';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_banner_image_paragraph',
        1 => 'title',
        2 => 'body',
        3 => 'field_stories',
        4 => 'field_email_footer',
        5 => 'field_email_attachments',
        6 => 'field_email_status',
        7 => 'og_group_ref',
        8 => 'field_log',
      ),
    ),
    'fields' => array(
      'field_banner_image_paragraph' => 'central',
      'title' => 'central',
      'body' => 'central',
      'field_stories' => 'central',
      'field_email_footer' => 'central',
      'field_email_attachments' => 'central',
      'field_email_status' => 'central',
      'og_group_ref' => 'central',
      'field_log' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|group_email|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group_email|token';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group_email';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_banner_image_paragraph',
        1 => 'body',
        2 => 'field_stories',
        3 => 'field_email_footer',
        4 => 'og_group_ref',
        5 => 'field_email_status',
        6 => 'field_email_audience',
        7 => 'field_email_attachments',
      ),
    ),
    'fields' => array(
      'field_banner_image_paragraph' => 'central',
      'body' => 'central',
      'field_stories' => 'central',
      'field_email_footer' => 'central',
      'og_group_ref' => 'central',
      'field_email_status' => 'central',
      'field_email_audience' => 'central',
      'field_email_attachments' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|group_email|token'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|rider|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'rider';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_central',
        1 => 'group_local_data',
        2 => 'field_active',
        3 => 'field_rider_local_mobile_number',
        4 => 'field_rider_contact_number',
        5 => 'field_welcome_email_sent',
        6 => 'field_email_suppression',
        7 => 'field_rider_forename',
        8 => 'field_postal_suppression',
        9 => 'field_rider_surname',
        10 => 'field_rider_email',
        11 => 'field_group_newsletter_subscribe',
        12 => 'field_rider_email_suppression',
        13 => 'field_membership_type',
        14 => 'field_rider_joined_date',
        15 => 'field_rider_renewal_date',
        16 => 'field_rider_notes',
        17 => 'field_voting_rights',
        18 => 'field_rider_out_of_area',
        19 => 'field_committee_member',
        20 => 'field_rider_leader',
      ),
    ),
    'fields' => array(
      'group_central' => 'central',
      'group_local_data' => 'central',
      'field_active' => 'central',
      'field_rider_local_mobile_number' => 'central',
      'field_rider_contact_number' => 'central',
      'field_welcome_email_sent' => 'central',
      'field_email_suppression' => 'central',
      'field_rider_forename' => 'central',
      'field_postal_suppression' => 'central',
      'field_rider_surname' => 'central',
      'field_rider_email' => 'central',
      'field_group_newsletter_subscribe' => 'central',
      'field_rider_email_suppression' => 'central',
      'field_membership_type' => 'central',
      'field_rider_joined_date' => 'central',
      'field_rider_renewal_date' => 'central',
      'field_rider_notes' => 'central',
      'field_voting_rights' => 'central',
      'field_rider_out_of_area' => 'central',
      'field_committee_member' => 'central',
      'field_rider_leader' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|rider|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter_story|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter_story';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_email_story_thumbnail',
        1 => 'field_email_story_title',
        2 => 'field_email_story_details',
        3 => 'group_link',
        4 => 'field_email_story_link',
      ),
    ),
    'fields' => array(
      'field_email_story_thumbnail' => 'central',
      'field_email_story_title' => 'central',
      'field_email_story_details' => 'central',
      'group_link' => 'central',
      'field_email_story_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|newsletter_story|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter_story|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter_story';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_email_story_title',
        1 => 'field_email_story_thumbnail',
        2 => 'field_email_story_details',
        3 => 'group_link',
        4 => 'field_email_story_link',
      ),
    ),
    'fields' => array(
      'field_email_story_title' => 'central',
      'field_email_story_thumbnail' => 'central',
      'field_email_story_details' => 'central',
      'group_link' => 'central',
      'field_email_story_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|newsletter_story|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter_story|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter_story';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_email_story_title',
        1 => 'field_email_story_thumbnail',
        2 => 'field_email_story_details',
        3 => 'field_email_story_link',
      ),
    ),
    'fields' => array(
      'field_email_story_title' => 'central',
      'field_email_story_thumbnail' => 'central',
      'field_email_story_details' => 'central',
      'field_email_story_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|newsletter_story|paragraphs_editor_preview'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|newsletter_story|token';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'newsletter_story';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_email_story_thumbnail',
        1 => 'field_email_story_title',
        2 => 'field_email_story_details',
        3 => 'group_link',
        4 => 'field_email_story_link',
      ),
    ),
    'fields' => array(
      'field_email_story_thumbnail' => 'central',
      'field_email_story_title' => 'central',
      'field_email_story_details' => 'central',
      'group_link' => 'central',
      'field_email_story_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|newsletter_story|token'] = $ds_layout;

  return $export;
}
