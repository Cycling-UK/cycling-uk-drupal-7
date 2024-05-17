<?php

/**
 * @file
 * table_field_paragraph_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function table_field_paragraph_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-table_field-field_table'.
  $field_instances['paragraphs_item-table_field-field_table'] = array(
    'bundle' => 'table_field',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'caption' => '',
          'import' => array(
            'file' => '',
            'import' => 'Upload CSV',
          ),
          'paste' => array(
            'data' => '',
            'paste_delimiter' => '',
            'paste_import' => 'Import & Rebuild',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 5,
            'rebuild' => 'Rebuild Table',
          ),
          'tabledata' => array(
            'row_0' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 1,
            ),
            'row_1' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 2,
            ),
            'row_2' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 3,
            ),
            'row_3' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 4,
            ),
            'row_4' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 5,
            ),
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tablefield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'export_csv' => 0,
          'header_orientation' => 'Horizontal',
          'hide_cols_skip_head' => 0,
          'hide_empty_cols' => 0,
          'hide_empty_rows' => 0,
          'hide_header' => 0,
          'sortable' => FALSE,
          'sticky_header' => 0,
          'striping' => 1,
          'table_custom_class_attributes' => 'table',
          'trim_trailing_cols' => 0,
          'trim_trailing_rows' => 0,
        ),
        'type' => 'tablefield_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_table',
    'label' => 'Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => 1,
        'data_sources' => array(
          'paste' => 'paste',
          'upload' => 'upload',
        ),
        'input_type' => 'textfield',
        'lock_values' => 0,
        'max_length' => 2048,
        'restrict_rebuild' => 0,
      ),
      'type' => 'tablefield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-table_field-field_text'.
  $field_instances['paragraphs_item-table_field-field_text'] = array(
    'bundle' => 'table_field',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 0,
          'code' => 0,
          'email' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'paragraphs' => 'paragraphs',
          'plain_text' => 'plain_text',
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
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-table_field-field_title'.
  $field_instances['paragraphs_item-table_field-field_title'] = array(
    'bundle' => 'table_field',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic' => 'basic',
          'code' => 'code',
          'email' => 'email',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'paragraphs' => 'paragraphs',
          'plain_text' => 'plain_text',
          'public_filter' => 'public_filter',
        ),
        'allowed_formats_toggle' => 0,
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
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Table');
  t('Text');
  t('Title');

  return $field_instances;
}
