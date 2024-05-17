<?php

/**
 * @file
 *
 * Checkout pane definition for DirectDebit.
 */

/**
 * Checkout form definition.
 */
function cyclinguk_commerce_directdebit_checkout_form($form, $form_state, $checkout_pane, $order) {
  $form = array();
  $form['#theme'] = array(
    'cyclinguk_commerce_directdebit_form',
  );
  // Default values.
  $pane_values = array(
    'preamble' => array(
      'sole_signatory' => '',
    ),
    'fieldset' => array(
      'account_name' => '',
      'sort_code' => '',
      'account_number' => '',
    ),
  );
  // Merge in values from the order.
  if (!empty($order->data['cyclinguk_commerce_directdebit'])) {
    $pane_values = $order->data['cyclinguk_commerce_directdebit'];
  }
  $form['preamble'] = array(
    '#type' => 'fieldset',
    '#title' => t('Direct Debit'),
  );
  $html = '<p>Banks and Building Societies may not accept Direct Debit Instructions for some types of account.</p>';
  $html .= '<p>In order to join the Cyclists\' Touring Club online by Direct Debit, you must be the account holder of a personal bank or building society account in the United Kingdom.</p>';
  $html .= '<p>If you are not the only required signatory on your account, have a company account or would rather send us a paper version of this form, please <a href="/contact">contact us</a>.</p>';
  $form['preamble']['start'] = array(
    '#markup' => $html,
  );
  $form['preamble']['signatory'] = array(
    '#markup' => '<p><strong>I confirm that I am the account holder and the only account signatory of a personal bank or building society account in the United Kingdom</strong></p>',
  );
  $form['preamble']['sole_signatory'] = array(
    '#type' => 'radios',
    '#options' => array(
      'yes' => 'Yes',
      'no' => 'No',
    ),
    '#default_value' => $pane_values['preamble']['sole_signatory'],
    '#required' => TRUE,
    '#validate' => array(
      'cyclinguk_commerce_directdebit_form_signatory_validate',
    ),
  );
  $html = '<p>View the <a href="/directdebit-guarantee">Direct Debit Guarantee</a>.</p>';
  $html .= '<p>After filling in your sort code and account number click the \'Validate\' button and wait for your details to be shown.</p>';
  $form['preamble']['thingy'] = array(
    '#markup' => $html,
  );
  $form['fieldset'] = array(
    '#title' => t('Direct Debit payment - Your Bank Details'),
    '#type' => 'fieldset',
  );
  $form['fieldset']['account_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name of account holder'),
    '#description' => t('Please enter the name of the account holder.'),
    '#default_value' => $pane_values['fieldset']['account_name'],
    '#required' => TRUE,
    '#maxlength' => 256,
    '#size' => 32,
  );
  $form['fieldset']['sort_code'] = array(
    '#type' => 'textfield',
    '#title' => t('Bank sort code'),
    '#description' => t('Please enter the sort code of your bank.'),
    '#default_value' => $pane_values['fieldset']['sort_code'],
    '#required' => TRUE,
    '#maxlength' => 10,
    '#size' => 10,
  );
  $form['fieldset']['account_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Bank account number'),
    '#description' => t('Please enter your 8 digit account number.'),
    '#default_value' => $pane_values['fieldset']['account_number'],
    '#required' => TRUE,
    '#maxlength' => 8,
    '#size' => 10,
  );
  $form['fieldset']['validate'] = array(
    '#type' => 'button',
    '#value' => 'Validate',
    '#executes_submit_callback' => FALSE,
    '#validate' => array(
      'cyclinguk_commerce_directdebit_form_account_validate',
    ),
  );
  $form['#validate'][] = 'cyclinguk_commerce_directdebit_form_account_validate';

  return $form;
}

/**
 * Form validation function.
 */
function cyclinguk_commerce_directdebit_checkout_form_validate($form, &$form_state, $checkout_pane, $order) {
  return cyclinguk_commerce_directdebit_form_account_validate($form, $form_state, FALSE);
}

/**
 * Form submit function.
 */
function cyclinguk_commerce_directdebit_checkout_form_submit($form, &$form_state, $checkout_pane, $order) {
  $order->data['cyclinguk_commerce_directdebit'] = $form_state['values']['cyclinguk_commerce_directdebit'];
  $wrapped_order = entity_metadata_wrapper('commerce_order', $order->order_id);
  $payment_data = $wrapped_order->commerce_order_total->data->value();
  $payment_components = $payment_data['components'];
  foreach ($payment_components as $component) {
    if ($component['name'] == 'direct_debit') {
      $transaction = NULL;
      $existing_payments = commerce_payment_transaction_load_multiple(array(), array(
        'order_id' => $order->order_id,
      ));
      foreach ($existing_payments as $existing_payment) {
        if ($existing_payment->payment_method == 'cyclinguk_commerce_directdebit') {
          $transaction = $existing_payment;
        }
      }
      if (!$transaction) {
        $transaction = commerce_payment_transaction_new('cyclinguk_commerce_directdebit', $order->order_id);
        $transaction->instance_id = 'cyclinguk_commerce_directdebit|cyclinguk_commerce_directdebit';
        $transaction->payment_method = 'cyclinguk_commerce_directdebit';
        $transaction->status = 'success';
        $transaction->message = 'Sole signatory: @sole_signatory; Account name: @account_name; Sort code: @sort_code; Account number: @account_number';
      }
      $transaction->amount = $component['price']['amount'];
      $transaction->currency_code = $component['price']['currency_code'];
      $transaction->message_variables = array(
        '@sole_signatory' => $order->data['cyclinguk_commerce_directdebit']['preamble']['sole_signatory'],
        '@account_name' => $order->data['cyclinguk_commerce_directdebit']['fieldset']['account_name'],
        '@sort_code' => $order->data['cyclinguk_commerce_directdebit']['fieldset']['sort_code'],
        '@account_number' => $order->data['cyclinguk_commerce_directdebit']['fieldset']['account_number'],
      );
      commerce_payment_transaction_save($transaction);
    }
  }
}
