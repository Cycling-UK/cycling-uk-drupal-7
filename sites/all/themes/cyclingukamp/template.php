<?php

/**
 * Preprocess all templates.
 */
 
function cyclingukamp_preprocess(&$vars, $hook) {
  $vars['ampsubtheme_path_file'] = DRUPAL_ROOT . '/' . drupal_get_path('theme', 'cyclingukamp');
}



/**
 * Implements hook_preprocess_HOOK() for HTML document templates.
 *
 * Example of a preprocess hook for a subtheme that could be used to change
 * variables in templates in order to support custom styling of AMP pages.
 */

function cyclingukamp_preprocess_html(&$variables) {

}



/**
 * Add <span> around menu titles
 * https://www.drupal.org/forum/support/theme-development/2011-01-09/add-span-tag-to-menu-items
 */

function cyclingukamp_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  $element['#localized_options']['html'] = TRUE;
  $linktext = '<span>' . $element['#title'] . '</span>';

  $output = l($linktext, $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


/**
 * Remove img fields from body to ensure AMP validation
 * https://www.drupal.org/project/amp/issues/2775551#comment-12617230
 */

/*
function cyclingukamp_preprocess_node(&$variables) {
		$bodyField =  $variables['body'][0]['value'];
		$bodyFieldNoImgTags = preg_replace("/<img[^>]+>/", "", $bodyField);
		$variables['content']['body'][0]['#markup'] = $bodyFieldNoImgTags;
		}
*/


