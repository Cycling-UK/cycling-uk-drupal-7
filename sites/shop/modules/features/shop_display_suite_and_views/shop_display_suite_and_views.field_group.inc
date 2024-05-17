<?php
/**
 * @file
 * shop_display_suite_and_views.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shop_display_suite_and_views_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comments|commerce_order|commerce_order|form';
  $field_group->group_name = 'group_comments';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comments',
    'weight' => '6',
    'children' => array(
      0 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-comments field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_comments|commerce_order|commerce_order|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donation_details|commerce_line_item|commerce_donate|shopping_basket';
  $field_group->group_name = 'group_donation_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'commerce_donate';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_payment_option',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-donation-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_donation_details|commerce_line_item|commerce_donate|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family_membership_details|node|product_family_membership_self|default';
  $field_group->group_name = 'group_family_membership_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_family_membership_self';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-family-membership-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_family_membership_details|node|product_family_membership_self|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family_membership_details|node|product_family_membership|default';
  $field_group->group_name = 'group_family_membership_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_family_membership';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-family-membership-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_family_membership_details|node|product_family_membership|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|node|product_affiliate_membership_sel|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_affiliate_membership_sel';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member_details|node|product_affiliate_membership_sel|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|node|product_affiliate_membership|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_affiliate_membership';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member_details|node|product_affiliate_membership|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|node|product_membership_self|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_membership_self';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member_details|node|product_membership_self|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_membership_details|node|product_membership|default';
  $field_group->group_name = 'group_membership_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_membership';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Membership Details',
    'weight' => '2',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'product:field_membership_type',
      2 => 'product:field_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Membership Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-membership-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_membership_details|node|product_membership|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|commerce_order|commerce_order|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where did you hear about us?',
    'weight' => '7',
    'children' => array(
      0 => 'field_where_did_you_hear',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Where did you hear about us?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|commerce_order|commerce_order|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');
  t('Membership Details');
  t('Where did you hear about us?');

  return $field_groups;
}
