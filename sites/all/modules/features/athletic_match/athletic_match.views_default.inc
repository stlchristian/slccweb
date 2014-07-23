<?php
/**
 * @file
 * athletic_match.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function athletic_match_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'athletics_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Athletics Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time']['id'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time']['settings'] = array(
    'format_type' => 'events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Opponent */
  $handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
  $handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opponent']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_opponent']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'text_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_1']['id'] = 'field_time_1';
  $handler->display->display_options['fields']['field_time_1']['table'] = 'field_data_field_time';
  $handler->display->display_options['fields']['field_time_1']['field'] = 'field_time';
  $handler->display->display_options['fields']['field_time_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_1']['empty'] = 'TBA';
  $handler->display->display_options['fields']['field_time_1']['settings'] = array(
    'format_type' => 'athletics_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Time';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_time_1';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '12:00 am';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'TBA';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_time_1]';
  /* Sort criterion: Content: Date -  start date (field_time) */
  $handler->display->display_options['sorts']['field_time_value']['id'] = 'field_time_value';
  $handler->display->display_options['sorts']['field_time_value']['table'] = 'field_data_field_time';
  $handler->display->display_options['sorts']['field_time_value']['field'] = 'field_time_value';
  /* Contextual filter: Field: Sport (field_sport) */
  $handler->display->display_options['arguments']['field_sport_tid']['id'] = 'field_sport_tid';
  $handler->display->display_options['arguments']['field_sport_tid']['table'] = 'field_data_field_sport';
  $handler->display->display_options['arguments']['field_sport_tid']['field'] = 'field_sport_tid';
  $handler->display->display_options['arguments']['field_sport_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_sport_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_sport_tid']['title'] = '%1 Schedule';
  $handler->display->display_options['arguments']['field_sport_tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_sport_tid']['breadcrumb'] = '%1 Schedule';
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
    'athletic_match' => 'athletic_match',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'athletics/%/schedule';
  $translatables['athletics_calendar'] = array(
    t('Master'),
    t('Schedule'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Date'),
    t('Opponent'),
    t('Location'),
    t('Time'),
    t('TBA'),
    t('All'),
    t('%1 Schedule'),
    t('Page'),
  );
  $export['athletics_calendar'] = $view;

  return $export;
}
