<?php
/**
 * @file
 * student_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function student_profile_taxonomy_default_vocabularies() {
  return array(
    'gender' => array(
      'name' => 'Gender',
      'machine_name' => 'gender',
      'description' => 'Gender',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
