<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_coverage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ucsf_pharmacy_syndicated_coverage_taxonomy_default_vocabularies() {
  return array(
    'article' => array(
      'name' => 'Article Sources',
      'machine_name' => 'article',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
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
