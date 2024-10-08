<?php

/**
 * @file
 * Handles the admin forms.
 */

/**
 * Menu callback for admin page.
 */
function postcodeanywhere_settings_form($form, &$form_state) {

  $form['pca_service'] = array(
    '#type' => 'fieldset',
    '#title' => t('License settings'),
    '#description' => t('Account settings.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['pca_service']['postcodeanywhere_licence'] = array(
    '#type' => 'textfield',
    '#title' => t('PCA API Service key'),
    '#description' => t('Change this key into valid API Service Key.'),
    '#default_value' => variable_get('postcodeanywhere_licence', POSTCODEANYWHERE_DEMO_KEY),
    '#states' => array(
      'disabled' => array(':input[name="postcodeanywhere_example_test"]' => array('checked' => TRUE)),
    ),
  );

  $form['pca_service']['postcodeanywhere_url'] = array(
    '#type' => 'textfield',
    '#title' => t('PCA callback URL.'),
    '#required' => TRUE,
    '#default_value' => variable_get('postcodeanywhere_url', POSTCODEANYWHERE_URL),
    '#states' => array(
      'disabled' => array(':input[name="postcodeanywhere_example_test"]' => array('checked' => TRUE)),
    ),
  );

  $form['pca_service']['postcodeanywhere_format'] = array(
    '#type' => 'select',
    '#title' => t('PCA callback format.'),
    // TODO: JSON format needs some work by changes in classes and writing some function wrapper.
    '#options' => array('xmla.ws' => 'XML', 'json.ws' => 'JSON'),
    '#required' => TRUE,
    '#default_value' => variable_get('postcodeanywhere_format', POSTCODEANYWHERE_FORMAT),
    '#states' => array(
      'disabled' => array(':input[name="postcodeanywhere_example_test"]' => array('checked' => TRUE)),
    ),
  );

  // Check if we can provide testing responses.
  if (module_exists('postcodeanywhere_example')) {
    $form['pca_service']['postcodeanywhere_example_test'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use testing mode.'),
      '#description' => t('This would use local sample responses to test the PCA widget.'),
      '#default_value' => variable_get('postcodeanywhere_example_test', FALSE),
    );
  }

  // Field specific settings.
  if (module_exists('postcodeanywhere_field')) {

    $form['page_vis_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Page specific visibility settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    $access = user_access('use PHP for settings');
    if (!$access) {
      $form['page_vis_settings'] = array();
      $form['page_vis_settings']['postcodeanywhere_page_visibility_mode'] = array('#type' => 'value', '#value' => 2);
      $form['page_vis_settings']['postcodeanywhere_page_visibility_rules'] = array('#type' => 'value', '#value' => $edit['pages']);
    }
    else {
      $options = array(t('Show on every page except the listed pages.'), t('Show on only the listed pages.'));
      $description = t("Enter one page per line as Drupal paths.
          The '*' character is a wildcard.
          Example paths are %blog for the blog page and %blog-wildcard for every personal blog.
          %front is the front page.",
          array(
            '%blog' => 'blog',
            '%blog-wildcard' => 'blog/*',
            '%front' => '<front>'
            ));

      if ($access) {
        $options[] = t('Show if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only).');
        $description .= ' ' . t('If the PHP-mode is chosen, enter PHP code between %php. Note that executing incorrect PHP-code can break your Drupal site.', array('%php' => '<?php ?>'));
      }
      $form['page_vis_settings']['postcodeanywhere_page_visibility_mode'] = array(
        '#type' => 'radios',
        '#title' => t('Activate on specific pages'),
        '#options' => $options,
        '#default_value' => variable_get('postcodeanywhere_page_visibility_mode', ''),
      );
      $form['page_vis_settings']['postcodeanywhere_page_visibility_rules'] = array(
        '#type' => 'textarea',
        '#title' => t('Pages'),
        '#default_value' => variable_get('postcodeanywhere_page_visibility_rules', ''),
        '#description' => $description,
      );
    }

    $form['field_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Field settings'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

  }

  $form['form_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Form Selectors'),
    '#description' => t('Choose jQuery selectors to attach to'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['form_settings']['postcodeanywhere_id_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Postcode Wrapper (i.e. parent DIV tag)'),
    '#default_value' => variable_get('postcodeanywhere_id_wrapper', "div[id*='postcode-wrapper'],div[id*='-pca-']"),
    '#description' => t('jQuery selector for the element where an addresslist textfield will be appended to the end of.'),
    '#required' => TRUE,
  );

  $form['form_settings']['postcodeanywhere_id_postcode'] = array(
    '#type' => 'textarea',
    '#title' => t('Postcode Input'),
    '#default_value' => variable_get('postcodeanywhere_id_postcode', "input[id*='edit-address-postcode'],input[id*='-pca-']"),
    '#description' => t('jQuery selector for the existing postcode input field. The lookup button will be inserted immediately after this.'),
    '#required' => TRUE,
  );

  $form['form_settings']['postcodeanywhere_id_manual-postcode'] = array(
      '#type' => 'textarea',
      '#title' => t('Postcode Input - Manual'),
      '#default_value' => variable_get('postcodeanywhere_id_manual-postcode', "input[id*='edit-address-manual-postcode']"),
      '#description' => t('jQuery selector for the manual postcode input field that is shown with the other manual address fields'),
      '#required' => TRUE,
  );

  $form['form_settings']['postcodeanywhere_id_country'] = array(
    '#type' => 'textarea',
    '#title' => t('Country'),
    '#default_value' => variable_get('postcodeanywhere_id_country', "select[id*='edit-address-country']"),
    '#description' => t('jQuery selector for existing input field for Country Name.'),
  );

  $form['form_settings']['postcodeanywhere_id_company'] = array(
    '#type' => 'textarea',
    '#title' => t('Company'),
    '#default_value' => variable_get('postcodeanywhere_id_company', "input[id*='edit-address-company']"),
    '#description' => t('jQuery selector for existing input field for Address line 1.'),
  );

  $form['form_settings']['postcodeanywhere_id_company_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Company Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_company_wrapper', "div.form-item-address-company"),
    '#description' => t('jQuery selector for existing input field for Company Wrapper.'),
  );

  $form['form_settings']['postcodeanywhere_id_address_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_address_wrapper', ".id_address_wrapper"),
    '#description' => t('jQuery selector for div that wraps existing input fields.'),
  );

  $form['form_settings']['postcodeanywhere_id_line1'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 1'),
    '#default_value' => variable_get('postcodeanywhere_id_line1', "input[id*='edit-address-line1']"),
    '#description' => t('jQuery selector for existing input field for Address line 1.'),
  );

  $form['form_settings']['postcodeanywhere_id_line1_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 1 Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_line1_wrapper', "div.form-item-address-line1"),
    '#description' => t('jQuery selector for existing input field for Address line 1 Wrapper.'),
  );

  $form['form_settings']['postcodeanywhere_id_line2'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 2'),
    '#default_value' => variable_get('postcodeanywhere_id_line2', "input[id*='edit-address-line2']"),
    '#description' => t('jQuery selector for existing input field for Address line 2.'),
  );

  $form['form_settings']['postcodeanywhere_id_line2_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 2 Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_line2_wrapper', "div.form-item-address-line2"),
    '#description' => t('jQuery selector for existing input field for Address line 2 Wrapper.'),
  );

  $form['form_settings']['postcodeanywhere_id_line3'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 3'),
    '#default_value' => variable_get('postcodeanywhere_id_line3', "input[id*='edit-address-line3']"),
    '#description' => t('jQuery selector for existing input field for Address line 3.'),
  );

  $form['form_settings']['postcodeanywhere_id_line3_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Address Line 3 Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_line3_wrapper', "div.form-item-address-line3"),
    '#description' => t('jQuery selector for existing input field for Address line 3 Wrapper.'),
  );

  $form['form_settings']['postcodeanywhere_id_town'] = array(
    '#type' => 'textarea',
    '#title' => t('Town'),
    '#default_value' => variable_get('postcodeanywhere_id_town', "input[id*='edit-address-city']"),
    '#description' => t('jQuery selector for existing input field for Town Name.'),
  );

  $form['form_settings']['postcodeanywhere_id_town_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('Town Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_town_wrapper', "div.form-item-address-city"),
    '#description' => t('jQuery selector for existing input field for Town Wrapper.'),
  );

  $form['form_settings']['postcodeanywhere_id_county'] = array(
    '#type' => 'textarea',
    '#title' => t('County'),
    '#default_value' => variable_get('postcodeanywhere_id_county', "input[id*='edit-address-county']"),
    '#description' => t('jQuery selector for existing input field for County Name.'),
  );

  $form['form_settings']['postcodeanywhere_id_county_wrapper'] = array(
    '#type' => 'textarea',
    '#title' => t('County Wrapper'),
    '#default_value' => variable_get('postcodeanywhere_id_county_wrapper', "div.form-item-address-county"),
    '#description' => t('jQuery selector for existing input field for county Wrapper.'),
  );

  $form['other_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Form Settings'),
    '#description' => t('Form Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  if (module_exists('addressfield')) {
    $form['other_settings']['postcodeanywhere_addressfield'] = array(
      '#type' => 'checkbox',
      '#title' => t('Address field integration.'),
      '#default_value' => variable_get('postcodeanywhere_addressfield', FALSE),
      '#description' => t('Enable if you are using PCA widget with the addressfield.'),
    );
  }

  $form['other_settings']['postcodeanywhere_id_country_uk_value'] = array(
    '#type' => 'textfield',
    '#title' => t('GB Country Key'),
    '#description' => t('Type here the value for uk in country select'),
    '#default_value' => variable_get('postcodeanywhere_id_country_uk_value', 'GB'),
  );

  $form['other_settings']['postcodeanywhere_submit_label_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Submit button label'),
    '#description' => t('Enter the label for the form submit button.'),
    '#default_value' => variable_get('postcodeanywhere_submit_label_value', 'Find address'),
  );

  $form['other_settings']['postcodeanywhere_reset_label_value'] = array(
    '#type' => 'textfield',
    '#title' => t('Reset button label'),
    '#description' => t('Enter the label for the form reset button.'),
    '#default_value' => variable_get('postcodeanywhere_reset_label_value', 'Reset'),
  );

  return system_settings_form($form);
}
