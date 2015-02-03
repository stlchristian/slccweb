<?php
/**
 * @file
 * degree_program.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function degree_program_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create degree_program content'.
  $permissions['create degree_program content'] = array(
    'name' => 'create degree_program content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions editor' => 'admissions editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any degree_program content'.
  $permissions['delete any degree_program content'] = array(
    'name' => 'delete any degree_program content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own degree_program content'.
  $permissions['delete own degree_program content'] = array(
    'name' => 'delete own degree_program content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any degree_program content'.
  $permissions['edit any degree_program content'] = array(
    'name' => 'edit any degree_program content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions editor' => 'admissions editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own degree_program content'.
  $permissions['edit own degree_program content'] = array(
    'name' => 'edit own degree_program content',
    'roles' => array(
      'academics contributor' => 'academics contributor',
      'academics editor' => 'academics editor',
      'administrator' => 'administrator',
      'admissions editor' => 'admissions editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
