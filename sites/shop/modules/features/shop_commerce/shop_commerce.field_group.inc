<?php
/**
 * @file
 * shop_commerce.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shop_commerce_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|commerce_line_item|family_membership_self|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Family Members',
    'weight' => '20',
    'children' => array(
      0 => 'field_family_members',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Family Members',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional|commerce_line_item|family_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|commerce_line_item|family_membership|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Family Members',
    'weight' => '9',
    'children' => array(
      0 => 'field_family_members',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Family Members',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional|commerce_line_item|family_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billing_details|commerce_customer_profile|billing|default';
  $field_group->group_name = 'group_billing_details';
  $field_group->entity_type = 'commerce_customer_profile';
  $field_group->bundle = 'billing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-billing-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_billing_details|commerce_customer_profile|billing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_club|commerce_line_item|affiliate_membership_self|form';
  $field_group->group_name = 'group_club';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Club Code',
    'weight' => '11',
    'children' => array(
      0 => 'field_affiliate_club_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Club Code',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-club field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_club|commerce_line_item|affiliate_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_club|commerce_line_item|affiliate_membership|form';
  $field_group->group_name = 'group_club';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Club Code',
    'weight' => '14',
    'children' => array(
      0 => 'field_affiliate_club_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Club Code',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-club field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_club|commerce_line_item|affiliate_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|commerce_line_item|group_membership|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'group_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group Details',
    'weight' => '14',
    'children' => array(
      0 => 'field_group_name',
      1 => 'field_care_address',
      2 => 'field_care_email',
      3 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Group Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|commerce_line_item|group_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family_members_details|commerce_line_item|family_membership|shopping_basket';
  $field_group->group_name = 'group_family_members_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_family_members',
      1 => 'field_gift',
      2 => 'field_gift_occasion',
      3 => 'field_gift_start_date',
      4 => 'field_payment_option',
      5 => 'field_send_starter_pack',
      6 => 'field_care_address',
      7 => 'field_care_name',
      8 => 'field_care_email',
      9 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-family-members-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_family_members_details|commerce_line_item|family_membership|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gift_options|commerce_line_item|membership|form';
  $field_group->group_name = 'group_gift_options';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gift Options',
    'weight' => '15',
    'children' => array(
      0 => 'field_gift',
      1 => 'field_gift_message',
      2 => 'field_gift_occasion',
      3 => 'field_gift_start_date',
      4 => 'field_send_starter_pack',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Gift Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gift-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gift_options|commerce_line_item|membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gift|commerce_line_item|affiliate_membership|form';
  $field_group->group_name = 'group_gift';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gift',
    'weight' => '18',
    'children' => array(
      0 => 'field_gift',
      1 => 'field_gift_message',
      2 => 'field_gift_occasion',
      3 => 'field_gift_start_date',
      4 => 'field_send_starter_pack',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Gift',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gift field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gift|commerce_line_item|affiliate_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gift|commerce_line_item|family_membership|form';
  $field_group->group_name = 'group_gift';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gift',
    'weight' => '10',
    'children' => array(
      0 => 'field_gift',
      1 => 'field_gift_message',
      2 => 'field_gift_occasion',
      3 => 'field_gift_start_date',
      4 => 'field_send_starter_pack',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Gift',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gift field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gift|commerce_line_item|family_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_member_details|commerce_line_item|family_membership|form';
  $field_group->group_name = 'group_main_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Member Details',
    'weight' => '8',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
      2 => 'field_care_dob',
      3 => 'field_care_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Member Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-member-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_member_details|commerce_line_item|family_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|affiliate_membership_self|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership_self';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_care_address',
      2 => 'field_care_name',
      3 => 'field_care_email',
      4 => 'field_care_telephone',
      5 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|affiliate_membership_self|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|affiliate_membership|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_gift',
      1 => 'field_gift_occasion',
      2 => 'field_gift_start_date',
      3 => 'field_payment_option',
      4 => 'field_send_starter_pack',
      5 => 'field_care_address',
      6 => 'field_care_name',
      7 => 'field_care_email',
      8 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|affiliate_membership|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|family_membership_self|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership_self';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_family_members',
      1 => 'field_name',
      2 => 'field_care_address',
      3 => 'field_care_email',
      4 => 'field_care_dob',
      5 => 'field_payment_option',
      6 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|family_membership_self|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|family_membership|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_care_dob',
      1 => 'field_gift',
      2 => 'field_gift_start_date',
      3 => 'field_gift_message',
      4 => 'field_gift_occassion',
      5 => 'field_send_starter_pack',
      6 => 'field_family_members',
      7 => 'field_name',
      8 => 'field_care_address',
      9 => 'field_care_email',
      10 => 'field_payment_option',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|family_membership|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|group_membership|default';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'group_membership';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_group_name',
      1 => 'field_care_telephone',
      2 => 'field_care_email',
      3 => 'field_care_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|group_membership|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|group_membership|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'group_membership';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_group_name',
      1 => 'field_care_address',
      2 => 'field_care_email',
      3 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|group_membership|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|membership_renewal|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership_renewal';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_membership',
      1 => 'field_membership_number',
      2 => 'field_payment_option',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|membership_renewal|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|membership_self|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership_self';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'commerce_product_giftaid',
      1 => 'field_payment_option',
      2 => 'field_care_address',
      3 => 'field_care_name',
      4 => 'field_care_email',
      5 => 'field_care_telephone',
      6 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member_details|commerce_line_item|membership_self|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member_details|commerce_line_item|membership|shopping_basket';
  $field_group->group_name = 'group_member_details';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership';
  $field_group->mode = 'shopping_basket';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_gift',
      1 => 'field_gift_occasion',
      2 => 'field_gift_start_date',
      3 => 'field_payment_option',
      4 => 'field_send_starter_pack',
      5 => 'field_care_address',
      6 => 'field_care_name',
      7 => 'field_care_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-member-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member_details|commerce_line_item|membership|shopping_basket'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member|commerce_line_item|affiliate_membership_self|form';
  $field_group->group_name = 'group_member';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Details',
    'weight' => '12',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
      2 => 'field_care_dob',
      3 => 'field_care_email',
      4 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-member field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member|commerce_line_item|affiliate_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member|commerce_line_item|affiliate_membership|form';
  $field_group->group_name = 'group_member';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Members Details',
    'weight' => '16',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
      2 => 'field_care_dob',
      3 => 'field_care_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-member field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_member|commerce_line_item|affiliate_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member|commerce_line_item|family_membership_self|form';
  $field_group->group_name = 'group_member';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Details',
    'weight' => '14',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
      2 => 'field_care_dob',
      3 => 'field_care_email',
      4 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-member field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member|commerce_line_item|family_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member|commerce_line_item|membership_self|form';
  $field_group->group_name = 'group_member';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Details',
    'weight' => '12',
    'children' => array(
      0 => 'field_membership_number',
      1 => 'field_care_address',
      2 => 'field_care_name',
      3 => 'field_care_dob',
      4 => 'field_care_email',
      5 => 'field_care_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-member field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member|commerce_line_item|membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_member|commerce_line_item|membership|form';
  $field_group->group_name = 'group_member';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Members Details',
    'weight' => '10',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
      2 => 'field_care_dob',
      3 => 'field_care_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Members Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-member field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_member|commerce_line_item|membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment_option|commerce_line_item|membership_renewal|form';
  $field_group->group_name = 'group_payment_option';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership_renewal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment option',
    'weight' => '9',
    'children' => array(
      0 => 'field_payment_option',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment option',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment-option field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment_option|commerce_line_item|membership_renewal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|commerce_line_item|affiliate_membership_self|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '23',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment|commerce_line_item|affiliate_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|commerce_line_item|affiliate_membership|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'affiliate_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '22',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment|commerce_line_item|affiliate_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|commerce_line_item|family_membership_self|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '25',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment|commerce_line_item|family_membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|commerce_line_item|family_membership|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'family_membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '11',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment|commerce_line_item|family_membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|commerce_line_item|membership_self|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership_self';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '28',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_payment|commerce_line_item|membership_self|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p|commerce_line_item|membership|form';
  $field_group->group_name = 'group_p';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'membership';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Options',
    'weight' => '21',
    'children' => array(
      0 => 'field_payment_option',
      1 => 'field_promotional_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-p field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_p|commerce_line_item|membership|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shipping_details|commerce_customer_profile|shipping|default';
  $field_group->group_name = 'group_shipping_details';
  $field_group->entity_type = 'commerce_customer_profile';
  $field_group->bundle = 'shipping';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_care_address',
      1 => 'field_care_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shipping-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_shipping_details|commerce_customer_profile|shipping|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Family Members');
  t('Club Code');
  t('Gift');
  t('Gift Options');
  t('Group Details');
  t('Main Member Details');
  t('Members Details');
  t('Payment Options');
  t('Payment option');
  t('Your Details');

  return $field_groups;
}
