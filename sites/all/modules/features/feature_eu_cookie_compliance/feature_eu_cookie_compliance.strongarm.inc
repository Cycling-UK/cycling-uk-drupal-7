<?php

/**
 * @file
 * feature_eu_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_eu_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance';
  $strongarm->value = array(
    'accept_all_categories_button_label' => 'Accept all cookies',
    'allowed_cookies' => 'necessary:Drupal.tableDrag.showWeight
necessary:DrupalModuleFilter
necessary:has_js
necessary:_hjIncludedInPageviewSample
necessary:_hjIncludedInSessionSample
necessary:_hjAbsoluteSessionInProgress
necessary:_hjid
necessary:_hjTLDTest
marketing:_ga
marketing:_gat
marketing:_gid
marketing:_fbp
marketing:_gcl_au
necessary:__stripe_mid
necessary:__stripe_sid
',
    'automatic_cookies_removal' => 1,
    'better_support_for_screen_readers' => 0,
    'consent_storage_method' => 'basic',
    'containing_element' => 'body',
    'cookie_name' => '',
    'cookie_policy_version' => '1.0.0',
    'cookie_session' => 0,
    'disabled_javascripts' => '',
    'disagree_button_label' => 'No, thanks',
    'disagree_do_not_show_popup' => 0,
    'domains_list' => '',
    'domains_option' => '1',
    'enable_save_preferences_button' => 1,
    'exclude_admin_pages' => 1,
    'exclude_paths' => '',
    'exclude_uid_1' => 1,
    'fixed_top_position' => 0,
    'info_template' => 'new',
    'method' => 'categories',
    'mobile_breakpoint' => '768',
    'mobile_popup_info' => array(
      'format' => 'full_html',
      'value' => '',
    ),
    'popup_agree_button_message' => 'I agree',
    'popup_agreed' => array(
      'format' => 'full_html',
      'value' => '<h2>Thank you!</h2>

<p>Thank you for accepting cookies on the Cycling UK website.</p>
',
    ),
    'popup_agreed_enabled' => 0,
    'popup_bg_hex' => '',
    'popup_clicking_confirmation' => FALSE,
    'popup_delay' => '500',
    'popup_disagree_button_message' => 'Cookie Policy',
    'popup_enabled' => 1,
    'popup_find_more_button_message' => 'More info',
    'popup_height' => '',
    'popup_hide_agreed' => 0,
    'popup_hide_button_message' => 'Hide',
    'popup_info' => array(
      'format' => 'full_html',
      'value' => '<h2>Cookies</h2>

<p>We use cookies to help our site work, to understand how it is used&nbsp;and to tailor ads that are more relevant to you and your interests. You can read our policy here:&nbsp;</p>
',
    ),
    'popup_link' => 'cookies',
    'popup_link_new_window' => 1,
    'popup_position' => FALSE,
    'popup_scrolling_confirmation' => FALSE,
    'popup_text_hex' => '',
    'popup_width' => '',
    'reload_page' => 0,
    'save_preferences_button_label' => 'Save preferences',
    'script_scope' => 'header',
    'show_disagree_button' => TRUE,
    'use_bare_css' => 1,
    'use_mobile_message' => 0,
    'withdraw_action_button_label' => 'Withdraw consent',
    'withdraw_button_on_info_popup' => 0,
    'withdraw_enabled' => 0,
    'withdraw_message' => array(
      'format' => 'full_html',
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2>

<p>You have given your consent for us to set cookies.</p>
',
    ),
    'withdraw_tab_button_label' => 'Privacy settings',
  );
  $export['eu_cookie_compliance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cookie_lifetime';
  $strongarm->value = '100';
  $export['eu_cookie_compliance_cookie_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  return $export;
}
