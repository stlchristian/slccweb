<?php
/**
 * @file
 * sample_banner_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sample_banner_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-sample_banner_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'sample_banner_block',
    'module' => 'block',
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
        'weight' => -26,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
