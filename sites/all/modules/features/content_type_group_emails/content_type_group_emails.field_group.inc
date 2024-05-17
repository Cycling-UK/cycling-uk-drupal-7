<?php

/**
 * @file
 * content_type_group_emails.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_group_emails_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activity|node|rider|form';
  $field_group->group_name = 'group_activity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_local_data';
  $field_group->data = array(
    'label' => 'Group Activity',
    'weight' => '63',
    'children' => array(
      0 => 'field_active',
      1 => 'field_rider_local_mobile_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activity field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_activity|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|rider|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_central_data';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '11',
    'children' => array(
      0 => 'field_rider_address_1',
      1 => 'field_rider_address_2',
      2 => 'field_rider_address_3',
      3 => 'field_rider_country',
      4 => 'field_rider_county',
      5 => 'field_rider_postcode',
      6 => 'field_rider_town',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_address|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_central_data|node|rider|form';
  $field_group->group_name = 'group_central_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Central Data',
    'weight' => '5',
    'children' => array(
      0 => 'field_membership_type',
      1 => 'field_organisation_number',
      2 => 'field_rider_contact_number',
      3 => 'field_rider_email',
      4 => 'field_rider_email_suppression',
      5 => 'field_rider_forename',
      6 => 'field_rider_joined_date',
      7 => 'field_rider_renewal_date',
      8 => 'field_rider_salutation',
      9 => 'field_rider_status',
      10 => 'field_rider_surname',
      11 => 'field_user',
      12 => 'field_voting_rights',
      13 => 'og_group_ref',
      14 => 'field_committee_member',
      15 => 'field_rider_leader',
      16 => 'field_rider_out_of_area',
      17 => 'group_address',
      18 => 'group_ice',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Central Data',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-central-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_central_data|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_central|node|rider|default';
  $field_group->group_name = 'group_central';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Central Data - Updated by members',
    'weight' => '0',
    'children' => array(
      0 => 'field_membership_type',
      1 => 'field_rider_contact_number',
      2 => 'field_rider_email',
      3 => 'field_rider_email_suppression',
      4 => 'field_rider_forename',
      5 => 'field_rider_joined_date',
      6 => 'field_rider_renewal_date',
      7 => 'field_rider_surname',
      8 => 'field_voting_rights',
      9 => 'field_committee_member',
      10 => 'field_rider_leader',
      11 => 'field_rider_out_of_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Central Data - Updated by members',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-central field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_central|node|rider|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emails|node|rider|form';
  $field_group->group_name = 'group_emails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_local_data';
  $field_group->data = array(
    'label' => 'Emails',
    'weight' => '64',
    'children' => array(
      0 => 'field_welcome_email_sent',
      1 => 'group_subscribed_emails',
      2 => 'group_unsub_emails',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emails field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_emails|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ice|node|rider|form';
  $field_group->group_name = 'group_ice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_central_data';
  $field_group->data = array(
    'label' => 'ICE',
    'weight' => '24',
    'children' => array(
      0 => 'field_ice_name',
      1 => 'field_ice_notes',
      2 => 'field_ice_phone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ICE',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-ice field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_ice|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|newsletter_story|default';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '3',
    'children' => array(
      0 => 'field_email_story_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link field-group-html-element btn btn-transparent',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|newsletter_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|newsletter_story|full';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter_story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_email_story_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link field-group-div btn btn-transparent',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|newsletter_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|paragraphs_item|newsletter_story|token';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'newsletter_story';
  $field_group->mode = 'token';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_email_story_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-link field-group-div btn btn-transparent',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|paragraphs_item|newsletter_story|token'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_data|node|rider|default';
  $field_group->group_name = 'group_local_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Local Data',
    'weight' => '1',
    'children' => array(
      0 => 'field_active',
      1 => 'field_email_suppression',
      2 => 'field_group_newsletter_subscribe',
      3 => 'field_postal_suppression',
      4 => 'field_rider_notes',
      5 => 'field_welcome_email_sent',
      6 => 'field_rider_local_mobile_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-local-data field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_local_data|node|rider|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_data|node|rider|form';
  $field_group->group_name = 'group_local_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Locally Collected Data',
    'weight' => '6',
    'children' => array(
      0 => 'field_rider_notes',
      1 => 'group_activity',
      2 => 'group_emails',
      3 => 'group_postal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-local-data field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_local_data|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newletter_subscriber|node|rider|form';
  $field_group->group_name = 'group_newletter_subscriber';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_postal';
  $field_group->data = array(
    'label' => 'Subscribed to group newsletter',
    'weight' => '49',
    'children' => array(
      0 => 'field_group_newsletter_subscribe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newletter-subscriber field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_newletter_subscriber|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postal|node|rider|form';
  $field_group->group_name = 'group_postal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_local_data';
  $field_group->data = array(
    'label' => 'Postal',
    'weight' => '65',
    'children' => array(
      0 => 'group_newletter_subscriber',
      1 => 'group_unsub_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-postal field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_postal|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subscribed_emails|node|rider|form';
  $field_group->group_name = 'group_subscribed_emails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emails';
  $field_group->data = array(
    'label' => 'Subscribed to groups emails',
    'weight' => '22',
    'children' => array(
      0 => 'field_sub_to_groups_comms',
      1 => 'field_sub_to_groups_comms_date',
      2 => 'field_sub_to_groups_comms_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-subscribed-emails field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_subscribed_emails|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unsub_emails|node|rider|form';
  $field_group->group_name = 'group_unsub_emails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_emails';
  $field_group->data = array(
    'label' => 'Unsubscribe to all email from this group',
    'weight' => '23',
    'children' => array(
      0 => 'field_email_suppression',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-unsub-emails field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_unsub_emails|node|rider|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unsub_mail|node|rider|form';
  $field_group->group_name = 'group_unsub_mail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rider';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_postal';
  $field_group->data = array(
    'label' => 'Unsubscribe to all postal mailings from this group',
    'weight' => '50',
    'children' => array(
      0 => 'field_postal_suppression',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-unsub-mail field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_unsub_mail|node|rider|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Central Data');
  t('Central Data - Updated by members');
  t('Emails');
  t('Group Activity');
  t('Group Local Data');
  t('ICE');
  t('Link');
  t('Locally Collected Data');
  t('Postal');
  t('Subscribed to group newsletter');
  t('Subscribed to groups emails');
  t('Unsubscribe to all email from this group');
  t('Unsubscribe to all postal mailings from this group');

  return $field_groups;
}
