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
    'custom' => 0,
    'delta' => 'weather_alert-block',
    'module' => 'views',
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
