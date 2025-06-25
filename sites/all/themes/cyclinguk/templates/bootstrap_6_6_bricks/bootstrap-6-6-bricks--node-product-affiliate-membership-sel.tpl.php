<?php
/**
 * @file
 * Bootstrap 6-6 bricks template for Display Suite.
 *
 * Customised for Cycling UK as 8-4 bricks
 */
?>

<div class="node-state <?php print $classes; ?>"></div>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <?php if ($top) : ?>
    <div class="row top-row">
      <<?php print $top_wrapper; ?> class="top-wrapper col-sm-10 col-sm-offset-1<?php print $top_classes; ?>">
	  	<div class="inner-wrapper">
	        <?php print $top; ?>
	  	</div>
      </<?php print $top_wrapper; ?>>
    </div>
  <?php endif; ?>
  <?php if ($topleft || $topright) : ?>
    <div class="row top-middle-row">
      <<?php print $topleft_wrapper; ?> id="search-filters" class="top-left-wrapper col-12 col-sm-6 col-md-5<?php print $topleft_classes; ?>">
        <?php print $topleft; ?>
      </<?php print $topleft_wrapper; ?>>
      <<?php print $topright_wrapper; ?> id="search-results" class="top-right-wrapper col-12 col-sm-6 col-md-7<?php print $topright_classes; ?>">
        <?php print $topright; ?>
      </<?php print $topright_wrapper; ?>>
    </div>
  <?php endif; ?>
  <?php if ($central) : ?>
    <div class="row central-row">
      <<?php print $central_wrapper; ?> class="central-wrapper col-sm-5 col-sm-offset-1 <?php print $central_classes; ?>">
        <?php print $central; ?>
      </<?php print $central_wrapper; ?>>
    </div>
  <?php endif; ?>
  <?php if ($bottomleft || $bottomright) : ?>
    <div class="row bottom-middle-row">
      <<?php print $bottomleft_wrapper; ?> class="bottom-left-wrapper col-12 col-sm-6 col-md-5<?php print $bottomleft_classes; ?>">
        <?php print $bottomleft; ?>
      </<?php print $bottomleft_wrapper; ?>>
      <<?php print $bottomright_wrapper; ?> class="bottom-right-wrapper col-12 col-sm-6 col-md-7<?php print $bottomright_classes; ?>">
        <?php print $bottomright; ?>
      </<?php print $bottomright_wrapper; ?>>
    </div>
  <?php endif; ?>
  <?php if ($bottom) : ?>
    <div class="row bottom-row">
      <<?php print $bottom_wrapper; ?> class="bottom-wrapper col-sm-10 col-sm-offset-1<?php print $bottom_classes; ?>">
        <?php print $bottom; ?>
      </<?php print $bottom_wrapper; ?>>
    </div>
  <?php endif; ?>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
