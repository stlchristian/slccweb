<?php
/**
 * @file
 * evergreen_search_box.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function evergreen_search_box_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-catalog_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'catalog_search',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'library
library/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slcc_subtheme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => -39,
      ),
    ),
    'title' => 'Search Our Catalog',
    'visibility' => 1,
  );

  return $export;
}
