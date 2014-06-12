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
    'chapel_speaker' => array(
      'name' => 'Chapel Speaker',
      'machine_name' => 'chapel_speaker',
      'description' => 'Chapel speakers, collected over time.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
