<?php
/**
 * @file
 * basic_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
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

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
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

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
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

  return $permissions;
}
