<?php

/**
 * @file
 * amp_integration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function amp_integration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-amp-menu.
  $menus['menu-amp-menu'] = array(
    'menu_name' => 'menu-amp-menu',
    'title' => 'AMP menu',
    'description' => 'Bespoke main menu for AMP pages.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AMP menu');
  t('Bespoke main menu for AMP pages.');

  return $menus;
}
