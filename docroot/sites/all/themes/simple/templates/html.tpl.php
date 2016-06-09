<!doctype html>
<?php print $mothership_poorthemers_helper; ?>
<head>
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<?php if(theme_get_setting('mothership_mobile')){ ?>
	<meta name="MobileOptimized" content="width">
	<meta name="HandheldFriendly" content="true"><?php } ?>
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1.0">
	<meta http-equiv="cleartype" content="on">
	<meta http-equiv="X-UA-Compatible" content="IE=8,chrome=1">
	<?php print $styles; ?>
	<?php if(theme_get_setting('mothership_respondjs')) { ?>
	<?php } ?>
	<?php print $selectivizr; ?>
	<?php
		if(!theme_get_setting('mothership_script_place_footer')) {
			print $scripts;
		}
	?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes; ?>>
<!--[if lt IE 7]><p class="chromeframe">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">activate Google Chrome Frame</a> to improve your experience.</p><![endif]-->
<?php print $page_top; //stuff from modules always render first ?>
<?php print $page; // uses the page.tpl ?>
<?php
  if(theme_get_setting('mothership_script_place_footer')) {
    print $scripts;
  }
?>
<?php print $page_bottom; //stuff from modules always render last ?>
</body>
</html>