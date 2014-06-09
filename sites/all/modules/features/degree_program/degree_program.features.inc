<?php
/**
 * @file
 * degree_program.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function degree_program_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function degree_program_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function degree_program_node_info() {
  $items = array(
    'degree_program' => array(
      'name' => t('Degree Program'),
      'base' => 'node_content',
      'description' => t('A course of study toward one type of degree'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
