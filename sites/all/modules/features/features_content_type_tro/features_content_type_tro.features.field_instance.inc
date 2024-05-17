<?php
/**
 * @file
 * features_content_type_tro.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_content_type_tro_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-traffic_regulation_order-field_attachments'.
  $field_instances['node-traffic_regulation_order-field_attachments'] = array(
    'bundle' => 'traffic_regulation_order',
    'deleted' => 0,
    'description' => 'Attach the TRO letter that has been received from the Local Authority.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_attachments',
    'label' => 'Notification received from Local Authority',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'doc docx pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 'document',
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'skyfish' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_date'.
  $field_instances['node-traffic_regulation_order-field_date'] = array(
    'bundle' => 'traffic_regulation_order',
    'deleted' => 0,
    'description' => 'Choose the end date of the objection period for this TRO. On this date, the TRO will automatically be archived.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'End of objection period',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_location'.
  $field_instances['node-traffic_regulation_order-field_location'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Please note</strong>: this does not work properly in Google Chrome.<br />
Place a marker on the map by entering the relevant address for the TRO and choosing from the suggested options.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers_geofield',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'delta_handling' => 'default',
        'feature_types' => array(
          'path' => 0,
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'geocoder_field' => 'body',
        'geocoder_handler' => 'bing',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'biasing' => array(
              'bounds' => '',
              'components' => '',
              'region' => '',
            ),
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'openlayers_map' => 'openlayers_geofield_map_geofield_widget',
        'showInputField' => 0,
        'use_geocoder' => 0,
      ),
      'type' => 'openlayers_geofield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_status'.
  $field_instances['node-traffic_regulation_order-field_status'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-traffic_regulation_order-field_tro_local_authority'.
  $field_instances['node-traffic_regulation_order-field_tro_local_authority'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the relevant Local Authority for this TRO.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tro_local_authority',
    'label' => 'Relevant Local Authority',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_tro_status'.
  $field_instances['node-traffic_regulation_order-field_tro_status'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the status of this TRO. Choosing <em>Archived</em> will send this TRO to the archive.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tro_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_tro_subject'.
  $field_instances['node-traffic_regulation_order-field_tro_subject'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally choose the subject for this TRO.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tro_subject',
    'label' => 'Subject',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-traffic_regulation_order-field_tro_type'.
  $field_instances['node-traffic_regulation_order-field_tro_type'] = array(
    'bundle' => 'traffic_regulation_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the type of TRO.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tro_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Please note</strong>: this does not work properly in Google Chrome.<br />
Place a marker on the map by entering the relevant address for the TRO and choosing from the suggested options.');
  t('Attach the TRO letter that has been received from the Local Authority.');
  t('Choose the end date of the objection period for this TRO. On this date, the TRO will automatically be archived.');
  t('Choose the relevant Local Authority for this TRO.');
  t('Choose the status of this TRO. Choosing <em>Archived</em> will send this TRO to the archive.');
  t('Choose the type of TRO.');
  t('End of objection period');
  t('Location');
  t('Notification received from Local Authority');
  t('Optionally choose the subject for this TRO.');
  t('Relevant Local Authority');
  t('Status');
  t('Subject');
  t('Type');

  return $field_instances;
}
