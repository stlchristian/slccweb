<?php
/**
 * @file
 * coach_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coach_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function coach_profile_node_info() {
  $items = array(
    'coach_profile' => array(
      'name' => t('Coach Profile'),
      'base' => 'node_content',
      'description' => t('Some basic profile and contact information for an athletic coach.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
