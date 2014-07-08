<?php
/**
 * @file
 * calendar_entry.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function calendar_entry_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'academic_all_school_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Academic All-School Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academic Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date_with_end' => 'field_date_with_end',
    'field_school_year' => 'field_school_year',
    'field_semester' => 'field_semester',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_with_end' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_school_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<center>
<h2>St. Louis Christian College<br>Academic Calendar<br>[field_school_year]</h2><br>
</center>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_with_end']['id'] = 'field_date_with_end';
  $handler->display->display_options['fields']['field_date_with_end']['table'] = 'field_data_field_date_with_end';
  $handler->display->display_options['fields']['field_date_with_end']['field'] = 'field_date_with_end';
  $handler->display->display_options['fields']['field_date_with_end']['label'] = '';
  $handler->display->display_options['fields']['field_date_with_end']['alter']['text'] = '[field_date_with_end-value] - [field_date_with_end-value2]';
  $handler->display->display_options['fields']['field_date_with_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_with_end']['settings'] = array(
    'format_type' => 'calendar_entry',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: School Year */
  $handler->display->display_options['fields']['field_school_year']['id'] = 'field_school_year';
  $handler->display->display_options['fields']['field_school_year']['table'] = 'field_data_field_school_year';
  $handler->display->display_options['fields']['field_school_year']['field'] = 'field_school_year';
  $handler->display->display_options['fields']['field_school_year']['label'] = '';
  $handler->display->display_options['fields']['field_school_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_school_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_school_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Semester */
  $handler->display->display_options['fields']['field_semester']['id'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['table'] = 'field_data_field_semester';
  $handler->display->display_options['fields']['field_semester']['field'] = 'field_semester';
  $handler->display->display_options['fields']['field_semester']['label'] = '';
  $handler->display->display_options['fields']['field_semester']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_semester']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_semester']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Date -  start date (field_date_with_end) */
  $handler->display->display_options['sorts']['field_date_with_end_value']['id'] = 'field_date_with_end_value';
  $handler->display->display_options['sorts']['field_date_with_end_value']['table'] = 'field_data_field_date_with_end';
  $handler->display->display_options['sorts']['field_date_with_end_value']['field'] = 'field_date_with_end_value';
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
    'calendar_entry' => 'calendar_entry',
  );
  /* Filter criterion: Content: School Year (field_school_year) */
  $handler->display->display_options['filters']['field_school_year_tid']['id'] = 'field_school_year_tid';
  $handler->display->display_options['filters']['field_school_year_tid']['table'] = 'field_data_field_school_year';
  $handler->display->display_options['filters']['field_school_year_tid']['field'] = 'field_school_year_tid';
  $handler->display->display_options['filters']['field_school_year_tid']['value'] = array(
    0 => '98',
  );
  $handler->display->display_options['filters']['field_school_year_tid']['vocabulary'] = 'school_year';
  /* Filter criterion: Content: Calendar (field_calendar) */
  $handler->display->display_options['filters']['field_calendar_tid']['id'] = 'field_calendar_tid';
  $handler->display->display_options['filters']['field_calendar_tid']['table'] = 'field_data_field_calendar';
  $handler->display->display_options['filters']['field_calendar_tid']['field'] = 'field_calendar_tid';
  $handler->display->display_options['filters']['field_calendar_tid']['value'] = array(
    0 => '96',
  );
  $handler->display->display_options['filters']['field_calendar_tid']['vocabulary'] = 'calendar';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'academics/calendar';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Academic Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All-School Calendar';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<center>
<h2>St. Louis Christian College<br>All-School Calendar<br>[field_school_year]</h2><br>
</center>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_entry' => 'calendar_entry',
  );
  /* Filter criterion: Content: School Year (field_school_year) */
  $handler->display->display_options['filters']['field_school_year_tid']['id'] = 'field_school_year_tid';
  $handler->display->display_options['filters']['field_school_year_tid']['table'] = 'field_data_field_school_year';
  $handler->display->display_options['filters']['field_school_year_tid']['field'] = 'field_school_year_tid';
  $handler->display->display_options['filters']['field_school_year_tid']['value'] = array(
    0 => '98',
  );
  $handler->display->display_options['filters']['field_school_year_tid']['vocabulary'] = 'school_year';
  $handler->display->display_options['path'] = 'student-life/calendar';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All-School Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['academic_all_school_calendar'] = array(
    t('Master'),
    t('Academic Calendar'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<center>
<h2>St. Louis Christian College<br>Academic Calendar<br>[field_school_year]</h2><br>
</center>'),
    t('[field_date_with_end-value] - [field_date_with_end-value2]'),
    t('Page'),
    t('All-School Calendar'),
    t('<center>
<h2>St. Louis Christian College<br>All-School Calendar<br>[field_school_year]</h2><br>
</center>'),
  );
  $export['academic_all_school_calendar'] = $view;

  return $export;
}
