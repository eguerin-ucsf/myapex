<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>">
  
  <?php print $page_top; ?>
  
  <div id="page-wrapper">
    <div id="branding">
      <div class="inside">
          <h1 id="site-name">
            <a href="/" id="logo"><?php print $site_name; ?></a>
          </h2>
          <h2 id="slogan"><?php print $site_slogan; ?></h2>
          <div class="hg"></div>
      </div>
    </div>
  
    <div id="page">
      <div class="inside">
        <?php if ($sidebar_first): ?>
          <div id="sidebar-first" class="sidebar">
            <?php print $sidebar_first ?>
          </div>
        <?php endif; ?>
    
        <div id="content" class="clearfix">
          <?php if (isset($steps)) : ?>
            <p class="steps"><?php print $steps; ?></p>
          <?php endif; ?>
          <?php if ($title): ?>
            <h1 id="page-title"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php if (isset($guidelines)) : ?>
            <p class="guidelines"><?php print $guidelines; ?></p>
          <?php endif; ?>  
          <?php if ($messages): ?>
            <div id="console"><?php print $messages; ?></div>
          <?php endif; ?>
          <?php if ($help): ?>
            <div id="help">
              <?php print $help; ?>
            </div>
          <?php endif; ?>
          <?php print $content; ?>
        </div>
      </div>
    </div>
  </div>
  <?php print $page_bottom; ?>
  </body>
</html>
