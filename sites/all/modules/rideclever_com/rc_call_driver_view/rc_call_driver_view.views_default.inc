<?php
/**
 * @file
 * rc_call_driver_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_call_driver_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calldriver';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'calldriver';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_car_driver_node']['id'] = 'reverse_field_car_driver_node';
  $handler->display->display_options['relationships']['reverse_field_car_driver_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_car_driver_node']['field'] = 'reverse_field_car_driver_node';
  $handler->display->display_options['relationships']['reverse_field_car_driver_node']['relationship'] = 'user';
  /* Field: Field: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['text'] = '<a href="tel:[field_phone_number]">Call Driver</a>';
  $handler->display->display_options['fields']['field_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone_number']['element_class'] = 'button success';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  /* Field: User: Rate */
  $handler->display->display_options['fields']['field_rate']['id'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['table'] = 'field_data_field_rate';
  $handler->display->display_options['fields']['field_rate']['field'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_rate']['label'] = '';
  $handler->display->display_options['fields']['field_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_car_driver_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['calldriver'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User'),
    t('Content referencing User from field_car_driver'),
    t('<a href="tel:[field_phone_number]">Call Driver</a>'),
    t('All'),
    t('Block'),
  );
  $export['calldriver'] = $view;

  return $export;
}
