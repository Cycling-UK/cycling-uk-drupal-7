<?php

/**
 * @file
 * og_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function og_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:affiliated_centre:add user'
  $permissions['node:affiliated_centre:add user'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:administer group'
  $permissions['node:affiliated_centre:administer group'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:approve and deny subscription'
  $permissions['node:affiliated_centre:approve and deny subscription'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:create event content'
  $permissions['node:affiliated_centre:create event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:create group_child_page content'
  $permissions['node:affiliated_centre:create group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:create group_email content'
  $permissions['node:affiliated_centre:create group_email content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:create group_post content'
  $permissions['node:affiliated_centre:create group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:create ride content'
  $permissions['node:affiliated_centre:create ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:create rider content'
  $permissions['node:affiliated_centre:create rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:delete any event content'
  $permissions['node:affiliated_centre:delete any event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete any group_child_page content'
  $permissions['node:affiliated_centre:delete any group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete any group_email content'
  $permissions['node:affiliated_centre:delete any group_email content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:delete any group_post content'
  $permissions['node:affiliated_centre:delete any group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete any ride content'
  $permissions['node:affiliated_centre:delete any ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete any rider content'
  $permissions['node:affiliated_centre:delete any rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:delete own event content'
  $permissions['node:affiliated_centre:delete own event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete own group_child_page content'
  $permissions['node:affiliated_centre:delete own group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete own group_email content'
  $permissions['node:affiliated_centre:delete own group_email content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:delete own group_post content'
  $permissions['node:affiliated_centre:delete own group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete own ride content'
  $permissions['node:affiliated_centre:delete own ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:delete own rider content'
  $permissions['node:affiliated_centre:delete own rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:manage members'
  $permissions['node:affiliated_centre:manage members'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:manage permissions'
  $permissions['node:affiliated_centre:manage permissions'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:manage roles'
  $permissions['node:affiliated_centre:manage roles'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:publish any content'
  $permissions['node:affiliated_centre:publish any content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish any event content'
  $permissions['node:affiliated_centre:publish any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish any ride content'
  $permissions['node:affiliated_centre:publish any ride content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish editable content'
  $permissions['node:affiliated_centre:publish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish editable event content'
  $permissions['node:affiliated_centre:publish editable event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish editable ride content'
  $permissions['node:affiliated_centre:publish editable ride content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish own event content'
  $permissions['node:affiliated_centre:publish own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:publish own ride content'
  $permissions['node:affiliated_centre:publish own ride content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:subscribe'
  $permissions['node:affiliated_centre:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:subscribe without approval'
  $permissions['node:affiliated_centre:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish any content'
  $permissions['node:affiliated_centre:unpublish any content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish any event content'
  $permissions['node:affiliated_centre:unpublish any event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish any ride content'
  $permissions['node:affiliated_centre:unpublish any ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish editable content'
  $permissions['node:affiliated_centre:unpublish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish editable event content'
  $permissions['node:affiliated_centre:unpublish editable event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish editable ride content'
  $permissions['node:affiliated_centre:unpublish editable ride content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish own event content'
  $permissions['node:affiliated_centre:unpublish own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unpublish own ride content'
  $permissions['node:affiliated_centre:unpublish own ride content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:unsubscribe'
  $permissions['node:affiliated_centre:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update any event content'
  $permissions['node:affiliated_centre:update any event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update any group_child_page content'
  $permissions['node:affiliated_centre:update any group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update any group_email content'
  $permissions['node:affiliated_centre:update any group_email content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update any group_post content'
  $permissions['node:affiliated_centre:update any group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update any ride content'
  $permissions['node:affiliated_centre:update any ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update any rider content'
  $permissions['node:affiliated_centre:update any rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update body field'
  $permissions['node:affiliated_centre:update body field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field__cost field'
  $permissions['node:affiliated_centre:update field__cost field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field__location_details field'
  $permissions['node:affiliated_centre:update field__location_details field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field__volunteer_form field'
  $permissions['node:affiliated_centre:update field__volunteer_form field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_about_centre field'
  $permissions['node:affiliated_centre:update field_about_centre field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_about_the_group field'
  $permissions['node:affiliated_centre:update field_about_the_group field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_active field'
  $permissions['node:affiliated_centre:update field_active field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_activities_available field'
  $permissions['node:affiliated_centre:update field_activities_available field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_additional_content field'
  $permissions['node:affiliated_centre:update field_additional_content field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_address_information field'
  $permissions['node:affiliated_centre:update field_address_information field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_area_covered field'
  $permissions['node:affiliated_centre:update field_area_covered field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_attachments field'
  $permissions['node:affiliated_centre:update field_attachments field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_attendance_size field'
  $permissions['node:affiliated_centre:update field_attendance_size field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_banner_image_paragraph field'
  $permissions['node:affiliated_centre:update field_banner_image_paragraph field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_cancelled field'
  $permissions['node:affiliated_centre:update field_cancelled field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_caption field'
  $permissions['node:affiliated_centre:update field_caption field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_care_addresses field'
  $permissions['node:affiliated_centre:update field_care_addresses field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_care_dob field'
  $permissions['node:affiliated_centre:update field_care_dob field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_care_emails field'
  $permissions['node:affiliated_centre:update field_care_emails field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_care_name field'
  $permissions['node:affiliated_centre:update field_care_name field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_care_telephones field'
  $permissions['node:affiliated_centre:update field_care_telephones field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_centre_activities field'
  $permissions['node:affiliated_centre:update field_centre_activities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_centre_facilities field'
  $permissions['node:affiliated_centre:update field_centre_facilities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_contact_address field'
  $permissions['node:affiliated_centre:update field_contact_address field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_contact_email field'
  $permissions['node:affiliated_centre:update field_contact_email field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_contact_name field'
  $permissions['node:affiliated_centre:update field_contact_name field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_contact_number field'
  $permissions['node:affiliated_centre:update field_contact_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_contact_organisation field'
  $permissions['node:affiliated_centre:update field_contact_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_cost field'
  $permissions['node:affiliated_centre:update field_cost field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_cycling_uk_section field'
  $permissions['node:affiliated_centre:update field_cycling_uk_section field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_date field'
  $permissions['node:affiliated_centre:update field_date field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_date_ride field'
  $permissions['node:affiliated_centre:update field_date_ride field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_distance field'
  $permissions['node:affiliated_centre:update field_distance field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_duration field'
  $permissions['node:affiliated_centre:update field_duration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_email_audience field'
  $permissions['node:affiliated_centre:update field_email_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_email_footer field'
  $permissions['node:affiliated_centre:update field_email_footer field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_email_status field'
  $permissions['node:affiliated_centre:update field_email_status field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_email_suppression field'
  $permissions['node:affiliated_centre:update field_email_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_event_facilities field'
  $permissions['node:affiliated_centre:update field_event_facilities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_event_type field'
  $permissions['node:affiliated_centre:update field_event_type field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_extra_contact_details field'
  $permissions['node:affiliated_centre:update field_extra_contact_details field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_facebook field'
  $permissions['node:affiliated_centre:update field_facebook field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_facility_details field'
  $permissions['node:affiliated_centre:update field_facility_details field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_gallery_image field'
  $permissions['node:affiliated_centre:update field_gallery_image field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_gpx_files field'
  $permissions['node:affiliated_centre:update field_gpx_files field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_gpx_map field'
  $permissions['node:affiliated_centre:update field_gpx_map field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_grid_reference field'
  $permissions['node:affiliated_centre:update field_grid_reference field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_activities field'
  $permissions['node:affiliated_centre:update field_group_activities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_contact_email field'
  $permissions['node:affiliated_centre:update field_group_contact_email field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_contact_name field'
  $permissions['node:affiliated_centre:update field_group_contact_name field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_files field'
  $permissions['node:affiliated_centre:update field_group_files field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_image field'
  $permissions['node:affiliated_centre:update field_group_image field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_newsletter_subscribe field'
  $permissions['node:affiliated_centre:update field_group_newsletter_subscribe field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_org_member_no field'
  $permissions['node:affiliated_centre:update field_group_org_member_no field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_owner_member_no field'
  $permissions['node:affiliated_centre:update field_group_owner_member_no field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_parent field'
  $permissions['node:affiliated_centre:update field_group_parent field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_phone_number field'
  $permissions['node:affiliated_centre:update field_group_phone_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_postcodes field'
  $permissions['node:affiliated_centre:update field_group_postcodes field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_region field'
  $permissions['node:affiliated_centre:update field_group_region field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_ride_info field'
  $permissions['node:affiliated_centre:update field_group_ride_info field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_ride_programme field'
  $permissions['node:affiliated_centre:update field_group_ride_programme field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_type field'
  $permissions['node:affiliated_centre:update field_group_type field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_website field'
  $permissions['node:affiliated_centre:update field_group_website field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_group_welcome field'
  $permissions['node:affiliated_centre:update field_group_welcome field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_ice_name field'
  $permissions['node:affiliated_centre:update field_ice_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_ice_notes field'
  $permissions['node:affiliated_centre:update field_ice_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_ice_phone_number field'
  $permissions['node:affiliated_centre:update field_ice_phone_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_image field'
  $permissions['node:affiliated_centre:update field_image field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_image_gallery field'
  $permissions['node:affiliated_centre:update field_image_gallery field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_inclusive_cycling field'
  $permissions['node:affiliated_centre:update field_inclusive_cycling field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_instagram field'
  $permissions['node:affiliated_centre:update field_instagram field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_insurance_required_ field'
  $permissions['node:affiliated_centre:update field_insurance_required_ field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_link field'
  $permissions['node:affiliated_centre:update field_link field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_links field'
  $permissions['node:affiliated_centre:update field_links field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_location field'
  $permissions['node:affiliated_centre:update field_location field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_mailing_preferences field'
  $permissions['node:affiliated_centre:update field_mailing_preferences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_membership_number field'
  $permissions['node:affiliated_centre:update field_membership_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_membership_type field'
  $permissions['node:affiliated_centre:update field_membership_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_memberships field'
  $permissions['node:affiliated_centre:update field_memberships field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_opening_times field'
  $permissions['node:affiliated_centre:update field_opening_times field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_organisation_number field'
  $permissions['node:affiliated_centre:update field_organisation_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_partner_logo field'
  $permissions['node:affiliated_centre:update field_partner_logo field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_partners field'
  $permissions['node:affiliated_centre:update field_partners field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_postal_suppression field'
  $permissions['node:affiliated_centre:update field_postal_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_postcode field'
  $permissions['node:affiliated_centre:update field_postcode field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_profile_picture field'
  $permissions['node:affiliated_centre:update field_profile_picture field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_redirect_website field'
  $permissions['node:affiliated_centre:update field_redirect_website field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_renewal_date field'
  $permissions['node:affiliated_centre:update field_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_reply_to_email_address field'
  $permissions['node:affiliated_centre:update field_reply_to_email_address field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_ride_section field'
  $permissions['node:affiliated_centre:update field_ride_section field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_ride_type field'
  $permissions['node:affiliated_centre:update field_ride_type field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_address_1 field'
  $permissions['node:affiliated_centre:update field_rider_address_1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_address_2 field'
  $permissions['node:affiliated_centre:update field_rider_address_2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_address_3 field'
  $permissions['node:affiliated_centre:update field_rider_address_3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_contact_number field'
  $permissions['node:affiliated_centre:update field_rider_contact_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_country field'
  $permissions['node:affiliated_centre:update field_rider_country field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_county field'
  $permissions['node:affiliated_centre:update field_rider_county field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_email field'
  $permissions['node:affiliated_centre:update field_rider_email field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_email_suppression field'
  $permissions['node:affiliated_centre:update field_rider_email_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_forename field'
  $permissions['node:affiliated_centre:update field_rider_forename field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_joined_date field'
  $permissions['node:affiliated_centre:update field_rider_joined_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_local_mobile_number field'
  $permissions['node:affiliated_centre:update field_rider_local_mobile_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_notes field'
  $permissions['node:affiliated_centre:update field_rider_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_postcode field'
  $permissions['node:affiliated_centre:update field_rider_postcode field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_renewal_date field'
  $permissions['node:affiliated_centre:update field_rider_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_salutation field'
  $permissions['node:affiliated_centre:update field_rider_salutation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_status field'
  $permissions['node:affiliated_centre:update field_rider_status field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_surname field'
  $permissions['node:affiliated_centre:update field_rider_surname field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rider_town field'
  $permissions['node:affiliated_centre:update field_rider_town field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_rides_and_activities field'
  $permissions['node:affiliated_centre:update field_rides_and_activities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_risk_assessment field'
  $permissions['node:affiliated_centre:update field_risk_assessment field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_show_on_latest_feed field'
  $permissions['node:affiliated_centre:update field_show_on_latest_feed field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_stories field'
  $permissions['node:affiliated_centre:update field_stories field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_sub_to_groups_comms field'
  $permissions['node:affiliated_centre:update field_sub_to_groups_comms field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_sub_to_groups_comms_date field'
  $permissions['node:affiliated_centre:update field_sub_to_groups_comms_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_sub_to_groups_comms_notes field'
  $permissions['node:affiliated_centre:update field_sub_to_groups_comms_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_tags field'
  $permissions['node:affiliated_centre:update field_tags field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_teaser field'
  $permissions['node:affiliated_centre:update field_teaser field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_town field'
  $permissions['node:affiliated_centre:update field_town field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_twitter field'
  $permissions['node:affiliated_centre:update field_twitter field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_type_of_cycling field'
  $permissions['node:affiliated_centre:update field_type_of_cycling field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_user field'
  $permissions['node:affiliated_centre:update field_user field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_volunteer_form_external field'
  $permissions['node:affiliated_centre:update field_volunteer_form_external field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_volunteer_opportunities field'
  $permissions['node:affiliated_centre:update field_volunteer_opportunities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update field_voting_rights field'
  $permissions['node:affiliated_centre:update field_voting_rights field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update field_welcome_email_sent field'
  $permissions['node:affiliated_centre:update field_welcome_email_sent field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update group'
  $permissions['node:affiliated_centre:update group'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update group_group field'
  $permissions['node:affiliated_centre:update group_group field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update og_group_ref field'
  $permissions['node:affiliated_centre:update og_group_ref field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update og_user_node field'
  $permissions['node:affiliated_centre:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update own event content'
  $permissions['node:affiliated_centre:update own event content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update own group_child_page content'
  $permissions['node:affiliated_centre:update own group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update own group_email content'
  $permissions['node:affiliated_centre:update own group_email content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update own group_post content'
  $permissions['node:affiliated_centre:update own group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update own ride content'
  $permissions['node:affiliated_centre:update own ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:update own rider content'
  $permissions['node:affiliated_centre:update own rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:update title_field field'
  $permissions['node:affiliated_centre:update title_field field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view body field'
  $permissions['node:affiliated_centre:view body field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field__cost field'
  $permissions['node:affiliated_centre:view field__cost field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field__location_details field'
  $permissions['node:affiliated_centre:view field__location_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field__volunteer_form field'
  $permissions['node:affiliated_centre:view field__volunteer_form field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_about_centre field'
  $permissions['node:affiliated_centre:view field_about_centre field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_about_the_group field'
  $permissions['node:affiliated_centre:view field_about_the_group field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_active field'
  $permissions['node:affiliated_centre:view field_active field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_activities_available field'
  $permissions['node:affiliated_centre:view field_activities_available field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_additional_content field'
  $permissions['node:affiliated_centre:view field_additional_content field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_address_information field'
  $permissions['node:affiliated_centre:view field_address_information field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_area_covered field'
  $permissions['node:affiliated_centre:view field_area_covered field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_attachments field'
  $permissions['node:affiliated_centre:view field_attachments field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_attendance_size field'
  $permissions['node:affiliated_centre:view field_attendance_size field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_banner_image_paragraph field'
  $permissions['node:affiliated_centre:view field_banner_image_paragraph field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_cancelled field'
  $permissions['node:affiliated_centre:view field_cancelled field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_caption field'
  $permissions['node:affiliated_centre:view field_caption field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_care_addresses field'
  $permissions['node:affiliated_centre:view field_care_addresses field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_care_dob field'
  $permissions['node:affiliated_centre:view field_care_dob field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_care_emails field'
  $permissions['node:affiliated_centre:view field_care_emails field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_care_name field'
  $permissions['node:affiliated_centre:view field_care_name field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_care_telephones field'
  $permissions['node:affiliated_centre:view field_care_telephones field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_centre_activities field'
  $permissions['node:affiliated_centre:view field_centre_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_centre_facilities field'
  $permissions['node:affiliated_centre:view field_centre_facilities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_contact_address field'
  $permissions['node:affiliated_centre:view field_contact_address field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_contact_email field'
  $permissions['node:affiliated_centre:view field_contact_email field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_contact_name field'
  $permissions['node:affiliated_centre:view field_contact_name field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_contact_number field'
  $permissions['node:affiliated_centre:view field_contact_number field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_contact_organisation field'
  $permissions['node:affiliated_centre:view field_contact_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_cost field'
  $permissions['node:affiliated_centre:view field_cost field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_cycling_uk_section field'
  $permissions['node:affiliated_centre:view field_cycling_uk_section field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_date field'
  $permissions['node:affiliated_centre:view field_date field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_date_ride field'
  $permissions['node:affiliated_centre:view field_date_ride field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_distance field'
  $permissions['node:affiliated_centre:view field_distance field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_duration field'
  $permissions['node:affiliated_centre:view field_duration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_email_audience field'
  $permissions['node:affiliated_centre:view field_email_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_email_footer field'
  $permissions['node:affiliated_centre:view field_email_footer field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_email_status field'
  $permissions['node:affiliated_centre:view field_email_status field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_email_suppression field'
  $permissions['node:affiliated_centre:view field_email_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_event_facilities field'
  $permissions['node:affiliated_centre:view field_event_facilities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_event_type field'
  $permissions['node:affiliated_centre:view field_event_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_extra_contact_details field'
  $permissions['node:affiliated_centre:view field_extra_contact_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_facebook field'
  $permissions['node:affiliated_centre:view field_facebook field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_facility_details field'
  $permissions['node:affiliated_centre:view field_facility_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_gallery_image field'
  $permissions['node:affiliated_centre:view field_gallery_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_gpx_files field'
  $permissions['node:affiliated_centre:view field_gpx_files field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_gpx_map field'
  $permissions['node:affiliated_centre:view field_gpx_map field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_grid_reference field'
  $permissions['node:affiliated_centre:view field_grid_reference field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_activities field'
  $permissions['node:affiliated_centre:view field_group_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_contact_email field'
  $permissions['node:affiliated_centre:view field_group_contact_email field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_contact_name field'
  $permissions['node:affiliated_centre:view field_group_contact_name field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_files field'
  $permissions['node:affiliated_centre:view field_group_files field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_image field'
  $permissions['node:affiliated_centre:view field_group_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_newsletter_subscribe field'
  $permissions['node:affiliated_centre:view field_group_newsletter_subscribe field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_org_member_no field'
  $permissions['node:affiliated_centre:view field_group_org_member_no field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_owner_member_no field'
  $permissions['node:affiliated_centre:view field_group_owner_member_no field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_parent field'
  $permissions['node:affiliated_centre:view field_group_parent field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_phone_number field'
  $permissions['node:affiliated_centre:view field_group_phone_number field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_postcodes field'
  $permissions['node:affiliated_centre:view field_group_postcodes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_region field'
  $permissions['node:affiliated_centre:view field_group_region field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_ride_info field'
  $permissions['node:affiliated_centre:view field_group_ride_info field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_ride_programme field'
  $permissions['node:affiliated_centre:view field_group_ride_programme field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_type field'
  $permissions['node:affiliated_centre:view field_group_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_website field'
  $permissions['node:affiliated_centre:view field_group_website field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_group_welcome field'
  $permissions['node:affiliated_centre:view field_group_welcome field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_ice_name field'
  $permissions['node:affiliated_centre:view field_ice_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_ice_notes field'
  $permissions['node:affiliated_centre:view field_ice_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_ice_phone_number field'
  $permissions['node:affiliated_centre:view field_ice_phone_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_image field'
  $permissions['node:affiliated_centre:view field_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_image_gallery field'
  $permissions['node:affiliated_centre:view field_image_gallery field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_inclusive_cycling field'
  $permissions['node:affiliated_centre:view field_inclusive_cycling field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_instagram field'
  $permissions['node:affiliated_centre:view field_instagram field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_insurance_required_ field'
  $permissions['node:affiliated_centre:view field_insurance_required_ field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_link field'
  $permissions['node:affiliated_centre:view field_link field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_links field'
  $permissions['node:affiliated_centre:view field_links field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_location field'
  $permissions['node:affiliated_centre:view field_location field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_mailing_preferences field'
  $permissions['node:affiliated_centre:view field_mailing_preferences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_membership_number field'
  $permissions['node:affiliated_centre:view field_membership_number field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_membership_type field'
  $permissions['node:affiliated_centre:view field_membership_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_memberships field'
  $permissions['node:affiliated_centre:view field_memberships field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_opening_times field'
  $permissions['node:affiliated_centre:view field_opening_times field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_organisation_number field'
  $permissions['node:affiliated_centre:view field_organisation_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_partner_logo field'
  $permissions['node:affiliated_centre:view field_partner_logo field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_partners field'
  $permissions['node:affiliated_centre:view field_partners field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_postal_suppression field'
  $permissions['node:affiliated_centre:view field_postal_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_postcode field'
  $permissions['node:affiliated_centre:view field_postcode field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_profile_picture field'
  $permissions['node:affiliated_centre:view field_profile_picture field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_redirect_website field'
  $permissions['node:affiliated_centre:view field_redirect_website field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_renewal_date field'
  $permissions['node:affiliated_centre:view field_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_reply_to_email_address field'
  $permissions['node:affiliated_centre:view field_reply_to_email_address field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_ride_section field'
  $permissions['node:affiliated_centre:view field_ride_section field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_ride_type field'
  $permissions['node:affiliated_centre:view field_ride_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_address_1 field'
  $permissions['node:affiliated_centre:view field_rider_address_1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_address_2 field'
  $permissions['node:affiliated_centre:view field_rider_address_2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_address_3 field'
  $permissions['node:affiliated_centre:view field_rider_address_3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_contact_number field'
  $permissions['node:affiliated_centre:view field_rider_contact_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_country field'
  $permissions['node:affiliated_centre:view field_rider_country field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_county field'
  $permissions['node:affiliated_centre:view field_rider_county field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_email field'
  $permissions['node:affiliated_centre:view field_rider_email field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_email_suppression field'
  $permissions['node:affiliated_centre:view field_rider_email_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_forename field'
  $permissions['node:affiliated_centre:view field_rider_forename field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_joined_date field'
  $permissions['node:affiliated_centre:view field_rider_joined_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_local_mobile_number field'
  $permissions['node:affiliated_centre:view field_rider_local_mobile_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_notes field'
  $permissions['node:affiliated_centre:view field_rider_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_postcode field'
  $permissions['node:affiliated_centre:view field_rider_postcode field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_renewal_date field'
  $permissions['node:affiliated_centre:view field_rider_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_salutation field'
  $permissions['node:affiliated_centre:view field_rider_salutation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_status field'
  $permissions['node:affiliated_centre:view field_rider_status field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_surname field'
  $permissions['node:affiliated_centre:view field_rider_surname field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rider_town field'
  $permissions['node:affiliated_centre:view field_rider_town field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_rides_and_activities field'
  $permissions['node:affiliated_centre:view field_rides_and_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_risk_assessment field'
  $permissions['node:affiliated_centre:view field_risk_assessment field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_show_on_latest_feed field'
  $permissions['node:affiliated_centre:view field_show_on_latest_feed field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_stories field'
  $permissions['node:affiliated_centre:view field_stories field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_sub_to_groups_comms field'
  $permissions['node:affiliated_centre:view field_sub_to_groups_comms field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_sub_to_groups_comms_date field'
  $permissions['node:affiliated_centre:view field_sub_to_groups_comms_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_sub_to_groups_comms_notes field'
  $permissions['node:affiliated_centre:view field_sub_to_groups_comms_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_tags field'
  $permissions['node:affiliated_centre:view field_tags field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_teaser field'
  $permissions['node:affiliated_centre:view field_teaser field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_town field'
  $permissions['node:affiliated_centre:view field_town field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_twitter field'
  $permissions['node:affiliated_centre:view field_twitter field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_type_of_cycling field'
  $permissions['node:affiliated_centre:view field_type_of_cycling field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_user field'
  $permissions['node:affiliated_centre:view field_user field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_volunteer_form_external field'
  $permissions['node:affiliated_centre:view field_volunteer_form_external field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_volunteer_opportunities field'
  $permissions['node:affiliated_centre:view field_volunteer_opportunities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view field_voting_rights field'
  $permissions['node:affiliated_centre:view field_voting_rights field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view field_welcome_email_sent field'
  $permissions['node:affiliated_centre:view field_welcome_email_sent field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:affiliated_centre:view group_group field'
  $permissions['node:affiliated_centre:view group_group field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view og_group_ref field'
  $permissions['node:affiliated_centre:view og_group_ref field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view og_user_node field'
  $permissions['node:affiliated_centre:view og_user_node field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:affiliated_centre:view title_field field'
  $permissions['node:affiliated_centre:view title_field field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:add user'
  $permissions['node:group:add user'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:administer group'
  $permissions['node:group:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:approve and deny subscription'
  $permissions['node:group:approve and deny subscription'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:create event content'
  $permissions['node:group:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:create group_child_page content'
  $permissions['node:group:create group_child_page content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:create group_email content'
  $permissions['node:group:create group_email content'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:create group_post content'
  $permissions['node:group:create group_post content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:create ride content'
  $permissions['node:group:create ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:create rider content'
  $permissions['node:group:create rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any event content'
  $permissions['node:group:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any group_child_page content'
  $permissions['node:group:delete any group_child_page content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete any group_email content'
  $permissions['node:group:delete any group_email content'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete any group_post content'
  $permissions['node:group:delete any group_post content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete any ride content'
  $permissions['node:group:delete any ride content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete any rider content'
  $permissions['node:group:delete any rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own event content'
  $permissions['node:group:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own group_child_page content'
  $permissions['node:group:delete own group_child_page content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete own group_email content'
  $permissions['node:group:delete own group_email content'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:delete own group_post content'
  $permissions['node:group:delete own group_post content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:delete own ride content'
  $permissions['node:group:delete own ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete own rider content'
  $permissions['node:group:delete own rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:manage members'
  $permissions['node:group:manage members'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:manage permissions'
  $permissions['node:group:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:manage roles'
  $permissions['node:group:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:publish any content'
  $permissions['node:group:publish any content'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:publish any event content'
  $permissions['node:group:publish any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:publish any ride content'
  $permissions['node:group:publish any ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:publish editable content'
  $permissions['node:group:publish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:publish editable event content'
  $permissions['node:group:publish editable event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:publish editable ride content'
  $permissions['node:group:publish editable ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:publish own event content'
  $permissions['node:group:publish own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:publish own ride content'
  $permissions['node:group:publish own ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:subscribe'
  $permissions['node:group:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:subscribe without approval'
  $permissions['node:group:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:unpublish any content'
  $permissions['node:group:unpublish any content'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:unpublish any event content'
  $permissions['node:group:unpublish any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unpublish any ride content'
  $permissions['node:group:unpublish any ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:unpublish editable content'
  $permissions['node:group:unpublish editable content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unpublish editable event content'
  $permissions['node:group:unpublish editable event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unpublish editable ride content'
  $permissions['node:group:unpublish editable ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:unpublish own event content'
  $permissions['node:group:unpublish own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unpublish own ride content'
  $permissions['node:group:unpublish own ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:unsubscribe'
  $permissions['node:group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any event content'
  $permissions['node:group:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any group_child_page content'
  $permissions['node:group:update any group_child_page content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update any group_email content'
  $permissions['node:group:update any group_email content'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update any group_post content'
  $permissions['node:group:update any group_post content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update any ride content'
  $permissions['node:group:update any ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update any rider content'
  $permissions['node:group:update any rider content'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update body field'
  $permissions['node:group:update body field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field__cost field'
  $permissions['node:group:update field__cost field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field__location_details field'
  $permissions['node:group:update field__location_details field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field__volunteer_form field'
  $permissions['node:group:update field__volunteer_form field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_about_centre field'
  $permissions['node:group:update field_about_centre field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_about_the_group field'
  $permissions['node:group:update field_about_the_group field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_active field'
  $permissions['node:group:update field_active field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_activities_available field'
  $permissions['node:group:update field_activities_available field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_additional_content field'
  $permissions['node:group:update field_additional_content field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_address_information field'
  $permissions['node:group:update field_address_information field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_area_covered field'
  $permissions['node:group:update field_area_covered field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_attachments field'
  $permissions['node:group:update field_attachments field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_attendance_size field'
  $permissions['node:group:update field_attendance_size field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_banner_image_paragraph field'
  $permissions['node:group:update field_banner_image_paragraph field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_cancelled field'
  $permissions['node:group:update field_cancelled field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_caption field'
  $permissions['node:group:update field_caption field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_care_addresses field'
  $permissions['node:group:update field_care_addresses field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_care_dob field'
  $permissions['node:group:update field_care_dob field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_care_emails field'
  $permissions['node:group:update field_care_emails field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_care_name field'
  $permissions['node:group:update field_care_name field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_care_telephones field'
  $permissions['node:group:update field_care_telephones field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_centre_activities field'
  $permissions['node:group:update field_centre_activities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_centre_facilities field'
  $permissions['node:group:update field_centre_facilities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_contact_address field'
  $permissions['node:group:update field_contact_address field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_contact_email field'
  $permissions['node:group:update field_contact_email field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_contact_name field'
  $permissions['node:group:update field_contact_name field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_contact_number field'
  $permissions['node:group:update field_contact_number field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_contact_organisation field'
  $permissions['node:group:update field_contact_organisation field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_cost field'
  $permissions['node:group:update field_cost field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_cycling_uk_section field'
  $permissions['node:group:update field_cycling_uk_section field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_date field'
  $permissions['node:group:update field_date field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_date_ride field'
  $permissions['node:group:update field_date_ride field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_distance field'
  $permissions['node:group:update field_distance field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_duration field'
  $permissions['node:group:update field_duration field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_email_audience field'
  $permissions['node:group:update field_email_audience field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_email_footer field'
  $permissions['node:group:update field_email_footer field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_email_status field'
  $permissions['node:group:update field_email_status field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_email_suppression field'
  $permissions['node:group:update field_email_suppression field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_event_facilities field'
  $permissions['node:group:update field_event_facilities field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_event_type field'
  $permissions['node:group:update field_event_type field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_extra_contact_details field'
  $permissions['node:group:update field_extra_contact_details field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_facebook field'
  $permissions['node:group:update field_facebook field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_facility_details field'
  $permissions['node:group:update field_facility_details field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_gallery_image field'
  $permissions['node:group:update field_gallery_image field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_gpx_files field'
  $permissions['node:group:update field_gpx_files field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_gpx_map field'
  $permissions['node:group:update field_gpx_map field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_grid_reference field'
  $permissions['node:group:update field_grid_reference field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_group_activities field'
  $permissions['node:group:update field_group_activities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_contact_email field'
  $permissions['node:group:update field_group_contact_email field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_group_contact_name field'
  $permissions['node:group:update field_group_contact_name field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_files field'
  $permissions['node:group:update field_group_files field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_image field'
  $permissions['node:group:update field_group_image field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_newsletter_subscribe field'
  $permissions['node:group:update field_group_newsletter_subscribe field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_org_member_no field'
  $permissions['node:group:update field_group_org_member_no field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_owner_member_no field'
  $permissions['node:group:update field_group_owner_member_no field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_parent field'
  $permissions['node:group:update field_group_parent field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_phone_number field'
  $permissions['node:group:update field_group_phone_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_postcodes field'
  $permissions['node:group:update field_group_postcodes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_region field'
  $permissions['node:group:update field_group_region field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_ride_info field'
  $permissions['node:group:update field_group_ride_info field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_group_ride_programme field'
  $permissions['node:group:update field_group_ride_programme field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_group_type field'
  $permissions['node:group:update field_group_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_group_website field'
  $permissions['node:group:update field_group_website field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_group_welcome field'
  $permissions['node:group:update field_group_welcome field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_ice_name field'
  $permissions['node:group:update field_ice_name field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_ice_notes field'
  $permissions['node:group:update field_ice_notes field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_ice_phone_number field'
  $permissions['node:group:update field_ice_phone_number field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_image field'
  $permissions['node:group:update field_image field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_image_gallery field'
  $permissions['node:group:update field_image_gallery field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_inclusive_cycling field'
  $permissions['node:group:update field_inclusive_cycling field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_instagram field'
  $permissions['node:group:update field_instagram field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_insurance_required_ field'
  $permissions['node:group:update field_insurance_required_ field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_link field'
  $permissions['node:group:update field_link field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_links field'
  $permissions['node:group:update field_links field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_location field'
  $permissions['node:group:update field_location field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_mailing_preferences field'
  $permissions['node:group:update field_mailing_preferences field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_membership_number field'
  $permissions['node:group:update field_membership_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_membership_type field'
  $permissions['node:group:update field_membership_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_memberships field'
  $permissions['node:group:update field_memberships field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_opening_times field'
  $permissions['node:group:update field_opening_times field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_organisation_number field'
  $permissions['node:group:update field_organisation_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_partner_logo field'
  $permissions['node:group:update field_partner_logo field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_partners field'
  $permissions['node:group:update field_partners field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_postal_suppression field'
  $permissions['node:group:update field_postal_suppression field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_postcode field'
  $permissions['node:group:update field_postcode field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_profile_picture field'
  $permissions['node:group:update field_profile_picture field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_redirect_website field'
  $permissions['node:group:update field_redirect_website field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_renewal_date field'
  $permissions['node:group:update field_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_reply_to_email_address field'
  $permissions['node:group:update field_reply_to_email_address field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_ride_section field'
  $permissions['node:group:update field_ride_section field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_ride_type field'
  $permissions['node:group:update field_ride_type field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_rider_address_1 field'
  $permissions['node:group:update field_rider_address_1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_address_2 field'
  $permissions['node:group:update field_rider_address_2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_address_3 field'
  $permissions['node:group:update field_rider_address_3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_contact_number field'
  $permissions['node:group:update field_rider_contact_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_country field'
  $permissions['node:group:update field_rider_country field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_county field'
  $permissions['node:group:update field_rider_county field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_email field'
  $permissions['node:group:update field_rider_email field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_email_suppression field'
  $permissions['node:group:update field_rider_email_suppression field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_forename field'
  $permissions['node:group:update field_rider_forename field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_joined_date field'
  $permissions['node:group:update field_rider_joined_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_local_mobile_number field'
  $permissions['node:group:update field_rider_local_mobile_number field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_rider_notes field'
  $permissions['node:group:update field_rider_notes field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_rider_postcode field'
  $permissions['node:group:update field_rider_postcode field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_renewal_date field'
  $permissions['node:group:update field_rider_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_salutation field'
  $permissions['node:group:update field_rider_salutation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_status field'
  $permissions['node:group:update field_rider_status field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_surname field'
  $permissions['node:group:update field_rider_surname field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rider_town field'
  $permissions['node:group:update field_rider_town field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_rides_and_activities field'
  $permissions['node:group:update field_rides_and_activities field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_risk_assessment field'
  $permissions['node:group:update field_risk_assessment field'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_show_on_latest_feed field'
  $permissions['node:group:update field_show_on_latest_feed field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_stories field'
  $permissions['node:group:update field_stories field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_sub_to_groups_comms field'
  $permissions['node:group:update field_sub_to_groups_comms field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_sub_to_groups_comms_date field'
  $permissions['node:group:update field_sub_to_groups_comms_date field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_sub_to_groups_comms_notes field'
  $permissions['node:group:update field_sub_to_groups_comms_notes field'] = array(
    'roles' => array(
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update field_tags field'
  $permissions['node:group:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_teaser field'
  $permissions['node:group:update field_teaser field'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:update field_town field'
  $permissions['node:group:update field_town field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_twitter field'
  $permissions['node:group:update field_twitter field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_type_of_cycling field'
  $permissions['node:group:update field_type_of_cycling field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_user field'
  $permissions['node:group:update field_user field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_volunteer_form_external field'
  $permissions['node:group:update field_volunteer_form_external field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_volunteer_opportunities field'
  $permissions['node:group:update field_volunteer_opportunities field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update field_voting_rights field'
  $permissions['node:group:update field_voting_rights field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_welcome_email_sent field'
  $permissions['node:group:update field_welcome_email_sent field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update group'
  $permissions['node:group:update group'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update group_group field'
  $permissions['node:group:update group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_group_ref field'
  $permissions['node:group:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update og_user_node field'
  $permissions['node:group:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own event content'
  $permissions['node:group:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own group_child_page content'
  $permissions['node:group:update own group_child_page content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update own group_email content'
  $permissions['node:group:update own group_email content'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:update own group_post content'
  $permissions['node:group:update own group_post content'] = array(
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:update own ride content'
  $permissions['node:group:update own ride content'] = array(
    'roles' => array(
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own rider content'
  $permissions['node:group:update own rider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update title_field field'
  $permissions['node:group:update title_field field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Content Editor' => 'Content Editor',
      'Events Editor' => 'Events Editor',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view body field'
  $permissions['node:group:view body field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field__cost field'
  $permissions['node:group:view field__cost field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field__location_details field'
  $permissions['node:group:view field__location_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field__volunteer_form field'
  $permissions['node:group:view field__volunteer_form field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_about_centre field'
  $permissions['node:group:view field_about_centre field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_about_the_group field'
  $permissions['node:group:view field_about_the_group field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_active field'
  $permissions['node:group:view field_active field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_activities_available field'
  $permissions['node:group:view field_activities_available field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_additional_content field'
  $permissions['node:group:view field_additional_content field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_address_information field'
  $permissions['node:group:view field_address_information field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_area_covered field'
  $permissions['node:group:view field_area_covered field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_attachments field'
  $permissions['node:group:view field_attachments field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_attendance_size field'
  $permissions['node:group:view field_attendance_size field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_banner_image_paragraph field'
  $permissions['node:group:view field_banner_image_paragraph field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_cancelled field'
  $permissions['node:group:view field_cancelled field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_caption field'
  $permissions['node:group:view field_caption field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_care_addresses field'
  $permissions['node:group:view field_care_addresses field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_care_dob field'
  $permissions['node:group:view field_care_dob field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_care_emails field'
  $permissions['node:group:view field_care_emails field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_care_name field'
  $permissions['node:group:view field_care_name field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_care_telephones field'
  $permissions['node:group:view field_care_telephones field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_centre_activities field'
  $permissions['node:group:view field_centre_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_centre_facilities field'
  $permissions['node:group:view field_centre_facilities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_contact_address field'
  $permissions['node:group:view field_contact_address field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_contact_email field'
  $permissions['node:group:view field_contact_email field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_contact_name field'
  $permissions['node:group:view field_contact_name field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_contact_number field'
  $permissions['node:group:view field_contact_number field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_contact_organisation field'
  $permissions['node:group:view field_contact_organisation field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_cost field'
  $permissions['node:group:view field_cost field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_cycling_uk_section field'
  $permissions['node:group:view field_cycling_uk_section field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_date field'
  $permissions['node:group:view field_date field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_date_ride field'
  $permissions['node:group:view field_date_ride field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_distance field'
  $permissions['node:group:view field_distance field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_duration field'
  $permissions['node:group:view field_duration field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_email_audience field'
  $permissions['node:group:view field_email_audience field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:view field_email_footer field'
  $permissions['node:group:view field_email_footer field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_email_status field'
  $permissions['node:group:view field_email_status field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:view field_email_suppression field'
  $permissions['node:group:view field_email_suppression field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_event_facilities field'
  $permissions['node:group:view field_event_facilities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_event_type field'
  $permissions['node:group:view field_event_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_extra_contact_details field'
  $permissions['node:group:view field_extra_contact_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_facebook field'
  $permissions['node:group:view field_facebook field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_facility_details field'
  $permissions['node:group:view field_facility_details field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_gallery_image field'
  $permissions['node:group:view field_gallery_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_gpx_files field'
  $permissions['node:group:view field_gpx_files field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_gpx_map field'
  $permissions['node:group:view field_gpx_map field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_grid_reference field'
  $permissions['node:group:view field_grid_reference field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_activities field'
  $permissions['node:group:view field_group_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_contact_email field'
  $permissions['node:group:view field_group_contact_email field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_contact_name field'
  $permissions['node:group:view field_group_contact_name field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_files field'
  $permissions['node:group:view field_group_files field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_image field'
  $permissions['node:group:view field_group_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_newsletter_subscribe field'
  $permissions['node:group:view field_group_newsletter_subscribe field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_group_org_member_no field'
  $permissions['node:group:view field_group_org_member_no field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_group_owner_member_no field'
  $permissions['node:group:view field_group_owner_member_no field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_group_parent field'
  $permissions['node:group:view field_group_parent field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_phone_number field'
  $permissions['node:group:view field_group_phone_number field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_postcodes field'
  $permissions['node:group:view field_group_postcodes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_group_region field'
  $permissions['node:group:view field_group_region field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_group_ride_info field'
  $permissions['node:group:view field_group_ride_info field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_ride_programme field'
  $permissions['node:group:view field_group_ride_programme field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_type field'
  $permissions['node:group:view field_group_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_website field'
  $permissions['node:group:view field_group_website field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_group_welcome field'
  $permissions['node:group:view field_group_welcome field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_ice_name field'
  $permissions['node:group:view field_ice_name field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_ice_notes field'
  $permissions['node:group:view field_ice_notes field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_ice_phone_number field'
  $permissions['node:group:view field_ice_phone_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_image field'
  $permissions['node:group:view field_image field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_image_gallery field'
  $permissions['node:group:view field_image_gallery field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_inclusive_cycling field'
  $permissions['node:group:view field_inclusive_cycling field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_instagram field'
  $permissions['node:group:view field_instagram field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_insurance_required_ field'
  $permissions['node:group:view field_insurance_required_ field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_link field'
  $permissions['node:group:view field_link field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_links field'
  $permissions['node:group:view field_links field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_location field'
  $permissions['node:group:view field_location field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_mailing_preferences field'
  $permissions['node:group:view field_mailing_preferences field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_membership_number field'
  $permissions['node:group:view field_membership_number field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_membership_type field'
  $permissions['node:group:view field_membership_type field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_memberships field'
  $permissions['node:group:view field_memberships field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_opening_times field'
  $permissions['node:group:view field_opening_times field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_organisation_number field'
  $permissions['node:group:view field_organisation_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_partner_logo field'
  $permissions['node:group:view field_partner_logo field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_partners field'
  $permissions['node:group:view field_partners field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_postal_suppression field'
  $permissions['node:group:view field_postal_suppression field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_postcode field'
  $permissions['node:group:view field_postcode field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_profile_picture field'
  $permissions['node:group:view field_profile_picture field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_redirect_website field'
  $permissions['node:group:view field_redirect_website field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
    ),
  );

  // Exported og permission: 'node:group:view field_renewal_date field'
  $permissions['node:group:view field_renewal_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_reply_to_email_address field'
  $permissions['node:group:view field_reply_to_email_address field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_ride_section field'
  $permissions['node:group:view field_ride_section field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_ride_type field'
  $permissions['node:group:view field_ride_type field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_address_1 field'
  $permissions['node:group:view field_rider_address_1 field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_address_2 field'
  $permissions['node:group:view field_rider_address_2 field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_address_3 field'
  $permissions['node:group:view field_rider_address_3 field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_contact_number field'
  $permissions['node:group:view field_rider_contact_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_country field'
  $permissions['node:group:view field_rider_country field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_county field'
  $permissions['node:group:view field_rider_county field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_email field'
  $permissions['node:group:view field_rider_email field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_email_suppression field'
  $permissions['node:group:view field_rider_email_suppression field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_forename field'
  $permissions['node:group:view field_rider_forename field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_joined_date field'
  $permissions['node:group:view field_rider_joined_date field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_local_mobile_number field'
  $permissions['node:group:view field_rider_local_mobile_number field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_notes field'
  $permissions['node:group:view field_rider_notes field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_postcode field'
  $permissions['node:group:view field_rider_postcode field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_renewal_date field'
  $permissions['node:group:view field_rider_renewal_date field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_salutation field'
  $permissions['node:group:view field_rider_salutation field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_status field'
  $permissions['node:group:view field_rider_status field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_surname field'
  $permissions['node:group:view field_rider_surname field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rider_town field'
  $permissions['node:group:view field_rider_town field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_rides_and_activities field'
  $permissions['node:group:view field_rides_and_activities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_risk_assessment field'
  $permissions['node:group:view field_risk_assessment field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_show_on_latest_feed field'
  $permissions['node:group:view field_show_on_latest_feed field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_stories field'
  $permissions['node:group:view field_stories field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_sub_to_groups_comms field'
  $permissions['node:group:view field_sub_to_groups_comms field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_sub_to_groups_comms_date field'
  $permissions['node:group:view field_sub_to_groups_comms_date field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_sub_to_groups_comms_notes field'
  $permissions['node:group:view field_sub_to_groups_comms_notes field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_tags field'
  $permissions['node:group:view field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:view field_teaser field'
  $permissions['node:group:view field_teaser field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_town field'
  $permissions['node:group:view field_town field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_twitter field'
  $permissions['node:group:view field_twitter field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_type_of_cycling field'
  $permissions['node:group:view field_type_of_cycling field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_user field'
  $permissions['node:group:view field_user field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_volunteer_form_external field'
  $permissions['node:group:view field_volunteer_form_external field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_volunteer_opportunities field'
  $permissions['node:group:view field_volunteer_opportunities field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view field_voting_rights field'
  $permissions['node:group:view field_voting_rights field'] = array(
    'roles' => array(
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view field_welcome_email_sent field'
  $permissions['node:group:view field_welcome_email_sent field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'Group Administrator' => 'Group Administrator',
      'Group Manager (automatically assigned)' => 'Group Manager (automatically assigned)',
      'Registration Officer (Member Groups Only)' => 'Registration Officer (Member Groups Only)',
    ),
  );

  // Exported og permission: 'node:group:view group_group field'
  $permissions['node:group:view group_group field'] = array(
    'roles' => array(
      'Communications Officer (Member Groups Only)' => 'Communications Officer (Member Groups Only)',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view og_group_ref field'
  $permissions['node:group:view og_group_ref field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group:view og_user_node field'
  $permissions['node:group:view og_user_node field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view title_field field'
  $permissions['node:group:view title_field field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
