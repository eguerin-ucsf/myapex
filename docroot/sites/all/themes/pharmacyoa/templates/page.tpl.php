<?php include('top-bar.tpl.php'); ?>
<div id="page" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php include('header.tpl.php'); ?>

  <div id="main" class="clearfix">

    <div id="content">
      <div id="content-inner" class="inner column center">

        <?php if ($breadcrumb || $title || $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php # print $breadcrumb; ?>
            <?php if ($title && !$hide_page_title && $page_type != 5 && $page_type != 6 && $page_type != 7 && $page_type != 10 && $page_type != 11): ?>
              <h1 class="title<?php print $subtitle ? ' with-subtitle': "" ?>"><?php print $title; ?></h1>
              <?php if (isset($subtitle) && $subtitle != ""): ?>
                <p class="subtitle"><?php print $subtitle ?></p>
              <?php endif ?>
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


<?php
/*
// start - for debugging only

$debug_vars_list = array(
  'page_type'
  ,'organization_name'
  ,'deptaffiliation'
  ,'site_name'
  ,'prefix'
  ,'person_name'
  ,'subtitle'
  ,'title'
  ,'microsite_title'
);

// debug
foreach ($debug_vars_list as $value) {
  echo "$value = [" . $$value . "]" . "<br />";
}

$slashcount = substr_count( $_SERVER['REQUEST_URI'] , '/' );
echo "slashcount = $slashcount" . "<br />";
echo $_SERVER['REQUEST_URI'] . "<br />";
echo "strpos = " . strpos($_SERVER['REQUEST_URI'], '/?');
$url = parse_url($_SERVER['REQUEST_URI']);
echo "url = ";
print_r($url);
?>
<pre>
   <?php //dpm(get_defined_vars()); ?>
   <?php //dpm($vars); ?>
</pre>
<?

// end - for debugging only
*/
if ( isset( $page['sidebar_first'] ) ) {
?>
        <div id="sidebar-first">
          <?php print render($page['sidebar_first']) ?>
        </div>
<?php
}
?>
        <div id="content-area" class="clearfix">
<?php
  if ( $page_type == 6 || $page_type == 7 || $page_type == 10 || $page_type == 11) {
?>
           <div class="lab-title-group">
          <?php
            if ( $page_type == 6 || $page_type == 10){
              printf( '<h1 class="lab-title">%s</h1>' , $site_name );
            } else { // page_type must be 7
              printf( '<div class="lab-title"><a href="%s">%s</a></div>' , $front_page, $site_name );
            }
          ?>
          <div><?php printf( '<span class="prefix">%s</span>%s<span class="person-name">%s</span>' , $prefix , ( strlen( $person_name ) >= 26 ? '<br>' : ' ' ) , $person_name ); ?></div>
          <?php if ($subtitle): ?>
            <div class="subtitle"><?php echo $subtitle; ?></div>
          <?php endif; ?>
        </div>
          <?php
              if ( $page_type == 7 ){
                printf( '<h1>%s</h1>' , $title );
              }
          ?>
<?php
  }
?>
          <?php print render($page['content']) ?>
        </div>
      </div>
    </div> <!-- /content-inner /content -->
  </div> <!-- /main -->
</div> <!-- /page -->
<?php
include('footer.tpl.php');
