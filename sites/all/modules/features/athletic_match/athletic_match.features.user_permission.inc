<?php
/**
 * @file
 * athletic_match.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function athletic_match_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create athletic_match content'.
  $permissions['create athletic_match content'] = array(
    'name' => 'create athletic_match content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any athletic_match content'.
  $permissions['delete any athletic_match content'] = array(
    'name' => 'delete any athletic_match content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own athletic_match content'.
  $permissions['delete own athletic_match content'] = array(
    'name' => 'delete own athletic_match content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any athletic_match content'.
  $permissions['edit any athletic_match content'] = array(
    'name' => 'edit any athletic_match content',
    'roles' => array(
      'administrator' => 'administrator',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own athletic_match content'.
  $permissions['edit own athletic_match content'] = array(
    'name' => 'edit own athletic_match content',
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
