<!DOCTYPE html>
<html lang="en">
<head>
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <!-- https://code.google.com/p/html5shiv/ -->
  <!--[if lt IE 9]>
  <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <title><?php print $head_title; ?></title>
<?php $pharmacyoa_path = '/' . drupal_get_path( 'theme' , 'pharmacyoa' ); ?>
  <link rel="profile" href="<?php print $grddl_profile; ?>">
  <link rel="shortcut icon" href="<?php print $pharmacyoa_path; ?>/images/favicon.ico" />
  <link rel="icon" href="<?php print $pharmacyoa_path; ?>/images/ucsf.gif" type="image/gif" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <!--
  /* @license
   * MyFonts Webfont Build ID 2444487, 2013-01-08T16:22:30-0500
   *
   * The fonts listed in this notice are subject to the End User License
   * Agreement(s) entered into by the website owner. All other parties are
   * explicitly restricted from using the Licensed Webfonts(s).
   *
   * You may obtain a valid license at the URLs below.
   *
   * Webfont: Bodoni Italic by Bitstream
   * URL: http://www.myfonts.com/fonts/bitstream/atf-bodoni/bodoni-italic/
   * Copyright: Copyright 1990-2003 Bitstream Inc. All rights reserved.
   *
   *
   * License: http://www.myfonts.com/viewlicense?type=web&buildid=2444487
   *
   * © 2013 Bitstream Inc
  */
  -->
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <!--[if lt IE 7]>
    <p class="chromeframe">Wow, your browser is pretty old. <a href="http://browsehappy.com/">Upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">install Google Chrome Frame</a> to better experience our site.</p>
  <![endif]-->
  <div id="skip">
    <a href="#content-header"><?php print t('Skip to content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
