<?php
/**
 * @file footer.tpl.php
 *
 * This is not a "real" template file that interacts with the PHPtemplate 
 * engine, but rather an include file called from page.tpl.php
 *
 * The purpose of this file is to create an easy way for themers to customize
 * their footer without editing the entire page.tpl.php file
**/
if (isset($footer_menu) || $contact_information || $social_links || $page['footer']): ?>
  <div id="footer-wrapper">
    <div id="footer" class="clearfix">

      <?php if ($make_a_gift_link): ?>
        <div id="make-a-gift">
          <?php print $make_a_gift_link; ?>
        </div>  
      <?php endif ?>
      
      <div id="footer-quote">
        <p>We see a time when precise therapeutics&mdash;used safely and effectively&mdash;improve the health of people everywhere.</p>
      </div>  

      <?php print render($page['footer']); ?>

      <?php if (isset($footer_menu) || $social_links) : ?>
        <div id="menu-and-social">

          <?php if (isset($footer_menu)): ?>
            <div class="footer menu">
              <?php print theme('links', array('links' => $footer_menu, 'attributes' => array('id' => 'footer-menu', 'class' => array('links', 'clearfix', 'footer-menu')))); ?>
            </div>
          <?php endif; ?>

          <?php if ($social_links): ?>
            <div id="social-links">
              <?php print $social_links; ?>
            </div>
          <?php endif; ?> 

       </div>
      <?php endif; ?>

      <div id="footer-copy">
        <p>&copy; 2002-<? print date('Y'); ?> The Regents of the University of California</p>
      </div>

    </div> <!-- /footer -->
  </div> <!-- /footer-wrapper -->
<?php endif;
