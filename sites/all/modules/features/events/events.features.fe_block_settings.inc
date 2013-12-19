<?php
/**
 * @file
 * events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-weather_alert-block'] = array(
    'cache' => -1,
    'delta' => 'weather_alert-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'region' => 'panel_first_1',
        'status' => 1,
        'theme' => 'tb_university',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
