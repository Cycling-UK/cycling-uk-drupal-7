<?php

/**
 * Implements hook_views_default_views().
 */
function cyclinguk_commerce_views_default_views() {
  $view = new view();
  $view->name = 'cyclinguk_commerce_care';
  $view->description = 'Display CARE data sending progress for orders';
  $view->tag = 'cyclinguk_commerce';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'CyclingUK Commerce CARE Progress';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CARE Order Sending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    271 => '271',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'code',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
    ),
    'type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100,150,200';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['required'] = TRUE;
  /* Field: Commerce Line item: Payment option */
  $handler->display->display_options['fields']['field_payment_option']['id'] = 'field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['table'] = 'field_data_field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['field'] = 'field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['label'] = 'Payment';
  $handler->display->display_options['fields']['field_payment_option']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_payment_option']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_payment_option']['alter']['text'] = '[field_payment_option-value]';
  $handler->display->display_options['fields']['field_payment_option']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[type] <br> [field_payment_option]';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '[order_id]<br>[line_item_id] ';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = 'Line item CARE calls completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: CyclingUK Commerce: Billing Contact Number */
  $handler->display->display_options['fields']['billing_ContactNumber']['id'] = 'billing_ContactNumber';
  $handler->display->display_options['fields']['billing_ContactNumber']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['billing_ContactNumber']['field'] = 'billing_ContactNumber';
  $handler->display->display_options['fields']['billing_ContactNumber']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['billing_ContactNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Billing Address Number */
  $handler->display->display_options['fields']['billing_AddressNumber']['id'] = 'billing_AddressNumber';
  $handler->display->display_options['fields']['billing_AddressNumber']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['billing_AddressNumber']['field'] = 'billing_AddressNumber';
  $handler->display->display_options['fields']['billing_AddressNumber']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['billing_AddressNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Gift Aid declared? */
  $handler->display->display_options['fields']['gift_aid_declared']['id'] = 'gift_aid_declared';
  $handler->display->display_options['fields']['gift_aid_declared']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['gift_aid_declared']['field'] = 'gift_aid_declared';
  $handler->display->display_options['fields']['gift_aid_declared']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['gift_aid_declared']['not'] = 0;
  /* Field: CyclingUK Commerce: Subscription saved? */
  $handler->display->display_options['fields']['subscription_saved']['id'] = 'subscription_saved';
  $handler->display->display_options['fields']['subscription_saved']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['subscription_saved']['field'] = 'subscription_saved';
  $handler->display->display_options['fields']['subscription_saved']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['subscription_saved']['not'] = 0;
  /* Field: CyclingUK Commerce: Membership Number */
  $handler->display->display_options['fields']['MembershipNumber']['id'] = 'MembershipNumber';
  $handler->display->display_options['fields']['MembershipNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['MembershipNumber']['field'] = 'MembershipNumber';
  $handler->display->display_options['fields']['MembershipNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Payment Plan Number */
  $handler->display->display_options['fields']['PaymentPlanNumber']['id'] = 'PaymentPlanNumber';
  $handler->display->display_options['fields']['PaymentPlanNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['PaymentPlanNumber']['field'] = 'PaymentPlanNumber';
  $handler->display->display_options['fields']['PaymentPlanNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Auto Payment Number */
  $handler->display->display_options['fields']['AutoPaymentNumber']['id'] = 'AutoPaymentNumber';
  $handler->display->display_options['fields']['AutoPaymentNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['AutoPaymentNumber']['field'] = 'AutoPaymentNumber';
  $handler->display->display_options['fields']['AutoPaymentNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Gift message Document Number */
  $handler->display->display_options['fields']['gift_message_DocumentNumber']['id'] = 'gift_message_DocumentNumber';
  $handler->display->display_options['fields']['gift_message_DocumentNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['gift_message_DocumentNumber']['field'] = 'gift_message_DocumentNumber';
  $handler->display->display_options['fields']['gift_message_DocumentNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Batch Number */
  $handler->display->display_options['fields']['BatchNumber']['id'] = 'BatchNumber';
  $handler->display->display_options['fields']['BatchNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['BatchNumber']['field'] = 'BatchNumber';
  $handler->display->display_options['fields']['BatchNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Transaction Number */
  $handler->display->display_options['fields']['TransactionNumber']['id'] = 'TransactionNumber';
  $handler->display->display_options['fields']['TransactionNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['TransactionNumber']['field'] = 'TransactionNumber';
  $handler->display->display_options['fields']['TransactionNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Affiliate Complimentary Relationship */
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['id'] = 'affiliate_ComplimentaryRelationship';
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['field'] = 'affiliate_ComplimentaryRelationship';
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_number']['label'] = 'Order No';
  $handler->display->display_options['fields']['order_number']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_care_name']['id'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['table'] = 'field_data_field_care_name';
  $handler->display->display_options['fields']['field_care_name']['field'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_care_name']['click_sort_column'] = 'title';
  /* Field: CyclingUK Commerce: Error CARE call */
  $handler->display->display_options['fields']['care_call']['id'] = 'care_call';
  $handler->display->display_options['fields']['care_call']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['fields']['care_call']['field'] = 'care_call';
  /* Field: CyclingUK Commerce: Error message */
  $handler->display->display_options['fields']['error_message']['id'] = 'error_message';
  $handler->display->display_options['fields']['error_message']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['fields']['error_message']['field'] = 'error_message';
  /* Sort criterion: Commerce Line Item: Line item ID */
  $handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['order'] = 'DESC';
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'affiliate_membership' => 'affiliate_membership',
    'affiliate_membership_self' => 'affiliate_membership_self',
    'family_membership' => 'family_membership',
    'family_membership_self' => 'family_membership_self',
    'group_membership' => 'group_membership',
    'membership' => 'membership',
    'membership_renewal' => 'membership_renewal',
    'membership_self' => 'membership_self',
    'commerce_donate' => 'commerce_donate',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Commerce Line item: Payment option (field_payment_option) */
  $handler->display->display_options['filters']['field_payment_option_value']['id'] = 'field_payment_option_value';
  $handler->display->display_options['filters']['field_payment_option_value']['table'] = 'field_data_field_payment_option';
  $handler->display->display_options['filters']['field_payment_option_value']['field'] = 'field_payment_option_value';
  $handler->display->display_options['filters']['field_payment_option_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['operator_id'] = 'field_payment_option_value_op';
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['label'] = 'Payment option (field_payment_option)';
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['operator'] = 'field_payment_option_value_op';
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['identifier'] = 'field_payment_option_value';
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_payment_option_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );
  /* Filter criterion: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['filters']['completed']['id'] = 'completed';
  $handler->display->display_options['filters']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['filters']['completed']['field'] = 'completed';
  $handler->display->display_options['filters']['completed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['completed']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['completed']['expose']['label'] = 'Line Item Complete';
  $handler->display->display_options['filters']['completed']['expose']['operator'] = 'completed_op';
  $handler->display->display_options['filters']['completed']['expose']['identifier'] = 'completed';
  $handler->display->display_options['filters']['completed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );

  /* Display: Overview Page */
  $handler = $view->new_display('page', 'Overview Page', 'page');
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/overview';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'CARE Order Sending';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Memberships Page */
  $handler = $view->new_display('page', 'Memberships Page', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = 'Line item CARE calls completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: CyclingUK Commerce: Member Contact Number */
  $handler->display->display_options['fields']['member_ContactNumber']['id'] = 'member_ContactNumber';
  $handler->display->display_options['fields']['member_ContactNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['member_ContactNumber']['field'] = 'member_ContactNumber';
  $handler->display->display_options['fields']['member_ContactNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Membership Number */
  $handler->display->display_options['fields']['MembershipNumber']['id'] = 'MembershipNumber';
  $handler->display->display_options['fields']['MembershipNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['MembershipNumber']['field'] = 'MembershipNumber';
  $handler->display->display_options['fields']['MembershipNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Affiliate Complimentary Relationship */
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['id'] = 'affiliate_ComplimentaryRelationship';
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['affiliate_ComplimentaryRelationship']['field'] = 'affiliate_ComplimentaryRelationship';
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'affiliate_membership' => 'affiliate_membership',
    'affiliate_membership_self' => 'affiliate_membership_self',
    'family_membership' => 'family_membership',
    'family_membership_self' => 'family_membership_self',
    'group_membership' => 'group_membership',
    'membership' => 'membership',
    'membership_renewal' => 'membership_renewal',
    'membership_self' => 'membership_self',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/memberships';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Memberships';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display:  Family Members Page */
  $handler = $view->new_display('page', ' Family Members Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Family Member CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item_family';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: CyclingUK Commerce: Family Member Address Number */
  $handler->display->display_options['fields']['AddressNumber']['id'] = 'AddressNumber';
  $handler->display->display_options['fields']['AddressNumber']['table'] = 'cyclinguk_commerce_line_item_family';
  $handler->display->display_options['fields']['AddressNumber']['field'] = 'AddressNumber';
  $handler->display->display_options['fields']['AddressNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Family Member Contact Number */
  $handler->display->display_options['fields']['ContactNumber']['id'] = 'ContactNumber';
  $handler->display->display_options['fields']['ContactNumber']['table'] = 'cyclinguk_commerce_line_item_family';
  $handler->display->display_options['fields']['ContactNumber']['field'] = 'ContactNumber';
  $handler->display->display_options['fields']['ContactNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Family Member Complimentary Relationship */
  $handler->display->display_options['fields']['ComplimentaryRelationship']['id'] = 'ComplimentaryRelationship';
  $handler->display->display_options['fields']['ComplimentaryRelationship']['table'] = 'cyclinguk_commerce_line_item_family';
  $handler->display->display_options['fields']['ComplimentaryRelationship']['field'] = 'ComplimentaryRelationship';
  /* Field: CyclingUK Commerce: Family Member Membership Number */
  $handler->display->display_options['fields']['MembershipNumber_1']['id'] = 'MembershipNumber_1';
  $handler->display->display_options['fields']['MembershipNumber_1']['table'] = 'cyclinguk_commerce_line_item_family';
  $handler->display->display_options['fields']['MembershipNumber_1']['field'] = 'MembershipNumber';
  $handler->display->display_options['fields']['MembershipNumber_1']['separator'] = '';
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'family_membership' => 'family_membership',
    'family_membership_self' => 'family_membership_self',
  );
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/family';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Family Members';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Organisations Page */
  $handler = $view->new_display('page', 'Organisations Page', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: CyclingUK Commerce: Member Contact Number */
  $handler->display->display_options['fields']['member_ContactNumber']['id'] = 'member_ContactNumber';
  $handler->display->display_options['fields']['member_ContactNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['member_ContactNumber']['field'] = 'member_ContactNumber';
  $handler->display->display_options['fields']['member_ContactNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Member Address Number */
  $handler->display->display_options['fields']['member_AddressNumber']['id'] = 'member_AddressNumber';
  $handler->display->display_options['fields']['member_AddressNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['member_AddressNumber']['field'] = 'member_AddressNumber';
  $handler->display->display_options['fields']['member_AddressNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Organisation Contact Position Number */
  $handler->display->display_options['fields']['organisation_ContactPositionNumber']['id'] = 'organisation_ContactPositionNumber';
  $handler->display->display_options['fields']['organisation_ContactPositionNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['organisation_ContactPositionNumber']['field'] = 'organisation_ContactPositionNumber';
  $handler->display->display_options['fields']['organisation_ContactPositionNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Organisation email Communication Number */
  $handler->display->display_options['fields']['organisation_email_CommunicationNumber']['id'] = 'organisation_email_CommunicationNumber';
  $handler->display->display_options['fields']['organisation_email_CommunicationNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['organisation_email_CommunicationNumber']['field'] = 'organisation_email_CommunicationNumber';
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group_membership' => 'group_membership',
  );
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/organisation';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Organisations';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Product Sales Page */
  $handler = $view->new_display('page', 'Product Sales Page', 'page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = 'Line item CARE calls completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: CyclingUK Commerce: Billing Contact Number */
  $handler->display->display_options['fields']['billing_ContactNumber']['id'] = 'billing_ContactNumber';
  $handler->display->display_options['fields']['billing_ContactNumber']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['billing_ContactNumber']['field'] = 'billing_ContactNumber';
  $handler->display->display_options['fields']['billing_ContactNumber']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['billing_ContactNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Billing Address Number */
  $handler->display->display_options['fields']['billing_AddressNumber']['id'] = 'billing_AddressNumber';
  $handler->display->display_options['fields']['billing_AddressNumber']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['billing_AddressNumber']['field'] = 'billing_AddressNumber';
  $handler->display->display_options['fields']['billing_AddressNumber']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['billing_AddressNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Subscription saved? */
  $handler->display->display_options['fields']['subscription_saved']['id'] = 'subscription_saved';
  $handler->display->display_options['fields']['subscription_saved']['table'] = 'cyclinguk_commerce_order';
  $handler->display->display_options['fields']['subscription_saved']['field'] = 'subscription_saved';
  /* Field: CyclingUK Commerce: Batch Number */
  $handler->display->display_options['fields']['BatchNumber']['id'] = 'BatchNumber';
  $handler->display->display_options['fields']['BatchNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['BatchNumber']['field'] = 'BatchNumber';
  $handler->display->display_options['fields']['BatchNumber']['separator'] = '';
  /* Field: CyclingUK Commerce: Transaction Number */
  $handler->display->display_options['fields']['TransactionNumber']['id'] = 'TransactionNumber';
  $handler->display->display_options['fields']['TransactionNumber']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['TransactionNumber']['field'] = 'TransactionNumber';
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
    'shipping' => 'shipping',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Product Sales';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Errors Page */
  $handler = $view->new_display('page', 'Errors Page', 'page_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line item: Payment option */
  $handler->display->display_options['fields']['field_payment_option']['id'] = 'field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['table'] = 'field_data_field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['field'] = 'field_payment_option';
  $handler->display->display_options['fields']['field_payment_option']['label'] = 'Payment';
  $handler->display->display_options['fields']['field_payment_option']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_payment_option']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_payment_option']['alter']['text'] = '[field_payment_option-value]';
  $handler->display->display_options['fields']['field_payment_option']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[type] <br> [field_payment_option]';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['line_item_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['order_id']['alter']['text'] = '[order_id]<br>[line_item_id] ';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'order_id';
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['edit_order']['label'] = 'Order';
  $handler->display->display_options['fields']['edit_order']['text'] = 'Edit';
  /* Field: CyclingUK Commerce: Line item CARE calls completed? */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'cyclinguk_commerce_line_item';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = 'Line item CARE calls completed';
  $handler->display->display_options['fields']['completed']['not'] = 0;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['order_number']['label'] = 'Order No';
  $handler->display->display_options['fields']['order_number']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Invoice date */
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['id'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['table'] = 'field_data_field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['field'] = 'field_commerce_billy_i_date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_billy_i_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_care_name']['id'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['table'] = 'field_data_field_care_name';
  $handler->display->display_options['fields']['field_care_name']['field'] = 'field_care_name';
  $handler->display->display_options['fields']['field_care_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_care_name']['click_sort_column'] = 'title';
  /* Field: CyclingUK Commerce: Error CARE call */
  $handler->display->display_options['fields']['care_call']['id'] = 'care_call';
  $handler->display->display_options['fields']['care_call']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['fields']['care_call']['field'] = 'care_call';
  /* Field: CyclingUK Commerce: Error message */
  $handler->display->display_options['fields']['error_message']['id'] = 'error_message';
  $handler->display->display_options['fields']['error_message']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['fields']['error_message']['field'] = 'error_message';
  /* Field: CyclingUK Commerce: Error date and time */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'day_month';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'affiliate_membership' => 'affiliate_membership',
    'affiliate_membership_self' => 'affiliate_membership_self',
    'family_membership' => 'family_membership',
    'family_membership_self' => 'family_membership_self',
    'group_membership' => 'group_membership',
    'membership' => 'membership',
    'membership_self' => 'membership_self',
    'commerce_donate' => 'commerce_donate',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    201 => 0,
    236 => 0,
    256 => 0,
    266 => 0,
    216 => 0,
    196 => 0,
    261 => 0,
    241 => 0,
    251 => 0,
    246 => 0,
    11 => 0,
    271 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'completed' => 'completed',
    'invoiced' => 'invoiced',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: CyclingUK Commerce: Error CARE call */
  $handler->display->display_options['filters']['care_call']['id'] = 'care_call';
  $handler->display->display_options['filters']['care_call']['table'] = 'cyclinguk_commerce_line_item_errors';
  $handler->display->display_options['filters']['care_call']['field'] = 'care_call';
  $handler->display->display_options['filters']['care_call']['operator'] = 'not empty';
  $handler->display->display_options['filters']['care_call']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/commerce/orders/care/errors';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Errors';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'CARE Order Sending';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export-line-items';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_5' => 'page_5',
    'default' => 0,
    'page_2' => 0,
    'page_1' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );

  $views[$view->name] = $view;
  return $views;
}
