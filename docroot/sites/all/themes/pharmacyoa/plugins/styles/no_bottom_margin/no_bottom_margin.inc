<?php
$plugin = array(
  'title' => t('No bottom margin'),
  'description' => t('No styling'),
  'render pane' => 'pharmacyoa_no_bottom_margin_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_no_bottom_margin_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-no-bottom-margin';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
