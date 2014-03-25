<?php
/**
 * @file
 * athlete_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function athlete_profile_taxonomy_default_vocabularies() {
  return array(
    'academic_class' => array(
      'name' => 'Academic Class',
      'machine_name' => 'academic_class',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'position' => array(
      'name' => 'Position',
      'machine_name' => 'position',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sport' => array(
      'name' => 'Sport',
      'machine_name' => 'sport',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
