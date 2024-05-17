<?php

/**
 * @file
 * content_type_challenge.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_challenge_taxonomy_default_vocabularies() {
  return array(
    'challenge' => array(
      'name' => 'Challenge',
      'machine_name' => 'challenge',
      'description' => 'Hierarchy of challenges',
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
