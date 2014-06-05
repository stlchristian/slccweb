<?php
/**
 * @file
 * chapel_service.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function chapel_service_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-chapel_sermons-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'chapel_sermons-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
