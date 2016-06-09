<?php
$plugin = array(
  'title'         => t('Hide when browser width is below threshold called "small"'),
  'description'   => t('Show elements in desktop browsers and hide them for mobile browsers'),
  'render region' => 'pharmacyoa_hidewhensmall_render_region',
  'render pane'   => 'pharmacyoa_hidewhensmall_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_hidewhensmall_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];

  $content->css_class .= ' pane-hidewhensmall';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
