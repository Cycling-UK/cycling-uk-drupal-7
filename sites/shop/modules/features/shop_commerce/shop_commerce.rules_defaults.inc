<?php
/**
 * @file
 * shop_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function shop_commerce_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_directdebit'] = entity_import('rules_config', '{ "commerce_payment_commerce_directdebit" : {
      "LABEL" : "UK Direct Debit payment method",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_directdebit" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_directdebit"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_commerce_tnspay'] = entity_import('rules_config', '{ "commerce_payment_commerce_tnspay" : {
      "LABEL" : "TNSPay",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "rules", "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce_order:commerce_order_total:base_price:amount" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "commerce_payment_enable_commerce_tnspay" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "commerce_tnspay",
                "settings" : {
                  "access_code" : "5F782CB6",
                  "merchant_id" : "CYCTOURBS03",
                  "merchant_secret_key" : "1A0A9C3B2118EBE97FC9F78B7B8B6C57",
                  "live_transact_url" : "https:\\/\\/secure.ap.tnspayments.com\\/vpcpay",
                  "test_transact_url" : "https:\\/\\/secure.ap.tnspayments.com\\/vpcpay",
                  "transact_mode" : "live",
                  "order_info" : "CTC",
                  "debug_mode" : 0
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_cyclinguk_commerce_directdebit'] = entity_import('rules_config', '{ "commerce_payment_cyclinguk_commerce_directdebit" : {
      "LABEL" : "Direct Debit",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_cyclinguk_commerce_directdebit" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "cyclinguk_commerce_directdebit"
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_priority_shipping'] = entity_import('rules_config', '{ "commerce_shipping_service_priority_shipping" : {
      "LABEL" : "Rate Priority Shipping",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "priority_shipping",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_standard_shipping'] = entity_import('rules_config', '{ "commerce_shipping_service_standard_shipping" : {
      "LABEL" : "Rate Standard Shipping",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "standard_shipping",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
