<?php

/**
 * @file
 * User password page - Template file.
 */
?>



<!--
<div id="auth_box" class="login">
  <div id="top_part">
    <div id="the_logo">
      <a href="<?php print url('<front>'); ?>">
		<?php
			$image = 'sites/all/themes/cyclinguk/images/system/logo-white.png';
			$imageData = base64_encode(file_get_contents($image));
			echo '<img src="data:image/png;base64,'.$imageData.'">';
		?> 
      </a>
    </div>
  </div>
-->
  
  

<div id="auth_box" class="password">
  <div id="top_part">
    <div id="the_logo">
      <a href="<?php print url('<front>'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
      </a>
    </div>
  </div>
  
  <?php print $messages; ?>

  <div id="middle_part">
    <h1 class="title"><?php print $title; ?></h1>

    <?php print render($page['content']); ?>
  </div>

  <div id="bottom_part">
    <div class="login_link">
		<i class="fal fa-sign-in-alt"></i>
		<?php print l(t('Login'), 'user/login'); ?>
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
