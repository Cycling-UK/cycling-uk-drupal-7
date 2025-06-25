<?php

/**
 * @file
 * User registration page - Template file.
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
  
  

<div id="auth_box" class="register">
  <div id="top_part">
    <div id="the_logo">
      <a href="<?php print url('<front>'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
      </a>
    </div>
  </div>

  <div id="middle_part">
    <h1 class="title"><?php print t('Register now for your free Cycling UK website account'); ?></h1>

    <?php print $messages; ?>
    
    <?php print render($page['content']); ?>
  </div>

  <div id="bottom_part">
    <div class="login_link">
		<i class="fal fa-sign-in-alt"></i>
		<?php print l(t('Login'), 'user/login'); ?>
    </div>

    <div class="password_link">
	    <i class="fal fa-user-lock"></i>
		<?php print l(t('Forgot your password?'), 'user/password'); ?>
    </div>

    <div class="back_link">
	    <i class="fal fa-home"></i>
		<a href="<?php print url('<front>'); ?>"><?php print t('Back Home'); ?> </a>
    </div>
  </div>
</div>


