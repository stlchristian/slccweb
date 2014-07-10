<?php
/**
 * @file
 * student_profile.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function student_profile_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-student_profile-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'student_profile-block',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-student_profile-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'student_profile-block_1',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
