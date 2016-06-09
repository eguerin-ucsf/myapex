
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
		<a href="/"><h1 id="logo"><?php print $site_name; ?></h1></a>
		<div id="search-cont">
			<form id="search-block-form" method="get" action="http://ucsf.edu/ucsf/search">
				<label class="search-label" for="search">Search</label>
				<input class="form-text" type="text" onclick="this.value='';" value="Search" id="search" name="search">
				<input id="edit-submit" class="form-submit" type="image" src="/sites/all/themes/custom/medschool/images/search_icon.gif" alt="Submit" name="submit">
			</form>
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

<div id="content-wrapper" class="clearfix">

	<div id="sidebar-first">
		<?php if ($page['left_col']): ?>
			<?php print render($page['left_col']); ?>
		<?php endif; ?>	
		<?php if (isset($node) && isset($node->field_left_column['und'][0]['safe_value'])): ?>
			<?php print $node->field_left_column['und'][0]['safe_value']; ?>
		<?php endif; ?>	
		&nbsp;
	</div>

	<div id="content-middle">  
	
		<?php if ($messages): ?>
			<div id="messages" style="margin:40px 0;"><div class="section clearfix">
				<?php print $messages; ?>
			</div></div> <!-- /.section, /#messages -->
		<?php endif; ?>

		<a id="main-content"></a>
		<?php if ($tabs): ?>
			<?php print render($tabs); ?>
		 <?php endif; ?>
		<?php if ($title): ?>
			<h2 class="title"><?php print $title; ?></h2>
		<?php endif; ?>
		<?php if ($page['content']): ?>
			<?php print render($page['content']); ?>
		<?php endif; ?>	
	</div>
	
	<div id="sidebar-second">
		<?php if ($page['right_col']): ?>
			<?php print render($page['right_col']); ?>
		<?php endif; ?>	
		<div class="clearfloat">
			<?php if (isset($node) && isset($node->field_right_column['und'][0]['safe_value'])): ?>
				<?php print $node->field_right_column['und'][0]['safe_value']; ?>
			<?php endif; ?>	
		</div>
	</div>

</div>

<?php if ($page['footer']): ?>
	<?php print render($page['footer']); ?>
<?php endif; ?>




	















