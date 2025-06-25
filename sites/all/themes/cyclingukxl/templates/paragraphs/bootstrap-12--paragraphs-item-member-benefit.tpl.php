<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>

<div class="paragraph-bundle-member-benefit">

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
      <div class="row">
        <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">     
        <?php
          // Load the currently logged in user.
          global $user;
          // var to hold the roles
          $role_check = $user->roles;
          // Check if the user has the 'Member' or 'Staff Member' role.
          if (in_array('Member', $role_check) || in_array('Staff Member', $role_check)) {
              // If user is member or staff, show the discount
              print render($content['field_member_only_content']);
          } else {
              // anyone else display public.
              print render($content['field_public_only_content']);
          }
        ?>
        </<?php print $central_wrapper; ?>>
      </div>
  </<?php print $layout_wrapper ?>>
  
  
  <!-- Needed to activate display suite support on forms -->
  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
  <?php endif; ?>

</div>