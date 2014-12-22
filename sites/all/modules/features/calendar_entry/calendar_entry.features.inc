<?php
/**
 * @file
 * calendar_entry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function calendar_entry_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function calendar_entry_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function calendar_entry_node_info() {
  $items = array(
    'calendar_entry' => array(
      'name' => t('Calendar Entry'),
      'base' => 'node_content',
      'description' => t('An item that should be listed on the all-school calendar or the academic calendar'),
      'has_title' => '1',
      'title_label' => t('Calendar Item'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
