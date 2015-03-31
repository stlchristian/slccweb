<?php
/**
 * @file
 * student_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function student_profile_ctools_plugin_api($module = NULL, $api = NULL) {
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
function student_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function student_profile_node_info() {
  $items = array(
    'student_profile' => array(
      'name' => t('Student Profile'),
      'base' => 'node_content',
      'description' => t('Student Profile'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
