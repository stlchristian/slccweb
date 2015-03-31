<?php
/**
 * @file
 * chapel_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chapel_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function chapel_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function chapel_service_node_info() {
  $items = array(
    'chapel_service' => array(
      'name' => t('Chapel Message'),
      'base' => 'node_content',
      'description' => t('A chapel service, either upcoming or previous'),
      'has_title' => '1',
      'title_label' => t('Message Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
