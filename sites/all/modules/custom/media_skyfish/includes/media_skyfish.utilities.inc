<?php
/**
 * @file
 * Utility functions for Media: Skyfish.
 */

/**
 * Skyfish media browser form.
 */
function media_skyfish_add($form, &$form_state) {
  // *TODO maybe we can preload this one somehow?
  $folders = media_skyfish_get_user_folders();

  if (empty($folders)) {
    $form['message'] = array(
      '#type' => 'item',
      '#prefix' => '<p>',
      '#markup' => isset($folders->message) ? $folders->message : t('Error while getting data'),
      '#suffix' => '</p>',
    );
    return $form;
  }

  $form = array(
    '#attached' => array(
      'js' => array(
        drupal_get_path('module', 'media_skyfish') . '/js/media_skyfish.browser.js',
      ),
      'css' => array(
        drupal_get_path('module', 'media_skyfish') . '/css/media_skyfish.browser.css',
      ),
    ),
    '#attributes' => array(
      'id' => 'media-skyfish-form',
    ),
  );

  $form['skyfish'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['skyfish']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'submit',
    '#attributes' => array(
      'id' => 'media-skyfish-form-submit',
    ),
    '#submit' => array(
      'media_skyfish_upload_image',
    ),
  );

  //store selected file
  $form['selectedfile'] = array(
    '#type' => 'hidden',
  );

  //search tab
  $form['skyfish']['search'] = array(
    '#type' => 'fieldset',
    '#title' => 'Search',
    '#attributes' => array(
      'folder' => 'skyfishsearch', //ident
      'class' => array('skyfishfieldset'),
    ),
  );
  $form['skyfish']['search']['query'] = array(
    '#type' => 'textfield',
    '#title' => 'Keyword, phrase',
    '#description' => 'look up for content with specified keyword or phrase',
  );

  $form['skyfish']['search']['skyfishsearch'] = array(
    '#type' => 'submit',
    '#value' => 'Search',
  );

  //search results get cast here
  $form['skyfish']['search']['skyfishsearchresults'] = array(
    '#markup' => '<hr /><br /><div class="skyfish_search_results"></div>',
  );

  foreach ($folders as $folder) {
    // *TODO if there is more than 500 images in folder,
    // we need to do more request using media _offset parameter,
    // to get all images.

    //default no pictures
    $obj = new StdClass();
    $images = array($obj);

    $pagination = media_skyfish_do_pagination($images, $folder->id);

    $form['skyfish'][$folder->id] = array(
      '#type' => 'fieldset',
      '#title' => $folder->name,
      '#attributes' => array(
        'folder' => $folder->id, //ident
      ),
      '#description' => isset($pagination['pagination']) ? $pagination['pagination'] : '',
    );

    foreach ($pagination['current'] as $image) {
      if (!isset($image->unique_media_id) || !isset($image->thumbnail_url)) {
        continue;
      }

      $output = theme('imagecache_external', array(
        'path' => $image->thumbnail_url,
        'custom_name' => 'skyfish_' . $image->unique_media_id,
        'style_name' => 'skyfish_thumbnail',
        'attributes' => array(
          'hspace' => 10,
          'vspace' => 10,
          'data-image' => $image->unique_media_id,
        ),
      ));

      $form['skyfish'][$folder->id][$image->unique_media_id] = array(
        '#type' => 'checkbox',
        '#title' => empty($image->title) ? $image->unique_media_id : $image->title,
        '#prefix' => '<div class="media-skyfish-list">' . $output,
        '#suffix' => '</div>',
        '#attributes' => array(
          'class' => array(
            'media-skyfish-checkbox',
          ),
        ),
      );
    }
  }

  return $form;
}

/**
 * Form media skyfish image upload handler.
 */
function media_skyfish_upload_image($form, &$form_state) {

  $skyfish_fid = $form_state['values']['selectedfile'];

  if (empty($skyfish_fid)) {
    form_set_error('skyfish', t('Error while trying to upload image. Please try again later.'));
    return $form;
  }

  // We need to get image name.
  $image_data = media_skyfish_do_request('/media/' . $skyfish_fid);
  // Get download link for image.
  $image = media_skyfish_do_request('/media/' . $skyfish_fid . '/download_location');

  if (empty($image_data) || empty($image)) {
    form_set_error('skyfish', t('Error while trying to get image. Please try again later.'));
    return $form;
  }

  global $user;
  // We store it to skyfish user folder.
  $folder = file_default_scheme() . '://media-skyfish/' . $user->uid . '/';
  $uri = $folder . $image_data->filename;
  file_prepare_directory($folder, FILE_CREATE_DIRECTORY);
  $file = system_retrieve_file($image->url, $uri, TRUE, FILE_EXISTS_RENAME);

  // *TODO maybe we can add image title from image_data object.
  $url = 'media/browser';
  $parameters = array(
    'query' => array(
      'render' => 'media-popup',
      'fid' => $file->fid,
    ),
  );

  drupal_goto($url, $parameters);
}

