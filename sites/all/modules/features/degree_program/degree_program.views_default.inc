<?php
/**
 * @file
 * degree_program.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function degree_program_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Degree Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Degree Programs';
  $handler->display->display_options['css_class'] = 'list-courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Courses';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'fa-ul';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nothing' => 'nothing',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'academic_program' => 'academic_program',
    'forums' => 0,
    'academic_class' => 0,
    'academic_divisions' => 0,
    'articles' => 0,
    'chapel_speaker' => 0,
    'class_section' => 0,
    'departments' => 0,
    'event_categories' => 0,
    'gender' => 0,
    'newsletter_categories' => 0,
    'opponent' => 0,
    'position' => 0,
    'sport' => 0,
    'tags' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa-li fa fa-angle-right"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<i class="fa-li fa fa-angle-right"></i>[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] Degrees';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'academics/degree-programs/[name]';
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = '%1 Degree Programs';
  $handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'degree_program' => 'degree_program',
  );

  /* Display: Degree Programs */
  $handler = $view->new_display('page_with_page_title', 'Degree Programs', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40, 60';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>St. Louis Christian College <strong>Educates Christians</strong> with a biblical and academic foundation. We take the task very seriously, and we offer competitive degrees to prepare students to serve God. SLCC offers degrees that students can earn in a variety of ways. Every degree we offer is a Bible major with diverse specializations. You will graduate with a solid understanding of biblical principles, along with practical training in your chosen specialty.</p>
<p>Our <strong>traditional degree programs</strong> have classes which meet during the daytime, and are geared toward students looking for the "traditional" college experience.</p>
<p>Our <strong>evening degree programs</strong> make it easy for you to take advantage of learning from a professor in-person while allowing you to continue meeting your family and work needs.</p>
<p>Our <strong>online degree programs</strong> are ideal for distance learners and those who are looking to work at a more individualized pace.</p>
<p>Whatever your educational goals or learning style, we have something to offer you! Click on one of the degree programs below to learn more.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['label'] = 'breadcrumbs';
  $handler->display->display_options['header']['area_1']['content'] = '<?php
$context = \'%1\';
$crumbs = array();
$crumbs[] = l(t(\'Home\'), \'<front>\');
$crumbs[] = l(t(\'Academics\'), \'academics\');
if (!empty($context)) {
$crumbs[] = l(t(\'Degree Programs\'), \'academics/degree-programs\');
$crumbs[] = $context;
} else {
$crumbs[] = t(\'Degree Programs\');
}
drupal_set_breadcrumb($crumbs);
?>';
  $handler->display->display_options['header']['area_1']['format'] = 'php_code';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
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
    'degree_program' => 'degree_program',
  );
  $handler->display->display_options['path'] = 'academics/degree-programs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Degree Programs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['all_courses'] = array(
    t('Master'),
    t('Degree Programs'),
    t('More Courses'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('<i class="fa-li fa fa-angle-right"></i>'),
    t('<i class="fa-li fa fa-angle-right"></i>[title]'),
    t('[name] Degrees'),
    t('All'),
    t('%1 Degree Programs'),
    t('%1'),
    t('more'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>St. Louis Christian College <strong>Educates Christians</strong> with a biblical and academic foundation. We take the task very seriously, and we offer competitive degrees to prepare students to serve God. SLCC offers degrees that students can earn in a variety of ways. Every degree we offer is a Bible major with diverse specializations. You will graduate with a solid understanding of biblical principles, along with practical training in your chosen specialty.</p>
<p>Our <strong>traditional degree programs</strong> have classes which meet during the daytime, and are geared toward students looking for the "traditional" college experience.</p>
<p>Our <strong>evening degree programs</strong> make it easy for you to take advantage of learning from a professor in-person while allowing you to continue meeting your family and work needs.</p>
<p>Our <strong>online degree programs</strong> are ideal for distance learners and those who are looking to work at a more individualized pace.</p>
<p>Whatever your educational goals or learning style, we have something to offer you! Click on one of the degree programs below to learn more.</p>'),
    t('breadcrumbs'),
    t('<?php
$context = \'%1\';
$crumbs = array();
$crumbs[] = l(t(\'Home\'), \'<front>\');
$crumbs[] = l(t(\'Academics\'), \'academics\');
if (!empty($context)) {
$crumbs[] = l(t(\'Degree Programs\'), \'academics/degree-programs\');
$crumbs[] = $context;
} else {
$crumbs[] = t(\'Degree Programs\');
}
drupal_set_breadcrumb($crumbs);
?>'),
  );
  $export['all_courses'] = $view;

  return $export;
}
