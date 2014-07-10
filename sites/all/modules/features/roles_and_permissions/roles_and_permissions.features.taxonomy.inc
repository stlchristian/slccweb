<?php
/**
 * @file
 * roles_and_permissions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function roles_and_permissions_taxonomy_default_vocabularies() {
  return array(
    'departments' => array(
      'name' => 'Departments',
      'machine_name' => 'departments',
      'description' => 'departments to use for workbench settings',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
