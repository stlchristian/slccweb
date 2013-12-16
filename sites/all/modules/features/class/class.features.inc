<?php
/**
 * @file
 * class.features.inc
 */

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
