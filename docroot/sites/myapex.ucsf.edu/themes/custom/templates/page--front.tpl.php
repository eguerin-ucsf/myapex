<div class="ucsf-nav">

	<div class="container-fluid">
		<?php if ($page['ucsf_nav']): ?>
			<?php print render($page['ucsf_nav']); ?>
		<?php endif; ?>	
	</div><!-- end container-fluid -->

</div>

<div class="container-fluid">
	
	<div class="masthead">
		<h1 class="site-name"><img src="<?php print $logo; ?>" alt="" /></h1>
		<?php if ($page['search_form']): ?>
			<?php print render($page['search_form']); ?>
		<?php endif; ?>
	</div>	
	
	<div class="subscribe-cont">
		<?php if ($page['subscribe_login']): ?>
			<?php print render($page['subscribe_login']); ?>
		<?php endif; ?>
	</div>
	
	<div class="banner">
		<?php if ($page['banner']): ?>
			<?php print render($page['banner']); ?>
		<?php endif; ?>
	</div>

	<?php if ($messages): ?>
		<div id="messages" style="margin:40px 0;">
			<?php print $messages; ?>
		</div> 
	<?php endif; ?>

</div><!-- end container-fluid -->

<div class="container-fluid">

	<div class="row-fluid">
		<div class="span3 leftcol">
			<div class="toggle-menu"><img src="/sites/myapex.ucsf.edu/files/toggle-menu.png" alt="" /></div>
			<?php if ($page['leftcol']): ?>
				<?php print render($page['leftcol']); ?>
			<?php endif; ?>	
		</div>
		
		<div class="span6">
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
		</div>
		
		<div class="span3">
			<?php if ($page['rightcol']): ?>
				<?php print render($page['rightcol']); ?>
			<?php endif; ?>
		</div>
	</div><!--end row-fluid-->
	
</div><!--end container-fluid-->
			
<div class="footer">
	<?php if ($page['footer']): ?>
		<?php print render($page['footer']); ?>
	<?php endif; ?>
</div>

	
