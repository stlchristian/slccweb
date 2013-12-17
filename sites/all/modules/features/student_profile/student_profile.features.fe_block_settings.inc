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
        'region' => 'panel_third_1',
        'status' => 1,
        'theme' => 'tb_university',
        'weight' => 0,
      ),
    ),
    'title' => 'Featured Students',
    'visibility' => 1,
  );

  return $export;
}
