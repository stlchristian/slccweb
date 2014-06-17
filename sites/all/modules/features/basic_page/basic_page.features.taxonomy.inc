<?php
/**
 * @file
 * basic_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function basic_page_taxonomy_default_vocabularies() {
  return array(
    'articles' => array(
      'name' => 'Categories',
      'machine_name' => 'articles',
      'description' => 'All categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
