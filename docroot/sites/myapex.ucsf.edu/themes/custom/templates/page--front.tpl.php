<div id="ucsf-banner-nav" class="no-logo">
  <div class="top-header-container row">
      <ul class="menu">
        <li class="first"><a href="http://www.ucsf.edu">University of California San Francisco</a></li>
        <li><a href="http://www.ucsfhealth.org/">UCSF Medical Center</a></li>
        <li><a href="http://www.ucsf.edu/search" title="">Search UCSF</a></li>
        <li><a href="http://www.ucsf.edu/about">About UCSF</a></li>
      </ul>
  </div>
</div>

<div class="page-wrapper">
	<div class="masthead">
		<h1 class="site-name"><img src="<?php print $logo; ?>" alt="" /></h1>
		<?php if ($page['search_form']): ?>
			<?php print render($page['search_form']); ?>
		<?php endif; ?>
	</div>

  <?php if ($page['subscribe_login']): ?>
    <div class="subscribe-cont">
  	 <?php print render($page['subscribe_login']); ?>
    </div>
  <?php endif; ?>

	<?php if ($page['banner']): ?>
    <div class="banner">
			<?php print render($page['banner']); ?>
    </div>
	<?php endif; ?>


	<?php if ($messages): ?>
		<div id="messages" style="margin:40px 0;">
			<?php print $messages; ?>
		</div>
	<?php endif; ?>
  <div class="content-wrapper">
  	<div class="leftcol">
  		<div class="toggle-menu"><img src="/sites/myapex.ucsf.edu/files/toggle-menu.png" alt="" /></div>
  		<?php if ($page['leftcol']): ?>
  			<?php print render($page['leftcol']); ?>
  		<?php endif; ?>
  	</div>

  	<div class="midcol">
  		<?php if ($tabs): ?>
  			<?php print render($tabs); ?>
  		<?php endif; ?>
  		<?php if ($title): ?>
  			<h2 class="page-title"><?php print $title; ?></h2>
  		<?php endif; ?>
  		<?php if ($page['content']): ?>
  			<?php print render($page['content']); ?>
  		<?php endif; ?>
  	</div>

  	<?php if ($page['rightcol']): ?>
  		<?php print render($page['rightcol']); ?>
  	<?php endif; ?>
  </div>
  <div class="footer">
  	<?php if ($page['footer']): ?>
  		<?php print render($page['footer']); ?>
  	<?php endif; ?>
  </div>
</div>
