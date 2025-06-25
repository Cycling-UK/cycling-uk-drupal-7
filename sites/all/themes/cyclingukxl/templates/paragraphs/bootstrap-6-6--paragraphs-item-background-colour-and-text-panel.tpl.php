<?php
/**
 * @file
 * Bootstrap 5-7 template for Display Suite.
 */
?>

<div class="paragraph-bundle-background-colour-with-image-and-text-panels remove-gutter 
  <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_remove_bottom_margin['und'][0]['value'])? $paragraphs_item->field_remove_bottom_margin['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_remove_image_corners['und'][0]['value'])? $paragraphs_item->field_remove_image_corners['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_panel_location['und'][0]['value'])? $paragraphs_item->field_panel_location['und'][0]['value']:''; ?>    
  <?php echo isset($paragraphs_item->field_bullet_point_style['und'][0]['value'])? $paragraphs_item->field_bullet_point_style['und'][0]['value']:''; ?>
  ">

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    
    <div class="container">
    
      <div class="row">

        <?php if($paragraphs_item->field_panel_location['und'][0]['value'] == 'paragraph_panel_location_left'): ?>

          <<?php print $right_wrapper; ?> class="right-col col-xs-12 col-sm-6 col-sm-push-6 col-md-5 col-md-push-7 <?php print $right_classes; ?>">
          <?php print $right; ?>
          </<?php print $right_wrapper; ?>>
    
          <<?php print $left_wrapper; ?> class="left-col col-xs-12 col-sm-6 col-sm-pull-6 col-md-7 col-md-pull-5 <?php print $left_classes; ?>">
          <?php print $left; ?>
          </<?php print $left_wrapper; ?>>
        
        <?php endif; ?>
    
        <?php if($paragraphs_item->field_panel_location['und'][0]['value'] == 'paragraph_panel_location_right'): ?>
          
          <<?php print $left_wrapper; ?> class="left-col col-xs-12 col-sm-6 col-md-5 <?php print $left_classes; ?>">
          <?php print $right; ?>
          </<?php print $left_wrapper; ?>>

          <<?php print $right_wrapper; ?> class="right-col col-xs-12 col-sm-6 col-md-7 <?php print $right_classes; ?>">
          <?php print $left; ?>
          </<?php print $right_wrapper; ?>>
    
        <?php endif; ?>
            
      </div>
    
    </div>
    
  </<?php print $layout_wrapper ?>>

  <!-- Needed to activate display suite support on forms -->
  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
  <?php endif; ?>

</div>
