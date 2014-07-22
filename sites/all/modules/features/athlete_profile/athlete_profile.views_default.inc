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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
      'separator' => ', ',
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
  $handler->display->display_options['fields']['field_state']['type'] = 'list_key';
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
  /* Sort criterion: Content: Jersey (field_jersey) */
  $handler->display->display_options['sorts']['field_jersey_value']['id'] = 'field_jersey_value';
  $handler->display->display_options['sorts']['field_jersey_value']['table'] = 'field_data_field_jersey';
  $handler->display->display_options['sorts']['field_jersey_value']['field'] = 'field_jersey_value';
  /* Contextual filter: Field: Sport (field_sport) */
  $handler->display->display_options['arguments']['field_sport_tid']['id'] = 'field_sport_tid';
  $handler->display->display_options['arguments']['field_sport_tid']['table'] = 'field_data_field_sport';
  $handler->display->display_options['arguments']['field_sport_tid']['field'] = 'field_sport_tid';
  $handler->display->display_options['arguments']['field_sport_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_sport_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_sport_tid']['title'] = 'Meet the Soldiers';
  $handler->display->display_options['arguments']['field_sport_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sport_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sport_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sport_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sport_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sport_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_sport_tid']['validate_options']['vocabularies'] = array(
    'sport' => 'sport',
  );
  $handler->display->display_options['arguments']['field_sport_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_sport_tid']['validate_options']['transform'] = TRUE;
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
  $handler->display->display_options['path'] = 'athletics/%/meet-soldiers';
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
    t('All'),
    t('Meet the Soldiers'),
    t('Page'),
  );
  $export['athletics_roster'] = $view;

  return $export;
}
