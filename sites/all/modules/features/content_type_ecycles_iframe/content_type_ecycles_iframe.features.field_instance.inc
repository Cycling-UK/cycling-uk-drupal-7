<?php

/**
 * @file
 * content_type_ecycles_iframe.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_ecycles_iframe_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ecycle_iframe-body'.
  $field_instances['node-ecycle_iframe-body'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>You only need to add the <iframe> code here, you do not need to add the additional javascript wrapper for resizing the iframe.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'iFrame code',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 0,
          'code' => 'code',
          'email' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'paragraphs' => 0,
          'plain_text' => 0,
          'public_filter' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic' => array(
              'weight' => -8,
            ),
            'code' => array(
              'weight' => -6,
            ),
            'email' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -7,
            ),
            'paragraphs' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
            'public_filter' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_date'.
  $field_instances['node-ecycle_iframe-field_date'] = array(
    'bundle' => 'ecycle_iframe',
    'deleted' => 0,
    'description' => 'If the iFrame is for a loan then enter the first day of the month, e.g. 1 July for a loan period that starts in July.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date of event or start date of loan',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_ecycle_event_type'.
  $field_instances['node-ecycle_iframe-field_ecycle_event_type'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ecycle_event_type',
    'label' => 'Event type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_ecycle_hub'.
  $field_instances['node-ecycle_iframe-field_ecycle_hub'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ecycle_hub',
    'label' => 'Hub',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_ecycle_loan_period'.
  $field_instances['node-ecycle_iframe-field_ecycle_loan_period'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ecycle_loan_period',
    'label' => 'Loan period',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_ecycle_location'.
  $field_instances['node-ecycle_iframe-field_ecycle_location'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ecycle_location',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ecycle_iframe-field_iframe_type'.
  $field_instances['node-ecycle_iframe-field_iframe_type'] = array(
    'bundle' => 'ecycle_iframe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_iframe_type',
    'label' => 'iFrame type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'entityreference_live_preview' => array(
          'enabled' => 0,
          'mode' => 'default',
          'preview_type' => 'target',
        ),
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>You only need to add the <iframe> code here, you do not need to add the additional javascript wrapper for resizing the iframe.</strong>');
  t('Date of event or start date of loan');
  t('Event type');
  t('Hub');
  t('If the iFrame is for a loan then enter the first day of the month, e.g. 1 July for a loan period that starts in July.');
  t('Loan period');
  t('Location');
  t('iFrame code');
  t('iFrame type');

  return $field_instances;
}
