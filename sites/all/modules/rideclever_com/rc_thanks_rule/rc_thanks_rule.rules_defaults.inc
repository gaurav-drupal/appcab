<?php
/**
 * @file
 * rc_thanks_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_thanks_rule_default_rules_configuration() {
  $items = array();
  $items['rules_thanks'] = entity_import('rules_config', '{ "rules_thanks" : {
      "LABEL" : "Thanks",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "custom_pickup" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "[node:author], your ride has been scheduled successfully. Your car will be dispatched to [node:field_rider_address].\\r\\n" } },
        { "custom_pickup_send_driver_alerts" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
