<?php
/**
 * @file
 * rc_user_driver_coming.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_user_driver_coming_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'userdrivercoming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'userdrivercoming';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_datageo',
      'rendered' => 1,
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
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $translatables['userdrivercoming'] = array(
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
    t('All'),
    t('OpenLayers Data Overlay'),
  );
  $export['userdrivercoming'] = $view;

  return $export;
}
