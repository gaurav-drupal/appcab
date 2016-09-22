<?php
/**
 * @file
 * rc_start_taxi_ride_rules_link.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_start_taxi_ride_rules_link_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_start_taxi_cash'] = entity_import('rules_config', '{ "rules_link_condition_start_taxi_cash" : {
      "LABEL" : "Rules link: Start Ride  condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "taxi_ride" : "taxi_ride" } }
          }
        },
        { "NOT data_is" : {
            "data" : [ "node:field-ride-event" ],
            "value" : { "value" : { "6" : "6" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_set_start_taxi_cash'] = entity_import('rules_config', '{ "rules_link_set_start_taxi_cash" : {
      "LABEL" : "Rules link: Start Ride  rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
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
                  "value" : { "value" : { "6" : "6" } }
                }
              },
              { "redirect" : { "url" : "[site:url]" } }
            ],
            "LABEL" : "Customer picked up"
          }
        }
      ]
    }
  }');
  return $items;
}
