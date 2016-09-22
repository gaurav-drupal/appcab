<?php
/**
 * @file
 * rc_driver_duty_links_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_driver_duty_links_rules_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_driver_available'] = entity_import('rules_config', '{ "rules_link_condition_driver_available" : {
      "LABEL" : "Rules link: Driver Available condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "user", "type" : "user" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4", "11" : "11", "13" : "13" } },
            "operation" : "OR"
          }
        },
        { "AND" : [
            { "NOT user_has_role" : {
                "account" : [ "user" ],
                "roles" : { "value" : { "8" : "8" } },
                "operation" : "OR"
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_link_condition_driver_off_duty'] = entity_import('rules_config', '{ "rules_link_condition_driver_off_duty" : {
      "LABEL" : "Rules link: Driver off duty condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4", "11" : "11", "13" : "13" } },
            "operation" : "OR"
          }
        },
        { "AND" : [] },
        { "user_has_role" : {
            "account" : [ "user" ],
            "roles" : { "value" : { "7" : "7", "8" : "8", "9" : "9", "10" : "10" } },
            "operation" : "OR"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_driver_available'] = entity_import('rules_config', '{ "rules_link_set_driver_available" : {
      "LABEL" : "Rules link: Driver Available rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "user_add_role" : { "account" : [ "user" ], "roles" : { "value" : { "8" : "8" } } } }
            ],
            "LABEL" : "Make Driver available"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_driver_off_duty'] = entity_import('rules_config', '{ "rules_link_set_driver_off_duty" : {
      "LABEL" : "Rules link: Driver off duty rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "type" : "user", "label" : "user" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "user_remove_role" : {
                  "account" : [ "user" ],
                  "roles" : { "value" : { "7" : "7", "8" : "8", "9" : "9", "10" : "10" } }
                }
              }
            ],
            "LABEL" : "Remove roles"
          }
        }
      ]
    }
  }');
  return $items;
}
