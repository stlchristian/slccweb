<?php
/**
 * @file
 * calendar_entry.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function calendar_entry_taxonomy_default_vocabularies() {
  return array(
    'calendar' => array(
      'name' => 'Calendar',
      'machine_name' => 'calendar',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school_year' => array(
      'name' => 'School Year',
      'machine_name' => 'school_year',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'semester' => array(
      'name' => 'Semester',
      'machine_name' => 'semester',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
