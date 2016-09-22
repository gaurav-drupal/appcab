<?php
/**
 * @file
 * rc_available_rides_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_available_rides_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'available_rides';
  $view->description = 'Available rides -- Needs updated to check if a driver is assigned.';
  $view->tag = 'default, admin, driver';
  $view->base_table = 'node';
  $view->human_name = 'Available rides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'panel ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Geoloc */
  $handler->display->display_options['fields']['field_geoloc']['id'] = 'field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['table'] = 'field_data_field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['field'] = 'field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['label'] = '';
  $handler->display->display_options['fields']['field_geoloc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geoloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geoloc']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_geoloc']['group_column'] = 'entity_id';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = '';
  $handler->display->display_options['fields']['last_updated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'raw time ago';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/accept">[field_geoloc]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: datageo */
  $handler->display->display_options['fields']['field_datageo']['id'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['table'] = 'field_data_field_datageo';
  $handler->display->display_options['fields']['field_datageo']['field'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_datageo']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Time and date */
  $handler->display->display_options['fields']['field_start_time']['id'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time']['table'] = 'field_data_field_start_time';
  $handler->display->display_options['fields']['field_start_time']['field'] = 'field_start_time';
  $handler->display->display_options['fields']['field_start_time']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Proximity: Distance */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'openlayers_proximity';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['expose']['label'] = 'Distance';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ride_booker' => 'ride_booker',
  );
  /* Filter criterion: Content: Driver (field_car_driver) */
  $handler->display->display_options['filters']['field_car_driver_target_id']['id'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['table'] = 'field_data_field_car_driver';
  $handler->display->display_options['filters']['field_car_driver_target_id']['field'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ride_booker' => 'ride_booker',
  );
  /* Filter criterion: Content: Driver (field_car_driver) */
  $handler->display->display_options['filters']['field_car_driver_target_id']['id'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['table'] = 'field_data_field_car_driver';
  $handler->display->display_options['filters']['field_car_driver_target_id']['field'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'Rides_available';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_datageo',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'nothing',
    'description_field' => '#row',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Geoloc */
  $handler->display->display_options['fields']['field_geoloc']['id'] = 'field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['table'] = 'field_data_field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['field'] = 'field_geoloc';
  $handler->display->display_options['fields']['field_geoloc']['label'] = '';
  $handler->display->display_options['fields']['field_geoloc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geoloc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geoloc']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_geoloc']['group_column'] = 'entity_id';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = '';
  $handler->display->display_options['fields']['last_updated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'raw time ago';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/[nid]/accept">[field_geoloc]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: datageo */
  $handler->display->display_options['fields']['field_datageo']['id'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['table'] = 'field_data_field_datageo';
  $handler->display->display_options['fields']['field_datageo']['field'] = 'field_datageo';
  $handler->display->display_options['fields']['field_datageo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_datageo']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ride_booker' => 'ride_booker',
  );
  /* Filter criterion: Content: Driver (field_car_driver) */
  $handler->display->display_options['filters']['field_car_driver_target_id']['id'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['table'] = 'field_data_field_car_driver';
  $handler->display->display_options['filters']['field_car_driver_target_id']['field'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ride_booker' => 'ride_booker',
  );
  /* Filter criterion: Content: Driver (field_car_driver) */
  $handler->display->display_options['filters']['field_car_driver_target_id']['id'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['table'] = 'field_data_field_car_driver';
  $handler->display->display_options['filters']['field_car_driver_target_id']['field'] = 'field_car_driver_target_id';
  $handler->display->display_options['filters']['field_car_driver_target_id']['operator'] = 'empty';
  /* Filter criterion: Content: Time and date (field_start_time) */
  $handler->display->display_options['filters']['field_start_time_value']['id'] = 'field_start_time_value';
  $handler->display->display_options['filters']['field_start_time_value']['table'] = 'field_data_field_start_time';
  $handler->display->display_options['filters']['field_start_time_value']['field'] = 'field_start_time_value';
  $handler->display->display_options['filters']['field_start_time_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_start_time_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_start_time_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_start_time_value']['default_to_date'] = 'now + 20 min';
  $handler->display->display_options['path'] = 'scheduled-rides';
  $translatables['available_rides'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/node/[nid]/accept">[field_geoloc]</a>'),
    t('datageo'),
    t('Time and date'),
    t('Distance'),
    t('Page'),
    t('OpenLayers Data Overlay'),
  );
  $export['available_rides'] = $view;

  return $export;
}
