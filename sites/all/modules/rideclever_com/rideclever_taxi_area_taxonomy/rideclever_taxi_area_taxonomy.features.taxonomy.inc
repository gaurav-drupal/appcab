<?php
/**
 * @file
 * rideclever_taxi_area_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rideclever_taxi_area_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'taxi_area' => array(
      'name' => 'Taxi Area',
      'machine_name' => 'taxi_area',
      'description' => 'Taxi coverage area',
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
