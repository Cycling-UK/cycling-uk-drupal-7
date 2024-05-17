<?php


/**
 * Form callback: confirmation form for manually invoking the CARE processing
 * rule action for an order.
 *
 * @param $order
 *   The order object to process checkout completion on.
 *
 * @return
 *   The form array to confirm the process.
 *
 * @see confirm_form()
 */
function cyclinguk_commerce_care_process_form($form, &$form_state, $order) {
  $form['order_id'] = [
    '#type' => 'value',
    '#value' => $order->order_id,
  ];

  $order_progress = db_select('cyclinguk_commerce_order', 'o')
    ->fields('o')
    ->condition('order_id', $order->order_id)
    ->execute()
    ->fetchAssoc();
  $header = [];
  $rows = [];
  foreach ($order_progress as $key => $value) {
    $header[] = str_replace('_', ' ', $key);
    $row[] = $value;
  }

  $form['status'] = [
    '#type' => 'fieldset',
  ];
  $form['status']['order'] = [
    '#type' => 'markup',
    '#prefix' => '<div style="font-size: 90%"><h2>' . t('Order State') . '</h2>',
    '#markup' => theme('table', ['header' => $header, 'rows' => [$row]]),
  ];

  $line_item_query = db_select('commerce_line_item', 'c');
  $line_item_query->join('cyclinguk_commerce_line_item', 'l', 'l.line_item_id = c.line_item_id');
  $line_item_query->fields('l');
  $line_item_query->condition('c.order_id', $order->order_id);
  $line_item_result = $line_item_query->execute();
  $header = [];
  $headers = [];
  foreach ($line_item_result as $line_item_progress) {
    $row = [];
    foreach ($line_item_progress as $key => $value) {
      if (!$headers) {
        $header[] = str_replace('_', ' ', $key);
      }
      $row[] = $value;
    }
    $rows[] = $row;
    $headers = $header;
  }

  $form['status']['line_item'] = [
    '#type' => 'markup',
    '#prefix' => '<h2>' . t('Line Item States') . '</h2>',
    '#markup' => theme('table', ['header' => $headers, 'rows' => $rows]),
    '#suffix' => '</div>',
  ];

  // Build a description of what the user may expect to occur on submission.
  $items = [
    t('CARE processing will be invoked on this order.'),
  ];

  $form = confirm_form($form,
    t('Are you sure you want to run CARE processing on order @number?', ['@number' => $order->order_number]),
    'admin/commerce/orders/' . $order->order_id . '/edit',
    '<p>' . theme('item_list', ['items' => $items]) . '</p>',
    t('Run CARE Processing'),
    t('Cancel')
  );

  return $form;
}

/**
 * Form submit callback for cyclinguk_commerce_care_process_form().
 */
function cyclinguk_commerce_care_process_form_submit($form, &$form_state) {
  if ($order = commerce_order_load($form_state['values']['order_id'])) {
    module_load_include('inc', 'cyclinguk_commerce', 'cyclinguk_commerce.rules');
    cyclinguk_commerce_handle_memberships($order);
    drupal_set_message(t('CARE processing rule action has been executed for the order.'));
    $form_state['redirect'] = 'admin/commerce/orders/' . $order->order_id . '/edit';
  }
  else {
    drupal_set_message(t('Order not found.'), 'error');
    $form_state['redirect'] = 'admin/commerce/orders';
  }
}
