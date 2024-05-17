<?php

/**
 * @file
 * leader_board_entry_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function leader_board_entry_content_type_taxonomy_default_vocabularies() {
  return array(
    'british_cycle_quest_level' => array(
      'name' => 'British Cycle Quest Level',
      'machine_name' => 'british_cycle_quest_level',
      'description' => '',
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
