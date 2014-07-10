<?php
/**
 * @file
 * chapel_service.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function chapel_service_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create chapel_service content'.
  $permissions['create chapel_service content'] = array(
    'name' => 'create chapel_service content',
    'roles' => array(
      'administrator' => 'administrator',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any chapel_service content'.
  $permissions['delete any chapel_service content'] = array(
    'name' => 'delete any chapel_service content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own chapel_service content'.
  $permissions['delete own chapel_service content'] = array(
    'name' => 'delete own chapel_service content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any chapel_service content'.
  $permissions['edit any chapel_service content'] = array(
    'name' => 'edit any chapel_service content',
    'roles' => array(
      'administrator' => 'administrator',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own chapel_service content'.
  $permissions['edit own chapel_service content'] = array(
    'name' => 'edit own chapel_service content',
    'roles' => array(
      'administrator' => 'administrator',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
