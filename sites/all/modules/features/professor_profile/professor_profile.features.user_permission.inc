<?php
/**
 * @file
 * professor_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function professor_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create professor_profile content'.
  $permissions['create professor_profile content'] = array(
    'name' => 'create professor_profile content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'faculty' => 'faculty',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any professor_profile content'.
  $permissions['delete any professor_profile content'] = array(
    'name' => 'delete any professor_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own professor_profile content'.
  $permissions['delete own professor_profile content'] = array(
    'name' => 'delete own professor_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any professor_profile content'.
  $permissions['edit any professor_profile content'] = array(
    'name' => 'edit any professor_profile content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own professor_profile content'.
  $permissions['edit own professor_profile content'] = array(
    'name' => 'edit own professor_profile content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'faculty' => 'faculty',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
