<?php
/**
 * @file
 * ministry_opportunity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ministry_opportunity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ministry_opportunity_node_info() {
  $items = array(
    'ministry_opportunity' => array(
      'name' => t('Ministry Opportunity'),
      'base' => 'node_content',
      'description' => t('A ministry that is currently seeking a minister'),
      'has_title' => '1',
      'title_label' => t('Position Available'),
      'help' => t('We\'re happy that you\'ve decided to partner with SLCC to find a quality candidate for your ministry. Please fill out this form, and we\'ll have it posted as soon as possible.'),
    ),
  );
  return $items;
}
