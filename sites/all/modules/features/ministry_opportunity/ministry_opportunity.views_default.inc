<?php
/**
 * @file
 * ministry_opportunity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ministry_opportunity_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ministry_opportunities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ministry Opportunities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ministry Opportunities';
  $handler->display->display_options['css_class'] = 'list-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'title' => 'title',
    'field_church_name' => 'field_church_name',
    'field_city' => 'field_city',
    'field_state' => 'field_city',
    'field_pay_type' => 'field_pay_type',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_church_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pay_type' => array(
      'sortable' => 1,
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
  $handler->display->display_options['header']['area']['content'] = '<em>Welcome to our nationwide database for SLCC alumni to locate job openings and ministry opportunities across the country. Please select your desired position and location of interest from the list below.</em>

Submitting an open position is easy and free! Please <a href="ministry-opportunity/submit">click here</a> to be taken to the online submission form.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'events';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Position';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Church Name */
  $handler->display->display_options['fields']['field_church_name']['id'] = 'field_church_name';
  $handler->display->display_options['fields']['field_church_name']['table'] = 'field_data_field_church_name';
  $handler->display->display_options['fields']['field_church_name']['field'] = 'field_church_name';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'Location';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Content: Pay Type */
  $handler->display->display_options['fields']['field_pay_type']['id'] = 'field_pay_type';
  $handler->display->display_options['fields']['field_pay_type']['table'] = 'field_data_field_pay_type';
  $handler->display->display_options['fields']['field_pay_type']['field'] = 'field_pay_type';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ministry_opportunity' => 'ministry_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    16 => 0,
    14 => 0,
    12 => 0,
    9 => 0,
    7 => 0,
    6 => 0,
    21 => 0,
    19 => 0,
    17 => 0,
    15 => 0,
    13 => 0,
    10 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: State (field_state) */
  $handler->display->display_options['filters']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value']['expose']['operator_id'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_state_value']['expose']['operator'] = 'field_state_value_op';
  $handler->display->display_options['filters']['field_state_value']['expose']['identifier'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    16 => 0,
    14 => 0,
    12 => 0,
    9 => 0,
    7 => 0,
    6 => 0,
    21 => 0,
    19 => 0,
    17 => 0,
    15 => 0,
    13 => 0,
    10 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Pay Type (field_pay_type) */
  $handler->display->display_options['filters']['field_pay_type_value']['id'] = 'field_pay_type_value';
  $handler->display->display_options['filters']['field_pay_type_value']['table'] = 'field_data_field_pay_type';
  $handler->display->display_options['filters']['field_pay_type_value']['field'] = 'field_pay_type_value';
  $handler->display->display_options['filters']['field_pay_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pay_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pay_type_value']['expose']['operator_id'] = 'field_pay_type_value_op';
  $handler->display->display_options['filters']['field_pay_type_value']['expose']['label'] = 'Pay Type';
  $handler->display->display_options['filters']['field_pay_type_value']['expose']['operator'] = 'field_pay_type_value_op';
  $handler->display->display_options['filters']['field_pay_type_value']['expose']['identifier'] = 'field_pay_type_value';
  $handler->display->display_options['filters']['field_pay_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    16 => 0,
    14 => 0,
    12 => 0,
    9 => 0,
    7 => 0,
    6 => 0,
    21 => 0,
    19 => 0,
    17 => 0,
    15 => 0,
    13 => 0,
    10 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ministry-opportunities';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ministry Opportunities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['ministry_opportunities'] = array(
    t('Master'),
    t('Ministry Opportunities'),
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
    t('<em>Welcome to our nationwide database for SLCC alumni to locate job openings and ministry opportunities across the country. Please select your desired position and location of interest from the list below.</em>

Submitting an open position is easy and free! Please <a href="ministry-opportunity/submit">click here</a> to be taken to the online submission form.'),
    t('Date'),
    t('Position'),
    t('Church Name'),
    t('Location'),
    t('State'),
    t('Pay Type'),
    t('Page'),
  );
  $export['ministry_opportunities'] = $view;

  return $export;
}
