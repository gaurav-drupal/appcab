<?php
/**
 * @file
 * rc_openlayers_maps.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function rc_openlayers_maps_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'car_icon';
  $openlayers_styles->title = 'Car icon';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/rideclever/images/caricon.png',
    'pointRadius' => 22,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['car_icon'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'rider';
  $openlayers_styles->title = 'Rider Icon';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/rideclever/images/rider.png',
    'pointRadius' => 16,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['rider'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'taxi_icon';
  $openlayers_styles->title = 'Taxi icon';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/rideclever/images/taximarker.png',
    'pointRadius' => 15,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['taxi_icon'] = $openlayers_styles;

  return $export;
}
