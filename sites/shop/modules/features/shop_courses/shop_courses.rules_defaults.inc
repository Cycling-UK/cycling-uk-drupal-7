<?php
/**
 * @file
 * shop_courses.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function shop_courses_default_rules_configuration() {
  $items = array();
  $items['rules_hide_course_booking_terms_if_no_courses'] = entity_import('rules_config', '{ "rules_hide_course_booking_terms_if_no_courses" : {
      "LABEL" : "Hide course booking terms if no courses",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_bulk_operations", "commerce_rules_extra" ],
      "ON" : { "commerce_rules_extra_process_checkout_pane" : [] },
      "IF" : [
        { "NOT views_bulk_operations_condition_result_count" : {
            "view" : "order_product_items|default",
            "args" : "[commerce-order:order-id]\\r\\ncourse",
            "minimum" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "commerce_fieldgroup_pane__group_course_booking_terms",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
