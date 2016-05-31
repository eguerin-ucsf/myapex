<?php include('top-bar.tpl.php'); ?>
<div id="page" class=" <?php print $classes; ?>"<?php print $attributes; ?>>

  <?php include('header.tpl.php'); ?>

  <div id="main" class="clearfix">

    <div id="content">
      <div id="content-inner" class="inner column center">

        <?php if ($breadcrumb || $title || $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php # print $breadcrumb; ?>

            <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            
          </div> <!-- /#content-header -->
        <?php endif; ?>

        <div id="content-area">
          <?php print render($page['content']) ?>
        </div>

      </div>
    </div> <!-- /content-inner /content -->


  </div> <!-- /main -->
</div> <!-- /page -->
<?php include('footer.tpl.php'); ?>