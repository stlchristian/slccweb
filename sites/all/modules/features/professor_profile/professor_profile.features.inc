<?php
/**
 * @file
 * professor_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function professor_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function professor_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function professor_profile_node_info() {
  $items = array(
    'professor_profile' => array(
      'name' => t('Professor Profile'),
      'base' => 'node_content',
      'description' => t('Information about a professor\'s bio, contact info, education, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
