<?php
/**
 * @file
 * professor_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function professor_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'professor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Professors Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Professors';
  $handler->display->display_options['css_class'] = 'view_professor';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Professor Image */
  $handler->display->display_options['fields']['field_professor_image']['id'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['table'] = 'field_data_field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['field'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['label'] = '';
  $handler->display->display_options['fields']['field_professor_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_professor_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_professor_image']['settings'] = array(
    'image_style' => 'professor',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Social */
  $handler->display->display_options['fields']['field_social']['id'] = 'field_social';
  $handler->display->display_options['fields']['field_social']['table'] = 'field_data_field_social';
  $handler->display->display_options['fields']['field_social']['field'] = 'field_social';
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
    'professor_profile' => 'professor_profile',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Professor Image */
  $handler->display->display_options['fields']['field_professor_image']['id'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['table'] = 'field_data_field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['field'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['label'] = '';
  $handler->display->display_options['fields']['field_professor_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_professor_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_professor_image']['settings'] = array(
    'image_style' => 'professor',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Professor Image */
  $handler->display->display_options['fields']['field_professor_image']['id'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['table'] = 'field_data_field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['field'] = 'field_professor_image';
  $handler->display->display_options['fields']['field_professor_image']['label'] = '';
  $handler->display->display_options['fields']['field_professor_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_professor_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_professor_image']['settings'] = array(
    'image_style' => 'professor',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Social */
  $handler->display->display_options['fields']['field_social']['id'] = 'field_social';
  $handler->display->display_options['fields']['field_social']['table'] = 'field_data_field_social';
  $handler->display->display_options['fields']['field_social']['field'] = 'field_social';
  $handler->display->display_options['fields']['field_social']['label'] = '';
  $handler->display->display_options['fields']['field_social']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'academics/meet-professors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Professor Page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['professor'] = array(
    t('Master'),
    t('Featured Professors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Social'),
    t('Block'),
    t('Page'),
  );
  $export['professor'] = $view;

  return $export;
}
