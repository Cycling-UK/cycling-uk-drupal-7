<?php

/**
 * @file
 * content_type_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_image|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_eb_image',
      1 => 'field_eb_image_style',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => '',
        'element' => 'div',
        'label_element' => 'div',
        'required_fields' => 1,
        'show_label' => 0,
      ),
    ),
    'format_type' => 'html-element',
    'label' => 'Image',
    'weight' => 0,
  );
  $field_groups['group_eb_image|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_parallax|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_parallax';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_eb_parallax_image',
      1 => 'field_eb_parallax_speed',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => '',
        'element' => 'div',
        'label_element' => 'div',
        'required_fields' => 1,
        'show_label' => 0,
      ),
    ),
    'format_type' => 'html-element',
    'label' => 'Parallax',
    'weight' => 0,
  );
  $field_groups['group_eb_parallax|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|paragraphs|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraphs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_page_management',
      1 => 'field_review_date',
      2 => 'field_audit_review_date',
      3 => 'field_review_comments',
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
    'weight' => '17',
  );
  $field_groups['group_page_management|node|paragraphs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|paragraphs|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraphs';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_cycling_uk_section',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
      4 => 'xmlsitemap',
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
    'weight' => '16',
  );
  $field_groups['group_publishing|node|paragraphs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|paragraphs|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraphs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_publishing',
      1 => 'group_page_management',
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
    'weight' => '16',
  );
  $field_groups['group_tab_group|node|paragraphs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrapper|node|paragraphs|default';
  $field_group->group_name = 'group_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paragraphs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_link',
      1 => 'title',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-title-wrapper field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Title wrapper',
    ),
    'format_type' => 'div',
    'label' => 'Title wrapper',
    'weight' => '1',
  );
  $field_groups['group_title_wrapper|node|paragraphs|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Page management');
  t('Parallax');
  t('Publishing');
  t('Tab group');
  t('Title wrapper');

  return $field_groups;
}
