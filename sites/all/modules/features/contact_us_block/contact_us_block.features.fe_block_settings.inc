<?php
/**
 * @file
 * contact_us_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function contact_us_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-contact_us_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'contact_us_block',
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
        'region' => 'panel_fourth_2',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact us',
    'visibility' => 0,
  );

  return $export;
}
