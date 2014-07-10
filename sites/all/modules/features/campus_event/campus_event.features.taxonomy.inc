<?php
/**
 * @file
 * campus_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function campus_event_taxonomy_default_vocabularies() {
  return array(
    'event_categories' => array(
      'name' => 'Event Category',
      'machine_name' => 'event_categories',
      'description' => 'The different types of campus_event that SLCC has',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
