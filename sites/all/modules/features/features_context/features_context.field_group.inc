<?php
/**
 * @file
 * features_context.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_context_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|post|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Additional',
    'weight' => '16',
    'children' => array(
      0 => 'field_additional_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_additional|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article|node|post|form';
  $field_group->group_name = 'group_article';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Article',
    'weight' => '21',
    'children' => array(
      0 => 'field_article_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_article|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|post|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '19',
    'children' => array(
      0 => 'field_attachments',
      1 => 'field_gpx_files',
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
  $field_groups['group_attachments|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|post|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '20',
    'children' => array(
      0 => 'field_gallery_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gallery|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|post|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '18',
    'children' => array(
      0 => 'field_location',
      1 => 'field_address',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_press_release|node|post|form';
  $field_group->group_name = 'group_press_release';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Press release',
    'weight' => '22',
    'children' => array(
      0 => 'field_press_contact_information',
      1 => 'field_press_notes_to_editors',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-press-release field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_press_release|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|post|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Publishing',
    'weight' => '15',
    'children' => array(
      0 => 'field_exclude_from_main_feeds',
      1 => 'field_call_to_action',
      2 => 'field_cycling_type',
      3 => 'field_tags',
      4 => 'domain',
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
  $field_groups['group_publishing|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|post|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '17',
    'children' => array(
      0 => 'field_further_reading',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|post|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '5',
    'children' => array(
      0 => 'group_additional',
      1 => 'group_related',
      2 => 'group_location',
      3 => 'group_attachments',
      4 => 'group_gallery',
      5 => 'group_article',
      6 => 'group_press_release',
      7 => 'group_publishing',
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
  $field_groups['group_tab_group|node|post|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional');
  t('Article');
  t('Attachments');
  t('Gallery');
  t('Location');
  t('Press release');
  t('Publishing');
  t('Related');
  t('Tab group');

  return $field_groups;
}
