<?php
/**
 * @file
 * openlayers_taxonomy_test_feature.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openlayers_taxonomy_test_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function openlayers_taxonomy_test_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function openlayers_taxonomy_test_feature_node_info() {
  $items = array(
    'openlayers_taxonomy_test_type' => array(
      'name' => t('OpenLayers Taxonomy Test Type'),
      'base' => 'node_content',
      'description' => t('This is a test type for the OpenLayers Taxonomy module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
