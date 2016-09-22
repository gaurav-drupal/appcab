<?php
/**
 * @file
 * taxi_towncar_employment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxi_towncar_employment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function taxi_towncar_employment_node_info() {
  $items = array(
    'driver_application_taxi' => array(
      'name' => t('Driver Application Taxi'),
      'base' => 'node_content',
      'description' => t('A form for prospective drivers to fill in to be considered for a taxi driver position.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'driver_application_towncar' => array(
      'name' => t('Driver Application towncar'),
      'base' => 'node_content',
      'description' => t('A form for prospective drivers to fill in to be considered for a towncar driver position.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
