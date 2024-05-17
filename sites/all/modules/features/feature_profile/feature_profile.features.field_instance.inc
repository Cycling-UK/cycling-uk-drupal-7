<?php

/**
 * @file
 * feature_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_care_addresses'.
  $field_instances['user-user-field_care_addresses'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_address_oneline_formatter',
        'weight' => 5,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_care_addresses',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'input_options' => array(
        'default_from_current_user' => 0,
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_care_dob'.
  $field_instances['user-user-field_care_dob'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_date_formatter',
        'weight' => 8,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'default_value_options' => array(
        'default_date' => '',
        'default_date_sets' => 'day',
      ),
      'input_options' => array(
        'default_from_current_user' => 0,
        'earliest_date' => '-110 years',
        'latest_date' => 'now',
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_care_emails'.
  $field_instances['user-user-field_care_emails'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Above are the email address we hold for you, we will use the top email to send email to you the emails you have specified in you emailing preferences.',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_email_formatter',
        'weight' => 6,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_care_emails',
    'label' => 'Emails',
    'required' => 0,
    'settings' => array(
      'input_options' => array(
        'default_from_current_user' => 0,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_care_name'.
  $field_instances['user-user-field_care_name'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_name_formatter',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'no',
        'title_optional' => 1,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_care_telephones'.
  $field_instances['user-user-field_care_telephones'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_telephone_formatter',
        'weight' => 7,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_care_telephones',
    'label' => 'Telephones',
    'required' => 0,
    'settings' => array(
      'input_options' => array(
        'default_from_current_user' => 0,
        'display_type_field' => 1,
        'fixed_type' => 'TH',
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_telephone_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_membership_number'.
  $field_instances['user-user-field_membership_number'] = array(
    'bundle' => 'user',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_membership_number_formatter',
        'weight' => 2,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_membership_number',
    'label' => 'Membership Number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_memberships'.
  $field_instances['user-user-field_memberships'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'care_memberships_formatter',
        'weight' => 3,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_memberships',
    'label' => 'Memberships',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_memberships_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_profile_picture'.
  $field_instances['user-user-field_profile_picture'] = array(
    'bundle' => 'user',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_profile_picture',
    'label' => 'Profile Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_default' => '',
      'alt_field_hide' => 1,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 0,
      'file_directory' => 'profile',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => array(
        'enabled' => 0,
      ),
      'image_field_caption_wrapper' => array(
        'image_field_caption_default' => array(
          'format' => 'full_html',
          'value' => '',
        ),
      ),
      'max_filesize' => '50 MB',
      'max_resolution' => '2000x2000',
      'min_resolution' => '800x600',
      'title_field' => 0,
      'title_field_default' => '[current-user:name]',
      'title_field_hide' => 1,
      'title_field_update_on_edit' => 0,
      'user_register_form' => 0,
      'wysiwyg_insert' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'soundcloud' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'skyfish' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 0,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 0,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'crop_square' => 'crop_square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
      ),
      'type' => 'media_generic',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_type_of_cycling'.
  $field_instances['user-user-field_type_of_cycling'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'user',
    'field_name' => 'field_type_of_cycling',
    'label' => 'Type of Cycling',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Above are the email address we hold for you, we will use the top email to send email to you the emails you have specified in you emailing preferences.');
  t('Address');
  t('Date of Birth');
  t('Emails');
  t('Membership Number');
  t('Memberships');
  t('Name');
  t('Profile Picture');
  t('Telephones');
  t('Type of Cycling');

  return $field_instances;
}
