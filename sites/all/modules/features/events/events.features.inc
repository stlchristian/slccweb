<?php
/**
 * @file
 * events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('A new event that will be taking place'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
