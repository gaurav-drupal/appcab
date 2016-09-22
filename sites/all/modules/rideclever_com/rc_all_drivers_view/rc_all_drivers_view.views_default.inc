<?php
/**
 * @file
 * rc_all_drivers_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_all_drivers_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_drivers';
  $view->description = '';
  $view->tag = 'default, customer, admin';
  $view->base_table = 'profile';
  $view->human_name = 'All drivers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All drivers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Profile: Car Location */
  $handler->display->display_options['fields']['field_car_location']['id'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['table'] = 'field_data_field_car_location';
  $handler->display->display_options['fields']['field_car_location']['field'] = 'field_car_location';
  $handler->display->display_options['fields']['field_car_location']['label'] = '';
  $handler->display->display_options['fields']['field_car_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_car_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_car_location']['settings'] = array(
    'data' => 'full',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'all-drivers';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    11 => '11',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Available SF Taxi Drivers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    11 => '11',
  );
  $translatables['all_drivers'] = array(
    t('Master'),
    t('All drivers'),
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
    t('Page'),
    t('OpenLayers Data Overlay'),
    t('User'),
  );
  $export['all_drivers'] = $view;

  return $export;
}
