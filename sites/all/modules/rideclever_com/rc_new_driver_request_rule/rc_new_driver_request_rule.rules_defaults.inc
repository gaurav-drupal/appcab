<?php
/**
 * @file
 * rc_new_driver_request_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_new_driver_request_rule_default_rules_configuration() {
  $items = array();
  $items['rules_new_driver_request'] = entity_import('rules_config', '{ "rules_new_driver_request" : {
      "LABEL" : "New driver request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "driver_application_taxi" : "driver_application_taxi" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for your interest.\\r\\nWe will confirm your information and call you.\\r\\n-- Rideclever" } }
      ]
    }
  }');
  return $items;
}
