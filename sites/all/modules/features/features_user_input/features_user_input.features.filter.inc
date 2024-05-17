<?php
/**
 * @file
 * features_user_input.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function features_user_input_filter_default_formats() {
  $formats = array();

  // Exported format: Basic.
  $formats['basic'] = array(
    'format' => 'basic',
    'name' => 'Basic',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Code.
  $formats['code'] = array(
    'format' => 'code',
    'name' => 'Code',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'media_filter_paragraph_fix' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'replace' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <address> <em> <strong> <b> <i> <big> <small> <sub> <sup> <cite> <code> <img> <ul> <ol> <li> <dl> <lh> <dt> <dd> <br> <p> <table> <th> <td> <tr> <pre> <blockquote> <nowiki> <h1> <h2> <h3> <h4> <h5> <h6> <hr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter_paragraph_fix' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'replace' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'media_filter_paragraph_fix' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'replace' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'insert_view' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Public HTML.
  $formats['public_filter'] = array(
    'format' => 'public_filter',
    'name' => 'Public HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <address> <em> <strong> <b> <i> <big> <small> <sub> <sup> <cite> <code> <img> <ul> <ol> <li> <dl> <lh> <dt> <dd> <br> <p> <table> <th> <td> <tr> <pre> <blockquote> <nowiki> <h1> <h2> <h3> <h4> <h5> <h6> <hr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter_paragraph_fix' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'replace' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
