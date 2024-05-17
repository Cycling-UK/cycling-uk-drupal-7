<?php
/**
 * @file
 * shop_strongarm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function shop_strongarm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_affiliate_membership';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_affiliate_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_affiliate_membership_sel';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_affiliate_membership_sel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_display';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_donation';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_family_membership';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_family_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_family_membership_self';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_family_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_gift_membership';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_gift_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_group_membership';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_group_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_lejog_certificate';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_lejog_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_membership';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_membership_renewal';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_product_membership_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_membership_self';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_doc_root';
  $strongarm->value = 'https://care.ctc.org.uk/careservices/documentation';
  $export['care_doc_root'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_block_pages';
  $strongarm->value = array(
    0 => 'checkout',
    1 => 'checkout_step_2',
    2 => 'shipping',
    3 => 'review',
    4 => 'payment',
    5 => 'complete',
  );
  $export['commerce_checkout_progress_block_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_cart';
  $strongarm->value = 1;
  $export['commerce_checkout_progress_cart'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_link';
  $strongarm->value = 0;
  $export['commerce_checkout_progress_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_progress_list_type';
  $strongarm->value = 'ol';
  $export['commerce_checkout_progress_list_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_field';
  $strongarm->value = 'commerce_customer_shipping';
  $export['commerce_customer_profile_shipping_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_profile_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_default';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_profile_copy_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_source';
  $strongarm->value = 'billing';
  $export['commerce_customer_profile_shipping_profile_copy_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_default_currency';
  $strongarm->value = 'GBP';
  $export['commerce_default_currency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_description';
  $strongarm->value = 'By giving a monthly, or single gift to Cycling UK, you will be helping to change lives through cycling.';
  $export['commerce_donate_checkout_pane_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_donate_amounts';
  $strongarm->value = '3|£3
5|£5
10|£10';
  $export['commerce_donate_checkout_pane_donate_amounts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_override_options';
  $strongarm->value = 1;
  $export['commerce_donate_checkout_pane_override_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_product_id';
  $strongarm->value = '61';
  $export['commerce_donate_checkout_pane_product_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_donate_checkout_pane_title';
  $strongarm->value = 'Donate';
  $export['commerce_donate_checkout_pane_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_enabled_currencies';
  $strongarm->value = array(
    'GBP' => 'GBP',
    'AED' => 0,
    'AFN' => 0,
    'ANG' => 0,
    'AOA' => 0,
    'ARM' => 0,
    'ARS' => 0,
    'AUD' => 0,
    'AWG' => 0,
    'AZN' => 0,
    'BAM' => 0,
    'BBD' => 0,
    'BDT' => 0,
    'BGN' => 0,
    'BHD' => 0,
    'BIF' => 0,
    'BMD' => 0,
    'BND' => 0,
    'BOB' => 0,
    'BRL' => 0,
    'BSD' => 0,
    'BTN' => 0,
    'BWP' => 0,
    'BYR' => 0,
    'BZD' => 0,
    'CAD' => 0,
    'CDF' => 0,
    'CHF' => 0,
    'CLP' => 0,
    'CNY' => 0,
    'COP' => 0,
    'CRC' => 0,
    'CUC' => 0,
    'CUP' => 0,
    'CVE' => 0,
    'CZK' => 0,
    'DJF' => 0,
    'DKK' => 0,
    'DOP' => 0,
    'DZD' => 0,
    'EEK' => 0,
    'EGP' => 0,
    'ERN' => 0,
    'ETB' => 0,
    'EUR' => 0,
    'FJD' => 0,
    'FKP' => 0,
    'GHS' => 0,
    'GIP' => 0,
    'GMD' => 0,
    'GNF' => 0,
    'GTQ' => 0,
    'GYD' => 0,
    'HKD' => 0,
    'HNL' => 0,
    'HRK' => 0,
    'HTG' => 0,
    'HUF' => 0,
    'IDR' => 0,
    'ILS' => 0,
    'INR' => 0,
    'IRR' => 0,
    'ISK' => 0,
    'JMD' => 0,
    'JOD' => 0,
    'JPY' => 0,
    'KES' => 0,
    'KGS' => 0,
    'KMF' => 0,
    'KRW' => 0,
    'KWD' => 0,
    'KYD' => 0,
    'KZT' => 0,
    'LAK' => 0,
    'LBP' => 0,
    'LKR' => 0,
    'LRD' => 0,
    'LSL' => 0,
    'LTL' => 0,
    'LVL' => 0,
    'LYD' => 0,
    'MAD' => 0,
    'MDL' => 0,
    'MKD' => 0,
    'MMK' => 0,
    'MNT' => 0,
    'MOP' => 0,
    'MRO' => 0,
    'MTP' => 0,
    'MUR' => 0,
    'MXN' => 0,
    'MYR' => 0,
    'MZN' => 0,
    'NAD' => 0,
    'NGN' => 0,
    'NIO' => 0,
    'NOK' => 0,
    'NPR' => 0,
    'NZD' => 0,
    'PAB' => 0,
    'PEN' => 0,
    'PGK' => 0,
    'PHP' => 0,
    'PKR' => 0,
    'PLN' => 0,
    'PYG' => 0,
    'QAR' => 0,
    'RHD' => 0,
    'RON' => 0,
    'RSD' => 0,
    'RUB' => 0,
    'SAR' => 0,
    'SBD' => 0,
    'SCR' => 0,
    'SDD' => 0,
    'SEK' => 0,
    'SGD' => 0,
    'SHP' => 0,
    'SLL' => 0,
    'SOS' => 0,
    'SRD' => 0,
    'SRG' => 0,
    'STD' => 0,
    'SYP' => 0,
    'SZL' => 0,
    'THB' => 0,
    'TND' => 0,
    'TOP' => 0,
    'TRY' => 0,
    'TTD' => 0,
    'TWD' => 0,
    'TZS' => 0,
    'UAH' => 0,
    'UGX' => 0,
    'USD' => 0,
    'UYU' => 0,
    'VEF' => 0,
    'VND' => 0,
    'VUV' => 0,
    'WST' => 0,
    'XAF' => 0,
    'XCD' => 0,
    'XOF' => 0,
    'XPF' => 0,
    'YER' => 0,
    'ZAR' => 0,
    'ZMK' => 0,
  );
  $export['commerce_enabled_currencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cyclinguk_commerce_log';
  $strongarm->value = '1';
  $export['cyclinguk_commerce_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_affiliate_membership';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_affiliate_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_affiliate_membership_sel';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_affiliate_membership_sel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_display';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_donation';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_family_membership';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_family_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_family_membership_self';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_family_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_gift_membership';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_gift_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_group_membership';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_group_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_lejog_certificate';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_lejog_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_membership';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_membership_renewal';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_membership_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_product_membership_self';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_product_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_customer_profile__billing';
  $strongarm->value = array(
    'view_modes' => array(
      'administrator' => array(
        'custom_settings' => TRUE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_customer_profile__billing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_customer_profile__shipping';
  $strongarm->value = array(
    'view_modes' => array(
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_customer_profile__shipping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__affiliate_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '6',
        ),
        'quantity' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__affiliate_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__affiliate_membership_self';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'quantity' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__affiliate_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__commerce_donate';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '1',
        ),
        'quantity' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__commerce_donate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__family_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'customer' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '1',
        ),
        'quantity' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__family_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__family_membership_self';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '6',
        ),
        'quantity' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__family_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__group_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'quantity' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__group_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__lejog_certificate';
  $strongarm->value = array(
    'view_modes' => array(
      'customer' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'customer' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'customer' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'shopping_basket' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__lejog_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__membership';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '1',
        ),
        'quantity' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'customer' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__membership_renewal';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '2',
        ),
        'quantity' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__membership_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__membership_self';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'quantity' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_line_item__product';
  $strongarm->value = array(
    'view_modes' => array(
      'shopping_basket' => array(
        'custom_settings' => TRUE,
      ),
      'display' => array(
        'custom_settings' => FALSE,
      ),
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'quantity' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'shopping_basket' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_line_item__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_order__commerce_order';
  $strongarm->value = array(
    'view_modes' => array(
      'administrator' => array(
        'custom_settings' => FALSE,
      ),
      'customer' => array(
        'custom_settings' => FALSE,
      ),
      'checkout_pane' => array(
        'custom_settings' => FALSE,
      ),
      'pdf' => array(
        'custom_settings' => FALSE,
      ),
      'canceled' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_commerce_order__commerce_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__donation';
  $strongarm->value = array(
    'view_modes' => array(
      'commerce_pado' => array(
        'custom_settings' => TRUE,
      ),
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_administrator' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_customer' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_shopping_basket' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'sku' => array(
          'line_item' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'line_item' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'line_item' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__membership';
  $strongarm->value = array(
    'view_modes' => array(
      'commerce_pado' => array(
        'custom_settings' => TRUE,
      ),
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_administrator' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_customer' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_shopping_basket' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_child_page' => array(
        'custom_settings' => FALSE,
      ),
      'node_kit' => array(
        'custom_settings' => FALSE,
      ),
      'node_related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'status' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__product';
  $strongarm->value = array(
    'view_modes' => array(
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_administrator' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_customer' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_shopping_basket' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_family_members';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_family_members'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_affiliate_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_affiliate_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_affiliate_membership_sel';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_affiliate_membership_sel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'child_page' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'product:field_terms' => array(
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'child_page' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:field_size' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_gender' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_care_product_rate' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'child_page' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'kit' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_donation';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_family_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_family_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_family_membership_self';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_family_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_group_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_group_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_lejog_certificate';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_lejog_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_membership';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '-3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '-4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_membership_renewal';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_membership_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_membership_self';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'child_page' => array(
        'custom_settings' => FALSE,
      ),
      'related' => array(
        'custom_settings' => FALSE,
      ),
      'kit' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_membership_code' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_product_giftaid' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_direct_debit_allowed' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:field_payment_frequency' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_membership_type' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:field_terms' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_maximum_age' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:field_minimum_age' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'submitted_by' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__care_fields_promotion_code';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__care_fields_promotion_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__care_fields_source';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__care_fields_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__payment_frequencies';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__payment_frequencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_affiliate_membership';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_affiliate_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_affiliate_membership_sel';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_affiliate_membership_sel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_display';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_donation';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_family_membership';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_family_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_family_membership_self';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_family_membership_self'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_gift_membership';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_product_gift_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_group_membership';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_group_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_lejog_certificate';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_lejog_certificate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_membership';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_membership'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_membership_renewal';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_membership_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product_membership_self';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_product_membership_self'] = $strongarm;

  return $export;
}
