<?php
/**
 * @file
 * student_profile.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function student_profile_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Male',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd7780de2-9246-4137-8bcc-fda0fafb91a8',
    'vocabulary_machine_name' => 'gender',
  );
  $terms[] = array(
    'name' => 'Female',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f0411022-e6a1-4378-abe0-a2581d0545c5',
    'vocabulary_machine_name' => 'gender',
  );
  return $terms;
}
