<?php
/**
 * @file
 * my_driver_coming.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function my_driver_coming_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'rc_driver_progress';
  $openlayers_maps->title = 'RC Driver Progress';
  $openlayers_maps->description = 'This map shows the user his/her driver\'s position in relation to them';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.35160060926, 37.780980811008',
        'zoom' => '14',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 0,
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '0',
        'element_id' => '',
      ),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 0,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'new_my_driver_coming_openlayers_1' => 'new_my_driver_coming_openlayers_1',
          'new_my_driver_coming_openlayers_2' => 'new_my_driver_coming_openlayers_2',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'new_my_driver_coming_openlayers_1',
        'point_zoom_level' => '14',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'new_my_driver_coming_openlayers_1' => 'new_my_driver_coming_openlayers_1',
      'new_my_driver_coming_openlayers_2' => 'new_my_driver_coming_openlayers_2',
    ),
    'layer_weight' => array(
      'all_drivers_openlayers_1' => '0',
      'new_my_driver_coming_openlayers_1' => '0',
      'new_my_driver_coming_openlayers_2' => '0',
      'driver_coming_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'new_my_driver_coming_openlayers_1' => 'car_icon',
      'new_my_driver_coming_openlayers_2' => 'rider',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'new_my_driver_coming_openlayers_1' => 'car_icon',
      'new_my_driver_coming_openlayers_2' => 'rider',
    ),
    'layer_activated' => array(
      'new_my_driver_coming_openlayers_1' => 'new_my_driver_coming_openlayers_1',
      'new_my_driver_coming_openlayers_2' => 'new_my_driver_coming_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'new_my_driver_coming_openlayers_1' => 'new_my_driver_coming_openlayers_1',
      'new_my_driver_coming_openlayers_2' => 'new_my_driver_coming_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'rider',
      'select' => 'rider',
      'temporary' => 'rider',
    ),
  );
  $export['rc_driver_progress'] = $openlayers_maps;

  return $export;
}
