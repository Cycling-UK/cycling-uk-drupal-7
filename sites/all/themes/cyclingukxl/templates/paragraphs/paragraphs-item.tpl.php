<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>

<div class="
  paragraph_container paragraph-background-image background-image-desktop background-image-tablet background-image-mobile 
  <?php echo isset($paragraphs_item->field_fit_in_container['und'][0]['value'])? $paragraphs_item->field_fit_in_container['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_number_of_text_columns['und'][0]['value'])? $paragraphs_item->field_number_of_text_columns['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_panel_location['und'][0]['value'])? $paragraphs_item->field_panel_location['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?>
    ">
  <div class="<?php echo isset($paragraphs_item->field_fit_in_a_container['und'][0]['value'])? $paragraphs_item->field_fit_in_a_container['und'][0]['value']:''; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>
      <?php print render($content); ?>
    </div>
  </div>
</div>
