<?php
/**
 * @file
 * Set mailing options for a user.
 */

/**
 * Display mailing options if we know account's membership number.
 */
function cyclinguk_mailing_options_user($account) {
  $wrapped_account = entity_metadata_wrapper('user', $account);
  if ($wrapped_account->field_membership_number->value()) {
    return drupal_get_form('cyclinguk_mailing_options_user_form', $wrapped_account);
  }
  return 'We don’t have your membership number...';
}

/**
 * Mailing options form for a user.
 */
function cyclinguk_mailing_options_user_form($form, &$form_state, $account) {
  $form_state['contact_number'] = $account->field_membership_number->number->value();
  $contact_number = $account->field_membership_number->number->value();
  $current_suppressions = _cyclinguk_mailing_options_current_suppressions($contact_number);
  $current_suppression_codes = array_keys($current_suppressions);
  $vocabulary = taxonomy_vocabulary_machine_name_load('care_taxonomy_mailing_suppression_code');
  $terms = taxonomy_term_load_multiple([], ['vid' => $vocabulary->vid]);
  foreach ($terms as $term) {
    $description_html = check_plain($term->description);
    if (isset($current_suppressions[$term->name])) {
      $description_html .= ' <i>(since ' .$current_suppressions[$term->name]['valid_from'];
      if (substr($current_suppressions[$term->name]['valid_to'],-4) < date('Y')+ 10) {
        $description_html .= ', until ' . $current_suppressions[$term->name]['valid_to'];
      }
      $description_html .= ')</i>';
    }
    $suppression_options[$term->name] = $description_html;
  }
  $form['new_suppressions'] = [
    '#title' => t('Your current mailing options'),
    '#type' => 'checkboxes',
    '#options' => $suppression_options,
    '#default_value' => $current_suppression_codes,
  ];
  $form['current_suppressions'] = [
    '#type' => 'value',
    '#value' => $current_suppression_codes,
  ];
  $form['submit'] = ['#type' => 'submit', '#value' => 'Update'];
  return $form;
}


/**
 * Forum submit function.
 */
function cyclinguk_mailing_options_user_form_submit($form, $form_state) {
  $new_suppressions = $form_state['values']['new_suppressions'];
  $current_suppressions = $form_state['values']['current_suppressions'];
  $contact_number = $form_state['contact_number'];
  $valid_to_date = new DateTime('+100 years');
  // Add new suppression options.
  foreach ($new_suppressions as $suppression) {
    if ($suppression and !in_array($suppression, $current_suppressions)) {
      $data = [
        'ContactNumber' => $contact_number,
        'Suppression' => $suppression,
        'ValidFrom' => date('d/m/Y'),
        'ValidTo' => $valid_to_date->format('j/m/Y'),
      ];
      $result_xml = care_call_method('AddSuppression', $data);
    }
  }
  // Delete removed suppression options.
  foreach ($current_suppressions as $suppression) {
    if (!$new_suppressions[$suppression]) {
      // Fetch the current suppression, we need the dates.
      $current_suppressions = _cyclinguk_mailing_options_current_suppressions($contact_number);
      if (isset($current_suppressions[$suppression])) {
        $old_valid_from = $current_suppressions[$suppression]['valid_from'];
        $old_valid_to = $current_suppressions[$suppression]['valid_to'];
        $today_date = new DateTime();
        if ($old_valid_from == $today_date->format('j/m/Y')) {
          // Delete if we added this today.
          $data = [
            'ContactNumber' => $contact_number,
            'Suppression' => $suppression,
            'ValidFrom' => $old_valid_from,
            'ValidTo' => $old_valid_to,
          ];
          $result_xml = care_call_method('DeleteSuppression', $data);
        }
        else {
          // Update an older suppression to end yesterday.
          $yesterday_date = new DateTime('yesterday');
          $data = [
            'ContactNumber' => $contact_number,
            'Suppression' => $suppression,
            'OldValidFrom' => $old_valid_from,
            'OldValidTo' => $old_valid_to,
            'ValidFrom' => $old_valid_from,
            'ValidTo' => $yesterday_date->format('j/m/Y'),
          ];
          $result_xml = care_call_method('UpdateSuppression', $data);
        }
      }
    }
  }
}

function _cyclinguk_mailing_options_current_suppressions($contact_number) {
  $results = [];
  $data = ['ContactNumber' => $contact_number];
  $type_data = ['pSelectDataType' => 'xcdtContactSuppressions'];
  $result_xml = care_call_method('SelectContactData', $data, $type_data);
  if ($result_xml->ErrorMessage) {
    drupal_set_message(t("Sorry, we are unable to connect to the Cycling UK membership system at the moment. Please try again later, or email !link.", array('!link' => l('membership@cyclinguk.org','mailto:membership@cyclinguk.org'))), 'error', FALSE);
    return [];
  }
  foreach ($result_xml as $row) {
    $valid_from = (string) $row->ValidFrom;
    $valid_to_date = DateTime::createFromFormat('d/m/Y', (string) $row->ValidTo);
    $last_midnight = new DateTime('today');
    $next_midnight = new DateTime('today');
    // Treat ValidFrom and ValidTo as inclusive dates.
    if ($valid_to_date >= $last_midnight && $valid_from <= $next_midnight) {
      $code = (string) $row->SuppressionCode;
      $results[$code] = [
        'suppression' => $code,
        'valid_from' => (string) $row->ValidFrom,
        'valid_to' => (string) $row->ValidTo,
      ];
    }
  }
  return $results;
}
