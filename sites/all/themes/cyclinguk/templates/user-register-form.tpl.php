<p><?php print render($intro_text); ?></p>

<div class="form-content">

	<div class="cyclinguk-user-login-form-wrapper">
	  <?php

	    # print t('<p class="intro">Please fill in the form below to register with the site.</p>');

	    print t('<div class="field-wrapper field-wrapper-name">');
		    print render($form['field_care_name']['und']['0']);
		    # print t('<div class="help-block">&nbsp;</div>');
	    print t('</div>');


	    print t('<div class="field-wrapper field-wrapper-username">');
		    print render($form['account']['name']);
		    print t('<div class="help-block">Please enter a username of your choice.</div>');
	    print t('</div>');


	    print t('<div class="field-wrapper field-wrapper-email">');
		    print render($form['account']['mail']);
		    print t('<div class="help-block">If you are an existing member then please use the same email address as you have registered with us. If you are already a member and you do not have an email address registered with us please <a href="/contact">contact the membership department</a>.</div>');
	    print t('</div>');


	    print t('<div class="field-wrapper field-wrapper-membership-number">');
		    print render($form['field_membership_number']['und']['0']);
		    print t('<div class="help-block">If you are a member please enter your membership number to link your account to your membership.</div>');
	    print t('</div>');

	    print drupal_render_children($form);

	    print drupal_render($form['actions']);

	  ?>

	</div>

</div>
