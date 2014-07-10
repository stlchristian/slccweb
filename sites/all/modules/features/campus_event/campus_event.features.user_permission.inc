<?php
/**
 * @file
 * campus_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campus_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create campus_event content'.
  $permissions['create campus_event content'] = array(
    'name' => 'create campus_event content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'library contributor' => 'library contributor',
      'library editor' => 'library editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any campus_event content'.
  $permissions['delete any campus_event content'] = array(
    'name' => 'delete any campus_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own campus_event content'.
  $permissions['delete own campus_event content'] = array(
    'name' => 'delete own campus_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any campus_event content'.
  $permissions['edit any campus_event content'] = array(
    'name' => 'edit any campus_event content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'library contributor' => 'library contributor',
      'library editor' => 'library editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own campus_event content'.
  $permissions['edit own campus_event content'] = array(
    'name' => 'edit own campus_event content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'library contributor' => 'library contributor',
      'library editor' => 'library editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
