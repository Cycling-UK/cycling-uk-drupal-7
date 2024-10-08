<?php
/**
 * @file
 * Style handler that provides vector features.
 */

/**
 * Class openlayers_views_plugin_style_source_vector.
 */
class openlayers_views_plugin_style_source_vector extends views_plugin_style {

  /**
   * {@inheritdoc}
   */
  public function render() {
    $grouped_results = $this->render_grouping($this->view->result, $this->options['grouping']);
    $data = $this->map_features($grouped_results);

    // If we are not in preview, just return the data.
    if (empty($this->view->live_preview)) {
      return $data;
    }
    else {
      // If we are in preview mode, dump out some useful information about this
      // data layer.
      $output = "You can use the following parameters in your styles as dynamic values";
      $output .= "\n------------\n";
      if (!empty($data)) {
        $keys = array_keys($data);
        foreach ($data[$keys[0]]['attributes'] as $key => $value) {
          $output .= '${' . $key . "}\n";
        }
      }
      $output .= "\n------------\n";

      $output .= t('The following is a dump of the data that is rendered from this display. It is used for debugging purposes only.') . '
        ' . var_export($data, TRUE);

      return '<pre>' . $output . '</pre>';
    }
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['data_source'] = array('default' => 'openlayers_wkt');
    $options['attributes'] = array('default' => array());
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Get list of fields in this view & flag available geodata fields.
    $handlers = $this->display->handler->get_handlers('field');

    // Check for any fields, as the view needs them.
    if (empty($handlers)) {
      $form['error_markup'] = array(
        '#value' => t('You need to enable at least one field before you can configure your field settings'),
        '#prefix' => '<div class="error form-item description">',
        '#suffix' => '</div>',
      );
      return;
    }

    $fields = array();
    foreach ($handlers as $field_id => $handler) {
      $fields[$field_id] = $handler->ui_name() . ' (' . $field_id . ')';
    }

    // Ensure we've sane defaults:
    $this->options['data_source'] = (!is_array($this->options['data_source'])) ? array() : $this->options['data_source'];
    $this->options['data_source'] = $this->options['data_source'] + array(
      'value' => 'other_latlon',
      'other_lat' => key($fields),
      'other_lon' => key($fields),
      'wkt' => key($fields),
      'other_top' => key($fields),
      'other_right' => key($fields),
      'other_bottom' => key($fields),
      'other_left' => key($fields),
      'name_field' => '',
      'description_field' => '',
    );

    $form['data_source'] = array(
      '#type' => 'fieldset',
      '#tree' => TRUE,
      '#title' => t('Data Source'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#weight' => 2,
    );
    $form['data_source']['value'] = array(
      '#type' => 'select',
      '#title' => t('Map Data Sources'),
      '#description' => t('Choose which sources of data that the map will provide features for.'),
      '#options' => array(
        'other_latlon' => t('Lat/Lon Pair'),
        'other_boundingbox' => t('Bounding Box'),
        'wkt' => t('WKT'),
      ),
      '#default_value' => $this->options['data_source']['value'],
    );
    if (count($fields) > 0) {
      $form['data_source']['other_lat'] = array(
        '#type' => 'select',
        '#title' => t('Latitude Field'),
        '#description' => t('Choose a field for Latitude.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_lat'],
        '#states' => $this->datasource_dependent('other_latlon'),
      );
      $form['data_source']['other_lon'] = array(
        '#type' => 'select',
        '#title' => t('Longitude Field'),
        '#description' => t('Choose a field for Longitude.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_lon'],
        '#states' => $this->datasource_dependent('other_latlon'),
      );

      $form['data_source']['wkt'] = array(
        '#type' => 'select',
        '#title' => t('WKT Field'),
        '#description' => t('Choose the Openlayers WKT field.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['wkt'],
        '#states' => $this->datasource_dependent('wkt'),
      );

      $form['data_source']['other_top'] = array(
        '#type' => 'select',
        '#title' => t('Top Field'),
        '#description' => t('Choose a field for Top.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_top'],
        '#states' => $this->datasource_dependent('other_boundingbox'),
      );
      $form['data_source']['other_right'] = array(
        '#type' => 'select',
        '#title' => t('Right Field'),
        '#description' => t('Choose a field for Right.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_right'],
        '#states' => $this->datasource_dependent('other_boundingbox'),
      );
      $form['data_source']['other_bottom'] = array(
        '#type' => 'select',
        '#title' => t('Bottom Field'),
        '#description' => t('Choose a field for Bottom.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_bottom'],
        '#states' => $this->datasource_dependent('other_boundingbox'),
      );
      $form['data_source']['other_left'] = array(
        '#type' => 'select',
        '#title' => t('Left Field'),
        '#description' => t('Choose a field for Left.  This should be a field that is a decimal or float value.'),
        '#options' => $fields,
        '#default_value' => $this->options['data_source']['other_left'],
        '#states' => $this->datasource_dependent('other_boundingbox'),
      );
    }
    $form['data_source']['name_field'] = array(
      '#type' => 'select',
      '#title' => t('Title Field'),
      '#description' => t('Choose the field which will appear as a title on tooltips.'),
      '#options' => array_merge(array('' => ''), $fields),
      '#default_value' => $this->options['data_source']['name_field'],
    );

    $desc_options = array_merge(array(
      '' => '',
      '#row' => t('<entire row>'),
    ), $fields);

    // Description field.
    $form['data_source']['description_field'] = array(
      '#type' => 'select',
      '#title' => t('Description Content'),
      '#description' => t('Choose the field or rendering method which will
        appear as a description on tooltips or popups.'),
      '#required' => FALSE,
      '#options' => $desc_options,
      '#default_value' => $this->options['data_source']['description_field'],
    );

    // A simple way to display attributes and styling.
    $form['attributes'] = array(
      '#type' => 'fieldset',
      '#title' => t('Attributes and Styling'),
      '#description' => t('Attributes are field data attached to each feature.  This can be used with styling to create Variable styling.'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#weight' => 3,
    );
    $variable_fields = array();
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      $variable_fields[$field] = '${' . $field . '}';
    }
    if (!empty($this->options['data_source']['name_field'])) {
      $variable_fields['name'] = '${name}';
    }
    if (!empty($this->options['data_source']['description_field'])) {
      $variable_fields['description'] = '${description}';
    }

    $form['attributes']['display'] = array(
      '#title' => 'Select attributes to include in the features',
      '#type' => 'checkboxes',
      '#options' => $variable_fields,
      '#default_value' => !empty($this->options['attributes']['display']) ?
        $this->options['attributes']['display'] : array_combine(array_keys($variable_fields), array_keys($variable_fields)),
      '#description' => t('Any fields that you select will be attached to '
        . 'their respective feature (point, line, polygon) as attributes.  '
        . 'These attributes can then be used to add variable styling to your '
        . 'themes.  This is accomplished by using the %syntax syntax in the '
        . 'values for a style.  You can see a list of available variables in '
        . 'the view preview; these can be placed right in the style interface. '
        . 'The field has been processed by Views.'
        . 'By disabling some of them, you can reduce the size '
        . 'of the Javascript included in your pages.'
        . 'Please note that this does not apply to Grouped Displays.',
        array(
          '%syntax' => '${field_name}',
        )),
    );
  }

  /**
   * Extract features.
   *
   * @param array $sets
   *   The array of sets.
   *
   * @return array
   *   The array of features.
   */
  public function map_features($sets = array()) {
    $features = $excluded_fields = array();
    $handlers = $this->display->handler->get_handlers('field');

    foreach ($sets as $title => $records) {
      foreach ($records as $id => $record) {
        $this->view->row_index = $id;
        $attributes = array();
        $wkt = NULL;
        $field_exclude = array();

        // Save the 'exclude' options of fields as backup.
        foreach ($this->view->field as $fid => $field) {
          $field_exclude[$fid] = $field->options['exclude'];
        }
        // Loop through each fields and render it if there were only one
        // field in the row, so we have all the goodness of Views's field
        // wrapping, class customizations and label.
        foreach ($handlers as $hid => $handler) {
          $field_id = $handler->options['id'];
          // Exclude all the field from rendering.
          foreach ($this->view->field as $field) {
            $field->options['exclude'] = TRUE;
          }
          // Enable only the field we want to render the row.
          $this->view->field[$field_id]->options['exclude'] = FALSE;
          // Render the row.
          $attributes[$hid] = $this->row_plugin->render($record);
        }
        // Restore the state of the exclude options in the fields.
        foreach ($this->view->field as $fid => $field) {
          $this->view->field[$fid]->options['exclude'] = $field_exclude[$fid];
        }

        // Add the 'name' attribute.
        if (isset($this->options['data_source']['name_field'])) {
          if (isset($attributes[$this->options['data_source']['name_field']])) {
            $attributes['name'] = $attributes[$this->options['data_source']['name_field']];
          }
        }

        // Add the 'description' attribute.
        if (isset($this->options['data_source']['description_field'])) {
          // Handle rendering the whole record.
          if ($this->options['data_source']['description_field'] === '#row') {
            $attributes['description'] = trim($this->row_plugin->render($record));
          }
          else {
            if (isset($attributes[$this->options['data_source']['description_field']])) {
              $attributes['description'] = $attributes[$this->options['data_source']['description_field']];
            }
          }
        }

        // We do not need the rendered value for these fields,
        // just the raw value.
        // This is why we use $this->rendered_fields.
        if (isset($this->options['data_source']['value'])) {
          switch ($this->options['data_source']['value']) {
            case 'wkt':
              $handler = $handlers[$this->options['data_source']['wkt']];
              if (is_object($handler)) {
                $wkt = $handler->allow_advanced_render() ? $handler->advanced_render($record) : $handler->render($record);
              }
              break;

            case 'other_latlon':
              $handler = $handlers[$this->options['data_source']['other_lon']];
              $other_lon = $handler->allow_advanced_render() ? $handler->advanced_render($record) : $handler->render($record);
              $handler = $handlers[$this->options['data_source']['other_lat']];
              $other_lat = $handler->allow_advanced_render() ? $handler->advanced_render($record) : $handler->render($record);
              $wkt = 'POINT(' . $other_lon . ' ' . $other_lat . ')';
              break;
          }
        }

        // Only render features that has been enabled in the configuration
        // of the display.
        if (isset($this->options['attributes']['display'])) {
          foreach ($this->options['attributes']['display'] as $fid => $value) {
            if ($this->options['attributes']['display'][$fid] === 0) {
              unset($attributes[$fid]);
            }
          }
        }

        $result = array_map(array($this, 'minify_data'), $attributes);

        // Create features array.
        $features[] = array(
          'projection' => 'EPSG:4326',
          'attributes' => $result,
          'wkt' => $wkt,
        );

      }
    }

    return $features;
  }

  /**
   * Helper function to minify the output data.
   *
   * Borrowed from the Minify module.
   * @link https://www.drupal.org/project/minify
   *
   * @param string $buffer
   *   The string to minify.
   *
   * @return string
   *   The minified string.
   */
  public function minify_data($buffer) {
    if (module_exists('minify')) {
      return _minify_html($buffer);
    }
    $search = array(
      '/\>[^\S ]+/s',     // strip whitespaces after tags, except space
      '/[^\S ]+\</s',     // strip whitespaces before tags, except space
      '/(\s)+/s',         // shorten multiple whitespace sequences
      '/^\\s+|\\s+$/m',   // trim each line
    );
    $replace = array(
      '>',
      '<',
      '\\1',
      '',
    );
    $buffer = preg_replace($search, $replace, $buffer);
    $buffer = preg_replace_callback('/<!--([\\s\\S]*?)-->/', array($this, 'minify_remove_html_comment'), $buffer);
    return $buffer;
  }

  /**
   * Remove HTML comments (not containing IE conditional comments).
   *
   * Borrowed from the Minify module.
   * @link https://www.drupal.org/project/minify
   *
   * @see openlayers_views_plugin_style_source_vector::minify_data()
   */
  public function minify_remove_html_comment($string) {
    return (0 === strpos($string[1], '[') || FALSE !== strpos($string[1], '<!['))
      ? $string[0]
      : '';
  }

  /**
   * Basically a macro because #state is rather verbose.
   *
   * openlayers_views_style_data specific.
   */
  public function datasource_dependent($type) {
    return array('visible' => array('#edit-style-options-data-source-value' => array('value' => $type)));
  }

}
