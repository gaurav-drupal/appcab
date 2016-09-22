<?php
/**
 * @file
 * rc_cancel_ride_rule_links.features.inc
 */

/**
 * Implements hook_default_rules_link().
 */
function rc_cancel_ride_rule_links_default_rules_link() {
  $items = array();
  $items['cancel_pickup'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Cancel (driver)",
      "link_type" : "token",
      "bundles" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" },
      "entity_link" : 0
    },
    "name" : "cancel_pickup",
    "label" : "Cancel pickup",
    "path" : "cancel_pickup",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['cancel_ride'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Cancel",
      "link_type" : "token",
      "bundles" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" },
      "entity_link" : 0
    },
    "name" : "cancel_ride",
    "label" : "Cancel Ride",
    "path" : "cancel_ride",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['customer_no_show'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "No show",
      "link_type" : "token",
      "bundles" : { "ride_booker" : "ride_booker", "taxi_ride" : "taxi_ride" },
      "entity_link" : 0
    },
    "name" : "customer_no_show",
    "label" : "Customer no show",
    "path" : "customer_no_show",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
