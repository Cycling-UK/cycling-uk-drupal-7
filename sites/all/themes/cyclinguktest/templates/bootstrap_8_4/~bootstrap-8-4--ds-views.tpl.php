<?php
/**
 * @file
 * Bootstrap 8-4 template for Display Suite.
 *
 * Bootstrap grid movement:
 * http://stackoverflow.com/questions/20979062/bootstrap-right-column-on-top-on-mobile-view
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $left_wrapper; ?> id="search-filters" class="col-sm-4 col-sm-push-8 <?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper; ?>>
    <<?php print $right_wrapper; ?> id="search-results" class="col-sm-8 col-sm-pull-4 <?php print $right_classes; ?>">
      <?php print $right; ?>
    </<?php print $right_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

