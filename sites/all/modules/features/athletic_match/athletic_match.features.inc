<?php
/**
 * @file
 * athletic_match.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function athletic_match_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function athletic_match_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function athletic_match_node_info() {
  $items = array(
    'athletic_match' => array(
      'name' => t('Athletic Match'),
      'base' => 'node_content',
      'description' => t('A game between one of our sports team, and an opponent'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
