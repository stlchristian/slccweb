<?php
/**
 * @file
 * campus_event.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function campus_event_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Admissions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'd246b476-dac5-4b7c-8297-8172114ae106',
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Student Life',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f0efd726-789e-43bf-8d4a-fbfbbc547565',
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8163b72-beb2-4d9c-b7a9-19c950dabcbf',
    'vocabulary_machine_name' => 'event_categories',
  );
  return $terms;
}
