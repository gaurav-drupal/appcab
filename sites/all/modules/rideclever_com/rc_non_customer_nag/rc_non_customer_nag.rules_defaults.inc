<?php
/**
 * @file
 * rc_non_customer_nag.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rc_non_customer_nag_default_rules_configuration() {
  $items = array();
  $items['rules_non_customer_nag'] = entity_import('rules_config', '{ "rules_non_customer_nag" : {
      "LABEL" : "Non-customer nag",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_view" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : {
                "1" : "1",
                "3" : "3",
                "4" : "4",
                "5" : "5",
                "6" : "6",
                "7" : "7",
                "8" : "8",
                "9" : "9",
                "10" : "10",
                "11" : "11"
              }
            },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "\\u003Ca class=\\u0022taxinag\\u0022 href=\\u0022\\/node\\/add\\/taxi-ride\\u0022\\u003EGet a TAXI\\u003C\\/a\\u003E\\u003Cbr\\/\\u003E\\r\\n\\u003Cdiv class=\\u0022message-verbiag\\u0022\\u003ETo use our Town Car services, you must have a valid credit card on file.\\u003C\\/div\\u003E \\u003Ca class=\\u0022ccspecial\\u0022 href=\\u0022\\/checkout\\u0022\\u003EAdd credit card\\u003C\\/a\\u003E",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
