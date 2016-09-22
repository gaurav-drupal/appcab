<?php
/**
 * @file
 * openlayers_taxonomy_test_feature.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function openlayers_taxonomy_test_feature_taxonomy_default_vocabularies() {
  return array(
    'ol_taxonomy_test' => array(
      'name' => 'OL Taxonomy Test',
      'machine_name' => 'ol_taxonomy_test',
      'description' => 'A testing taxonomy for the OpenLayers Taxonomy module.',
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
