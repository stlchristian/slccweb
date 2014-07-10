<?php
/**
 * @file
 * header_buttons.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function header_buttons_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_buttons'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_buttons',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slcc_subtheme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
