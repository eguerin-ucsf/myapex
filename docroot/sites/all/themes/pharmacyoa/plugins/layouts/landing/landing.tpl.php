<?php
/**
 * @file
 * Template for Panopoly Landing Page.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display landing clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="moscone-container moscone-header clearfix panel-panel">
    <div class="moscone-container-inner moscone-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>

  <div class="landing-container landing-column-content clearfix">
    <div class="landing-column-content-region landing-content panel-panel">
      <div class="landing-column-content-region-inner landing-content-inner panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="landing-column-content-region landing-sidebar panel-panel">
      <div class="landing-column-content-region-inner landing-sidebar-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>

  <div class="moscone-container moscone-footer clearfix panel-panel">
    <div class="moscone-container-inner moscone-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>

</div><!-- /.landing -->
