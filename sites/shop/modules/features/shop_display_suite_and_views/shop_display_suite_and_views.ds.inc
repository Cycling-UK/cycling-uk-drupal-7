<?php
/**
 * @file
 * shop_display_suite_and_views.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function shop_display_suite_and_views_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_customer_profile|billing|default';
  $ds_layout->entity_type = 'commerce_customer_profile';
  $ds_layout->bundle = 'billing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_billing_details',
        1 => 'field_care_name',
        2 => 'field_care_address',
      ),
    ),
    'fields' => array(
      'group_billing_details' => 'ds_content',
      'field_care_name' => 'ds_content',
      'field_care_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_customer_profile|billing|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|affiliate_membership_self|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'affiliate_membership_self';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_care_name',
        1 => 'group_member_details',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_care_telephone',
        5 => 'field_payment_option',
        6 => 'field_promotional_code',
      ),
    ),
    'fields' => array(
      'field_care_name' => 'ds_content',
      'group_member_details' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_care_telephone' => 'ds_content',
      'field_payment_option' => 'ds_content',
      'field_promotional_code' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|affiliate_membership_self|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|affiliate_membership|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'affiliate_membership';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_member_details',
        1 => 'field_care_name',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_gift',
        5 => 'field_gift_occasion',
        6 => 'field_send_starter_pack',
        7 => 'field_gift_start_date',
        8 => 'field_payment_option',
        9 => 'field_promotional_code',
      ),
    ),
    'fields' => array(
      'group_member_details' => 'ds_content',
      'field_care_name' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_gift' => 'ds_content',
      'field_gift_occasion' => 'ds_content',
      'field_send_starter_pack' => 'ds_content',
      'field_gift_start_date' => 'ds_content',
      'field_payment_option' => 'ds_content',
      'field_promotional_code' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|affiliate_membership|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|commerce_donate|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'commerce_donate';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_donation_details',
        1 => 'field_payment_option',
      ),
    ),
    'fields' => array(
      'group_donation_details' => 'ds_content',
      'field_payment_option' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|commerce_donate|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|family_membership_self|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'family_membership_self';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_care_name',
        1 => 'field_care_address',
        2 => 'field_care_email',
        3 => 'field_care_telephone',
        4 => 'field_family_members',
        5 => 'field_payment_option',
        6 => 'commerce_product_giftaid',
      ),
    ),
    'fields' => array(
      'field_care_name' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_care_telephone' => 'ds_content',
      'field_family_members' => 'ds_content',
      'field_payment_option' => 'ds_content',
      'commerce_product_giftaid' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|family_membership_self|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|family_membership|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'family_membership';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_care_name',
        1 => 'group_family_members_details',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_family_members',
        5 => 'field_gift',
        6 => 'field_gift_occasion',
        7 => 'field_send_starter_pack',
        8 => 'field_gift_start_date',
        9 => 'field_payment_option',
        10 => 'field_promotional_code',
      ),
    ),
    'fields' => array(
      'field_care_name' => 'ds_content',
      'group_family_members_details' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_family_members' => 'ds_content',
      'field_gift' => 'ds_content',
      'field_gift_occasion' => 'ds_content',
      'field_send_starter_pack' => 'ds_content',
      'field_gift_start_date' => 'ds_content',
      'field_payment_option' => 'ds_content',
      'field_promotional_code' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|family_membership|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|gift_membership|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'gift_membership';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_gift_details',
        1 => 'group_giver_details',
        2 => 'field_single_name',
        3 => 'field_care_address_selector',
        4 => 'field_name',
        5 => 'field_single_address',
      ),
    ),
    'fields' => array(
      'group_gift_details' => 'ds_content',
      'group_giver_details' => 'ds_content',
      'field_single_name' => 'ds_content',
      'field_care_address_selector' => 'ds_content',
      'field_name' => 'ds_content',
      'field_single_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|gift_membership|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|group_membership|default';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'group_membership';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_member_details',
        1 => 'field_group_name',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_care_telephone',
      ),
    ),
    'fields' => array(
      'group_member_details' => 'ds_content',
      'field_group_name' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_care_telephone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|group_membership|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|group_membership|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'group_membership';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_member_details',
        1 => 'field_group_name',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_care_telephone',
      ),
    ),
    'fields' => array(
      'group_member_details' => 'ds_content',
      'field_group_name' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_care_telephone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|group_membership|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|lejog_certificate|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'lejog_certificate';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_certificate_name',
        1 => 'field_certificate_starting_place',
        2 => 'field_certificate_finish',
        3 => 'field_certificate_start_date',
      ),
    ),
    'fields' => array(
      'field_certificate_name' => 'ds_content',
      'field_certificate_starting_place' => 'ds_content',
      'field_certificate_finish' => 'ds_content',
      'field_certificate_start_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|lejog_certificate|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|membership_renewal|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'membership_renewal';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_member_details',
        1 => 'field_membership_number',
        2 => 'field_membership',
        3 => 'field_payment_option',
      ),
    ),
    'fields' => array(
      'group_member_details' => 'ds_content',
      'field_membership_number' => 'ds_content',
      'field_membership' => 'ds_content',
      'field_payment_option' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|membership_renewal|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|membership_self|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'membership_self';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_care_name',
        1 => 'group_member_details',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_care_telephone',
        5 => 'field_payment_option',
        6 => 'field_promotional_code',
        7 => 'commerce_product_giftaid',
      ),
    ),
    'fields' => array(
      'field_care_name' => 'ds_content',
      'group_member_details' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_care_telephone' => 'ds_content',
      'field_payment_option' => 'ds_content',
      'field_promotional_code' => 'ds_content',
      'commerce_product_giftaid' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|membership_self|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|membership|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'membership';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_care_name',
        1 => 'group_member_details',
        2 => 'field_care_address',
        3 => 'field_care_email',
        4 => 'field_gift',
        5 => 'field_gift_occasion',
        6 => 'field_send_starter_pack',
        7 => 'field_gift_start_date',
        8 => 'field_payment_option',
      ),
    ),
    'fields' => array(
      'field_care_name' => 'ds_content',
      'group_member_details' => 'ds_content',
      'field_care_address' => 'ds_content',
      'field_care_email' => 'ds_content',
      'field_gift' => 'ds_content',
      'field_gift_occasion' => 'ds_content',
      'field_send_starter_pack' => 'ds_content',
      'field_gift_start_date' => 'ds_content',
      'field_payment_option' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|membership|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|product|shopping_basket';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'shopping_basket';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['commerce_line_item|product|shopping_basket'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'topright' => array(
        0 => 'product:commerce_price',
        1 => 'body',
        2 => 'field_products',
      ),
      'topleft' => array(
        3 => 'field_image',
      ),
      'bottom' => array(
        4 => 'product:commerce_stock',
      ),
    ),
    'fields' => array(
      'product:commerce_price' => 'topright',
      'body' => 'topright',
      'field_products' => 'topright',
      'field_image' => 'topleft',
      'product:commerce_stock' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'topleft' => 'div',
      'topright' => 'div',
      'central' => 'div',
      'bottomleft' => 'div',
      'bottomright' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|product_display|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function shop_display_suite_and_views_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'shopping_basket';
  $ds_view_mode->label = 'Shopping Basket';
  $ds_view_mode->entities = array(
    'commerce_line_item' => 'commerce_line_item',
  );
  $export['shopping_basket'] = $ds_view_mode;

  return $export;
}
