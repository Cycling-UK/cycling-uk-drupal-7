<?php
/**
 * @file
 * shop_commerce.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function shop_commerce_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_customer_profile-billing-field_care_address'.
  $field_instances['commerce_customer_profile-billing-field_care_address'] = array(
    'bundle' => 'billing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_minimal_formatter',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_care_address',
    'label' => 'Billing Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-billing-field_care_name'.
  $field_instances['commerce_customer_profile-billing-field_care_name'] = array(
    'bundle' => 'billing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-billing-field_membership_number'.
  $field_instances['commerce_customer_profile-billing-field_membership_number'] = array(
    'bundle' => 'billing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_membership_number',
    'label' => 'Membership number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-shipping-field_care_address'.
  $field_instances['commerce_customer_profile-shipping-field_care_address'] = array(
    'bundle' => 'shipping',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_care_address',
    'label' => 'Shipping Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'commerce_customer_profile-shipping-field_care_name'.
  $field_instances['commerce_customer_profile-shipping-field_care_name'] = array(
    'bundle' => 'shipping',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-commerce_display_path'.
  $field_instances['commerce_line_item-affiliate_membership-commerce_display_path'] = array(
    'bundle' => 'affiliate_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-commerce_product'.
  $field_instances['commerce_line_item-affiliate_membership-commerce_product'] = array(
    'bundle' => 'affiliate_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-commerce_product_giftaid'.
  $field_instances['commerce_line_item-affiliate_membership-commerce_product_giftaid'] = array(
    'bundle' => 'affiliate_membership',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-commerce_total'.
  $field_instances['commerce_line_item-affiliate_membership-commerce_total'] = array(
    'bundle' => 'affiliate_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-commerce_unit_price'.
  $field_instances['commerce_line_item-affiliate_membership-commerce_unit_price'] = array(
    'bundle' => 'affiliate_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_affiliate_club_code'.
  $field_instances['commerce_line_item-affiliate_membership-field_affiliate_club_code'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_affiliate_club_code',
    'label' => 'Affiliate Club Code',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_care_address'.
  $field_instances['commerce_line_item-affiliate_membership-field_care_address'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_formatter',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => FALSE,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_care_dob'.
  $field_instances['commerce_line_item-affiliate_membership-field_care_dob'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 11,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '-40 years',
        'default_date_sets' => 'year',
      ),
      'input_options' => array(
        'default_from_current_user' => 0,
        'earliest_date' => '-110 years',
        'latest_date' => '-16 years',
        'readonly_if_known' => NULL,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_care_email'.
  $field_instances['commerce_line_item-affiliate_membership-field_care_email'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_type_field' => TRUE,
      'fixed_type' => NULL,
      'input_options' => array(
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_care_name'.
  $field_instances['commerce_line_item-affiliate_membership-field_care_name'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 23,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_gift'.
  $field_instances['commerce_line_item-affiliate_membership-field_gift'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift',
    'label' => 'Gift',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_gift_message'.
  $field_instances['commerce_line_item-affiliate_membership-field_gift_message'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_message',
    'label' => 'Gift Message',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_gift_occasion'.
  $field_instances['commerce_line_item-affiliate_membership-field_gift_occasion'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_occasion',
    'label' => 'Gift Occasion',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_gift_start_date'.
  $field_instances['commerce_line_item-affiliate_membership-field_gift_start_date'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_start_date',
    'label' => 'Membership Start Date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_payment_option'.
  $field_instances['commerce_line_item-affiliate_membership-field_payment_option'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_promotional_code'.
  $field_instances['commerce_line_item-affiliate_membership-field_promotional_code'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership-field_send_starter_pack'.
  $field_instances['commerce_line_item-affiliate_membership-field_send_starter_pack'] = array(
    'bundle' => 'affiliate_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'giver',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_send_starter_pack',
    'label' => 'Send Starter Pack',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-commerce_display_path'.
  $field_instances['commerce_line_item-affiliate_membership_self-commerce_display_path'] = array(
    'bundle' => 'affiliate_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-commerce_product'.
  $field_instances['commerce_line_item-affiliate_membership_self-commerce_product'] = array(
    'bundle' => 'affiliate_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-commerce_product_giftaid'.
  $field_instances['commerce_line_item-affiliate_membership_self-commerce_product_giftaid'] = array(
    'bundle' => 'affiliate_membership_self',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-commerce_total'.
  $field_instances['commerce_line_item-affiliate_membership_self-commerce_total'] = array(
    'bundle' => 'affiliate_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-commerce_unit_price'.
  $field_instances['commerce_line_item-affiliate_membership_self-commerce_unit_price'] = array(
    'bundle' => 'affiliate_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_affiliate_club_code'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_affiliate_club_code'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_affiliate_club_code',
    'label' => 'Affiliate Club Code',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_care_address'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_care_address'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_formatter',
        'weight' => 9,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'postcodeanywhere' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_care_dob'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_care_dob'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '-40 years',
        'default_date_sets' => 'year',
      ),
      'input_options' => array(
        'default_from_current_user' => 1,
        'earliest_date' => '-110 years',
        'latest_date' => '-16 years',
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_care_email'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_care_email'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 11,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_care_name'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_care_name'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_care_telephone'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_care_telephone'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 12,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_telephone_widget',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_membership_number'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_membership_number'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 0,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership_number',
    'label' => 'Membership number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_payment_option'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_payment_option'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-affiliate_membership_self-field_promotional_code'.
  $field_instances['commerce_line_item-affiliate_membership_self-field_promotional_code'] = array(
    'bundle' => 'affiliate_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-commerce_display_path'.
  $field_instances['commerce_line_item-family_membership-commerce_display_path'] = array(
    'bundle' => 'family_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-commerce_product'.
  $field_instances['commerce_line_item-family_membership-commerce_product'] = array(
    'bundle' => 'family_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-commerce_product_giftaid'.
  $field_instances['commerce_line_item-family_membership-commerce_product_giftaid'] = array(
    'bundle' => 'family_membership',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-commerce_total'.
  $field_instances['commerce_line_item-family_membership-commerce_total'] = array(
    'bundle' => 'family_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-commerce_unit_price'.
  $field_instances['commerce_line_item-family_membership-commerce_unit_price'] = array(
    'bundle' => 'family_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-cyclinguk_commerce_family_names'.
  $field_instances['commerce_line_item-family_membership-cyclinguk_commerce_family_names'] = array(
    'bundle' => 'family_membership',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'cyclinguk_commerce_family_names',
    'label' => 'Family names',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_care_address'.
  $field_instances['commerce_line_item-family_membership-field_care_address'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 2,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_care_dob'.
  $field_instances['commerce_line_item-family_membership-field_care_dob'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 3,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '-40 years',
        'default_date_sets' => 'year',
      ),
      'input_options' => array(
        'default_from_current_user' => 0,
        'earliest_date' => '-110 years',
        'latest_date' => 'now',
        'readonly_if_known' => NULL,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_care_email'.
  $field_instances['commerce_line_item-family_membership-field_care_email'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 4,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_care_name'.
  $field_instances['commerce_line_item-family_membership-field_care_name'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 27,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_family_members'.
  $field_instances['commerce_line_item-family_membership-field_family_members'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => 'Add another person',
    'custom_remove' => 'Remove this person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_family_members',
    'label' => 'Family Members',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'commerce_line_item-family_membership-field_gift'.
  $field_instances['commerce_line_item-family_membership-field_gift'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift',
    'label' => 'Gift',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_gift_message'.
  $field_instances['commerce_line_item-family_membership-field_gift_message'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_message',
    'label' => 'Gift Message',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_gift_occasion'.
  $field_instances['commerce_line_item-family_membership-field_gift_occasion'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_occasion',
    'label' => 'Gift Occasion',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_gift_start_date'.
  $field_instances['commerce_line_item-family_membership-field_gift_start_date'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_start_date',
    'label' => 'Start Date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_payment_option'.
  $field_instances['commerce_line_item-family_membership-field_payment_option'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_promotional_code'.
  $field_instances['commerce_line_item-family_membership-field_promotional_code'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership-field_send_starter_pack'.
  $field_instances['commerce_line_item-family_membership-field_send_starter_pack'] = array(
    'bundle' => 'family_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'giver',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_send_starter_pack',
    'label' => 'Send Starter Pack',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-commerce_display_path'.
  $field_instances['commerce_line_item-family_membership_self-commerce_display_path'] = array(
    'bundle' => 'family_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-commerce_product'.
  $field_instances['commerce_line_item-family_membership_self-commerce_product'] = array(
    'bundle' => 'family_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-commerce_product_giftaid'.
  $field_instances['commerce_line_item-family_membership_self-commerce_product_giftaid'] = array(
    'bundle' => 'family_membership_self',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-commerce_total'.
  $field_instances['commerce_line_item-family_membership_self-commerce_total'] = array(
    'bundle' => 'family_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-commerce_unit_price'.
  $field_instances['commerce_line_item-family_membership_self-commerce_unit_price'] = array(
    'bundle' => 'family_membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_care_address'.
  $field_instances['commerce_line_item-family_membership_self-field_care_address'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 2,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_care_dob'.
  $field_instances['commerce_line_item-family_membership_self-field_care_dob'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 3,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'DoB',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '',
        'default_date_sets' => 'year',
      ),
      'input_options' => array(
        'default_from_current_user' => 1,
        'earliest_date' => '-110 years',
        'latest_date' => '-16 years',
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_care_email'.
  $field_instances['commerce_line_item-family_membership_self-field_care_email'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 4,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_care_name'.
  $field_instances['commerce_line_item-family_membership_self-field_care_name'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_care_telephone'.
  $field_instances['commerce_line_item-family_membership_self-field_care_telephone'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_telephone_widget',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_family_members'.
  $field_instances['commerce_line_item-family_membership_self-field_family_members'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => 'Add another person',
    'custom_remove' => 'Remove this person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_family_members',
    'label' => 'Family Members',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_membership_number'.
  $field_instances['commerce_line_item-family_membership_self-field_membership_number'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 0,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership_number',
    'label' => 'Membership number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_payment_option'.
  $field_instances['commerce_line_item-family_membership_self-field_payment_option'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-family_membership_self-field_promotional_code'.
  $field_instances['commerce_line_item-family_membership_self-field_promotional_code'] = array(
    'bundle' => 'family_membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-commerce_display_path'.
  $field_instances['commerce_line_item-group_membership-commerce_display_path'] = array(
    'bundle' => 'group_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-commerce_product'.
  $field_instances['commerce_line_item-group_membership-commerce_product'] = array(
    'bundle' => 'group_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-commerce_product_giftaid'.
  $field_instances['commerce_line_item-group_membership-commerce_product_giftaid'] = array(
    'bundle' => 'group_membership',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-commerce_total'.
  $field_instances['commerce_line_item-group_membership-commerce_total'] = array(
    'bundle' => 'group_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-commerce_unit_price'.
  $field_instances['commerce_line_item-group_membership-commerce_unit_price'] = array(
    'bundle' => 'group_membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-field_care_address'.
  $field_instances['commerce_line_item-group_membership-field_care_address'] = array(
    'bundle' => 'group_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 2,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => FALSE,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-field_care_email'.
  $field_instances['commerce_line_item-group_membership-field_care_email'] = array(
    'bundle' => 'group_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 3,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_type_field' => TRUE,
      'fixed_type' => NULL,
      'input_options' => array(
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-field_care_telephone'.
  $field_instances['commerce_line_item-group_membership-field_care_telephone'] = array(
    'bundle' => 'group_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => 'Add another number',
    'custom_remove' => 'Remove this number',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 4,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => FALSE,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_telephone_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-group_membership-field_group_name'.
  $field_instances['commerce_line_item-group_membership-field_group_name'] = array(
    'bundle' => 'group_membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_group_name',
    'label' => 'Group Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-commerce_display_path'.
  $field_instances['commerce_line_item-lejog_certificate-commerce_display_path'] = array(
    'bundle' => 'lejog_certificate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-commerce_product'.
  $field_instances['commerce_line_item-lejog_certificate-commerce_product'] = array(
    'bundle' => 'lejog_certificate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-commerce_product_giftaid'.
  $field_instances['commerce_line_item-lejog_certificate-commerce_product_giftaid'] = array(
    'bundle' => 'lejog_certificate',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-commerce_total'.
  $field_instances['commerce_line_item-lejog_certificate-commerce_total'] = array(
    'bundle' => 'lejog_certificate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-commerce_unit_price'.
  $field_instances['commerce_line_item-lejog_certificate-commerce_unit_price'] = array(
    'bundle' => 'lejog_certificate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-field_certificate_finish'.
  $field_instances['commerce_line_item-lejog_certificate-field_certificate_finish'] = array(
    'bundle' => 'lejog_certificate',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'default_value' => array(
      0 => array(
        'value' => 'John O\'Groats',
      ),
    ),
    'deleted' => 0,
    'description' => 'The place you finished the ride (e.g. John O\'Groats).',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_certificate_finish',
    'label' => 'Finishing Place',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-field_certificate_name'.
  $field_instances['commerce_line_item-lejog_certificate-field_certificate_name'] = array(
    'bundle' => 'lejog_certificate',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name to appear on the certificate.',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_certificate_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-field_certificate_start_date'.
  $field_instances['commerce_line_item-lejog_certificate-field_certificate_start_date'] = array(
    'bundle' => 'lejog_certificate',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'The date you started your ride.',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_certificate_start_date',
    'label' => 'Ride start date',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-1 week',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-lejog_certificate-field_certificate_starting_place'.
  $field_instances['commerce_line_item-lejog_certificate-field_certificate_starting_place'] = array(
    'bundle' => 'lejog_certificate',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'default_value' => array(
      0 => array(
        'value' => 'Land\'s End',
      ),
    ),
    'deleted' => 0,
    'description' => 'The place you started your ride (e.g. Land\'s End).',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_certificate_starting_place',
    'label' => 'Starting Place',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-commerce_display_path'.
  $field_instances['commerce_line_item-membership-commerce_display_path'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-commerce_product'.
  $field_instances['commerce_line_item-membership-commerce_product'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 3,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-commerce_product_giftaid'.
  $field_instances['commerce_line_item-membership-commerce_product_giftaid'] = array(
    'bundle' => 'membership',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-commerce_total'.
  $field_instances['commerce_line_item-membership-commerce_total'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-commerce_unit_price'.
  $field_instances['commerce_line_item-membership-commerce_unit_price'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-cyclinguk_membership_number'.
  $field_instances['commerce_line_item-membership-cyclinguk_membership_number'] = array(
    'bundle' => 'membership',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 2,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'cyclinguk_membership_number',
    'label' => 'Membership Number',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => FALSE,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_care_address'.
  $field_instances['commerce_line_item-membership-field_care_address'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_formatter',
        'weight' => 26,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-field_care_dob'.
  $field_instances['commerce_line_item-membership-field_care_dob'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 15,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '',
        'default_date_sets' => NULL,
      ),
      'end_year_offset' => 0,
      'input_options' => array(
        'earliest_date' => '-100 years',
        'latest_date' => 'now',
        'readonly_if_known' => NULL,
      ),
      'start_year_offset' => -100,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-field_care_email'.
  $field_instances['commerce_line_item-membership-field_care_email'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 27,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-field_care_name'.
  $field_instances['commerce_line_item-membership-field_care_name'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 29,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'commerce_line_item-membership-field_gift'.
  $field_instances['commerce_line_item-membership-field_gift'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift',
    'label' => 'Gift',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_gift_message'.
  $field_instances['commerce_line_item-membership-field_gift_message'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_message',
    'label' => 'Gift Message',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_gift_occasion'.
  $field_instances['commerce_line_item-membership-field_gift_occasion'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_occasion',
    'label' => 'Gift Occasion',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_gift_start_date'.
  $field_instances['commerce_line_item-membership-field_gift_start_date'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_relative' => 0,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_gift_start_date',
    'label' => 'Membership Start Date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_payment_option'.
  $field_instances['commerce_line_item-membership-field_payment_option'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'DDA',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_promotional_code'.
  $field_instances['commerce_line_item-membership-field_promotional_code'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership-field_send_starter_pack'.
  $field_instances['commerce_line_item-membership-field_send_starter_pack'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'giver',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_send_starter_pack',
    'label' => 'Send Starter Pack',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-commerce_display_path'.
  $field_instances['commerce_line_item-membership_renewal-commerce_display_path'] = array(
    'bundle' => 'membership_renewal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-commerce_product'.
  $field_instances['commerce_line_item-membership_renewal-commerce_product'] = array(
    'bundle' => 'membership_renewal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-commerce_product_giftaid'.
  $field_instances['commerce_line_item-membership_renewal-commerce_product_giftaid'] = array(
    'bundle' => 'membership_renewal',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-commerce_total'.
  $field_instances['commerce_line_item-membership_renewal-commerce_total'] = array(
    'bundle' => 'membership_renewal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-commerce_unit_price'.
  $field_instances['commerce_line_item-membership_renewal-commerce_unit_price'] = array(
    'bundle' => 'membership_renewal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-field_membership'.
  $field_instances['commerce_line_item-membership_renewal-field_membership'] = array(
    'bundle' => 'membership_renewal',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_memberships_formatter',
        'weight' => 8,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_memberships_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership',
    'label' => 'Membership',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_memberships_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-field_membership_number'.
  $field_instances['commerce_line_item-membership_renewal-field_membership_number'] = array(
    'bundle' => 'membership_renewal',
    'commerce_cart_settings' => array(
      'field_access' => 0,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 9,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership_number',
    'label' => 'Membership number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => FALSE,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_renewal-field_payment_option'.
  $field_instances['commerce_line_item-membership_renewal-field_payment_option'] = array(
    'bundle' => 'membership_renewal',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'CCA',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-commerce_display_path'.
  $field_instances['commerce_line_item-membership_self-commerce_display_path'] = array(
    'bundle' => 'membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_display_path',
    'label' => 'Display path',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-commerce_product'.
  $field_instances['commerce_line_item-membership_self-commerce_product'] = array(
    'bundle' => 'membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product',
    'label' => 'Product',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_product_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'size' => 60,
      ),
      'type' => 'commerce_product_reference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-commerce_product_giftaid'.
  $field_instances['commerce_line_item-membership_self-commerce_product_giftaid'] = array(
    'bundle' => 'membership_self',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-commerce_total'.
  $field_instances['commerce_line_item-membership_self-commerce_total'] = array(
    'bundle' => 'membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_total',
    'label' => 'Total',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-commerce_unit_price'.
  $field_instances['commerce_line_item-membership_self-commerce_unit_price'] = array(
    'bundle' => 'membership_self',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'commerce_unit_price',
    'label' => 'Unit price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_care_address'.
  $field_instances['commerce_line_item-membership_self-field_care_address'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_formatter',
        'weight' => 19,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_address_oneline_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'postcodeanywhere' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_address_select_widget',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_care_dob'.
  $field_instances['commerce_line_item-membership_self-field_care_dob'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_date_formatter',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '-40 years',
        'default_date_sets' => 'year',
      ),
      'input_options' => array(
        'default_from_current_user' => 1,
        'earliest_date' => '-110 years',
        'latest_date' => 'now',
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_care_email'.
  $field_instances['commerce_line_item-membership_self-field_care_email'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 20,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_care_name'.
  $field_instances['commerce_line_item-membership_self-field_care_name'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 23,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
        'readonly_if_known' => 'yes',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_care_telephone'.
  $field_instances['commerce_line_item-membership_self-field_care_telephone'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 21,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_telephone_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_care_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_telephone_widget',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_membership_number'.
  $field_instances['commerce_line_item-membership_self-field_membership_number'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 0,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_membership_number_formatter',
        'weight' => 22,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership_number',
    'label' => 'Membership number',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_membership_number_widget',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_payment_option'.
  $field_instances['commerce_line_item-membership_self-field_payment_option'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_payment_option',
    'label' => 'Payment option',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-membership_self-field_promotional_code'.
  $field_instances['commerce_line_item-membership_self-field_promotional_code'] = array(
    'bundle' => 'membership_self',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'shopping_basket' => array(
        'label' => 'inlinec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_promotional_code',
    'label' => 'Promotional Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'code' => 'code',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'code' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'commerce_product-download-commerce_price'.
  $field_instances['commerce_product-download-commerce_price'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_index' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-download-commerce_product_giftaid'.
  $field_instances['commerce_product-download-commerce_product_giftaid'] = array(
    'bundle' => 'download',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'line_item' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_rss' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_index' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'commerce_product-membership-commerce_price'.
  $field_instances['commerce_product-membership-commerce_price'] = array(
    'bundle' => 'membership',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'commerce_price_components',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'commerce_price_components' => array(
            'base_price' => 1,
            'direct_debit' => 0,
            'discount' => 0,
            'fee' => 0,
            'flat_rate_standard_shipping' => 0,
            'shipping' => 0,
            'tax|vat' => 0,
            'tax|zero_rated' => 0,
          ),
        ),
        'type' => 'commerce_price_components',
        'weight' => 2,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 10,
      ),
      'node_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_index' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-membership-commerce_product_giftaid'.
  $field_instances['commerce_product-membership-commerce_product_giftaid'] = array(
    'bundle' => 'membership',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'line_item' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_rss' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_index' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-membership-field_direct_debit_allowed'.
  $field_instances['commerce_product-membership-field_direct_debit_allowed'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Direct Debit allowed',
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_direct_debit_allowed',
    'label' => 'Direct Debit allowed',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'commerce_product-membership-field_maximum_age'.
  $field_instances['commerce_product-membership-field_maximum_age'] = array(
    'bundle' => 'membership',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This membership is available to people up to and including this age at the start date.',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_maximum_age',
    'label' => 'Maximum age',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-membership-field_membership_code'.
  $field_instances['commerce_product-membership-field_membership_code'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_membership_code',
    'label' => 'Membership code',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-membership-field_membership_type'.
  $field_instances['commerce_product-membership-field_membership_type'] = array(
    'bundle' => 'membership',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_membership_type',
    'label' => 'Membership Type',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'commerce_product-membership-field_minimum_age'.
  $field_instances['commerce_product-membership-field_minimum_age'] = array(
    'bundle' => 'membership',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This membership is available to people of at least this age on the start date.',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_minimum_age',
    'label' => 'Minimum age',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-membership-field_payment_frequency'.
  $field_instances['commerce_product-membership-field_payment_frequency'] = array(
    'bundle' => 'membership',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Payment frequency',
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'tid' => 8207,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_payment_frequency',
    'label' => 'Payment frequency',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'commerce_product-membership-field_terms'.
  $field_instances['commerce_product-membership-field_terms'] = array(
    'bundle' => 'membership',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_terms',
    'label' => 'Terms',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'commerce_product-product-commerce_price'.
  $field_instances['commerce_product-product-commerce_price'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_index' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-product-commerce_product_giftaid'.
  $field_instances['commerce_product-product-commerce_product_giftaid'] = array(
    'bundle' => 'product',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'commerce_line_item_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'line_item' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_rss' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_index' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'commerce_product_giftaid',
    'label' => 'Giftaid',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-product-field_care_product_rate'.
  $field_instances['commerce_product-product-field_care_product_rate'] = array(
    'bundle' => 'product',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_pado' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'field_care_product_rate',
    'label' => 'CARE Product-Rate',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_family_members-field_care_dob'.
  $field_instances['field_collection_item-field_family_members-field_care_dob'] = array(
    'bundle' => 'field_family_members',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_care_dob',
    'label' => 'DoB',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value_options' => array(
        'default_date' => '-10 years',
        'default_date_sets' => 'year',
      ),
      'end_year_offset' => 0,
      'input_options' => array(
        'earliest_date' => '-110 years',
        'latest_date' => 'now',
        'readonly_if_known' => 'no',
      ),
      'start_year_offset' => -100,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_date_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_family_members-field_care_email'.
  $field_instances['field_collection_item-field_family_members-field_care_email'] = array(
    'bundle' => 'field_family_members',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_email_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_care_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_type_field' => TRUE,
      'fixed_type' => NULL,
      'input_options' => array(
        'display_type_field' => 0,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_family_members-field_member_name'.
  $field_instances['field_collection_item-field_family_members-field_member_name'] = array(
    'bundle' => 'field_family_members',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_member_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'input_options' => array(
        'default_from_current_user' => 0,
        'readonly_if_known' => 'no',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_name_widget',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Affiliate Club Code');
  t('Billing Address');
  t('CARE Product-Rate');
  t('Date of Birth');
  t('Direct Debit allowed');
  t('Display path');
  t('DoB');
  t('Email');
  t('Family Members');
  t('Family names');
  t('Finishing Place');
  t('Gift');
  t('Gift Message');
  t('Gift Occasion');
  t('Giftaid');
  t('Group Name');
  t('Maximum age');
  t('Membership');
  t('Membership Number');
  t('Membership Start Date');
  t('Membership Type');
  t('Membership code');
  t('Membership number');
  t('Minimum age');
  t('Name');
  t('Payment frequency');
  t('Payment option');
  t('Price');
  t('Product');
  t('Promotional Code');
  t('Ride start date');
  t('Send Starter Pack');
  t('Shipping Address');
  t('Start Date');
  t('Starting Place');
  t('Telephone');
  t('Terms');
  t('The date you started your ride.');
  t('The name to appear on the certificate.');
  t('The place you finished the ride (e.g. John O\'Groats).');
  t('The place you started your ride (e.g. Land\'s End).');
  t('This membership is available to people of at least this age on the start date.');
  t('This membership is available to people up to and including this age at the start date.');
  t('Total');
  t('Unit price');
  t('Whether the product can have gift aid applied onto it.');

  return $field_instances;
}
