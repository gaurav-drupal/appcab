<?php
/**
 * @file
 * rc_accept_taxi_ride_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_accept_taxi_ride_rule_default_rules_configuration() {
  $items = array();
  $items['rules_accept_taxi_ride'] = entity_import('rules_config', '{ "rules_accept_taxi_ride" : {
      "LABEL" : "Accept taxi ride",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "driver", "taxi" ],
      "REQUIRES" : [ "rules", "custom_order_ride" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "AND" : [
            { "node_is_of_type" : {
                "node" : [ "node" ],
                "type" : { "value" : { "taxi_ride" : "taxi_ride" } }
              }
            },
            { "AND" : [
                { "text_matches" : {
                    "text" : [ "site:current-page:url" ],
                    "match" : "accept",
                    "operation" : "ends"
                  }
                },
                { "data_is_empty" : { "data" : [ "node:field-car-driver" ] } }
              ]
            }
          ]
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "8" : "8" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "custom_order_ride_set_driver" : { "user" : [ "site:current-user" ], "node" : [ "node" ] } },
        { "user_remove_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "8" : "8" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-ride-event" ],
            "value" : { "value" : { "8" : "8" } }
          }
        }
      ]
    }
  }');
  return $items;
}
