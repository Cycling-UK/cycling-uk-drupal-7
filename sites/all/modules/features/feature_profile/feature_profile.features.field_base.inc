<?php

/**
 * @file
 * feature_profile.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_profile_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_care_addresses'.
  $field_bases['field_care_addresses'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_addresses',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => -1,
    ),
    'translatable' => 0,
    'type' => 'care_address',
  );

  // Exported field_base: 'field_care_dob'.
  $field_bases['field_care_dob'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_dob',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => 1,
    ),
    'translatable' => 0,
    'type' => 'care_date',
  );

  // Exported field_base: 'field_care_emails'.
  $field_bases['field_care_emails'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_emails',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => -1,
    ),
    'translatable' => 0,
    'type' => 'care_email',
  );

  // Exported field_base: 'field_care_name'.
  $field_bases['field_care_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => 1,
    ),
    'translatable' => 0,
    'type' => 'care_name',
  );

  // Exported field_base: 'field_care_telephones'.
  $field_bases['field_care_telephones'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_care_telephones',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => -1,
    ),
    'translatable' => 0,
    'type' => 'care_telephone',
  );

  // Exported field_base: 'field_membership'.
  $field_bases['field_membership'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_membership',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => -1,
    ),
    'translatable' => 0,
    'type' => 'care_memberships',
  );

  // Exported field_base: 'field_membership_number'.
  $field_bases['field_membership_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_membership_number',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => 1,
    ),
    'translatable' => 0,
    'type' => 'care_membership_number',
  );

  // Exported field_base: 'field_memberships'.
  $field_bases['field_memberships'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_memberships',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'care_fields',
    'settings' => array(
      'cardinality' => -1,
    ),
    'translatable' => 0,
    'type' => 'care_memberships',
  );

  // Exported field_base: 'field_profile_picture'.
  $field_bases['field_profile_picture'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_picture',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_type_of_cycling'.
  $field_bases['field_type_of_cycling'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_type_of_cycling',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Leisure' => 'Leisure and Family Rides',
        'Touring' => 'Cycle Touring',
        'Utility' => 'Utility/Shopping',
        'Commute' => 'Commuting',
        'OffRoad' => 'Off-road/MTB',
        'Road' => 'Sportive/Audax/Road Riding',
        'Campaign' => 'Campaigning',
        'Inclusive' => 'Inclusive',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'og_user_node'.
  $field_bases['og_user_node'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'og_user_node',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'affiliated_centre' => 'affiliated_centre',
          'group' => 'group',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
