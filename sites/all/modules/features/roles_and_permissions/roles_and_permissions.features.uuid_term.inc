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
    'name' => 'Bookstore',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '13c585a5-04c8-4673-830a-b02c29608fd3',
    'vocabulary_machine_name' => 'departments',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Athletics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '178a7065-937f-494b-8793-f5a6c2060adf',
    'vocabulary_machine_name' => 'departments',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Financial Aid',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4a63f670-5d9e-46e3-b372-500e38bfe0a2',
    'vocabulary_machine_name' => 'departments',
    'path' => array(
      'pathauto' => 1,
    ),
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
  $terms[] = array(
    'name' => 'Operations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c43dd85b-9ac8-4d4f-baf6-07ef8002d2e8',
    'vocabulary_machine_name' => 'departments',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Library',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ed381254-a94b-4171-b537-c631162c24b5',
    'vocabulary_machine_name' => 'departments',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
