<?php
/**
 * @file
 * features_content_type_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_campaign_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|campaign|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '16',
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
  $field_groups['group_attachments|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|campaign|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Links and Call To Action',
    'weight' => '15',
    'children' => array(
      0 => 'field_campaign_call_to_action',
      1 => 'field_links',
      2 => 'field_twitter_tag',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|campaign|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Page Management',
    'weight' => '17',
    'children' => array(
      0 => 'field_old_nid',
      1 => 'field_page_management',
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
  $field_groups['group_page_management|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|campaign|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Publishing',
    'weight' => '14',
    'children' => array(
      0 => 'field_historic',
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
  $field_groups['group_publishing|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|campaign|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab Group',
    'weight' => '5',
    'children' => array(
      0 => 'group_page_management',
      1 => 'group_publishing',
      2 => 'group_links',
      3 => 'group_attachments',
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
  $field_groups['group_tab_group|node|campaign|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Links and Call To Action');
  t('Page Management');
  t('Publishing');
  t('Tab Group');

  return $field_groups;
}
