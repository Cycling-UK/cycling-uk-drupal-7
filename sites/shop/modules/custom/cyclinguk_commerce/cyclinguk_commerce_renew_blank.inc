<?php

function cyclinguk_commerce_renew_blank_form($form, &$form_state) {

  $form['number'] = [
    '#title' => t('Membership number'),
    '#type' => 'textfield',
  ];
  $form['submit'] = [
    '#type' => 'submit',
    '#value' => 'Renew',
  ];
  $form['#theme'] = ['cyclinguk_commerce_renewal_form'];
  return $form;
}

function cyclinguk_commerce_renew_blank_form_submit($form, &$form_state) {
  // Find an integer with three or more digits in the entered string.
  preg_match('/([0-9]{3,})/', $form_state['values']['number'], $matches);
  if (count($matches)) {
    $form_state['redirect'] = 'membership/renew/' . $matches[0];
  }
  else {
    form_set_error('number', t('This is not a valid Cycling UK membership number.'));
    $form_state['rebuild'] = TRUE;
  }
}