/**
 * Get user folders from skyfish. Set it to cache.
 *
 * @return bool|mixed
 *   Data received from service.
 */
function media_skyfish_get_user_folders() {
  global $user;

  $cache_name = MEDIA_SKYFISH_NAMESPACE . 'folders_' . $user->uid;
  $folders = cache_get($cache_name);
  if (isset($folders->data) && time() < $folders->expire) {
    return $folders->data;
  }

  $folders = media_skyfish_do_request('/folder?sort_by=name&sort_order=asc');
  if (empty($folders)) {
    return FALSE;
  }


  $filtered = array();
  foreach ($folders as $f) {
    $name = trim($f->name);
    if ($name[0] == '*' || $f->parent == '748627') {
      $filtered[] = $f;
    }
  }

  $folders = $filtered;

  // Set cache for 60 minutes.
  cache_set($cache_name, $folders, 'cache', time() + 60 * 60);
  return $folders;
}

/**
 * Get user folders from skyfish. Set it to cache.
 * @param string $folder_ids
 * @return bool|mixed
 *   Data received from service.
 */
function media_skyfish_get_sub_folders($folder_id) {
  global $user;

  $folders = media_skyfish_do_request('/folder?sort_by=name&sort_order=asc&parent=' . $folder_id);
  if (empty($folders)) {
    return $folder_id;
  }

  $folder_ids = $folder_id;
  foreach ($folders as $f) {
    $name = trim($f->name);
    if ($name[0] != '_' && $name != 'Trash') {
      $folder_ids = $folder_ids.'+'.$f->id;
    }
  }

  return $folder_ids;
}

/**
 * Get all folder images from skyfish.
 *
 * @param string $folder_id, $folder_ids
 *   Folder id.
 *
 * @return bool|mixed
 *   Array of images.
 */
function media_skyfish_get_user_folder_images($folder_id) {
  global $user;
  $cache_name = MEDIA_SKYFISH_NAMESPACE . 'images_' . $user->uid . '_' . $folder_id;
  $images = cache_get($cache_name);
  if (isset($images->data) && time() < $images->expire) {
    return $images->data;
  }

  $folder_ids = media_skyfish_get_sub_folders($folder_id);

  $images = media_skyfish_do_request('/search?&return_values=title+unique_media_id+thumbnail_url&order=created&direction=desc&folder_ids=' . $folder_ids);

  if (empty($images->response->media)) {
    return FALSE;
  }

  media_skyfish_cleanup_results($images);

  // Set cache for 60 minutes.
  cache_set($cache_name, $images->response->media, 'cache', time() + 60 * 60);
  return $images->response->media;
}

/**
 * Do pagination for provided array.
 *
 * @param array $data , image data
 * @param int $dir_id , directory id in skyfish
 *
 * @return array
 *   Array containing pagination html and current page array elements.
 */
function media_skyfish_do_pagination(array $data, $dir_id) {
  $per_page = 49;

  $total_array = count($data);
  if ($total_array <= $per_page) {
    return array('current' => $data);
  }

  $current_page = pager_default_initialize($total_array, $per_page);
  $chunks = array_chunk($data, $per_page, TRUE);
  $current = $chunks[$current_page];
  $pagination = theme('skyfish_pager', array(
    'pages' => sizeof($chunks),
    'current' => $current_page,
    'dir_id' => $dir_id,
  ));

  return array(
    'current' => $current,
    'pagination' => $pagination,
  );
}

/**
 * Do curl request to skyfish for provided url.
 *
 * @param string $url
 *   Request url.
 *
 * @return bool|mixed
 *   Object containing received data.
 */
