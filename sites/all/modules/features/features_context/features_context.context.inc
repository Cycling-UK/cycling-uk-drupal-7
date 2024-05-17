<?php

/**
 * @file
 * features_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_cfe';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19946 => 19946,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---cfe' => array(
          'delta' => 'internal-advert---cfe',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_cfe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_donate';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19956 => 19956,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---donate' => array(
          'delta' => 'internal-advert---donate',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_donate'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_join';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19936 => 19936,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-join' => array(
          'delta' => 'join',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_join'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_local_groups';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19966 => 19966,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---local-groups' => array(
          'delta' => 'internal-advert---local-groups',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_local_groups'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_magazine';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19941 => 19941,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---magazine' => array(
          'delta' => 'internal-advert---magazine',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_magazine'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_off_road_enews';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19976 => 19976,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---off-road-enews' => array(
          'delta' => 'internal-advert---off-road-enews',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_off_road_enews'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_volunteer';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19961 => 19961,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---volunteer' => array(
          'delta' => 'internal-advert---volunteer',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_volunteer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_womens_enews';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19971 => 19971,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---womens-enews' => array(
          'delta' => 'internal-advert---womens-enews',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_womens_enews'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_advert_workplaces';
  $context->description = '';
  $context->tag = 'Internal advert';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19951 => 19951,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-internal-advert---cfe-non-accred' => array(
          'delta' => 'internal-advert---cfe-non-accred',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '50',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal advert');
  $export['internal_advert_workplaces'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_cfe_enews';
  $context->description = 'CFE enews CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19096 => 19096,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_1' => array(
          'delta' => 'new_ctas-block_1',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CFE enews CTA');
  t('New CTAs');
  $export['new_cta_cfe_enews'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_cycle_magazine';
  $context->description = 'Cycle magazine CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19076 => 19076,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_2' => array(
          'delta' => 'new_ctas-block_2',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Cycle magazine CTA');
  t('New CTAs');
  $export['new_cta_cycle_magazine'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_insurance';
  $context->description = 'Insurance CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        18986 => 18986,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_3' => array(
          'delta' => 'new_ctas-block_3',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Insurance CTA');
  t('New CTAs');
  $export['new_cta_insurance'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_join_cyclinguk';
  $context->description = 'Join Cycling UK CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19081 => 19081,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_4' => array(
          'delta' => 'new_ctas-block_4',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join Cycling UK CTA');
  t('New CTAs');
  $export['new_cta_join_cyclinguk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_support_cyclinguk';
  $context->description = 'Support Cycling UK CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19086 => 19086,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_5' => array(
          'delta' => 'new_ctas-block_5',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('New CTAs');
  t('Support Cycling UK CTA');
  $export['new_cta_support_cyclinguk'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_cta_womens_enews';
  $context->description = 'Women\'s enews CTA';
  $context->tag = 'New CTAs';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        19091 => 19091,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-new_ctas-block_6' => array(
          'delta' => 'new_ctas-block_6',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('New CTAs');
  t('Women\'s enews CTA');
  $export['new_cta_womens_enews'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_cta_cfe';
  $context->description = 'CFE call to action';
  $context->tag = 'cta';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        18341 => 18341,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-advert_hero-block_8' => array(
          'delta' => 'advert_hero-block_8',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CFE call to action');
  t('cta');
  $export['post_cta_cfe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_cta_donate';
  $context->description = 'Join call to action';
  $context->tag = 'cta';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        11 => 11,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-advert_hero-block_4' => array(
          'delta' => 'advert_hero-block_4',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join call to action');
  t('cta');
  $export['post_cta_donate'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_cta_join';
  $context->description = 'Join call to action';
  $context->tag = 'cta';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        1 => 1,
        21 => 21,
        14121 => 14121,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-join' => array(
          'delta' => 'join',
          'module' => 'bean',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join call to action');
  t('cta');
  $export['post_cta_join'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post_cta_volunteer';
  $context->description = 'Volunteer call to action';
  $context->tag = 'cta';
  $context->conditions = array(
    'node_taxonomy' => array(
      'options' => array(
        'node_form' => '1',
      ),
      'values' => array(
        1 => 1,
        16 => 16,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-advert_hero-block_3' => array(
          'delta' => 'advert_hero-block_3',
          'module' => 'views',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Volunteer call to action');
  t('cta');
  $export['post_cta_volunteer'] = $context;

  return $export;
}
