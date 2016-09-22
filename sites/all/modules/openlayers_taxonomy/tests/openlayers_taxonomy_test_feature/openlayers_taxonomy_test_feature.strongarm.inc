<?php
/**
 * @file
 * openlayers_taxonomy_test_feature.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function openlayers_taxonomy_test_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_openlayers_taxonomy_test_type';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_openlayers_taxonomy_test_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_openlayers_taxonomy_test_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_openlayers_taxonomy_test_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openlayers_taxonomy_test_type';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_openlayers_taxonomy_test_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_openlayers_taxonomy_test_type';
  $strongarm->value = 1;
  $export['node_submitted_openlayers_taxonomy_test_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_taxonomy_vids';
  $strongarm->value = array(
    1 => '1',
  );
  $export['openlayers_taxonomy_vids'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_taxonomy_view_display';
  $strongarm->value = 'openlayers_1';
  $export['openlayers_taxonomy_view_display'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_taxonomy_view_name';
  $strongarm->value = 'ol_taxonomy_test_view';
  $export['openlayers_taxonomy_view_name'] = $strongarm;

  return $export;
}
