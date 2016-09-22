<?php
/**
 * @file
 * rc_on_duty_off_duty_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_on_duty_off_duty_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ondutyoffduty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'ondutyoffduty';
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
  /* Field: User: Driver Available */
  $handler->display->display_options['fields']['driver_available']['id'] = 'driver_available';
  $handler->display->display_options['fields']['driver_available']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['driver_available']['field'] = 'driver_available';
  $handler->display->display_options['fields']['driver_available']['label'] = '';
  $handler->display->display_options['fields']['driver_available']['element_type'] = 'div';
  $handler->display->display_options['fields']['driver_available']['element_class'] = 'button success large';
  $handler->display->display_options['fields']['driver_available']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['driver_available']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['driver_available']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['driver_available']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['driver_available']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: User: Driver off duty */
  $handler->display->display_options['fields']['driver_off_duty']['id'] = 'driver_off_duty';
  $handler->display->display_options['fields']['driver_off_duty']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['driver_off_duty']['field'] = 'driver_off_duty';
  $handler->display->display_options['fields']['driver_off_duty']['label'] = '';
  $handler->display->display_options['fields']['driver_off_duty']['element_class'] = 'button alert large';
  $handler->display->display_options['fields']['driver_off_duty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['driver_off_duty']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['driver_off_duty']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['driver_off_duty']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['driver_off_duty']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['ondutyoffduty'] = array(
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
    t('Block'),
  );
  $export['ondutyoffduty'] = $view;

  return $export;
}
