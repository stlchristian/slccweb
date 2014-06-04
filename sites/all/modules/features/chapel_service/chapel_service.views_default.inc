<?php
/**
 * @file
 * chapel_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function chapel_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'chapel_sermons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Chapel Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chapel Messages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Display';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_scripture_reference' => 'field_scripture_reference',
    'term_node_tid' => 'term_node_tid',
    'title' => 'title',
    'field_audio_file' => 'field_audio_file',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scripture_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
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
    'field_audio_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Chapel attendance is required for students because we desire to produce not just academic excellence, but Christ-likeness. Designed to encourage and strengthen Christian character, the Chapel program is carried out to develop well-prepared servants for Christ - men and women who not only have the training for ministry, but also the heart for ministry. Any non-student who wishes to attend are more than welcome to join us or to listen online!

<em>Use the boxes below to search chapel messages for speakers, Scripture, or title. To listen to a sermon, use the player embedded in the table below. To download a sermon, right-click the "Download" link and select "Save link as..."</em>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'empty text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no chapel messages to display. Either we haven\'t uploaded the chapel audio yet, or your search hasn\'t matched any results. Please check back again soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Scripture Reference */
  $handler->display->display_options['fields']['field_scripture_reference']['id'] = 'field_scripture_reference';
  $handler->display->display_options['fields']['field_scripture_reference']['table'] = 'field_data_field_scripture_reference';
  $handler->display->display_options['fields']['field_scripture_reference']['field'] = 'field_scripture_reference';
  $handler->display->display_options['fields']['field_scripture_reference']['label'] = 'Scripture';
  $handler->display->display_options['fields']['field_scripture_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scripture_reference']['click_sort_column'] = 'book_id';
  $handler->display->display_options['fields']['field_scripture_reference']['type'] = 'bible_field_book_chapter';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Speaker';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'chapel_speaker' => 'chapel_speaker',
    'forums' => 0,
    'academic_divisions' => 0,
    'academic_program' => 0,
    'academic_semester' => 0,
    'articles' => 0,
    'class_section' => 0,
    'departments' => 0,
    'event_categories' => 0,
    'gender' => 0,
    'newsletter_categories' => 0,
    'school_year' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_file']['id'] = 'field_audio_file';
  $handler->display->display_options['fields']['field_audio_file']['table'] = 'field_data_field_audio_file';
  $handler->display->display_options['fields']['field_audio_file']['field'] = 'field_audio_file';
  $handler->display->display_options['fields']['field_audio_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_file']['type'] = 'mediaelement_audio';
  $handler->display->display_options['fields']['field_audio_file']['settings'] = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 1,
    'download_text' => 'Download',
  );
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
    'chapel_service' => 'chapel_service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Audio (field_audio_file:fid) */
  $handler->display->display_options['filters']['field_audio_file_fid']['id'] = 'field_audio_file_fid';
  $handler->display->display_options['filters']['field_audio_file_fid']['table'] = 'field_data_field_audio_file';
  $handler->display->display_options['filters']['field_audio_file_fid']['field'] = 'field_audio_file_fid';
  $handler->display->display_options['filters']['field_audio_file_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_audio_file_fid']['group'] = 1;
  /* Filter criterion: Content: Speaker (field_speaker) */
  $handler->display->display_options['filters']['field_speaker_tid']['id'] = 'field_speaker_tid';
  $handler->display->display_options['filters']['field_speaker_tid']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['filters']['field_speaker_tid']['field'] = 'field_speaker_tid';
  $handler->display->display_options['filters']['field_speaker_tid']['value'] = '';
  $handler->display->display_options['filters']['field_speaker_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_speaker_tid']['expose']['operator_id'] = 'field_speaker_tid_op';
  $handler->display->display_options['filters']['field_speaker_tid']['expose']['label'] = 'Speaker';
  $handler->display->display_options['filters']['field_speaker_tid']['expose']['operator'] = 'field_speaker_tid_op';
  $handler->display->display_options['filters']['field_speaker_tid']['expose']['identifier'] = 'field_speaker_tid';
  $handler->display->display_options['filters']['field_speaker_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    15 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    13 => 0,
    16 => 0,
    7 => 0,
    9 => 0,
    5 => 0,
    12 => 0,
    21 => 0,
    19 => 0,
    14 => 0,
    17 => 0,
    8 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_speaker_tid']['vocabulary'] = 'chapel_speaker';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    15 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    13 => 0,
    16 => 0,
    7 => 0,
    9 => 0,
    5 => 0,
    12 => 0,
    21 => 0,
    19 => 0,
    14 => 0,
    17 => 0,
    8 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Scripture Reference (field_scripture_reference:book_name) */
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['id'] = 'field_scripture_reference_book_name';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['table'] = 'field_data_field_scripture_reference';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['field'] = 'field_scripture_reference_book_name';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['expose']['operator_id'] = 'book_op';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['expose']['label'] = 'Scripture';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['expose']['operator'] = 'field_scripture_reference_book_name_op';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['expose']['identifier'] = 'book';
  $handler->display->display_options['filters']['field_scripture_reference_book_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    15 => 0,
    11 => 0,
    20 => 0,
    18 => 0,
    13 => 0,
    16 => 0,
    7 => 0,
    9 => 0,
    5 => 0,
    12 => 0,
    21 => 0,
    19 => 0,
    14 => 0,
    17 => 0,
    8 => 0,
    10 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'student-life/chapel-messages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Chapel Messages';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['chapel_sermons'] = array(
    t('Master'),
    t('Chapel Messages'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Display'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Chapel attendance is required for students because we desire to produce not just academic excellence, but Christ-likeness. Designed to encourage and strengthen Christian character, the Chapel program is carried out to develop well-prepared servants for Christ - men and women who not only have the training for ministry, but also the heart for ministry. Any non-student who wishes to attend are more than welcome to join us or to listen online!

<em>Use the boxes below to search chapel messages for speakers, Scripture, or title. To listen to a sermon, use the player embedded in the table below. To download a sermon, right-click the "Download" link and select "Save link as..."</em>'),
    t('empty text'),
    t('Sorry, there are no chapel messages to display. Either we haven\'t uploaded the chapel audio yet, or your search hasn\'t matched any results. Please check back again soon.'),
    t('Date'),
    t('Scripture'),
    t('Speaker'),
    t('Title'),
    t('Audio'),
    t('Page'),
  );
  $export['chapel_sermons'] = $view;

  return $export;
}
