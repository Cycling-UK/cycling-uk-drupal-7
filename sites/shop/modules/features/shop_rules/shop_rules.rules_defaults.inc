<?php
/**
 * @file
 * shop_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function shop_rules_default_rules_configuration() {
  $items = array();
  $items['rules_copy_name_and_address_from_myself_membership_to_order'] = entity_import('rules_config', '{ "rules_copy_name_and_address_from_myself_membership_to_order" : {
      "LABEL" : "Copy name and address from myself membership to order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "cyclinguk_commerce", "commerce_cart", "entity" ],
      "ON" : { "commerce_cart_product_add" : [], "commerce_line_item_update" : [] },
      "IF" : [
        { "OR" : [
            { "data_is" : { "data" : [ "commerce-line-item:type" ], "value" : "membership_self" } },
            { "data_is" : {
                "data" : [ "commerce_line_item:type" ],
                "value" : "affiliate_membership_self"
              }
            },
            { "data_is" : {
                "data" : [ "commerce_line_item:type" ],
                "value" : "family_membership_self"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "commerce_order", "value" : [ "commerce-line-item:order" ] },
            "PROVIDE" : { "variable_added" : { "order" : "Order" } }
          }
        },
        { "cyclinguk_commerce_address_line_to_order" : { "line_item" : [ "commerce-line-item" ], "order" : [ "order" ] } },
        { "cyclinguk_commerce_line_item_email_to_order" : { "line_item" : [ "commerce-line-item" ], "order" : [ "order" ] } }
      ]
    }
  }');
  $items['rules_display_added_to_cart_message'] = entity_import('rules_config', '{ "rules_display_added_to_cart_message" : {
      "LABEL" : "Goto Basket and display added to basket message (without link)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "NOT text_matches" : { "text" : [ "site:current-page:url" ], "match" : "checkout" } }
      ],
      "DO" : [
        { "redirect" : { "url" : "basket" } },
        { "drupal_message" : { "message" : "[commerce-line-item:line-item-title] added to your basket." } }
      ]
    }
  }');
  $items['rules_handle_memberships'] = entity_import('rules_config', '{ "rules_handle_memberships" : {
      "LABEL" : "Handle memberships",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "cyclinguk_commerce", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "cyclinguk_commerce_handle_memberships" : { "order" : [ "commerce-order" ] } }
      ]
    }
  }');
  $items['rules_hide_dd_form_if_no_dd_items'] = entity_import('rules_config', '{ "rules_hide_dd_form_if_no_dd_items" : {
      "LABEL" : "Hide DD form if no DD items",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_rules_extra" ],
      "ON" : { "commerce_rules_extra_process_checkout_pane" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "commerce_order:commerce_order_total:direct_debit:amount" ],
            "op" : "\\u003E",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_rules_extra_change_pane" : {
            "pane_id" : "cyclinguk_commerce_directdebit",
            "page_id" : "\\u003Csame\\u003E",
            "enabled" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_limit_some_products_to_one_per_basket'] = entity_import('rules_config', '{ "rules_limit_some_products_to_one_per_basket" : {
      "LABEL" : "Limit some products to one per basket",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "9",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "commerce_line_item_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce_line_item:type" ], "value" : "membership_renewal" } },
        { "data_is" : {
            "data" : [ "commerce_line_item:quantity" ],
            "op" : "\\u003E",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce_line_item:quantity" ], "value" : "1" } },
        { "drupal_message" : { "message" : "[commerce-line-item:line-item-title] is already in your basket." } }
      ]
    }
  }');
  $items['rules_load_source_codes_from_care'] = entity_import('rules_config', '{ "rules_load_source_codes_from_care" : {
      "LABEL" : "Load Source codes from CARE",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "init" : [] },
      "DO" : [
        { "care_fields_import_source_codes" : [] },
        { "care_fields_import_promotion_codes" : [] }
      ]
    }
  }');
  $items['rules_prevent_duplicate_membership_products_in_basket'] = entity_import('rules_config', '{ "rules_prevent_duplicate_membership_products_in_basket" : {
      "LABEL" : "Prevent duplicate membership products in basket",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_order", "entity" ],
      "ON" : { "commerce_line_item_presave" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-line-item:type" ],
            "op" : "IN",
            "value" : { "value" : { "gift_membership" : "gift_membership", "membership" : "membership" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item:commerce-product" ],
            "field" : "field_name"
          }
        },
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce-line-item:order" ],
            "product_id" : [ "commerce-line-item:commerce-product:sku" ],
            "operator" : "=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce_line_item:quantity" ], "value" : "1" } },
        { "drupal_message" : {
            "message" : "This product is already in your basket!",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  $items['rules_save_to_care'] = entity_import('rules_config', '{ "rules_save_to_care" : {
      "LABEL" : "Save to CARE",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_rules", "rules", "care_user" ],
      "ON" : { "cron" : [] },
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "care_user_pending_changes",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : [],
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "care_user_save_all" : { "account" : [ "entity_fetched" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_set_membership_number'] = entity_import('rules_config', '{ "rules_set_membership_number" : {
      "LABEL" : "Set membership number",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--product_membership_renewal" : { "bundle" : "product_membership_renewal" } },
      "DO" : []
    }
  }');
  return $items;
}
