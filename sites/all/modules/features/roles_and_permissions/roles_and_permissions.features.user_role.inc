<?php
/**
 * @file
 * roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: academics contributor.
  $roles['academics contributor'] = array(
    'name' => 'academics contributor',
    'weight' => 8,
  );

  // Exported role: academics editor.
  $roles['academics editor'] = array(
    'name' => 'academics editor',
    'weight' => 16,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 20,
  );

  // Exported role: admissions contributor.
  $roles['admissions contributor'] = array(
    'name' => 'admissions contributor',
    'weight' => 9,
  );

  // Exported role: admissions editor.
  $roles['admissions editor'] = array(
    'name' => 'admissions editor',
    'weight' => 17,
  );

  // Exported role: athletics contributor.
  $roles['athletics contributor'] = array(
    'name' => 'athletics contributor',
    'weight' => 3,
  );

  // Exported role: athletics editor.
  $roles['athletics editor'] = array(
    'name' => 'athletics editor',
    'weight' => 11,
  );

  // Exported role: bookstore contributor.
  $roles['bookstore contributor'] = array(
    'name' => 'bookstore contributor',
    'weight' => 6,
  );

  // Exported role: bookstore editor.
  $roles['bookstore editor'] = array(
    'name' => 'bookstore editor',
    'weight' => 14,
  );

  // Exported role: development contributor.
  $roles['development contributor'] = array(
    'name' => 'development contributor',
    'weight' => 10,
  );

  // Exported role: development editor.
  $roles['development editor'] = array(
    'name' => 'development editor',
    'weight' => 18,
  );

  // Exported role: faculty.
  $roles['faculty'] = array(
    'name' => 'faculty',
    'weight' => 2,
  );

  // Exported role: financial aid contributor.
  $roles['financial aid contributor'] = array(
    'name' => 'financial aid contributor',
    'weight' => 7,
  );

  // Exported role: financial aid editor.
  $roles['financial aid editor'] = array(
    'name' => 'financial aid editor',
    'weight' => 15,
  );

  // Exported role: library contributor.
  $roles['library contributor'] = array(
    'name' => 'library contributor',
    'weight' => 5,
  );

  // Exported role: library editor.
  $roles['library editor'] = array(
    'name' => 'library editor',
    'weight' => 13,
  );

  // Exported role: operations contributor.
  $roles['operations contributor'] = array(
    'name' => 'operations contributor',
    'weight' => 4,
  );

  // Exported role: operations editor.
  $roles['operations editor'] = array(
    'name' => 'operations editor',
    'weight' => 12,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 19,
  );

  return $roles;
}
