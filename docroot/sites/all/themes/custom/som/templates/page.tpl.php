
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

<div id="banner-wrapper">	
	<div id="banner">
	
		<h1>
			<?php if ($site_name): ?>
				<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
					<?php print $site_name; ?>
				</a>
			<?php endif; ?>
		</h1>

		<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
			<img src="<?php print $logo; ?>" alt="" />
		</a>	
	</div>
</div>

<div id="content-wrapper" class="clearfix">

	<div id="sidebar-first">
		<?php if ($page['left_col']): ?>
			<?php print render($page['left_col']); ?>
		<?php endif; ?>	
		<?php if (isset($node) && isset($node->field_left_column['und'][0]['safe_value'])): ?>
			<?php print $node->field_left_column['und'][0]['safe_value']; ?>
		<?php endif; ?>	

	</div>

	<div id="content-middle">
  
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

	<?php if ($messages): ?>
    <div id="messages" style="margin:40px 0;"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>


	















