<?php
/**
 * @file
 * Bootstrap 2-8-2 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $left_wrapper; ?> class="col-sm-2 col-md-3 <?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper; ?>>
    <<?php print $central_wrapper; ?> class="col-sm-8 col-md-6 page-content <?php print $central_classes; ?> <?php echo isset($node->field_biography_category['und'][0]['value'])? $node->field_biography_category['und'][0]['value']:''; ?>">
      <?php print $central; ?>
    </<?php print $central_wrapper; ?>>
    <<?php print $right_wrapper; ?> class="col-sm-2 col-md-3 <?php print $right_classes; ?>">
      <?php print $right; ?>
    </<?php print $right_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
