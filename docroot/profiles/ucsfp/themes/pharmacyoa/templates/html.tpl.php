<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
  <title><?php print $head_title; ?></title>
  <meta name="viewport" content="width=device-width,initial-scale=1">

  <!--
  /* @license
   * MyFonts Webfont Build ID 2371206, 2012-09-24T14:49:06-0400
   * 
   * The fonts listed in this notice are subject to the End User License
   * Agreement(s) entered into by the website owner. All other parties are 
   * explicitly restricted from using the Licensed Webfonts(s).
   * 
   * You may obtain a valid license at the URLs below.
   * 
   * Webfont: Bodoni Book Italic by Bitstream
   * URL: http://www.myfonts.com/fonts/bitstream/atf-bodoni/bodoni-book-italic/
   * Copyright: Copyright 1990-2003 Bitstream Inc. All rights reserved.
   * Licensed pageviews: 300,000
   * 
   * 
   * License: http://www.myfonts.com/viewlicense?type=web&buildid=2371206
   * 
   * © 2012 Bitstream Inc
  */

  -->
  
  <?php print $styles; ?>
  <!-- <link href='http://fonts.googleapis.com/css?family=Arapey:400italic,400' rel='stylesheet' type='text/css'> -->
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <!--[if lt IE 7]>
    <p class="chromeframe">You are using an outdated browser. <a href="http://browsehappy.com/">Upgrade your browser today</a> or <a href="http://www.google.com/chromeframe/?redirect=true">install Google Chrome Frame</a> to better experience this site.</p>
  <![endif]-->
  <div id="skip">
    <a href="#main-menu"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
