<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>

<h1 class="cycling-made-easy">Cycling made e-asy booking form</h1>

<!--
<div align="center" class="cycling-made-easy-home">
  <a class="btn" href="/cycling-made-e-asy">Back to the Cycling made e-asy home page</a>
</div>
-->

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">

    <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">

    <script src="https://cdnjs.cloudflare.com/ajax/libs/iframe-resizer/4.1.1/iframeResizer.min.js"></script>
      <?php print $central; ?>
    <script type="text/javascript">
      iFrameResize({
        heightCalculationMethod: "taggedElement",
        checkOrigin: false
      }, '#brm-online-booking');
    </script>

    </<?php print $central_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
