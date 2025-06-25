<?php
/**
 * Code hints:
 * https://sarahcodes.medium.com/design-and-code-up-custom-block-types-with-the-bean-module-in-drupal-7-d99298ed6301
 */
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="col-sm-12 internal-advert-container <?php print $central_classes; ?>">

    <div id="internal-advert">
      <a id="<?php print $bean->field_gtm_identifier['und'][0]['value']; ?>" href="<?php print $bean->field_link['und'][0]['url']; ?>">
        <span class="internal-advert-desktop">
          <img src="<?php print file_create_url($bean->field_desktop_advert['und'][0]['uri']); ?>" alt="<?php print $bean->field_desktop_advert['und'][0]['alt']; ?>">
        </span>
        <span class="internal-advert-tablet">
          <img src="<?php print file_create_url($bean->field_tablet_advert['und'][0]['uri']); ?>" alt="<?php print $bean->field_tablet_advert['und'][0]['alt']; ?>">
        </span>
        <span class="internal-advert-mobile">
          <img src="<?php print file_create_url($bean->field_mobile_advert['und'][0]['uri']); ?>" alt="<?php print $bean->field_mobile_advert['und'][0]['alt']; ?>">
        </span>
      </a>
    </div>

      <?php print $central; ?>
    </<?php print $central_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>



