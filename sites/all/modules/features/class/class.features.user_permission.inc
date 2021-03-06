<?php
/**
 * @file
 * class.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function class_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create class content'.
  $permissions['create class content'] = array(
    'name' => 'create class content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'faculty' => 'faculty',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any class content'.
  $permissions['delete any class content'] = array(
    'name' => 'delete any class content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own class content'.
  $permissions['delete own class content'] = array(
    'name' => 'delete own class content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any class content'.
  $permissions['edit any class content'] = array(
    'name' => 'edit any class content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own class content'.
  $permissions['edit own class content'] = array(
    'name' => 'edit own class content',
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
