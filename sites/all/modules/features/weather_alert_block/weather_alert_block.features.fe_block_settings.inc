<?php
/**
 * @file
 * weather_alert_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function weather_alert_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-wather_alert_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'wather_alert_block',
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
        'region' => 'panel_first_1',
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
