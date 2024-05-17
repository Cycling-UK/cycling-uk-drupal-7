<?php
/**
 * @file
 * shop_courses.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function shop_courses_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_course_booking-comment_body'.
  $field_instances['comment-comment_node_course_booking-comment_body'] = array(
    'bundle' => 'comment_node_course_booking',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_course_calendar-comment_body'.
  $field_instances['comment-comment_node_course_calendar-comment_body'] = array(
    'bundle' => 'comment_node_course_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_course_details-comment_body'.
  $field_instances['comment-comment_node_course_details-comment_body'] = array(
    'bundle' => 'comment_node_course_details',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-commerce_display_path'.
  $field_instances['commerce_line_item-course-commerce_display_path'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-commerce_product'.
  $field_instances['commerce_line_item-course-commerce_product'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'conditions' => array(),
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'conditions' => array(),
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'conditions' => array(),
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-course-commerce_product_giftaid'.
  $field_instances['commerce_line_item-course-commerce_product_giftaid'] = array(
    'bundle' => 'course',
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
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
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

  // Exported field_instance: 'commerce_line_item-course-commerce_total'.
  $field_instances['commerce_line_item-course-commerce_total'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 3,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-commerce_unit_price'.
  $field_instances['commerce_line_item-course-commerce_unit_price'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
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

  // Exported field_instance: 'commerce_line_item-course-field_booking_code'.
  $field_instances['commerce_line_item-course-field_booking_code'] = array(
    'bundle' => 'course',
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_booking_code',
    'label' => 'Booking code',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_care_address'.
  $field_instances['commerce_line_item-course-field_care_address'] = array(
    'bundle' => 'course',
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
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_address_formatter',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_address_formatter',
        'weight' => 7,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_address_oneline_formatter',
        'weight' => 4,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_care_email'.
  $field_instances['commerce_line_item-course-field_care_email'] = array(
    'bundle' => 'course',
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
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_email_formatter',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_email_formatter',
        'weight' => 8,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
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
        'display_type_field' => 1,
        'fixed_type' => 'EM',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'care_fields',
      'settings' => array(),
      'type' => 'care_email_widget',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_care_name'.
  $field_instances['commerce_line_item-course-field_care_name'] = array(
    'bundle' => 'course',
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
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_name_formatter',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_name_formatter',
        'weight' => 9,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_name_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_line_item',
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_care_telephone'.
  $field_instances['commerce_line_item-course-field_care_telephone'] = array(
    'bundle' => 'course',
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
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_telephone_formatter',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_telephone_formatter',
        'weight' => 10,
      ),
      'shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_course_details'.
  $field_instances['commerce_line_item-course-field_course_details'] = array(
    'bundle' => 'course',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
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
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_course_details',
    'label' => 'Course Details',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 1,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-course-field_dietary_requirements'.
  $field_instances['commerce_line_item-course-field_dietary_requirements'] = array(
    'bundle' => 'course',
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
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_reference_view_mode' => 'full',
          'use_content_language' => TRUE,
        ),
        'type' => 'ds_taxonomy_view_mode',
        'weight' => 13,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_dietary_requirements',
    'label' => 'Dietary Requirements',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => 'term_reference_1',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => 'term_reference',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-course-field_learning_difficulties'.
  $field_instances['commerce_line_item-course-field_learning_difficulties'] = array(
    'bundle' => 'course',
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
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_reference_view_mode' => 'full',
          'use_content_language' => TRUE,
        ),
        'type' => 'ds_taxonomy_view_mode',
        'weight' => 14,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_learning_difficulties',
    'label' => 'Learning Difficulties',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => 'term_reference_1',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => 'term_reference',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_medical_details'.
  $field_instances['commerce_line_item-course-field_medical_details'] = array(
    'bundle' => 'course',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => 'Add Another',
    'custom_remove' => 'Remove',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'customer' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_reference_view_mode' => 'full',
          'use_content_language' => 1,
        ),
        'type' => 'ds_taxonomy_view_mode',
        'weight' => 12,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_medical_details',
    'label' => 'Medical Details',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => 'term_reference_1',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => 'term_reference',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'commerce_line_item-course-field_membership_number'.
  $field_instances['commerce_line_item-course-field_membership_number'] = array(
    'bundle' => 'course',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'if applicable (required for members 10% discount on qualifying courses)',
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
        'type' => 'care_membership_number_formatter',
        'weight' => 18,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_membership_number',
    'label' => 'Membership Number',
    'required' => 0,
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
      'type' => 'care_membership_number_widget',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_next_of_kin'.
  $field_instances['commerce_line_item-course-field_next_of_kin'] = array(
    'bundle' => 'course',
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
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 11,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_next_of_kin',
    'label' => 'Next of Kin',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'commerce_line_item-course-field_notes'.
  $field_instances['commerce_line_item-course-field_notes'] = array(
    'bundle' => 'course',
    'commerce_cart_settings' => array(
      'field_access' => 1,
    ),
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional information you think would be helpful for Cycling UK to know.',
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
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'shopping_basket' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_line_item',
    'field_name' => 'field_notes',
    'label' => 'Notes',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'commerce_order-commerce_order-field_course_booking_terms'.
  $field_instances['commerce_order-commerce_order-field_course_booking_terms'] = array(
    'bundle' => 'commerce_order',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '<p>For more information see our <a href="/course-booking-terms" target="_blank">course booking terms and conditons page</a></p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_course_booking_terms',
    'label' => 'Course Booking Terms',
    'required' => 1,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'commerce_product-course-commerce_price'.
  $field_instances['commerce_product-course-commerce_price'] = array(
    'bundle' => 'course',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'commerce_line_item_administrator' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_customer' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_shopping_basket' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'commerce_pado' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inlinec',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 0,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 0,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'node_amp' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_child_page' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_diff_standard' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_kit' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_related' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_revision' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_index' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'conditions' => array(),
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'commerce_product-course-commerce_product_giftaid'.
  $field_instances['commerce_product-course-commerce_product_giftaid'] = array(
    'bundle' => 'course',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the product can have gift aid applied onto it.',
    'display' => array(
      'commerce_line_item_administrator' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_customer' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_shopping_basket' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_line_item_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'commerce_pado' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'node_amp' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_child_page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_kit' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_related' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_revision' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_rss' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_index' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'node_token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
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

  // Exported field_instance: 'commerce_product-course-field_member_rate'.
  $field_instances['commerce_product-course-field_member_rate'] = array(
    'bundle' => 'course',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Member Rate',
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
      'commerce_pado' => array(
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
    'field_name' => 'field_member_rate',
    'label' => 'Member Rate',
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
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_next_of_kin-field_care_name'.
  $field_instances['field_collection_item-field_next_of_kin-field_care_name'] = array(
    'bundle' => 'field_next_of_kin',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Name of the Next on Kin',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_next_of_kin-field_care_telephones'.
  $field_instances['field_collection_item-field_next_of_kin-field_care_telephones'] = array(
    'bundle' => 'field_next_of_kin',
    'custom_add_another' => 'Add another phone number',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Please enter at least 1 phone number in case of emergency for your next of kin.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'care_fields',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'care_telephone_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_care_telephones',
    'label' => 'Emergency Phone Number(s)',
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
      'type' => 'care_telephone_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_booking_code'.
  $field_instances['node-course_booking-field_booking_code'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_booking_code',
    'label' => 'Booking code',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_booking_option_number'.
  $field_instances['node-course_booking-field_booking_option_number'] = array(
    'bundle' => 'course_booking',
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
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_booking_option_number',
    'label' => 'Booking Option Number',
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
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_course_category'.
  $field_instances['node-course_booking-field_course_category'] = array(
    'bundle' => 'course_booking',
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
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_category',
    'label' => 'Course Category',
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
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_course_dates'.
  $field_instances['node-course_booking-field_course_dates'] = array(
    'bundle' => 'course_booking',
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
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_dates',
    'label' => 'Course dates',
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
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_course_price'.
  $field_instances['node-course_booking-field_course_price'] = array(
    'bundle' => 'course_booking',
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
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_price',
    'label' => 'Price (£) (inc VAT)',
    'required' => 0,
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
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_course_status'.
  $field_instances['node-course_booking-field_course_status'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_status',
    'label' => 'Course status',
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

  // Exported field_instance: 'node-course_booking-field_course_type_link'.
  $field_instances['node-course_booking-field_course_type_link'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_type_link',
    'label' => 'Course Type',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_course_venue_link'.
  $field_instances['node-course_booking-field_course_venue_link'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_venue_link',
    'label' => 'Course Venue',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_event_number'.
  $field_instances['node-course_booking-field_event_number'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_number',
    'label' => 'Event Number',
    'required' => 0,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_places_left'.
  $field_instances['node-course_booking-field_places_left'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_places_left',
    'label' => 'Places Left',
    'required' => 0,
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-course_booking-field_products'.
  $field_instances['node-course_booking-field_products'] = array(
    'bundle' => 'course_booking',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'conditions' => array(
            0 => array(
              'condition' => 'rules_event',
              'configuration' => array(
                'rule' => 'rules_course_bookings_hide_booking_code',
              ),
            ),
          ),
          'default_quantity' => 1,
          'line_item_type' => 'course',
          'show_quantity' => 0,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_products',
    'label' => 'Product(s)',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => 1,
      'referenceable_types' => array(
        'course' => 'course',
        'donation' => 0,
        'download' => 0,
        'kit' => 0,
        'membership' => 0,
        'product' => 0,
      ),
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

  // Exported field_instance: 'node-course_calendar-field_course_product'.
  $field_instances['node-course_calendar-field_course_product'] = array(
    'bundle' => 'course_calendar',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'product_id' => 246,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'conditions' => array(),
          'default_quantity' => 1,
          'line_item_type' => 'course',
          'show_quantity' => 0,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_product',
    'label' => 'Product',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'field_injection' => 1,
      'referenceable_types' => array(
        'course' => 'course',
        'donation' => 0,
        'download' => 0,
        'kit' => 0,
        'membership' => 0,
        'product' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>For more information see our <a href="/course-booking-terms" target="_blank">course booking terms and conditons page</a></p>');
  t('Additional information you think would be helpful for Cycling UK to know.');
  t('Address');
  t('Booking Option Number');
  t('Booking code');
  t('Comment');
  t('Course Booking Terms');
  t('Course Category');
  t('Course Details');
  t('Course Type');
  t('Course Venue');
  t('Course dates');
  t('Course status');
  t('Dietary Requirements');
  t('Display path');
  t('Email');
  t('Emergency Phone Number(s)');
  t('Event Number');
  t('Giftaid');
  t('Learning Difficulties');
  t('Medical Details');
  t('Member Rate');
  t('Membership Number');
  t('Name');
  t('Name of the Next on Kin');
  t('Next of Kin');
  t('Notes');
  t('Places Left');
  t('Please enter at least 1 phone number in case of emergency for your next of kin.');
  t('Price');
  t('Price (£) (inc VAT)');
  t('Product');
  t('Product(s)');
  t('Telephone');
  t('Total');
  t('Unit price');
  t('Whether the product can have gift aid applied onto it.');
  t('if applicable (required for members 10% discount on qualifying courses)');

  return $field_instances;
}
