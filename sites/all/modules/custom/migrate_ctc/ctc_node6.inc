<?php


/**
 * Extend the default DrupalNode6Migration class to add field migrations.
 */
class CtcNode6Migration extends DrupalNode6Migration {

  protected $all_node_migrations = array(
    'node_info',
    'node_area',
    'node_article',
    'node_blog',
    'node_briefings',
    'node_campaign',
    'node_case_study',
    'node_course_details',
    'node_course_venues',
    'node_cycle_magazine',
    'node_editorial_page',
    'node_gallery',
    'node_link',
    'node_member_benefit',
    'node_news',
    'node_newsletter',
    'node_panel',
    'node_person_profile',
    'node_press_release',
    'node_project',
    'node_publication',
    'node_tribe',
    'groups',
    'affiliated_centre'
  );

  protected function addUnmigratedImageFieldDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':file_class',
      $field_name . ':preserve_files',
      $field_name . ':destination_dir',
      $field_name . ':destination_file',
      $field_name . ':file_replace',
      $field_name . ':source_dir',
      $field_name . ':urlencode',
      $field_name . ':alt',
      $field_name . ':title'));
  }

  protected function addUnmigratedFileFieldDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':file_class',
      $field_name . ':preserve_files',
      $field_name . ':destination_dir',
      $field_name . ':destination_file',
      $field_name . ':file_replace',
      $field_name . ':source_dir',
      $field_name . ':urlencode',
      $field_name . ':description',
      $field_name . ':display'));
  }

  protected function addUnmigratedGeoFieldDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':geohash',
      $field_name . ':geo_type',
      $field_name . ':lat',
      $field_name . ':lon',
      $field_name . ':left',
      $field_name . ':top',
      $field_name . ':right',
      $field_name . ':bottom'));
  }

  protected function addUnmigratedAddressDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':administrative_area',
      $field_name . ':sub_administrative_area',
      $field_name . ':locality',
      $field_name . ':dependent_locality',
      $field_name . ':postal_code',
      $field_name . ':thoroughfare',
      $field_name . ':premise',
      $field_name . ':sub_premise',
      $field_name . ':organisation_name',
      $field_name . ':name_line',
      $field_name . ':first_name',
      $field_name . ':last_name',
      $field_name . ':data'));
  }

  protected function addUnmigratedlocationDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':lat',
      $field_name . ':lon',
      $field_name . ':geohash',
      $field_name . ':left',
      $field_name . ':right',
      $field_name . ':top',
      $field_name . ':bottom'));
  }

  protected function addUnmigratedTaxonomyFieldDestination($field_name) {
    $this->addUnmigratedDestinations(array(
      $field_name,
      $field_name . ':source_type',
      $field_name . ':create_term',
      $field_name . ':ignore_case'));
  }

  /**
   * Map D6 input formats to D7 ones.
   *
   * @see DrupalMigration::mapFormat()
   */
  protected function mapFormat($format) {
    //print_r($format);
    if ($format==1) {
      return 'filtered_html';
    } elseif ($format==3) {
      return 'code';
    } elseif ($format==2 or $format==5) {
      return 'full_html';
    } elseif ($format==21) {
      return 'public_filter';
    } elseif ($format==4) {
      return 'plain_text';
    } else {
      return 'basic';
    }
  }


  /**
   * Tweak D6 source data before mapping to D7 destination.
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    //enforce language neutral
    $row->language = LANGUAGE_NONE;

    //convert exclude from main news flag
    if (isset($row->field_exclude_from_main_news)) {
      $row->field_exclude_from_main_news = ($row->field_exclude_from_main_news == 'off' ? FALSE : TRUE);
    }


    //convert images to new path and alt_title to file description field for SQL update later
    $this->prepareImageField($row);
    if (isset($row->{'field_image:alt'}) or isset($row->{'field_image:title'})) {
      $row->merged_alt_title = $row->{'field_image:alt'}[0].'###'.$row->{'field_image:title'}[0];
    }

    //supporting files - convert path - if node has both supporting files and upload then use upload and both will be concatenated inc descriptions
    $file_paths = array();
    if (is_array($row->field_supporting_file)) {
      $id = 0;
      foreach ($row->field_supporting_file as $file_fid) {
        $query = Database::getConnection('default', $this->sourceConnection)->select('files', 'f');
        $query->fields('f', array(
          'filename',
          'filepath'));
        $query->condition('fid', $file_fid);
        $result = $query->execute();
        // Strip front off filepath so we can use public:// scheme.
        // In this case we're keeping the original tree structure.
        // Alternative is to use filename, to flatten tree, or use
        // filename plus some other path parts to re-arrange tree.
        $file_path = $result->fetch()->filepath;
        $file_paths[] = str_replace('sites/default/files', '', $file_path);
        $file_description[] = $row->{'field_supporting_file:description'}[$id];
        //print_r($file_description);
        $id = $id + 1;
      }
    $row->field_supporting_file = $file_paths;
    $row->{'field_supporting_file:description'} = $file_description;
    }
    if (is_array($row->field_file)) {
      $id = 0;
      foreach ($row->field_file as $file_fid) {
        $query = Database::getConnection('default', $this->sourceConnection)->select('files', 'f');
        $query->fields('f', array(
          'filename',
          'filepath'));
        $query->condition('fid', $file_fid);
        $result = $query->execute();
        // Strip front off filepath so we can use public:// scheme.
        // In this case we're keeping the original tree structure.
        // Alternative is to use filename, to flatten tree, or use
        // filename plus some other path parts to re-arrange tree.
        $file_path = $result->fetch()->filepath;
        $file_paths[] = str_replace('sites/default/files', '', $file_path);
        $file_description[] = $row->{'field_file:description'}[$id];
        //print_r($file_description);
        $id = $id + 1;
      }
    $row->field_file = $file_paths;
    $row->{'field_file:description'} = $file_description;
    }
    if (is_array($row->upload)) {
      $id = 0;
      foreach ($row->upload as $file_fid) {
        $query = Database::getConnection('default', $this->sourceConnection)->select('files', 'f');
        $query->fields('f', array(
          'filename',
          'filepath'));
        $query->condition('fid', $file_fid);
        $result = $query->execute();
        // Strip front off filepath so we can use public:// scheme.
        // In this case we're keeping the original tree structure.
        // Alternative is to use filename, to flatten tree, or use
        // filename plus some other path parts to re-arrange tree.
        $file_path = $result->fetch()->filepath;
        $file_paths[] = str_replace('sites/default/files', '', $file_path);
        $file_description[] = $row->{'upload:description'}[$id];
        //print_r($file_description);
        $id = $id + 1;
      }
    $row->upload = $file_paths;
    $row->{'upload:description'} = $file_description;
    }
    $row->file_path = $file_paths;
    $row->file_desc  = $file_description;


    //merge node ref fields into 1 new field merged_node_references
    if (isset($row->field_related_info_page_article) or isset($row->field_related_publication_artcle) or isset($row->field_previous_publication) or isset($row->field_featured)) {
      $related = array();
      if (isset($row->field_related_info_page_article)) {
        $related[] = $this->handleNodeRefLinks($row->field_related_info_page_article);
      }
      if (isset($row->field_related_publication_artcle)) {
        $related[] = $this->handleNodeRefLinks($row->field_related_publication_artcle);
      }
      if (isset($row->field_previous_publication)) {
        $related[] = $this->handleNodeRefLinks($row->field_previous_publication);
      }
      if (isset($row->field_featured)){
        $related[] = $this->handleNodeRefLinks($row->field_featured);
      }
      if (isset($row->field_carousel_items)){
        $related[] = $this->handleNodeRefLinks($row->field_carousel_items);
      }
      if (isset($row->field_essentials)){
        $related[] = $this->handleNodeRefLinks($row->field_essentials);
      }
      if (isset($row->field_latest)){
        $related[] = $this->handleNodeRefLinks($row->field_latest);
      }
    }
    $row->merged_node_references = $related;

    if (isset($row->field_prerequisite_courses)) {
      $row->field_prerequisite_courses = $this->handleNodeRefLinks($row->field_prerequisite_courses);
    }

    if (isset($row->field_feed_in_courses)) {
      $row->field_feed_in_courses = $this->handleNodeRefLinks($row->field_feed_in_courses);
    }

    //merge tag ref fields into 1 new field merged_tags
    if (isset($row->{6}) or isset($row->{41}) or isset($row->{8}) or isset($row->{31}) or isset($row->{19}) or isset($row->{46}) or isset($row->{4})) {
      $tags = array();
      if (isset($row->{6})) { //tags
        $tags = drupal_array_merge_deep($tags, $row->{6});
      }
      if (isset($row->{41})) { //subject
        $tags = drupal_array_merge_deep($tags, $row->{41});
      }
      if (isset($row->{8})) { //map feature
        $tags = drupal_array_merge_deep($tags, $row->{8});
      }
      if (isset($row->{31})) { //cycle mag
        $tags = drupal_array_merge_deep($tags, $row->{31});
      }
      if (isset($row->{19})) { //CUK publication
        $tags = drupal_array_merge_deep($tags, $row->{19});
      }
      if (isset($row->{46})) { //Q&A
        $tags = drupal_array_merge_deep($tags, $row->{46});
      }
      if (isset($row->{4})) { //campaign theme
        $tags = drupal_array_merge_deep($tags, $row->{4});
      }
    }
    $row->merged_tags = $tags;


    //merge CUK Sections ref fields into 1 new field merged_cuk_sections
    if (isset($row->{21}) or isset($row->{36}) or isset($row->{17}) or isset($row->{12})) {
      $cuk_section = array();
      if (isset($row->{21})) { //area
        $cuk_section = drupal_array_merge_deep($cuk_section, $row->{21});
      }
      if (isset($row->{36})) { //category
        $cuk_section = drupal_array_merge_deep($cuk_section, $row->{36});
      }
      if (isset($row->{17})) { //section
        $cuk_section = drupal_array_merge_deep($cuk_section, $row->{17});
      }
      if (isset($row->{12})) { //project
        $cuk_section = drupal_array_merge_deep($cuk_section, $row->{12});
      }
    }
    $row->merged_cuk_section = $cuk_section;

    //merge cycling type ref fields into 1 new field merged_cycling_types
    if (isset($row->{3}) or isset($row->{51})) {
      $cycling_type = array();
      if (isset($row->{3})) { //tribe
        $cycling_type = drupal_array_merge_deep($cycling_type, $row->{3});
      }
      if (isset($row->{51})) { //persona
        $cycling_type = drupal_array_merge_deep($cycling_type, $row->{51});
      }
    }
    $row->merged_cycling_type = $cycling_type;
}
  /**
   * Convert image field FIDs to pathnames, so we can copy files to new locations.
   */
  private function prepareImageField($row) {
    if (isset($row->field_image) and is_array($row->field_image)) {
      $image_fid = $row->field_image[0];
      $query = Database::getConnection('default', $this->sourceConnection)->select('files', 'f');
      $query->fields('f', array(
        'filename',
        'filepath'));
      $query->condition('fid', $image_fid);
      $result = $query->execute();
      // Strip front off filepath so we can use public:// scheme.
      // In this case we're keeping the original tree structure.
      // Alternative is to use filename, to flatten tree, or use
      // filename plus some other path parts to re-arrange tree.
      $image_path = $result->fetch()->filepath;
      $row->field_image = str_replace('sites/default/files', '', $image_path);
    }
  }

  public function complete($node, stdClass $row) {
    //print_r($node);
    $wnode = entity_metadata_wrapper('node', $node);
    // Handle inline body images and links
    if ($wnode->body->value()) {
      $node_body_value_replace = self::handleInlineBodyImagesAndLinks($wnode, 'body');
      $wnode->body->value->set($node_body_value_replace);
      MigrateDestinationMedia::rewriteImgTags($node, 'body');
    }
    if ($node->migrate['machineName'] == "node_briefings") {
      if ($wnode->field_headline_message->value()) {
        $node_headline_value_replace = self::handleInlineBodyImagesAndLinks($wnode, 'field_headline_message');
        $wnode->body->value->set($node_headline_value_replace);
        MigrateDestinationMedia::rewriteImgTags($node, 'field_headline_message');
      }
      if ($wnode->field_policy_key_facts->value()) {
        $node_key_value_replace = self::handleInlineBodyImagesAndLinks($wnode, 'field_policy_key_facts');
        $wnode->body->value->set($node_key_value_replace);
        MigrateDestinationMedia::rewriteImgTags($node, 'field_policy_key_facts');
      }
      if ($wnode->field_cycling_uk_view->value()) {
        $node_view_value_replace = self::handleInlineBodyImagesAndLinks($wnode, 'field_cycling_uk_view');
        $wnode->body->value->set($node_view_value_replace);
        MigrateDestinationMedia::rewriteImgTags($node, 'field_cycling_uk_view');
      }
    }
    if ($node->migrate['machineName'] != "node_link" and $node->migrate['machineName'] != "node_publication") {
      if ($wnode->field_additional_content->value()) {
        $node_additional_value_replace = self::handleInlineBodyImagesAndLinks($wnode, 'field_additional_content');
        $wnode->field_additional_content->value->set($node_additional_value_replace);
        MigrateDestinationMedia::rewriteImgTags($node, 'field_additional_content');
      }
    }
      node_save($node);
  }

  /**
   * Handle inline HTML <img> tags in body fields.
   */
  private function handleInlineBodyImagesAndLinks($wnode, $fieldname) {
    // Find inline <img> tags in body, load image into Drupal and rewrite URL.
    // Example: <img alt="Mark Beaumont at the end of his North Coast 500"
    // src="/sites/default/files/media_library/users/Victoria%20Hazael/ctc69.ride_northcoast.080.jpg" style="width:
    // 560px; height: 373px;" />
    //print_r($wnode->nid);

    $node_body_value = $wnode->$fieldname->value->value();
    // print_r($node_body_value);
    if (strstr($node_body_value, '<img')) {
      $destination_nid = $wnode->nid->value();
      // echo "Inline HTML img tag found in body of new node $destination_nid.\n";
      $old_nid = $wnode->field_old_nid->value();
      //print_r($old_nid);
      $matches = array();
      // TODO: perhaps use HTML DOM to do this, instead of regexps?
      preg_match_all('/<img .*?src="(.*?)".*? \/>/', $node_body_value, $matches);
      // print_r($matches);
      $invalid_image_url_found = FALSE;
      $source_filenames = $matches[1];

      foreach ($source_filenames as $source_filename_encoded) {
        $source_filename = urldecode($source_filename_encoded);
        if (substr($source_filename, 0, 4) == 'http') {
          echo "WARNING: external image found for D6 node /$old_nid, D7 node /$destination_nid: $source_filename\n";
          // TODO: perhaps copy the image locally?
          $invalid_image_url_found = TRUE;
        }
        elseif (substr($source_filename, 0, 4) == 'file' or strstr($source_filename, '/DOCUME~1/')) {
          echo "ERROR: invalid inline image URL found for D6 node /$old_nid, D7 node /$destination_nid: $source_filename\n";
          $invalid_image_url_found = TRUE;
        }
        elseif (substr($source_filename, 0, 4) == 'data') {
          echo "ERROR: inline data image URL found for D6 node /$old_nid, D7 node /$destination_nid.\n";
          $invalid_image_url_found = TRUE;
        }
        else {
          // echo "Copying inline image " . $source_filename . "\n\n";
          // Prepare destination directory.
          $destination_dir = 'public://media/migrated/inline/';
          file_prepare_directory($destination_dir, FILE_CREATE_DIRECTORY);
          // Open source file and save into files_managed.
          $archive_name = 'public://archive' . str_replace('/sites/default/files', '', $source_filename);

          if (file_exists($archive_name)) {
            $f = fopen($archive_name, 'r');
            $file = file_save_data($f, $destination_dir . basename($source_filename), FILE_EXISTS_REPLACE);
            fclose($f);
            // Record that this node uses the image.
            file_usage_delete($file, 'file', 'node', 99999);
            file_usage_add($file, 'file', 'node', $destination_nid);
            // Update the URL in the body text.
            $replacement = file_create_url($file->uri);
            $node_body_value = str_replace('src="' . $source_filename_encoded . '"', 'src="' . $replacement . '"', $node_body_value);
          }
          else {
            echo "ERROR: inline image not found for D6 node /$old_nid, D7 node /$destination_nid.\n";
            $this->queueMessage('Inline image file not found. Check body contents of D6 node: ' . file_create_url('node/' . $old_nid).', D7 node: ' . file_create_url('node/' . $destination_nid));
          }
        }
      }
      if ($invalid_image_url_found) {
        $this->queueMessage("Invalid inline image URL found. Check body contents of D6 node: " . file_create_url('node/' . $old_nid).', D7 node: ' . file_create_url('node/' . $destination_nid));
      }
    }


    if (strstr($node_body_value, '<a ')) {
      // Find node/nid links
      $matches = array();
      // TODO: perhaps use HTML DOM to do this, instead of regexps?
      preg_match_all('<a .*?href=".*?/node/([0-9]*).*?".*?>', $node_body_value, $matches); ///<a .*?href="(.*?node\/[0-9]*?)".*? \/>/
      foreach ($matches[1] as $match) {
          $old_nid = $match;
          // Find new NID, or make stub node if not yet migrated by any of the above.
          $new_nid = $this->handleSourceMigration($this->all_node_migrations, $old_nid);
          if (!$new_nid) {
            echo "WARNING: Linking to myself1!/$old_nid.\n";
            $new_nid = $wnode->nid;
          }
          $node_nid = $wnode->nid->value();
          echo "INFO: Inline link found in new node $node_nid body: URL node $old_nid updated to node $new_nid \n";
          // Replace old NIDs with new NIDs in body links.
          $node_body_value = preg_replace("/node\/$old_nid/", "node/$new_nid", $node_body_value);
      }
    }

    return $node_body_value;
  }

  protected function handleNodeRefLinks(&$node) {
    $old_nid = $node;
    // Find new NID, or make stub node if not yet migrated by any of the above.
    $new_nid = $this->handleSourceMigration($this->all_node_migrations, $old_nid);
    if (!$new_nid) {
     echo "WARNING: Linking to myself2!/$old_nid.\n";
     $new_nid = $node->nid;
    }

    return $new_nid;
  }

}
