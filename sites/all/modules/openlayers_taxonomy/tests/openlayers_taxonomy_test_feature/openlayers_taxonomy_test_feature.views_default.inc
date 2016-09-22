<?php
/**
 * @file
 * openlayers_taxonomy_test_feature.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function openlayers_taxonomy_test_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ol_taxonomy_test_view';
  $view->description = 'This is a test view for the OpenLayers Taxonomy module.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OL Taxonomy Test View';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testing data layer for OpenLayers Taxonomy';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_ol_taxonomy_test_data',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_ol_taxonomt_term_reference',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: OL Taxonomy Term Reference */
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['id'] = 'field_ol_taxonomt_term_reference';
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['table'] = 'field_data_field_ol_taxonomt_term_reference';
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['field'] = 'field_ol_taxonomt_term_reference';
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['label'] = '';
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['click_sort_column'] = 'tid';
  $handler->display->display_options['fields']['field_ol_taxonomt_term_reference']['field_api_classes'] = 0;
  /* Field: Content: OL Taxonomy Test Data */
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['id'] = 'field_ol_taxonomy_test_data';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['table'] = 'field_data_field_ol_taxonomy_test_data';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['field'] = 'field_ol_taxonomy_test_data';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['label'] = '';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['type'] = 'geofield_wkt';
  $handler->display->display_options['fields']['field_ol_taxonomy_test_data']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['tid']['title'] = 'Test Taxonomy Layer for Term: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openlayers_taxonomy_test_type' => 'openlayers_taxonomy_test_type',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $translatables['ol_taxonomy_test_view'] = array(
    t('Master'),
    t('Testing data layer for OpenLayers Taxonomy'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Test Taxonomy Layer for Term: %1'),
    t('OpenLayers Data Overlay'),
  );
  $export['ol_taxonomy_test_view'] = $view;

  return $export;
}
