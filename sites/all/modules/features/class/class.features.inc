<?php
/**
 * @file
 * class.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function class_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function class_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('A class that is taught by a professor'),
      'has_title' => '1',
      'title_label' => t('Class Name'),
      'help' => '',
    ),
  );
  return $items;
}
