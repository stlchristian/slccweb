<?php
/**
 * @file
 * professor_profile.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function professor_profile_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-professor-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'professor-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tb_university' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tb_university',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
