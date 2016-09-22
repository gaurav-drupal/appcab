<?php
/**
 * @file
 * rc_beta_mode_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_beta_mode_rule_default_rules_configuration() {
  $items = array();
  $items['rules_beta_mode'] = entity_import('rules_config', '{ "rules_beta_mode" : {
      "LABEL" : "Beta mode",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : [ "profile2_view" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "12" : "12" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "RideClever is in testing mode. No rides can be scheduled until we launch on Monday.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  return $items;
}
