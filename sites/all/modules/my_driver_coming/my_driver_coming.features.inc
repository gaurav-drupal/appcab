<?php
/**
 * @file
 * my_driver_coming.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function my_driver_coming_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function my_driver_coming_views_api() {
  return array("api" => "3.0");
}
