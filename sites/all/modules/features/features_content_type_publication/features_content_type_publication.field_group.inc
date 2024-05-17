<?php

/**
 * @file
 * features_content_type_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_publication_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|publication|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_publication_type',
      1 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-header-inner-wrapper field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Header inner wrapper',
    ),
    'format_type' => 'div',
    'label' => 'Header inner wrapper',
    'weight' => '1',
  );
  $field_groups['group_header_inner_wrapper|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|publication|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_issuu_embed_code',
      1 => 'field_magazine_cover',
      2 => 'field_soundcloud',
      3 => 'field_issuu_embed_code_full',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-media field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Media',
    'weight' => '23',
  );
  $field_groups['group_media|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|publication|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_call_to_action',
      1 => 'field_old_nid',
      2 => 'field_page_management',
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
    'weight' => '25',
  );
  $field_groups['group_page_management|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdfs|node|publication|form';
  $field_group->group_name = 'group_pdfs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_pdf_copies',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-pdfs field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'PDFs',
    'weight' => '24',
  );
  $field_groups['group_pdfs|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|publication|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_publication_type',
      1 => 'field_cycling_uk_section',
      2 => 'field_status',
      3 => 'field_tags',
      4 => 'field_internal_advert',
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
    'weight' => '22',
  );
  $field_groups['group_publishing|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|publication|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_publishing',
      1 => 'group_media',
      2 => 'group_pdfs',
      3 => 'group_page_management',
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
    'weight' => '4',
  );
  $field_groups['group_tab_group|node|publication|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header inner wrapper');
  t('Media');
  t('PDFs');
  t('Page management');
  t('Publishing');
  t('Tab group');

  return $field_groups;
}
