<?php
/**
 * @file
 * athletic_match.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function athletic_match_taxonomy_default_vocabularies() {
  return array(
    'opponent' => array(
      'name' => 'Opponent',
      'machine_name' => 'opponent',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
