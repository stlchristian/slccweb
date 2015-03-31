<?php
/**
 * @file
 * campus_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campus_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campus_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function campus_event_node_info() {
  $items = array(
    'campus_event' => array(
      'name' => t('Campus Event'),
      'base' => 'node_content',
      'description' => t('A new event that will be taking place'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
