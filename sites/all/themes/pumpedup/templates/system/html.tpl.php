<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $html_attributes:  String of attributes for the html element. It can be
 *   manipulated through the variable $html_attributes_array from preprocess
 *   functions.
 * - $html_attributes_array: An array of attribute values for the HTML element.
 *   It is flattened into a string within the variable $html_attributes.
 * - $body_attributes:  String of attributes for the BODY element. It can be
 *   manipulated through the variable $body_attributes_array from preprocess
 *   functions.
 * - $body_attributes_array: An array of attribute values for the BODY element.
 *   It is flattened into a string within the variable $body_attributes.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup templates
 */
?><!DOCTYPE html>
<html<?php print $html_attributes;?><?php print $rdf_namespaces;?>>
<head>

	<!-- Google Tag Manager -->
	<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
	new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
	j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
	'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
	})(window,document,'script','dataLayer','GTM-WVZPGF');</script>
	<!-- End Google Tag Manager -->

  <link rel="profile" href="<?php print $grddl_profile; ?>" />

  <!-- Favicon starts -->
  <link rel="apple-touch-icon" sizes="180x180" href="/sites/all/themes/pumpedup/apple-touch-icon.png">
  <link rel="icon" type="image/png" sizes="32x32" href="/sites/all/themes/pumpedup/favicon-32x32.png">
  <link rel="icon" type="image/png" sizes="16x16" href="/sites/all/themes/pumpedup/favicon-16x16.png">
  <link rel="manifest" href="/sites/all/themes/pumpedup/site.webmanifest">
  <link rel="mask-icon" href="/sites/all/themes/pumpedup/safari-pinned-tab.svg" color="#ec409f">
  <meta name="msapplication-TileColor" content="#ec409f">
  <meta name="theme-color" content="#ffffff">
  <!-- Favicon ends -->

  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="https://cdn.jsdelivr.net/html5shiv/3.7.3/html5shiv-printshiv.min.js"></script>
  <![endif]-->

  <?php print $scripts; ?>

</head>
<body<?php print $body_attributes; ?> onLoad="javascript:Custom.init();">

	<!-- Google Tag Manager (noscript) -->
	<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-WVZPGF"
	height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
	<!-- End Google Tag Manager (noscript) -->

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>



  <!-- Load Easy Drop Down JS for improved UI -->
  <script src="/sites/all/themes/cyclingukxl/js/easydropdown/jquery.easydropdown.min.js" type="text/javascript"></script>

  <!-- Load Korolev Rounded Bold font from Adobe TypeKit -->
  <script src="https://use.typekit.net/tqu5vxb.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>

  <!-- Import Karla font from Google
  <link href="https://fonts.googleapis.com/css?family=Karla:400,400i,700,700i" rel="stylesheet">

  <!-- Import Font Awesome 5 -->
  <link rel="stylesheet" href="https://pro.fontawesome.com/releases/v5.12.0/css/all.css" integrity="sha384-ekOryaXPbeCpWQNxMwSWVvQ0+1VrStoPJq54shlYhR8HzQgig1v5fas6YgOqLoKz" crossorigin="anonymous">

  <!-- Test Landbot Livechat script
  <script SameSite="none Secure" src="https://static.landbot.io/landbot-widget/landbot-widget-1.0.0.js" ></script>
  <script>
    var myLandbot = new LandbotLivechat({
      index: 'https://landbot.io/u/H-346080-10HFK0FIASPC4LYL/index.html',
    });
  </script>-->
</body>



</html>
