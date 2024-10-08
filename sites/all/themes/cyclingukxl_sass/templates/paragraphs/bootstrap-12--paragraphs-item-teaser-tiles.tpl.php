<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>

<div class="paragraph-bundle-teaser-tiles">

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    <div class="container">
      <div class="row">
        <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">
          <?php print $central; ?>
        </<?php print $central_wrapper; ?>>
      </div>
    </div>
  </<?php print $layout_wrapper ?>>
  
  
  <!-- Needed to activate display suite support on forms -->
  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
  <?php endif; ?>

</div>