<?php
/**
 * @file header.tpl.php
 *
 * This is not a "real" template file that interacts with the PHPtemplate 
 * engine, but rather an include file called from page.tpl.php
 *
 * The purpose of this file is to create an easy way for themers to customize
 * their header without editing the entire page.tpl.php file
**/
?>

<div id="header" class="clearfix">

  <?php if ($main_menu || $search_box): ?>
    <div id="menu-and-search-mobile">
      <?php //dpm( $main_menu);?>
      <?php if ($main_menu): ?>
        <div id="menu-mobile-controller"><div id="menu-mobile-controller-inner"><?php print l('UCSF', 'http://www.ucsf.edu/'); ?> <span class="menu-link"><?=t('Menu');?></span></div></div>
      <?php endif; ?>
      <?php if ($search_box): ?>
        <div id="search-mobile-controller"><?php print t('Search'); ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <?php
  //  show little version of "School of Pharmacy" if necessary
  if ( $page_type > 2 ): ?>
    <div id="parent-1-name-wrapper"><div class="printOnly"><a href="http://www.ucsf.edu/">University of California, San Francisco</a> </div><div id="parent-1-name"><?php echo $parent_name_and_link; ?></div></div>
  <?php endif ?>
  <?php
  print $page_header;
  ?>
  <?php if ($main_menu || $secondary_menu || $search_box) : ?>
    <div id="menu-and-search" class="clearfix">

    <?php if ($search_box): ?>
      <div id="search">
        <?php print $search_box; ?>
      </div>
    <?php endif; ?>

    <?php if ($main_menu && $page_type != 5): ?>
      <div id="navigation" class="menu">
        <?php if (module_exists('nice_menus')): ?>
          <?php if (isset($main_menu_name)): ?>
            <?php 
              $menu_themed = theme('nice_menus', array( 'id' => 1, 'menu_name' => $main_menu_name, 'mlid' => NULL));
              print $menu_themed['content'];
            ?>
          <?php else: ?>
            <?php print theme('nice_menus_main_menu'); ?>
          <?php endif ?>
        <?php else: ?>
          <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>          
        <?php endif ?>        
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu && $page_type != 5): ?>
      <div class="secondary menu">
        <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary', 'class' => array('links', 'clearfix', 'secondary-menu')))); ?>
      </div>
    <?php endif; ?>

    </div>
  <?php endif; ?>

</div> <!-- /header -->
