<?php

/**
 * @file
 * user_input.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function user_input_filter_default_formats() {
  $formats = array();

  // Exported format: Guest HTML Filter.
  $formats['basic'] = array(
    'format' => 'basic',
    'name' => 'Guest HTML Filter',
    'cache' => 0,
    'status' => 1,
    'weight' => -8,
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
      'filter_lexicon' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Code.
  $formats['code'] = array(
    'format' => 'code',
    'name' => 'Code',
    'cache' => 0,
    'status' => 1,
    'weight' => -6,
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
      'video_filter' => array(
        'weight' => -1,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 1,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'whatchado' => 'whatchado',
            'archive' => 0,
            'bliptv' => 0,
            'candidcareer' => 0,
            'capped' => 0,
            'collegehumor' => 0,
            'coub' => 0,
            'dailymotion' => 0,
            'democracynow_fullshow' => 0,
            'democracynow_story' => 0,
            'flickr_slideshows' => 0,
            'flickr_video' => 0,
            'foxnews' => 0,
            'gametrailers' => 0,
            'gamevideos' => 0,
            'giphy' => 0,
            'godtube' => 0,
            'google' => 0,
            'instagram' => 0,
            'metacafe' => 0,
            'mailru' => 0,
            'myspace' => 0,
            'myvideo' => 0,
            'picasa_slideshows' => 0,
            'rutube' => 0,
            'slideshare' => 0,
            'streamhoster' => 0,
            'teachertube' => 0,
            'ted' => 0,
            'twitch' => 0,
            'ustream' => 0,
            'vbox' => 0,
            'vimeo' => 0,
            'vine' => 0,
            'wistia' => 0,
            'youku' => 0,
            'youtube' => 0,
            'youtube_playlist' => 0,
          ),
          'video_filter_multiple_sources' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'insert_block' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'check_roles' => 0,
        ),
      ),
      'insert_view' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'video_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 1000,
          'video_filter_height' => 600,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 0,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'flickr_slideshows' => 'flickr_slideshows',
            'flickr_video' => 'flickr_video',
            'google' => 'google',
            'instagram' => 'instagram',
            'vimeo' => 'vimeo',
            'vine' => 'vine',
            'youku' => 'youku',
            'youtube' => 'youtube',
            'youtube_playlist' => 'youtube_playlist',
            'archive' => 0,
            'bliptv' => 0,
            'candidcareer' => 0,
            'capped' => 0,
            'collegehumor' => 0,
            'coub' => 0,
            'dailymotion' => 0,
            'democracynow_fullshow' => 0,
            'democracynow_story' => 0,
            'foxnews' => 0,
            'gametrailers' => 0,
            'gamevideos' => 0,
            'giphy' => 0,
            'godtube' => 0,
            'metacafe' => 0,
            'mailru' => 0,
            'myspace' => 0,
            'myvideo' => 0,
            'picasa_slideshows' => 0,
            'rutube' => 0,
            'slideshare' => 0,
            'streamhoster' => 0,
            'teachertube' => 0,
            'ted' => 0,
            'twitch' => 0,
            'ustream' => 0,
            'vbox' => 0,
            'whatchado' => 0,
            'wistia' => 0,
          ),
          'video_filter_multiple_sources' => 1,
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
      'filter_html' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <address> <em> <strong> <b> <big> <small> <sub> <sup> <cite> <code> <img> <ul> <ol> <li> <dl> <lh> <dt> <dd> <br> <p> <table> <thead> <tfoot> <th> <td> <tr> <pre> <blockquote> <nowiki> <h1> <h2> <h3> <h4> <h5> <h6> <hr> <iframe> <div> <span>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'picture' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'video_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 1000,
          'video_filter_height' => 600,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 0,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'flickr_slideshows' => 'flickr_slideshows',
            'flickr_video' => 'flickr_video',
            'google' => 'google',
            'instagram' => 'instagram',
            'vimeo' => 'vimeo',
            'youku' => 'youku',
            'youtube' => 'youtube',
            'youtube_playlist' => 'youtube_playlist',
            'archive' => 0,
            'bliptv' => 0,
            'candidcareer' => 0,
            'capped' => 0,
            'collegehumor' => 0,
            'coub' => 0,
            'dailymotion' => 0,
            'democracynow_fullshow' => 0,
            'democracynow_story' => 0,
            'foxnews' => 0,
            'gametrailers' => 0,
            'gamevideos' => 0,
            'giphy' => 0,
            'godtube' => 0,
            'metacafe' => 0,
            'mailru' => 0,
            'myspace' => 0,
            'myvideo' => 0,
            'picasa_slideshows' => 0,
            'rutube' => 0,
            'slideshare' => 0,
            'streamhoster' => 0,
            'teachertube' => 0,
            'ted' => 0,
            'twitch' => 0,
            'ustream' => 0,
            'vbox' => 0,
            'vine' => 0,
            'whatchado' => 0,
            'wistia' => 0,
          ),
          'video_filter_multiple_sources' => 1,
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
      'picture' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <address> <em> <strong> <b> <big> <small> <sub> <sup> <cite> <img> <ul> <ol> <li> <dl> <lh> <dt> <dd> <br> <p> <table> <thead> <tfoot> <th> <td> <tr> <pre> <blockquote> <h1> <h2> <h3> <h4> <h5> <h6> <hr> <iframe> <div> <span>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'insert_view' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'insert_block' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'check_roles' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => 50,
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
    'weight' => -5,
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

  // Exported format: Cycling UK Contributors HTML.
  $formats['public_filter'] = array(
    'format' => 'public_filter',
    'name' => 'Cycling UK Contributors HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'media_filter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ol> <ul> <li> <dl> <dt> <dd> <address> <b><lh> <br> <p> <table> <thead> <tfoot> <th> <td> <tr> <pre> <h2> <h3> <h4> <h5> <h6> <hr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
