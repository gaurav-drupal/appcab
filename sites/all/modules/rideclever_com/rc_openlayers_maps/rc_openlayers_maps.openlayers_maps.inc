<?php
/**
 * @file
 * rc_openlayers_maps.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function rc_openlayers_maps_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'all_drivers';
  $openlayers_maps->title = 'All Drivers';
  $openlayers_maps->description = 'Map of all driver\'s locations';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.35160060926, 37.780980811008',
        'zoom' => '12',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'all_drivers_openlayers_2' => 0,
        ),
        'distance' => '20',
        'threshold' => '',
      ),
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '15',
        'watch' => '1',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
    ),
    'layer_weight' => array(
      'rider_driver_on_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'available_rides_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'all_drivers_openlayers_1' => 'car_icon',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'all_drivers_openlayers_1' => 'car_icon',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_activated' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'taxi_icon',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['all_drivers'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'all_drivers_in_area';
  $openlayers_maps->title = 'All Drivers in Area';
  $openlayers_maps->description = 'A map for the user page that shows all available cars both towncar and taxi';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => 'sites/all/modules/openlayers_proxy/?hl=0001000000&q=',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.35160060926, 37.780980811008',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'all_drivers_openlayers_2' => 0,
          'all_drivers_openlayers_1' => 0,
        ),
        'distance' => '20',
        'threshold' => '',
      ),
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
    ),
    'layer_weight' => array(
      'rider_driver_on_map_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'all_drivers_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => 'taxi_icon',
      'all_drivers_openlayers_1' => 'car_icon',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => 'taxi_icon',
      'all_drivers_openlayers_1' => 'car_icon',
    ),
    'layer_activated' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'all_drivers_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'all_drivers_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['all_drivers_in_area'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'driver_coming';
  $openlayers_maps->title = 'Driver coming';
  $openlayers_maps->description = 'a map of where the driver is';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => 'sites/all/modules/openlayers_proxy/?hl=0001000000&q=',
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
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'rider_driver_on_map_openlayers_1' => 'rider_driver_on_map_openlayers_1',
          'userdrivercoming_openlayers_1' => 'userdrivercoming_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
      ),
      'openlayers_behavior_drawfeatures' => array(
        'feature_types' => array(
          'point' => 0,
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '0',
        'element_id' => '',
      ),
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '12',
        'watch' => '1',
      ),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 0,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'rider_driver_on_map_openlayers_1' => 'rider_driver_on_map_openlayers_1',
          'userdrivercoming_openlayers_1' => 'userdrivercoming_openlayers_1',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'osm_mapnik' => 0,
          'rider_driver_on_map_openlayers_1' => 0,
          'userdrivercoming_openlayers_1' => 0,
        ),
        'point_zoom_level' => '13',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'rider_driver_on_map_openlayers_1' => 'rider_driver_on_map_openlayers_1',
      'userdrivercoming_openlayers_1' => 'userdrivercoming_openlayers_1',
    ),
    'layer_weight' => array(
      'ol_locator_proximity_search_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'all_drivers_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => 'rcicon',
      'scheduled_map_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_2' => 'rider',
      'rider_driver_on_map_openlayers_1' => 'car_icon',
      'userdrivercoming_openlayers_1' => 'rider',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => 'rcicon',
      'scheduled_map_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'available_rides_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'rider_driver_on_map_openlayers_2' => 'rider',
      'rider_driver_on_map_openlayers_1' => 'car_icon',
      'userdrivercoming_openlayers_1' => 'rider',
    ),
    'layer_activated' => array(
      'rider_driver_on_map_openlayers_1' => 'rider_driver_on_map_openlayers_1',
      'userdrivercoming_openlayers_1' => 'userdrivercoming_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'all_drivers_openlayers_2' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'rider_driver_on_map_openlayers_1' => 'rider_driver_on_map_openlayers_1',
      'userdrivercoming_openlayers_1' => 'userdrivercoming_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'all_drivers_openlayers_2' => 0,
      'available_rides_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'rcicon',
      'select' => 'rider',
      'temporary' => 'rider',
    ),
  );
  $export['driver_coming'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'rc_map';
  $openlayers_maps->title = 'RC Map';
  $openlayers_maps->description = 'RC map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => '',
    'css_path' => '/sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => 'sites/all/modules/openlayers_proxy/?hl=0001000000&q=',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.39205145324, 37.786630501381',
        'zoom' => '15',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '16',
        'watch' => '1',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_mouseposition' => array(
        'prefix' => '',
        'separator' => ', ',
        'suffix' => '',
        'numDigits' => '',
        'emptyString' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'all_drivers_openlayers_1' => 'all_drivers_openlayers_1',
    ),
    'layer_weight' => array(
      'scheduled_map_openlayers_1' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
      'driver_coming_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '2',
      'mapping_openlayers_1' => '3',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_geojson_picture_this' => 'rider',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => 'default_marker_red',
      'clone_of_mapping_openlayers_1' => 'default_marker_red',
      'driver_coming_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'all_drivers_openlayers_1' => 'car_icon',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_geojson_picture_this' => 'rider',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => 'default_marker_red',
      'clone_of_mapping_openlayers_1' => 'default_marker_red',
      'driver_coming_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'all_drivers_openlayers_1' => 'car_icon',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_activated' => array(
      'all_drivers_openlayers_1' => 'all_drivers_openlayers_1',
      'all_drivers_openlayers_2' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'all_drivers_openlayers_1' => 'all_drivers_openlayers_1',
      'all_drivers_openlayers_2' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'rider',
      'select' => 'rider',
      'temporary' => 'rider',
    ),
  );
  $export['rc_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'rc_map_taxi';
  $openlayers_maps->title = 'RC Map Taxo';
  $openlayers_maps->description = 'RC map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => '',
    'css_path' => '/sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => 'sites/all/modules/openlayers_proxy/?hl=0001000000&q=',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.39205145324, 37.786630501381',
        'zoom' => '15',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '16',
        'watch' => '1',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
      ),
      'openlayers_behavior_mouseposition' => array(
        'prefix' => '',
        'separator' => ', ',
        'suffix' => '',
        'numDigits' => '',
        'emptyString' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
    ),
    'layer_weight' => array(
      'scheduled_map_openlayers_1' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'all_drivers_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
      'driver_coming_openlayers_1' => '0',
      'available_rides_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '2',
      'mapping_openlayers_1' => '3',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_geojson_picture_this' => 'rider',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => 'default_marker_red',
      'clone_of_mapping_openlayers_1' => 'default_marker_red',
      'driver_coming_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'all_drivers_openlayers_1' => 'car_icon',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_geojson_picture_this' => 'rider',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => 'default_marker_red',
      'clone_of_mapping_openlayers_1' => 'default_marker_red',
      'driver_coming_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'all_drivers_openlayers_1' => 'car_icon',
      'all_drivers_openlayers_2' => 'taxi_icon',
    ),
    'layer_activated' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'all_drivers_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'all_drivers_openlayers_2' => 'all_drivers_openlayers_2',
      'all_drivers_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'scheduled_map_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'rider',
      'select' => 'rider',
      'temporary' => 'rider',
    ),
  );
  $export['rc_map_taxi'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'scheduled_map';
  $openlayers_maps->title = 'Scheduled Map';
  $openlayers_maps->description = 'Map showing the scheduled rides';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => 'sites/all/modules/openlayers_proxy/?hl=0001000000&q=',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-122.35160060926, 37.780980811008',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'scheduled_map_openlayers_1' => 'scheduled_map_openlayers_1',
        ),
      ),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'scheduled_map_openlayers_1' => 'scheduled_map_openlayers_1',
    ),
    'layer_weight' => array(
      'rider_driver_on_map_openlayers_2' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'scheduled_map_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'scheduled_map_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'available_rides_openlayers_1' => '0',
      'mapping_openlayers_1' => '0',
      'clone_of_mapping_openlayers_1' => '0',
      'driver_coming_openlayers_1' => '0',
      'all_drivers_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_1' => '0',
      'rider_driver_on_map_openlayers_2' => '0',
      'userdrivercoming_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => 'default_marker_red',
      'scheduled_map_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'scheduled_map_openlayers_1' => 'scheduled_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'scheduled_map_openlayers_1' => 'scheduled_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'available_rides_openlayers_1' => 0,
      'mapping_openlayers_1' => 0,
      'clone_of_mapping_openlayers_1' => 0,
      'driver_coming_openlayers_1' => 0,
      'all_drivers_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_1' => 0,
      'rider_driver_on_map_openlayers_2' => 0,
      'userdrivercoming_openlayers_1' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_red',
      'select' => 'default_marker_red',
      'temporary' => 'default_marker_red',
    ),
  );
  $export['scheduled_map'] = $openlayers_maps;

  return $export;
}
