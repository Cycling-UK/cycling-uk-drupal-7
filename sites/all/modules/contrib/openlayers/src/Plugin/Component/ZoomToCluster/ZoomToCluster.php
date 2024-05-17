<?php
/**
 * @file
 * Component: ZoomSource.
 */

namespace Drupal\openlayers\Plugin\Component\ZoomToCluster;

use Drupal\openlayers\Types\Component;

/**
 * Class ZoomToCluster.
 *
 * @OpenlayersPlugin(
 *  id = "ZoomToCluster"
 * )
 */
class ZoomToCluster extends Component {

  /**
   * {@inheritdoc}
   */
  public function optionsForm(array &$form, array &$form_state) {
    $form['options']['source'] = array(
      '#type' => 'select',
      '#title' => t('Source'),
      '#empty_option' => t('- Select a Source -'),
      '#default_value' => isset($form_state['item']->options['source']) ? $form_state['item']->options['source'] : '',
      '#description' => t('Select the source.'),
      '#options' => \Drupal\openlayers\Openlayers::loadAllAsOptions('Source'),
      '#required' => TRUE,
      '#multiple' => TRUE,
    );

  }
}
