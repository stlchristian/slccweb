<?php
/**
 * @file
 * class.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function class_taxonomy_default_vocabularies() {
  return array(
    'academic_divisions' => array(
      'name' => 'Academic Division',
      'machine_name' => 'academic_divisions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'class_section' => array(
      'name' => 'Class Section',
      'machine_name' => 'class_section',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
