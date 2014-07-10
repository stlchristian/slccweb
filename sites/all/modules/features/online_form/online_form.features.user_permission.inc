<?php
/**
 * @file
 * online_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function online_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'faculty' => 'faculty',
      'financial aid contributor' => 'financial aid contributor',
      'financial aid editor' => 'financial aid editor',
      'library contributor' => 'library contributor',
      'library editor' => 'library editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'financial aid contributor' => 'financial aid contributor',
      'financial aid editor' => 'financial aid editor',
      'library contributor' => 'library contributor',
      'library editor' => 'library editor',
      'operations contributor' => 'operations contributor',
      'operations editor' => 'operations editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions contributor' => 'admissions contributor',
      'admissions editor' => 'admissions editor',
      'athletics contributor' => 'athletics contributor',
      'athletics editor' => 'athletics editor',
      'bookstore contributor' => 'bookstore contributor',
      'bookstore editor' => 'bookstore editor',
      'development contributor' => 'development contributor',
      'development editor' => 'development editor',
      'faculty' => 'faculty',
      'financial aid contributor' => 'financial aid contributor',
      'financial aid editor' => 'financial aid editor',
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
