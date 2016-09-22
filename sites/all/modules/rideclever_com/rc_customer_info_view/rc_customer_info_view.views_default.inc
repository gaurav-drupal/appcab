<?php
/**
 * @file
 * rc_customer_info_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_customer_info_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'customer_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer info';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Commerce Card on File: Name on the card */
  $handler->display->display_options['fields']['card_name']['id'] = 'card_name';
  $handler->display->display_options['fields']['card_name']['table'] = 'commerce_card_data';
  $handler->display->display_options['fields']['card_name']['field'] = 'card_name';
  $handler->display->display_options['fields']['card_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['card_name']['label'] = '';
  $handler->display->display_options['fields']['card_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['card_name']['element_label_colon'] = FALSE;
  /* Field: Field: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['alter']['text'] = '<a href="tel:[field_phone_number]">Call Customer</a>';
  $handler->display->display_options['fields']['field_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone_number']['element_class'] = 'button success';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  /* Field: User: Rate */
  $handler->display->display_options['fields']['field_rate']['id'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['table'] = 'field_data_field_rate';
  $handler->display->display_options['fields']['field_rate']['field'] = 'field_rate';
  $handler->display->display_options['fields']['field_rate']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_rate']['label'] = '';
  $handler->display->display_options['fields']['field_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
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
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['customer_info'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('Profile'),
    t('<a href="tel:[field_phone_number]">Call Customer</a>'),
    t('All'),
    t('Block'),
  );
  $export['customer_info'] = $view;

  return $export;
}
