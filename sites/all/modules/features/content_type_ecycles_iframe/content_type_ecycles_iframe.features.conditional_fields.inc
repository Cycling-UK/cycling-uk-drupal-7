<?php

/**
 * @file
 * content_type_ecycles_iframe.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function content_type_ecycles_iframe_conditional_fields_default_fields() {
  $items = array();

  $items["node:ecycle_iframe"] = array(
    array(
      'entity' => 'node',
      'bundle' => 'ecycle_iframe',
      'dependent' => 'field_ecycle_event_type',
      'dependee' => 'field_iframe_type',
      'options' => array(
        'state' => '!visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          306 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          251 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          201 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          236 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          261 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          196 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          256 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          216 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          266 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          246 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          11 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          271 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          276 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          281 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          241 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          291 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          296 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          306 => array(
            1 => 1,
            3 => 0,
          ),
          251 => array(
            1 => 1,
            3 => 0,
          ),
          201 => array(
            1 => 1,
            3 => 0,
          ),
          236 => array(
            1 => 1,
            3 => 0,
          ),
          261 => array(
            1 => 1,
            3 => 0,
          ),
          196 => array(
            1 => 1,
            3 => 0,
          ),
          256 => array(
            1 => 1,
            3 => 0,
          ),
          216 => array(
            1 => 1,
            3 => 0,
          ),
          266 => array(
            1 => 1,
            3 => 0,
          ),
          246 => array(
            1 => 1,
            3 => 0,
          ),
          11 => array(
            1 => 1,
            3 => 0,
          ),
          271 => array(
            1 => 1,
            3 => 0,
          ),
          276 => array(
            1 => 1,
            3 => 0,
          ),
          281 => array(
            1 => 1,
            3 => 0,
          ),
          241 => array(
            1 => 1,
            3 => 0,
          ),
          291 => array(
            1 => 1,
            3 => 0,
          ),
          296 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'loan',
        'value' => array(
          0 => array(
            'value' => 'loan',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'ecycle_iframe',
      'dependent' => 'field_ecycle_loan_period',
      'dependee' => 'field_iframe_type',
      'options' => array(
        'state' => '!visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          306 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          251 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          201 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          236 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          261 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          196 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          256 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          216 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          266 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          246 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          11 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          271 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          276 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          281 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          241 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          291 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          296 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          306 => array(
            1 => 1,
            3 => 0,
          ),
          251 => array(
            1 => 1,
            3 => 0,
          ),
          201 => array(
            1 => 1,
            3 => 0,
          ),
          236 => array(
            1 => 1,
            3 => 0,
          ),
          261 => array(
            1 => 1,
            3 => 0,
          ),
          196 => array(
            1 => 1,
            3 => 0,
          ),
          256 => array(
            1 => 1,
            3 => 0,
          ),
          216 => array(
            1 => 1,
            3 => 0,
          ),
          266 => array(
            1 => 1,
            3 => 0,
          ),
          246 => array(
            1 => 1,
            3 => 0,
          ),
          11 => array(
            1 => 1,
            3 => 0,
          ),
          271 => array(
            1 => 1,
            3 => 0,
          ),
          276 => array(
            1 => 1,
            3 => 0,
          ),
          281 => array(
            1 => 1,
            3 => 0,
          ),
          241 => array(
            1 => 1,
            3 => 0,
          ),
          291 => array(
            1 => 1,
            3 => 0,
          ),
          296 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'event',
        'value' => array(
          0 => array(
            'value' => 'event',
          ),
        ),
        'values' => array(),
      ),
    ),
  );

  return $items;
}
