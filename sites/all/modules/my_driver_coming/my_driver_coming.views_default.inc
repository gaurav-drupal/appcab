<?php
/**
 * @file
 * my_driver_coming.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function my_driver_coming_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_my_driver_coming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Driver Coming';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_car_driver_target_id']['id'] = 'field_car_driver_target_id';
  $handler->display->display_options['relationships']['field_car_driver_target_id']['table'] = 'field_data_field_car_driver';
  $handler->display->display_options['relationships']['field_car_driver_target_id']['field'] = 'field_car_driver_target_id';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_car_driver_target_id';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'driver' => 'driver',
  );
  /* Field: Profile: Car Location */
  $handler->display->display_options['fields']['field_car_location']['id'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['table'] = 'field_data_field_car_location';
  $handler->display->display_options['fields']['field_car_location']['field'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_car_location']['label'] = '';
  $handler->display->display_options['fields']['field_car_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_car_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_car_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: datageo */
  $handler->display->display_options['fields']['field_datageo']['id'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['table'] = 'field_data_field_datageo';
  $handler->display->display_options['fields']['field_datageo']['field'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['label'] = '';
  $handler->display->display_options['fields']['field_datageo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datageo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_datageo']['settings'] = array(
    'data' => 'full',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'thedrivercomingonmap';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_car_location',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_car_location',
    'other_lon' => 'field_car_location',
    'wkt' => 'field_car_location',
    'other_top' => 'field_car_location',
    'other_right' => 'field_car_location',
    'other_bottom' => 'field_car_location',
    'other_left' => 'field_car_location',
    'name_field' => '',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Car Location */
  $handler->display->display_options['fields']['field_car_location']['id'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['table'] = 'field_data_field_car_location';
  $handler->display->display_options['fields']['field_car_location']['field'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_car_location']['label'] = '';
  $handler->display->display_options['fields']['field_car_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_car_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_car_location']['settings'] = array(
    'data' => 'full',
  );

  /* Display: OpenLayers Data Overlay 2 */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay 2', 'openlayers_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'theuseronthemapwaiting';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_datageo',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_datageo',
    'other_lon' => 'field_datageo',
    'wkt' => 'field_datageo',
    'other_top' => 'field_datageo',
    'other_right' => 'field_datageo',
    'other_bottom' => 'field_datageo',
    'other_left' => 'field_datageo',
    'name_field' => '',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: datageo */
  $handler->display->display_options['fields']['field_datageo']['id'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['table'] = 'field_data_field_datageo';
  $handler->display->display_options['fields']['field_datageo']['field'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['label'] = '';
  $handler->display->display_options['fields']['field_datageo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datageo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_datageo']['settings'] = array(
    'data' => 'full',
  );
  $translatables['new_my_driver_coming'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User entity referenced from field_car_driver'),
    t('Profile'),
    t('All'),
    t('OpenLayers Data Overlay'),
    t('OpenLayers Data Overlay 2'),
  );
  $export['new_my_driver_coming'] = $view;

  return $export;
}
