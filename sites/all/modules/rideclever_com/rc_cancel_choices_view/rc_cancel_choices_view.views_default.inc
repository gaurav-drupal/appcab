<?php
/**
 * @file
 * rc_cancel_choices_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_cancel_choices_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cancel_choices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cancel choices';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Cancel pickup */
  $handler->display->display_options['fields']['cancel_pickup']['id'] = 'cancel_pickup';
  $handler->display->display_options['fields']['cancel_pickup']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['cancel_pickup']['field'] = 'cancel_pickup';
  $handler->display->display_options['fields']['cancel_pickup']['label'] = '';
  $handler->display->display_options['fields']['cancel_pickup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cancel_pickup']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cancel_pickup']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button alert">Driver cancel</div>',
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
    'rules_link_rewrite' => '<div class="button alert">Customer cancel</div>',
  );
  /* Field: Content: Customer no show */
  $handler->display->display_options['fields']['customer_no_show']['id'] = 'customer_no_show';
  $handler->display->display_options['fields']['customer_no_show']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['customer_no_show']['field'] = 'customer_no_show';
  $handler->display->display_options['fields']['customer_no_show']['label'] = '';
  $handler->display->display_options['fields']['customer_no_show']['exclude'] = TRUE;
  $handler->display->display_options['fields']['customer_no_show']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['customer_no_show']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '<div class="button alert">Customer no-show</div>',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
[cancel_pickup]<br/>
[cancel_ride]<br/>
[customer_no_show]
<a class="close-reveal-modal">&#215;</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['cancel_choices'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="row">
[cancel_pickup]<br/>
[cancel_ride]<br/>
[customer_no_show]
<a class="close-reveal-modal">&#215;</a>
</div>'),
    t('All'),
    t('Block'),
  );
  $export['cancel_choices'] = $view;

  return $export;
}
