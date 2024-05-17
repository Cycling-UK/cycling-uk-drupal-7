<?php

/**
 * @file
 * User login page - Template file.
 */
?>
  
<div id="auth_box" class="login">
  <div id="top_part">
    <div id="the_logo">
      <a href="<?php print url('<front>'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
      </a>
    </div>
  </div>
  
  <?php print $messages; ?>

  <div id="middle_part">
    <h1 class="title"><?php print t('Login to Cycling UK'); ?></h1>

    
    <?php print render($page['content']); ?>
  </div>

  <div id="bottom_part">
    <div class="password_link">
	    <i class="fal fa-user-lock"></i>
		<?php print l(t('Forgot your password?'), 'user/password'); ?>
    </div>

    <?php if (variable_get('user_register')): ?>
    <div class="register_link">
	    <i class="fal fa-user-plus"></i>
		<?php print l(t('Register a new account'), 'user/register'); ?>
    </div>
    <?php endif; ?>

    <div class="back_link">
	    <i class="fal fa-home"></i>
		<a href="<?php print url('<front>'); ?>"><?php print t('Back Home'); ?> </a>
    </div>
  </div>
</div>
