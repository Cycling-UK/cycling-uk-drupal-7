<?php

/**
 * Implements hook_views_data().
 */
function cyclinguk_commerce_views_data() {
  $common_care_boolean_settings = [
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'options' => ['type' => 'Yes/No'],
      'click sortable' => TRUE, // This is use by the table display plugin.
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
    ],
  ];
  $common_care_number_settings = [
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
      'settings' => ['separator' => ''],
    ],
    'argument' => [
      'handler' => 'views_handler_argument_numeric',
    ],
  ];
  $common_care_string_settings = [
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument',
    ],
  ];
  // Order data.
  $data['cyclinguk_commerce_order']['table']['group'] = t('CyclingUK Commerce');
  $data['cyclinguk_commerce_order']['table']['join'] = [
    'commerce_order' => [
      'left_field' => 'order_id',
      'field' => 'order_id',
    ],
  ];
  $data['cyclinguk_commerce_order']['completed'] = [
      'title' => t('Order CARE calls completed?'),
      'help' => t('Whether all data has been recorded in CARE.'),
    ] + $common_care_boolean_settings;
  $data['cyclinguk_commerce_order']['billing_ContactNumber'] = [
      'title' => t('Billing Contact Number'),
      'help' => t('The Billing contact’s CARE ContactNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_order']['billing_AddressNumber'] = [
      'title' => t('Billing Address Number'),
      'help' => t('The Billing contact’s CARE AddressNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_order']['gift_aid_declared'] = [
    'title' => t('Gift Aid declared?'),
    'help' => t('Whether Gift Aid has been recorded in CARE.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'options' => ['type' => 'Yes/No'],
    ],
  ];
  $data['cyclinguk_commerce_order']['subscription_saved'] = [
    'title' => t('Subscription saved?'),
    'help' => t('Whether subscription request has been recorded in CARE.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'options' => ['type' => 'Yes/No'],
    ],
  ];
  // Line Item data.
  $data['cyclinguk_commerce_line_item']['table']['group'] = t('CyclingUK Commerce');
  $data['cyclinguk_commerce_line_item']['table']['join'] = [
    'commerce_line_item' => [
      'left_field' => 'line_item_id',
      'field' => 'line_item_id',
    ],
  ];
  $data['cyclinguk_commerce_line_item']['completed'] = [
      'title' => t('Line item CARE calls completed?'),
      'help' => t('Whether all data has been recorded in CARE.'),
    ] + $common_care_boolean_settings;
  $data['cyclinguk_commerce_line_item']['member_ContactNumber'] = [
      'title' => t('Member Contact Number'),
      'help' => t('The Member contact’s CARE ContactNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['member_AddressNumber'] = [
      'title' => t('Member Address Number'),
      'help' => t('The Member contact’s CARE AddressNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['organisation_email_CommunicationNumber'] = [
      'title' => t('Organisation email Communication Number'),
      'help' => t('The Organisation’s email CARE CommunicationNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['affiliate_ComplimentaryRelationship'] = [
    'title' => t('Affiliate Complimentary Relationship'),
    'help' => t('The AffiliateComplimentaryRelationship, once sent to CARE.'),
    'field' => ['handler' => 'views_handler_field'],
  ];
  $data['cyclinguk_commerce_line_item']['organisation_ContactPositionNumber'] = [
      'title' => t('Organisation Contact Position Number'),
      'help' => t('The ContactPositionNumber for this membership, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['MembershipNumber'] = [
      'title' => t('Membership Number'),
      'help' => t('The internal membership number for this membership, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['PaymentPlanNumber'] = [
      'title' => t('Payment Plan Number'),
      'help' => t('The PaymentPlanNumber for this line item, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['PaymentFrequency'] = [
      'title' => t('Payment Frequency'),
      'help' => t('The PaymentFrequency for this line item, once sent to CARE.'),
    ] + $common_care_string_settings;
  $data['cyclinguk_commerce_line_item']['AutoPaymentNumber'] = [
      'title' => t('Auto Payment Number'),
      'help' => t('The AutoPaymentNumber for this line item, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['gift_message_DocumentNumber'] = [
      'title' => t('Gift message Document Number'),
      'help' => t('The gift message DocumentNumber for this line item, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['BatchNumber'] = [
      'title' => t('Batch Number'),
      'help' => t('The BatchNumber for this line item, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item']['TransactionNumber'] = [
      'title' => t('Transaction Number'),
      'help' => t('The TransactionNumber for this line item, once sent to CARE.'),
    ] + $common_care_number_settings;
  // Family member data.
  $data['cyclinguk_commerce_line_item_family']['table']['group'] = t('CyclingUK Commerce');
  $data['cyclinguk_commerce_line_item_family']['table']['join'] = [
    'commerce_line_item' => [
      'left_field' => 'line_item_id',
      'field' => 'line_item_id',
    ],
  ];
  $data['cyclinguk_commerce_line_item_family']['completed'] = [
      'title' => t('Family Member CARE calls completed?'),
      'help' => t('Whether all data has been recorded in CARE.'),
    ] + $common_care_boolean_settings;
  $data['cyclinguk_commerce_line_item_family']['ContactNumber'] = [
      'title' => t('Family Member Contact Number'),
      'help' => t('The Family Member’s CARE ContactNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item_family']['AddressNumber'] = [
      'title' => t('Family Member Address Number'),
      'help' => t('The Family Member’s CARE AddressNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  $data['cyclinguk_commerce_line_item_family']['ComplimentaryRelationship'] = [
      'title' => t('Family Member Complimentary Relationship'),
      'help' => t('The Family Member’s CARE ComplimentaryRelationship, once sent to CARE.'),
    ] + $common_care_string_settings;
  $data['cyclinguk_commerce_line_item_family']['MembershipNumber'] = [
      'title' => t('Family Member Membership Number'),
      'help' => t('The Family Member’s CARE MembershipNumber, once sent to CARE.'),
    ] + $common_care_number_settings;
  // Errors.
  $data['cyclinguk_commerce_line_item_errors']['table']['group'] = t('CyclingUK Commerce');
  $data['cyclinguk_commerce_line_item_errors']['table']['join'] = [
    'commerce_line_item' => [
      'left_field' => 'line_item_id',
      'field' => 'line_item_id',
    ],
  ];
  $data['cyclinguk_commerce_line_item_errors']['timestamp'] = [
      'title' => t('Error date and time'),
      'help' => t('The date and time the error message was returned by CARE.'),
      'field' => [
        'handler' => 'views_handler_field_date',
        'click sortable' => TRUE, // This is use by the table display plugin.
      ],
      'sort' => [
        'handler' => 'views_handler_sort',
      ],
      'filter' => [
        'handler' => 'views_handler_filter_date',
      ],

    ] + $common_care_string_settings;
  $data['cyclinguk_commerce_line_item_errors']['error_message'] = [
      'title' => t('Error message'),
      'help' => t('The error message returned by CARE.'),
    ] + $common_care_string_settings;
  $data['cyclinguk_commerce_line_item_errors']['care_call'] = [
      'title' => t('Error CARE call'),
      'help' => t('The CARE call that caused the error message.'),
    ] + $common_care_string_settings;
  return $data;
}
