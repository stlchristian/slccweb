<?php
/**
 * @file
 * athlete_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function athlete_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'athletics_roster';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Athletics Roster';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Athletics Roster';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_jersey' => 'field_jersey',
    'title' => 'title',
    'field_hometown' => 'field_hometown',
    'field_state' => 'field_hometown',
    'field_position' => 'field_position',
    'field_academic_class' => 'field_academic_class',
    'field_sport' => 'field_sport',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_jersey' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hometown' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sport' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Jersey */
  $handler->display->display_options['fields']['field_jersey']['id'] = 'field_jersey';
  $handler->display->display_options['fields']['field_jersey']['table'] = 'field_data_field_jersey';
  $handler->display->display_options['fields']['field_jersey']['field'] = 'field_jersey';
  $handler->display->display_options['fields']['field_jersey']['label'] = 'Number';
  $handler->display->display_options['fields']['field_jersey']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jersey']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Hometown */
  $handler->display->display_options['fields']['field_hometown']['id'] = 'field_hometown';
  $handler->display->display_options['fields']['field_hometown']['table'] = 'field_data_field_hometown';
  $handler->display->display_options['fields']['field_hometown']['field'] = 'field_hometown';
  $handler->display->display_options['fields']['field_hometown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hometown']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_hometown']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Field: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_position']['delta_offset'] = '0';
  /* Field: Field: Academic Class */
  $handler->display->display_options['fields']['field_academic_class']['id'] = 'field_academic_class';
  $handler->display->display_options['fields']['field_academic_class']['table'] = 'field_data_field_academic_class';
  $handler->display->display_options['fields']['field_academic_class']['field'] = 'field_academic_class';
  $handler->display->display_options['fields']['field_academic_class']['label'] = 'Year';
  $handler->display->display_options['fields']['field_academic_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Sport */
  $handler->display->display_options['fields']['field_sport']['id'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['table'] = 'field_data_field_sport';
  $handler->display->display_options['fields']['field_sport']['field'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sport']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'Meet the Soldiers';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'sport' => 'sport',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
    'athlete_profile' => 'athlete_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'athletics/%/meet-the-soldiers';
  $translatables['athletics_roster'] = array(
    t('Master'),
    t('Athletics Roster'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Number'),
    t('Name'),
    t('Hometown'),
    t('State'),
    t('Position'),
    t('Year'),
    t('Sport'),
    t('All'),
    t('Meet the Soldiers'),
    t('Page'),
  );
  $export['athletics_roster'] = $view;

  return $export;
}
