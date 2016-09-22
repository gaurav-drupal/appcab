<?php
/**
 * @file
 * rc_cancel_ride_rule_links.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_cancel_ride_rule_links_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_cancel_pickup'] = entity_import('rules_config', '{ "rules_link_condition_cancel_pickup" : {
      "LABEL" : "Rules link: Cancel pickup condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
          }
        },
        { "data_is" : {
            "data" : [ "site:current-user:uid" ],
            "value" : [ "node:field-car-driver:uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_cancel_ride'] = entity_import('rules_config', '{ "rules_link_condition_cancel_ride" : {
      "LABEL" : "Rules link: Cancel Ride condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
          }
        },
        { "NOT data_is" : {
            "data" : [ "node:field-ride-event" ],
            "value" : { "value" : { "6" : "6" } }
          }
        },
        { "NOT data_is" : {
            "data" : [ "node:field-ride-event" ],
            "value" : { "value" : { "9" : "9" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_customer_no_show'] = entity_import('rules_config', '{ "rules_link_condition_customer_no_show" : {
      "LABEL" : "Rules link: Customer no show condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
          }
        },
        { "NOT data_is" : {
            "data" : [ "node:field-ride-event" ],
            "value" : { "value" : { "9" : "9" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_set_cancel_pickup'] = entity_import('rules_config', '{ "rules_link_set_cancel_pickup" : {
      "LABEL" : "Rules link: Cancel pickup rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "custom_order_ride", "custom_pickup" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
                }
              }
            ],
            "DO" : [
              { "custom_order_ride_unset_driver" : { "node" : [ "node" ] } },
              { "data_set" : {
                  "data" : [ "node:field-ride-event" ],
                  "value" : { "value" : { "5" : "5" } }
                }
              },
              { "custom_pickup_send_driver_alerts" : { "node" : [ "node" ] } }
            ],
            "LABEL" : "Cancel Ride and return to queue"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_cancel_ride'] = entity_import('rules_config', '{ "rules_link_set_cancel_ride" : {
      "LABEL" : "Rules link: Cancel Ride rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "custom_messaging" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "node:field-ride-event" ],
                  "value" : { "value" : { "4" : "4" } }
                }
              },
              { "redirect" : { "url" : "user" } },
              { "drupal_message" : { "message" : "Ride [node:nid] Cancelled." } }
            ],
            "LABEL" : "Cancel Ride"
          }
        },
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "taxi_ride" : "taxi_ride" } }
                }
              },
              { "NOT data_is_empty" : { "data" : [ "node:field-car-driver" ] } }
            ],
            "DO" : [
              { "custom_messaging_send_user_alerts" : {
                  "user" : [ "node:field-car-driver" ],
                  "text" : "\\u003Ch4\\u003ERide [node:nid] has been canceled.\\u003C\\/h4\\u003E\\r\\n\\u003Caudio src=\\u0022\\/sites\\/all\\/themes\\/rideclever\\/bbmtone_lKRNBI1u.mp3\\u0022 autoplay\\u003E\\u003C\\/audio\\u003E"
                }
              }
            ],
            "LABEL" : "Send Driver alert"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_customer_no_show'] = entity_import('rules_config', '{ "rules_link_set_customer_no_show" : {
      "LABEL" : "Rules link: Customer no show rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules", "commerce_cart", "commerce_cardonfile" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "taxi_ride" : "taxi_ride" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "node:field-ride-event" ],
                  "value" : { "value" : { "9" : "9" } }
                }
              }
            ],
            "LABEL" : "Taxi No Show"
          }
        },
        { "RULE" : {
            "PROVIDE" : {
              "product_add_line_item" : { "base_charge" : "Base charge" },
              "process_card_response" : { "process_card_response" : "Process Card Response" }
            },
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "ride_booker" : "ride_booker" } }
                }
              }
            ],
            "DO" : [
              { "commerce_cart_product_add_by_sku" : {
                  "USING" : {
                    "user" : [ "node:field-order:owner" ],
                    "sku" : "sf-towncar",
                    "quantity" : "1",
                    "combine" : 1
                  },
                  "PROVIDE" : { "product_add_line_item" : { "base_charge" : "Base charge" } }
                }
              },
              { "commerce_cardonfile_order_process_card" : {
                  "USING" : {
                    "order" : [ "node:field-order" ],
                    "charge" : { "value" : { "amount" : 1500, "currency_code" : "USD" } },
                    "card_data" : [ "" ],
                    "forced_instance_id" : "authnet_aim|commerce_payment_authnet_aim"
                  },
                  "PROVIDE" : { "process_card_response" : { "process_card_response" : "Process Card Response" } }
                }
              }
            ],
            "LABEL" : "Town Car no show"
          }
        }
      ]
    }
  }');
  return $items;
}
