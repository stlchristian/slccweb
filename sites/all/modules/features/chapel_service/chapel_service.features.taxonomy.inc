<?php
/**
 * @file
 * chapel_service.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function chapel_service_taxonomy_default_vocabularies() {
  return array(
    'academic_semester' => array(
      'name' => 'Academic Semester',
      'machine_name' => 'academic_semester',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'chapel_speaker' => array(
      'name' => 'Chapel Speaker',
      'machine_name' => 'chapel_speaker',
      'description' => 'Chapel speakers, collected over time.',
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
  );
}
