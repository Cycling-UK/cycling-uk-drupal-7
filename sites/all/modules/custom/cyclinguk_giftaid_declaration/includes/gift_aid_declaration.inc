<?php

/**
 * @file
 * Definition of account Gift Aid form.
 */

/**
 * Display Gift Aid declaration if we know account's membership number.
 */
function cyclinguk_commerce_gift_aid_settings($account) {
  module_load_include('inc', 'care', 'wrapper_functions');
  $wrapped_account = entity_metadata_wrapper('user', $account);
  if ($wrapped_account->field_membership_number->value()) {
    return drupal_get_form('cyclinguk_commerce_gift_aid_declaration_form', $wrapped_account);
  }
  return 'We don’t have your membership number...';
}

/**
 * Gift Aid Declaration form.
 */
function cyclinguk_commerce_gift_aid_declaration_form($form, $form_state, $wrapped_account) {
  $existing_giftaid = care_giftaid_existing($wrapped_account->field_membership_number->number->value());
  // dpm($form_state);
  if ($existing_giftaid and count($form_state['input']) == 0) {
    drupal_set_message(t('You already have an active Gift Aid declaration, so we can recover tax paid - thank you!'));
  }
  $form['membership_number'] = [
    '#type' => 'value',
    '#value' => $wrapped_account->field_membership_number->number->value(),
  ];
  $form['care_giftaid'] = [
    '#type' => value,
    '#value' => $existing_giftaid ? 1 : 0,
  ];
  $yes_option = $existing_giftaid ? 'Yes, I wish to continue boosting my donations using Gift Aid.' : "Yes I want all my donations past, present and future to the Cyclists' Touring Club (CTC), Registered Charity No. 1147607, to be treated as Gift Aid donations*";
  $no_option = $existing_giftaid ? 'No, I wish to cancel my current Gift Aid declaration.' : 'No I do not want to add a gift aid declaration.';
  $form['commerce_giftaid'] = [
    '#type' => 'radios',
    '#options' => [
      1 => $yes_option,
      0 => $no_option,
    ],
    '#description' => '<p>* I am a UK taxpayer and understand that if I pay less Income Tax and/or Capital Gains Tax
than the amount of Gift Aid claimed on all my donations in that tax year, it is my responsibility to pay any difference.</p>
<p>Please notify Cycling UK if you:
</p><ul><li>Want to cancel this declaration.</li>
<li>Change your name or home address.</li>
<li>No longer pay sufficient tax on your income and/or capital gains.</li></ul>
<h4>Higher rate taxpayers</h4>
<p>If you pay Income Tax at the higher or additional rate and want to receive the additional tax relief due to you, you
must include all your Gift Aid donations on your Self Assessment tax return or ask HM Revenue and Customs to adjust your tax code.</p>
<p>For more information about giftaid please <a href="http://www.hmrc.gov.uk/individuals/giving/gift-aid.htm">read this page</a></p>',
    '#default_value' => $existing_giftaid ? 1 : 0,
  ];
  $args = ['@logo_path' => '/' . drupal_get_path('module', 'cyclinguk_giftaid_declaration') . '/images/gift-aid-logo.png'];
  $form['image'] = [
    '#markup' => t('<p><img src="@logo_path" width="160" height="60" alt="Gift Aid logo"></p>', $args),
    '#weight' => -60,
  ];
  $form['gift_aid'] = [
    '#type' => 'fieldset',
    '#prefix' => '<h2>Boost your donation by 25p of Gift Aid for every £1 you donate.</h2><p>Gift Aid is reclaimed by the charity from the tax you pay for the current tax year. </p>',
    '#weight' => -50,
  ];
  $name_array = $wrapped_account->field_care_name->value();
  $form['gift_aid']['name'] = [
    '#type' => 'markup',
    '#prefix' => '<p>',
    '#markup' => '<strong>Name:</strong> ' . $name_array['title'] . ' ' . $name_array['forenames'] . ' ' . $name_array['surname'],
    '#suffix' => '</p>',
    '#weight' => -50,
  ];

  if (get_class($wrapped_account->field_care_addresses) == 'EntityListWrapper') {
    $address_array = $wrapped_account->field_care_addresses[0]->value();
  }
  else {
    $address_array = $wrapped_account->field_care_addresses->value();
  }

  $lines = [];
  if ($address_array['address_line_1']) {
    $lines[] = check_plain($address_array['address_line_1']);
  }
  if ($address_array['address_line_2']) {
    $lines[] = check_plain($address_array['address_line_2']);
  }
  if ($address_array['address_line_3']) {
    $lines[] = check_plain($address_array['address_line_3']);
  }
  if ($address_array['town']) {
    $lines[] = check_plain($address_array['town']);
  }
  if ($address_array['county']) {
    $lines[] = check_plain($address_array['county']);
  }
  if ($address_array['country_code']) {
    $country_options = [];
    $country_codes = preg_split('/\r\n|[\r\n]/', variable_get('care_fields_countries', "UK|United Kingdom\nUSA|United States of America"));
    foreach ($country_codes as $country_code) {
      if ($country_code) {
        $data = explode('|', $country_code);
        $country_options[$data[0]] = $data[1];
      }
    }
    if (array_key_exists($address_array['country_code'], $country_options)) {
      $country = $country_options[$address_array['country_code']];
    }
    else {
      $country = 'Country code ' . $address_array['country_code'];
    }
    $lines[] = check_plain($country);
  }
  if ($address_array['postcode']) {
    $lines[] = check_plain($address_array['postcode']);
  }

  $form['gift_aid']['address'] = [
    '#type' => 'markup',
    '#markup' => '<p><strong>Home Address:</strong> ' . implode(', ', $lines) . '</p>',
    '#weight' => -40,
  ];
  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];
  return $form;
}

/**
 * Form submit function to send Gift Aid declaration to CARE.
 */
function cyclinguk_commerce_gift_aid_declaration_form_submit($form, &$form_state) {
  $values = $form_state['values'];
  if ($values['commerce_giftaid'] != $values['care_giftaid']) {
    care_giftaid_declare($form_state['values']['membership_number'], $form_state['values']['commerce_giftaid']);
    if ($values['commerce_giftaid']) {
      drupal_set_message(t('Thank you for making a Gift Aid declaration. You will receive confirmation by email or post in the next few days.'));
    }
    else {
      drupal_set_message(t('Thank you for letting us know that you currently cannot, or wish not to, make a Gift Aid declaration.'));
    }
  }
  else {
    if ($values['commerce_giftaid']) {
      drupal_set_message(t('You did not change your Gift Aid choice: you are still declaring Gift Aid.'), 'warning');
    }
    else {
      drupal_set_message(t('You did not change your Gift Aid choice: you are still not declaring Gift Aid.'), 'warning');
    }
  }
  $form_state['rebuild'] = TRUE;
}
