<?php
/**
 * @file
 * contact_form.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function contact_form_taxonomy_default_vocabularies() {
  return array(
    'enquiry_subjects' => array(
      'name' => 'Enquiry Subjects',
      'machine_name' => 'enquiry_subjects',
      'description' => NULL,
      'hierarchy' => '0',
      'module' => '',
      'weight' => '0',
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
