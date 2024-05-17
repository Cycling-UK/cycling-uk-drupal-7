<?php

/**
 * @file
 * Admin form for Views Override.
 */

/**
 * System settings form to determine views replacements.
 */
function views_override_admin_form($form, &$form_state) {
  $form['#tree'] = TRUE;

  foreach (views_get_all_views() as $k => $v) {
    $name = $v->name;
    if (!empty($v->human_name)) {
      $name = $v->human_name . ' (' . $name . ')';
    }

    $views[$k] = $name;
  }

  $replacements = array();
  foreach (variable_get('views_override', array()) as $view_name => $replacement) {
    $replacements[] = array('default' => $view_name, 'replacement' => $replacement);
  }

  if (empty($form_state['storage']['count'])) {
    if (!isset($form_state['storage']) or !isset($form_state['storage']['count'])) {
      $form_state['storage']['count'] = count($replacements) or 1;
    }
  }

  $form['views']['content'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="views">',
    '#suffix' => '</div>',
  );

  for ($i = 1; $i <= $form_state['storage']['count']; $i++) {
    $form['views']['content'][$i] = array(
      '#type' => 'fieldset',
      '#tree' => TRUE,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#title' => t('Replacement'),
      '#prefix' => '<div id="view-' . $i . '">',
      '#suffix' => '</div>',
    );

    $form['views']['content'][$i]['views_default'] = array(
      '#title' => t('Default View'),
      '#type' => 'select',
      '#options' => $views,
      '#default_value' => isset($replacements[$i - 1]) ? $replacements[$i - 1]['default'] : '',
    );

    $form['views']['content'][$i]['views_override'] = array(
      '#title' => t('Replacement View'),
      '#type' => 'select',
      '#options' => $views,
      '#default_value' => isset($replacements[$i - 1]) ? $replacements[$i - 1]['replacement'] : '',
    );

    $form['views']['content'][$i]['remove'] = array(
      '#type' => 'submit',
      '#submit' => array('_views_override_remove'),
      '#value' => t('Remove'),
      '#ajax' => array(
        'callback' => '_views_override_remove_callback',
        'wrapper' => 'view-' . $i,
      ),
      '#limit_validation_errors' => array(),
    );
  }

  $form['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add a new views replacement'),
    '#submit' => array('_views_override_add'),
    '#ajax' => array(
      'callback' => '_views_override_add_callback',
      'wrapper' => 'views',
    ),
    '#limit_validation_errors' => array(),
    '#suffix' => '<br/>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit handler for the views replacement forms.
 */
function views_override_admin_form_submit($form, &$form_state) {
  $replacements = array();
  foreach ($form_state['values']['views']['content'] as $values) {
    $replacements[$values['views_default']] = $values['views_override'];
  }

  variable_set('views_override', $replacements);
  views_invalidate_cache();

  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * =========================
 * ----- Form helpers ------
 * =========================
 */

/**
 * Callback to add another views replacement.
 */
function _views_override_add(&$form, &$form_state) {
  $form_state['storage']['count']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * Callback to return the views content.
 */
function _views_override_add_callback($form, &$form_state) {
  return $form['views']['content'];
}

/**
 * Callback to remove a views replacement.
 */
function _views_override_remove($form, &$form_state) {
  if ($form_state['storage']['count'] > -1) {
    $form_state['storage']['count']--;
  }

  $form_state['rebuild'] = TRUE;
}

/**
 * Callback to return the replaced content when removed (empty string).
 */
function _views_override_remove_callback($form, &$form_state) {
  return '';
}