function media_skyfish_do_request($url) {
  $api = media_skyfish_get_api();
  if (empty($api['api_key']) || empty($api['api_secret'])) {
    return FALSE;
  }

  $hash = hash_hmac('sha1', $api['api_key'] . ':' . time(), $api['api_secret']);

  $headers = array(
    'headers' => array(
      'Content-length' => '0',
      'Content-type' => 'application/json',
      'Authorization' => 'CBX-HMAC Key=' . $api['api_key'] . ' HMAC=' . $hash . ' TS=' . time(),
    ),
  );

  $return = drupal_http_request(MEDIA_SKYFISH_API_BASE_URL . $url, $headers);
  if (isset($return->code) && $return->code == 400) {
    return FALSE;
  }

  return json_decode($return->data);
}

/*
 * helper, cleanup extensions, long names, special characters
 */
function media_skyfish_cleanup_results(&$data) {
  foreach ($data->response->media as $m) {
    $m->title = str_replace('_', ' ', $m->title);
    $m->title = str_ireplace('.jpg', '', $m->title);
    $m->title = str_ireplace('.png', '', $m->title);
    $m->title = str_ireplace('.gif', '', $m->title);
    $m->title = str_ireplace('.jpeg', '', $m->title);
    $m->title = wordwrap($m->title, 12, ' ', TRUE);
  }
}


function media_skyfish_browsebydir($dir_id) {

  $folders = media_skyfish_get_user_folders();

  foreach ($folders as $folder) {

    if ($folder->id == $dir_id) {

      $images = media_skyfish_get_user_folder_images($folder->id);
      break;
    }
  }

  if (empty($images)) {
    return;
  }

  $pagination = media_skyfish_do_pagination($images, $dir_id);

  $form['pager'] = array(
    '#markup' => $pagination['pagination'],
  );

  foreach ($pagination['current'] as $image) {
    if (!isset($image->unique_media_id) || !isset($image->thumbnail_url)) {
      continue;
    }

    $output = theme('imagecache_external', array(
      'path' => $image->thumbnail_url,
      'custom_name' => 'skyfish_' . $image->unique_media_id,
      'style_name' => 'skyfish_thumbnail',
      'attributes' => array(
        'hspace' => 10,
        'vspace' => 10,
        'data-image' => $image->unique_media_id,
      ),
    ));

    $form['skyfish'][$dir_id][$image->unique_media_id] = array(
      '#type' => 'checkbox',
      '#title' => empty($image->title) ? $image->unique_media_id : $image->title,
      '#prefix' => '<div class="media-skyfish-list">' . $output,
      '#suffix' => '</div>',
      '#attributes' => array(
        'class' => array(
          'media-skyfish-checkbox',
        ),
        'name' => $image->unique_media_id,
        'id' => 'name-' . $image->unique_media_id,
      ),
    );
  }

  print drupal_render($form);
}


function media_skyfish_search($query) {

  $data = media_skyfish_do_request('/search?q=' . urlencode($query) . '&return_values=title+unique_media_id+thumbnail_url&query_type=strict_and_search');

  $output = '';

  if (sizeof($data->response->media) < 1) {
    $output = t('No images for "<b>@query</b>"', array('@query' => $query));
    print $output;
    drupal_exit();
  }

  media_skyfish_cleanup_results($data);

  foreach ($data->response->media as $image) {

    $output = theme('imagecache_external', array(
      'path' => $image->thumbnail_url,
      'custom_name' => 'skyfish_' . $image->unique_media_id,
      'style_name' => 'skyfish_thumbnail',
      'attributes' => array(
        'hspace' => 10,
        'vspace' => 10,
        'data-image' => $image->unique_media_id,
      ),
    ));

    $form['skyfish']['desc'] = array(
      '#prefix' => '<div><p>',
      '#markup' => t('Found <b>@count</b> images for "<b>@query</b>"', array(
        '@query' => $query,
        '@count' => sizeof($data->response->media),
      )),
      '#suffix' => '</p></div>',
    );

    $form['skyfish']['searchresults'][$image->unique_media_id] = array(
      '#type' => 'checkbox',
      '#title' => empty($image->title) ? $image->unique_media_id : $image->title,
      '#prefix' => '<div class="media-skyfish-list">' . $output,
      '#suffix' => '</div>',
      '#attributes' => array(
        'class' => array(
          'media-skyfish-checkbox',
        ),
        'name' => $image->unique_media_id,
        'id' => 'name-' . $image->unique_media_id,
      ),
    );

  }

  print drupal_render($form);

}
