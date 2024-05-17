<?php

/**
 * @file
 * features_140_routes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_140_routes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|route|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'route';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_call_to_action',
      1 => 'field_page_management',
      2 => 'field_review_date',
      3 => 'field_audit_review_date',
      4 => 'field_review_comments',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-management field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Page management',
    'weight' => '12',
  );
  $field_groups['group_page_management|node|route|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|route|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'route';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_tags',
      1 => 'field_cycling_uk_section',
      2 => 'field_internal_advert',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-publishing field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Publishing',
    'weight' => '10',
  );
  $field_groups['group_publishing|node|route|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|route|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'route';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_further_reading',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-related field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Related',
    'weight' => '11',
  );
  $field_groups['group_related|node|route|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_route_categorisation|node|route|form';
  $field_group->group_name = 'group_route_categorisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'route';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_bike_type',
      1 => 'field_circular_route',
      2 => 'field_ride_level',
      3 => 'field_route_features',
      4 => 'field_conceal_from_general_maps',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Route categorisation',
    'weight' => '9',
  );
  $field_groups['group_route_categorisation|node|route|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|route|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'route';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_page_management',
      1 => 'group_publishing',
      2 => 'group_related',
      3 => 'group_route_categorisation',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tab-group field-group-htabs',
        'id' => '',
      ),
    ),
    'format_type' => 'htabs',
    'label' => 'Tab group',
    'weight' => '17',
  );
  $field_groups['group_tab_group|node|route|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page management');
  t('Publishing');
  t('Related');
  t('Route categorisation');
  t('Tab group');

  return $field_groups;
}
