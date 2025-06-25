<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>
<html<?php print $html_attributes;?><?php print $rdf_namespaces;?>>
<head>
  <link rel="profile" href="<?php print $grddl_profile; ?>" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
  <script src="https://cdn.jsdelivr.net/html5shiv/3.7.3/html5shiv-printshiv.min.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
  
  <!-- Load Cocon font family from Adobe TypeKit -->
  <script src="https://use.typekit.net/lmn7yno.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>

  <!-- Import Karla font from Google -->
  <link href="https://fonts.googleapis.com/css?family=Karla:400,400i,700,700i" rel="stylesheet">

  <!-- Import Font Awesome 5 -->
  <link rel="stylesheet" href="https://pro.fontawesome.com/releases/v5.12.0/css/all.css" integrity="sha384-ekOryaXPbeCpWQNxMwSWVvQ0+1VrStoPJq54shlYhR8HzQgig1v5fas6YgOqLoKz" crossorigin="anonymous">

  
</head>
<body<?php print $body_attributes; ?> id="test">
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>


<div class="content-panel">
  
  <div class="logo">
    <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
  </div>

  <div>
    <?php if (!empty($title)): ?>
      <h1 class="page-header"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php if (!empty($content)): ?>
      <?php print $content; ?>
    <?php endif; ?>
  </div>

</div>


  <?php print $page_bottom; ?>
</body>
</html>
