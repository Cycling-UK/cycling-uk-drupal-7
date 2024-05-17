<?php

/**
 * @file
 * features_content_type_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordian|node|landing_page|form';
  $field_group->group_name = 'group_accordian';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_accordion',
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
    'label' => 'Accordian',
    'weight' => '19',
  );
  $field_groups['group_accordian|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|landing_page|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-body field-group-htab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Body',
    'weight' => '18',
  );
  $field_groups['group_body|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|landing_page|form';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_body_bottom',
      1 => 'field_remove_child_page_links',
      2 => 'field_links',
      3 => 'field_attachments',
      4 => 'field_logged_in_content',
      5 => 'field_logged_in_attachments',
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
    'label' => 'Footer Section',
    'weight' => '21',
  );
  $field_groups['group_footer|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_inner_wrapper|node|landing_page|default';
  $field_group->group_name = 'group_header_inner_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_welcome_message',
      1 => 'field_markup',
      2 => 'title',
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
  $field_groups['group_header_inner_wrapper|node|landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle_section|node|landing_page|form';
  $field_group->group_name = 'group_middle_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_body_middle',
      1 => 'field_view_ref_2',
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
    'label' => 'Middle Section',
    'weight' => '20',
  );
  $field_groups['group_middle_section|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_management|node|landing_page|form';
  $field_group->group_name = 'group_page_management';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_call_to_action',
      1 => 'field_page_management',
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
    'label' => 'Page Management',
    'weight' => '23',
  );
  $field_groups['group_page_management|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|node|landing_page|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_status',
      1 => 'field_tags',
      2 => 'field_twitter_tag',
      3 => 'field_campaign',
      4 => 'field_post_type',
      5 => 'field_internal_advert',
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
    'label' => 'Publishing',
    'weight' => '22',
  );
  $field_groups['group_settings|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group|node|landing_page|form';
  $field_group->group_name = 'group_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_accordian',
      1 => 'group_body',
      2 => 'group_footer',
      3 => 'group_middle_section',
      4 => 'group_page_management',
      5 => 'group_settings',
      6 => 'group_top_section',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
    'format_type' => 'htabs',
    'label' => 'Tab Group',
    'weight' => '5',
  );
  $field_groups['group_tab_group|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_section|node|landing_page|form';
  $field_group->group_name = 'group_top_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group';
  $field_group->data = array(
    'children' => array(
      0 => 'field_editorial',
      1 => 'field_view_ref_1',
      2 => 'field_body_top',
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
    'label' => 'Top Section',
    'weight' => '17',
  );
  $field_groups['group_top_section|node|landing_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordian');
  t('Body');
  t('Footer Section');
  t('Header inner wrapper');
  t('Middle Section');
  t('Page Management');
  t('Publishing');
  t('Tab Group');
  t('Top Section');

  return $field_groups;
}
