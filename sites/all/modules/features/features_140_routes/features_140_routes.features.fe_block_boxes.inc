<?php
/**
 * @file
 * features_140_routes.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_140_routes_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Standard legal text for routes.';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'route_page_legal_text';
  $fe_block_boxes->body = '<p>Lorem ipsum dolor sit amet, vix ne esse euismod nusquam. Ei alia albucius usu, ex vocent erroribus usu. Tantas comprehensam te pro. Causae molestie repudiare ne vel, justo regione persecuti ad eam. Vis et debet mucius, dolore eloquentiam cum no.</p>

<p>Ornatus propriae intellegat sed in, fastidii efficiantur suscipiantur his at, ea mea accumsan luptatum sententiae. Pro quando mucius tincidunt et. Dolor commodo salutatus quo an. Erroribus euripidis laboramus qui ad, mea et quando maluisset. Ei cum nusquam scaevola ponderum. Vel ut case dolorum expetendis, te est facilis complectitur. His essent verterem persequeris in, eu laoreet veritus nec.</p>
';

  $export['route_page_legal_text'] = $fe_block_boxes;

  return $export;
}
