<?php
/**
 * @file
 * rc_driver_duty_links_rules.features.inc
 */

/**
 * Implements hook_default_rules_link().
 */
function rc_driver_duty_links_rules_default_rules_link() {
  $items = array();
  $items['driver_available'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Go on duty",
      "link_type" : "token",
      "bundles" : [],
      "entity_link" : 1
    },
    "name" : "driver_available",
    "label" : "Driver Available",
    "path" : "driver_available",
    "entity_type" : "user",
    "rdf_mapping" : []
  }');
  $items['driver_off_duty'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Go off duty",
      "link_type" : "token",
      "bundles" : [],
      "entity_link" : 1
    },
    "name" : "driver_off_duty",
    "label" : "Driver off duty",
    "path" : "driver_off_duty",
    "entity_type" : "user",
    "rdf_mapping" : []
  }');
  return $items;
}
