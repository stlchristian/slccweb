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

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: development contributor.
  $roles['development contributor'] = array(
    'name' => 'development contributor',
    'weight' => 5,
  );

  // Exported role: development editor.
  $roles['development editor'] = array(
    'name' => 'development editor',
    'weight' => 4,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
  );

  return $roles;
}
