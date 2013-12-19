<?php
/**
 * @file
 * events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function events_taxonomy_default_vocabularies() {
  return array(
    'event_categories' => array(
      'name' => 'Event Category',
      'machine_name' => 'event_categories',
      'description' => 'The different types of events that SLCC has',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
