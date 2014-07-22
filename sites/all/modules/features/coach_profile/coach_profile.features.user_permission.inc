<?php
/**
 * @file
 * coach_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function coach_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create coach_profile content'.
  $permissions['create coach_profile content'] = array(
    'name' => 'create coach_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any coach_profile content'.
  $permissions['delete any coach_profile content'] = array(
    'name' => 'delete any coach_profile content',
    'roles' => array(
      'athletics editor' => 'athletics editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own coach_profile content'.
  $permissions['delete own coach_profile content'] = array(
    'name' => 'delete own coach_profile content',
    'roles' => array(
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any coach_profile content'.
  $permissions['edit any coach_profile content'] = array(
    'name' => 'edit any coach_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own coach_profile content'.
  $permissions['edit own coach_profile content'] = array(
    'name' => 'edit own coach_profile content',
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
