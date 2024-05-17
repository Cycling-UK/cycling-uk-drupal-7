<?php


/**
 * @file
 * Contains the basic line item field handler.
 */

/**
 * Field handler to provide simple renderer that allows linking to an line item.
 */
class commerce_line_item_page_handler_field_line_item_label extends views_handler_field {

  function init(&$view, &$options) {
    parent::init($view, $options);
    if (!empty($this->options['link_to_line_item']) && in_array($this->options['link_to_line_item'], array(
      'customer',
      'admin',
    ))) {
      $this->additional_fields['line_item_id'] = 'line_item_id';
      $this->additional_fields['order_id'] = 'order_id';
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_line_item'] = array(
      'default' => 'none',
    );
    return $options;
  }

  /**
   * Provide the link to order option.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_line_item'] = array(
      '#type' => 'radios',
      '#title' => t('Link this field to'),
      '#description' => t('If Customer or Administrator are selected, this will override any other link you have set.'),
      '#options' => array(
        'none' => t('Nothing, unless specified in <em>Rewrite results</em> below'),
        'customer' => t('The customer view page'),
        'admin' => t('The administrator view page'),
      ),
      '#default_value' => $this->options['link_to_line_item'],
    );
  }

  /**
   * Render whatever the data is as a link to the order.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  function render_link($data, $values) {
    if (!empty($this->options['link_to_line_item']) && in_array($this->options['link_to_line_item'], array(
      'customer',
      'admin',
    )) && $data !== NULL && $data !== '') {
      $line_item_id = $this->get_value($values, 'line_item_id');
      $line_item = commerce_line_item_load($line_item_id);
      // Work out if this line item has any fields on the Add to Cart form.
      $form_state = array();
      $form = array();
      $form['line_item_fields'] = array(
        '#type' => 'container',
        '#parents' => array(
          'line_item_fields',
        ),
        '#weight' => 10,
        '#tree' => TRUE,
      );
      field_attach_form('commerce_line_item', $line_item, $form['line_item_fields'], $form_state);
      // Loop over the fields we just added and remove any that haven't been
      // marked for inclusion on this form.
      $show_link = FALSE;
      foreach (element_children($form['line_item_fields']) as $field_name) {
        $info = field_info_instance('commerce_line_item', $field_name, $line_item->type);
        $commerce_cart_settings = commerce_cart_field_instance_access_settings($info);
        if (!empty($commerce_cart_settings['field_access'])) {
          $show_link = TRUE;
          break;
        }
      }
      // Render link if we have any editable line item fields.
      if ($show_link) {
        $order_id = $this->get_value($values, 'order_id');
        if ($this->options['link_to_line_item'] == 'customer' && $order_id) {
          $this->options['alter']['make_link'] = TRUE;
          $this->options['alter']['path'] = 'order/' . $order_id . '/line-items/' . $line_item_id;
        }
        elseif ($this->options['link_to_line_item'] == 'admin') {
          $this->options['alter']['make_link'] = TRUE;
          $this->options['alter']['path'] = 'admin/commerce/line-items/' . $line_item_id;
        }
      }
      else {
        $data = '';
      }
    }
    return $data;
  }

  function render($values) {
    $value = $this->get_value($values);
    return $this->render_link($this->sanitize_value($value), $values);
  }
}
