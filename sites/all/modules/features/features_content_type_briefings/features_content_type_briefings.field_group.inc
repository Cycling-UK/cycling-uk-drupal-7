<?php

/**
 * @file
 * features_content_type_briefings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_briefings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|briefings|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_additional_content',
      1 => 'field_accordion',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-additional field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Additional',
    'weight' => '31',
  );
  $field_groups['group_additional|node|briefings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|briefings|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_attachments',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-attachments field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Attachments',
    'weight' => '32',
  );
  $field_groups['group_attachments|node|briefings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|briefings|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_gallery_image',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-gallery field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Gallery',
    'weight' => '33',
  );
  $field_groups['group_gallery|node|briefings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|briefings|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_call_to_action',
      1 => 'field_old_nid',
      2 => 'field_page_management',
      3 => 'field_review_comments',
      4 => 'field_review_date',
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
    'weight' => '34',
  );
  $field_groups['group_page_management|node|briefings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|briefings|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_cycling_type',
      1 => 'field_status',
      2 => 'field_tags',
      3 => 'field_campaign',
      4 => 'field_publication_date',
      5 => 'field_post_type',
      6 => 'field_internal_advert',
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
    'weight' => '30',
  );
  $field_groups['group_publishing|node|briefings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|briefings|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'briefings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_publishing',
      1 => 'group_additional',
      2 => 'group_attachments',
      3 => 'group_gallery',
      4 => 'group_page_management',
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
    'weight' => '7',
  );
  $field_groups['group_tab_group|node|briefings|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional');
  t('Attachments');
  t('Gallery');
  t('Page management');
  t('Publishing');
  t('Tab group');

  return $field_groups;
}
