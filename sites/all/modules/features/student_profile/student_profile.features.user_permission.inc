<?php
/**
 * @file
 * student_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function student_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create student_profile content'.
  $permissions['create student_profile content'] = array(
    'name' => 'create student_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any student_profile content'.
  $permissions['delete any student_profile content'] = array(
    'name' => 'delete any student_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own student_profile content'.
  $permissions['delete own student_profile content'] = array(
    'name' => 'delete own student_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any student_profile content'.
  $permissions['edit any student_profile content'] = array(
    'name' => 'edit any student_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own student_profile content'.
  $permissions['edit own student_profile content'] = array(
    'name' => 'edit own student_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
