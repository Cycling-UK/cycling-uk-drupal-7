<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="col-sm-12 main-content-wrapper <?php print $central_classes; ?> 
      <?php echo isset($node->field_background_colour['und'][0]['value'])? $node->field_background_colour['und'][0]['value']:''; ?> 
      <?php echo isset($node->field_background_watermark['und'][0]['value'])? $node->field_background_watermark['und'][0]['value']:''; ?>
      <?php echo isset($node->field_remove_bottom_margin['und'][0]['value'])? $node->field_remove_bottom_margin['und'][0]['value']:''; ?>">
      <?php print $central; ?>
    </<?php print $central_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
