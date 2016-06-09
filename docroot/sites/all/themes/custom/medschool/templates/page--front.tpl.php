<div id="ucsf-nav-wrapper">
<?php 
	$menu = menu_navigation_links('menu-ucsf-menu');
		print theme('links__menu-ucsf-menu', array(
		'links' => $menu,
		'attributes' => array(
		'id' => 'ucsf-nav',
		'class' => array('secondary-links'),
		),
	)); 
?>
</div>

<div id="header">		
	<div id="header-inner">	
		<h1 id="logo"><?php print $site_name; ?></h1>
		<div id="search-cont">
			<form id="search-block-form" method="get" action="http://ucsf.edu/ucsf/search">
				<label class="search-label" for="search">Search</label>
				<input class="form-text" type="text" onclick="this.value='';" value="Search" id="search" name="search">
				<input id="edit-submit" class="form-submit" type="image" src="/sites/all/themes/custom/medschool/images/search_icon.gif" alt="Submit" name="submit">
			</form>
			<div class="toggle-view">			
				<?php
					if($ucsf_internal): print '<a href="http://medschool.ucsf.edu?p=1">Public View &gt;</a>';
					else: print '<a href="http://medschool.ucsf.edu?p=0">School View &gt;</a>';
					endif;
				?>
			</div>
		</div>
	</div>
</div>

<div id="main-nav">	
	<div id="main-nav-inner">
		<?php if ($page['main_nav']): ?>
			<?php print render($page['main_nav']); ?>
		<?php endif; ?>				
	</div><!-- end #main-nav-inner-->
	<div class="clear-float"></div>
</div>

<?php if($ucsf_internal): ?>

<a class="school-public" href="http://medschool.ucsf.edu?p=1">Public View &gt;</a>

<!-- School View -->
<div class="wrapper school">
	
	<div id="main">
		
		<!-- if internal -->
		<div id="left-col">		
			<?php if ($page['home_left_col']): ?>
				<?php print render($page['home_left_col']); ?>
			<?php endif; ?>
		</div><!--end #left-col-->
		
		<div id="right-col">		
			<?php if ($page['home_right_col']): ?>
				<?php print render($page['home_right_col']); ?>
			<?php endif; ?>	
			<?php if ($page['news_internal']): ?>
				<?php print render($page['news_internal']); ?>
			<?php endif; ?>				
		</div><!--end #right-col-->
	
	</div><!--end #main-->
	
	<div id="sidebar">
	
		<?php if ($page['home_sidebar_top']): ?>
			<?php print render($page['home_sidebar_top']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar_school']): ?>
			<?php print render($page['home_sidebar_school']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar']): ?>
			<?php print render($page['home_sidebar']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar_bottom']): ?>
			<?php print render($page['home_sidebar_bottom']); ?>
		<?php endif; ?>	

	</div><!--end #sidebar-->
	<div class="clear-float"></div>
</div><!--end #wrapper-->


<?php else: ?>

<a class="school-public" href="http://medschool.ucsf.edu?p=0">School View &gt;</a>

<!-- Public View -->
<div class="wrapper public">
	
	<div id="main">
		
		<?php if ($page['feature_slideshow']): ?>
			<?php print render($page['feature_slideshow']); ?>
		<?php endif; ?>	
		
		<div id="right-col">
			<?php if ($page['home_right_col']): ?>
				<?php print render($page['home_right_col']); ?>
			<?php endif; ?>		
			<?php if ($page['news_external']): ?>
				<?php print render($page['news_external']); ?>
			<?php endif; ?>				
			
		</div><!--end #right-col-->
	
	</div><!--end #main-->
	
	<div id="sidebar">
	
		<?php if ($page['home_sidebar_top']): ?>
			<?php print render($page['home_sidebar_top']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar_public']): ?>
			<?php print render($page['home_sidebar_public']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar']): ?>
			<?php print render($page['home_sidebar']); ?>
		<?php endif; ?>
		
		<?php if ($page['home_sidebar_bottom']): ?>
			<?php print render($page['home_sidebar_bottom']); ?>
		<?php endif; ?>

		<div id="flickr-badge"></div>
		
	</div><!--end #sidebar-->
	<div class="clear-float"></div>
</div><!--end #wrapper-->


<?php endif; ?>


<?php if ($page['footer']): ?>
	<?php print render($page['footer']); ?>
<?php endif; ?>

<div class="nav-mobile">
	<?php if ($page['main_nav']): ?>
		<?php print render($page['main_nav']); ?>
	<?php endif; ?>		
</div>

<?php if ($messages): ?>
		<?php print $messages; ?>
<?php endif; ?>


	















