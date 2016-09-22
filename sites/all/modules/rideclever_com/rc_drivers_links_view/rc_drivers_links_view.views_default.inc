<?php
/**
 * @file
 * rc_drivers_links_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_drivers_links_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'thedirverlinks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'thedirverlinks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'thedirverlinks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Start Ride */
  $handler->display->display_options['fields']['start_ride']['id'] = 'start_ride';
  $handler->display->display_options['fields']['start_ride']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['start_ride']['field'] = 'start_ride';
  $handler->display->display_options['fields']['start_ride']['label'] = '';
  $handler->display->display_options['fields']['start_ride']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['start_ride']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_ride']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['start_ride']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button success radius">Start ride</div>',
  );
  /* Field: Content: End ride */
  $handler->display->display_options['fields']['end_ride']['id'] = 'end_ride';
  $handler->display->display_options['fields']['end_ride']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['end_ride']['field'] = 'end_ride';
  $handler->display->display_options['fields']['end_ride']['label'] = '';
  $handler->display->display_options['fields']['end_ride']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['end_ride']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['end_ride']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button alert radius">End ride</div>',
  );
  /* Field: Content: Cancel Ride */
  $handler->display->display_options['fields']['cancel_ride']['id'] = 'cancel_ride';
  $handler->display->display_options['fields']['cancel_ride']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['cancel_ride']['field'] = 'cancel_ride';
  $handler->display->display_options['fields']['cancel_ride']['label'] = '';
  $handler->display->display_options['fields']['cancel_ride']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_ride']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button alert">Cancel</div>',
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'thedirverlinks-taxi';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start Ride  */
  $handler->display->display_options['fields']['start_taxi_cash']['id'] = 'start_taxi_cash';
  $handler->display->display_options['fields']['start_taxi_cash']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['start_taxi_cash']['field'] = 'start_taxi_cash';
  $handler->display->display_options['fields']['start_taxi_cash']['label'] = '';
  $handler->display->display_options['fields']['start_taxi_cash']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_taxi_cash']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['start_taxi_cash']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button success radius">Start ride</div>',
  );
  /* Field: Content: Cancel Ride */
  $handler->display->display_options['fields']['cancel_ride']['id'] = 'cancel_ride';
  $handler->display->display_options['fields']['cancel_ride']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['cancel_ride']['field'] = 'cancel_ride';
  $handler->display->display_options['fields']['cancel_ride']['label'] = '';
  $handler->display->display_options['fields']['cancel_ride']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancel_ride']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_ride']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button alert">Cancel</div>',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#" class="button alert" data-reveal-id="block-views-cancel-choices-block-1">Cancel ride<a/>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Taxi Drivers Links';
  $translatables['thedirverlinks'] = array(
    t('Master'),
    t('thedirverlinks'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('thedirverlinks-taxi'),
    t('<a href="#" class="button alert" data-reveal-id="block-views-cancel-choices-block-1">Cancel ride<a/>'),
    t('Taxi Drivers Links'),
  );
  $export['thedirverlinks'] = $view;

  return $export;
}
