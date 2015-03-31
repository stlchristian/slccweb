<?php
/**
 * @file
 * athlete_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function athlete_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function athlete_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function athlete_profile_node_info() {
  $items = array(
    'athlete_profile' => array(
      'name' => t('Athlete Profile'),
      'base' => 'node_content',
      'description' => t('Some basic profile information for an athlete; these are used to build rosters.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
