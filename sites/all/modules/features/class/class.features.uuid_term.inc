<?php
/**
 * @file
 * class.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function class_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Biblical',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '27345280-1083-49e4-9694-981765814c4e',
    'vocabulary_machine_name' => 'academic_divisions',
  );
  $terms[] = array(
    'name' => 'A',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '326f330d-01b9-4a25-9c2d-0eae269a1da5',
    'vocabulary_machine_name' => 'class_section',
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '618e4637-8576-4164-bc28-0d11137382e7',
    'vocabulary_machine_name' => 'academic_divisions',
  );
  $terms[] = array(
    'name' => 'B',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73721c3c-ab16-4140-b630-4eb35162dd67',
    'vocabulary_machine_name' => 'class_section',
  );
  $terms[] = array(
    'name' => 'C',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89685d79-dcfd-4225-8e72-8f266a7b866c',
    'vocabulary_machine_name' => 'class_section',
  );
  $terms[] = array(
    'name' => 'Traditional Degrees',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9382a2c5-9e8a-44ed-bf8b-b6f83855f2a8',
    'vocabulary_machine_name' => 'academic_program',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Professional',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bad86e82-0d91-45b1-b6eb-e01e968e5021',
    'vocabulary_machine_name' => 'academic_divisions',
  );
  $terms[] = array(
    'name' => 'Evening Degrees',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f78354f1-1406-46cd-b7cc-09ec7b1f9fdd',
    'vocabulary_machine_name' => 'academic_program',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'D',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fdeeb7de-3beb-4e2a-b3dc-942b8c66f478',
    'vocabulary_machine_name' => 'class_section',
  );
  return $terms;
}
