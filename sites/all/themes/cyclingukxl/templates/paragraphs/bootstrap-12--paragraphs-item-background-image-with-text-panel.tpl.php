<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>

<div class="paragraph-bundle-background-image-with-text-panel desktop-view remove-gutter 
  <?php echo isset($paragraphs_item->field_remove_bottom_margin['und'][0]['value'])? $paragraphs_item->field_remove_bottom_margin['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_panel_location['und'][0]['value'])? $paragraphs_item->field_panel_location['und'][0]['value']:''; ?>    
  <?php echo isset($paragraphs_item->field_bullet_point_style['und'][0]['value'])? $paragraphs_item->field_bullet_point_style['und'][0]['value']:''; ?>
  ">

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    <div class="container">
      <div class="row">
        
        <?php if($paragraphs_item->field_panel_location['und'][0]['value'] == 'paragraph_panel_location_right'): ?>
          <<?php print $central_wrapper; ?> class="panel panel_location_right col-xs-12 col-sm-6 col-sm-offset-6 col-md-5 col-md-offset-6 <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?> <?php print $central_classes; ?>">
            <?php print $central; ?>
          </<?php print $central_wrapper; ?>>        
        <?php endif; ?>

        <?php if($paragraphs_item->field_panel_location['und'][0]['value'] == 'paragraph_panel_location_left'): ?>
          <<?php print $central_wrapper; ?> class="panel panel_location_left col-xs-12 col-sm-6 col-md-5 col-md-offset-1 <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?> <?php print $central_classes; ?>">
            <?php print $central; ?>
          </<?php print $central_wrapper; ?>>        
        <?php endif; ?>
            
      </div>
    </div>
  </<?php print $layout_wrapper ?>>
  
  
  <!-- Needed to activate display suite support on forms -->
  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
  <?php endif; ?>

</div>






<div class="paragraphs-item-background-image-with-text-panel mobile-view remove-gutter 
  <?php echo isset($paragraphs_item->field_remove_bottom_margin['und'][0]['value'])? $paragraphs_item->field_remove_bottom_margin['und'][0]['value']:''; ?>
  <?php echo isset($paragraphs_item->field_bullet_point_style['und'][0]['value'])? $paragraphs_item->field_bullet_point_style['und'][0]['value']:''; ?>
  ">

  <<?php print $layout_wrapper; print $layout_attributes; ?>>
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    <div class="container">
      <div class="row">
        
          <<?php print $central_wrapper; ?> class="panel <?php echo isset($paragraphs_item->field_background_colour['und'][0]['value'])? $paragraphs_item->field_background_colour['und'][0]['value']:''; ?> <?php print $central_classes; ?>">
            <?php print $central; ?>
          </<?php print $central_wrapper; ?>>        

            
      </div>
    </div>
  </<?php print $layout_wrapper ?>>
  

</div>

