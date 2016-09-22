<?php
/**
 * @file
 * rc_ride_booking_modules.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rc_ride_booking_modules_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rc_ride_booking_modules_node_info() {
  $items = array(
    'ride_booker' => array(
      'name' => t('Ride Clever'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'taxi_ride' => array(
      'name' => t('Taxi Ride'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
