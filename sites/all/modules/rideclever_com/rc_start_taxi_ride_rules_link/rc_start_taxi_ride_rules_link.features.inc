<?php
/**
 * @file
 * rc_start_taxi_ride_rules_link.features.inc
 */

/**
 * Implements hook_default_rules_link().
 */
function rc_start_taxi_ride_rules_link_default_rules_link() {
  $items = array();
  $items['start_taxi_cash'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Ride",
      "link_type" : "token",
      "bundles" : { "taxi_ride" : "taxi_ride" },
      "entity_link" : 0
    },
    "name" : "start_taxi_cash",
    "label" : "Start Ride ",
    "path" : "start_taxi_ride_cash",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
