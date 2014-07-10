<?php
/**
 * @file
 * athlete_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function athlete_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create athlete_profile content'.
  $permissions['create athlete_profile content'] = array(
    'name' => 'create athlete_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any athlete_profile content'.
  $permissions['delete any athlete_profile content'] = array(
    'name' => 'delete any athlete_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own athlete_profile content'.
  $permissions['delete own athlete_profile content'] = array(
    'name' => 'delete own athlete_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any athlete_profile content'.
  $permissions['edit any athlete_profile content'] = array(
    'name' => 'edit any athlete_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own athlete_profile content'.
  $permissions['edit own athlete_profile content'] = array(
    'name' => 'edit own athlete_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
