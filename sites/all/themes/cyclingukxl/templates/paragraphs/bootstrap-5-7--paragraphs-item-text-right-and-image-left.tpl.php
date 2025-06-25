<?php

/**
 * @file
 * Bootstrap 7-5 template for Display Suite.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 */
?>

<div class="remove-gutter 
  <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_bullet_point_style['und'][0]['value'])? $paragraphs_item->field_bullet_point_style['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_remove_image_corners['und'][0]['value'])? $paragraphs_item->field_remove_image_corners['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_remove_bottom_margin['und'][0]['value'])? $paragraphs_item->field_remove_bottom_margin['und'][0]['value']:''; ?>
    ">

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  
  <div class="container">
  
    <div class="row">
      
      <<?php print $left_wrapper; ?> class="left-col col-xs-12 col-sm-5 <?php print $left_classes; ?>">
      <?php print $left; ?>
      </<?php print $left_wrapper; ?>>

      <<?php print $right_wrapper; ?> class="right-col col-xs-12 col-sm-7 <?php print $right_classes; ?>">
      <?php print $right; ?>
      </<?php print $right_wrapper; ?>>
    
    </div>
  
  </div>

  </<?php print $layout_wrapper ?>>
    
  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
  <?php endif; ?>

</div>