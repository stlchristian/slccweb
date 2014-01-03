<?php
/**
 * @file
 * roles_and_permissions.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function roles_and_permissions_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0befcb3f-6d4b-436c-82ee-d2d77411cd75',
    'vocabulary_machine_name' => 'departments',
  );
  $terms[] = array(
    'name' => 'Admissions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '79a76cff-4030-46ba-a075-e4e9cd7ca310',
    'vocabulary_machine_name' => 'departments',
  );
  $terms[] = array(
    'name' => 'Academics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'acff96b2-30a2-4e7c-a046-87acf8067cf3',
    'vocabulary_machine_name' => 'departments',
  );
  return $terms;
}
