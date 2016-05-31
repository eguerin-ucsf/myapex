<?php
$plugin = array(
  'title'         => t('Horizontal lines above and below'),
  'description'   => t('Provides a style treatment for panes to have a horizontal line above and below.'),
  'render region' => 'pharmacyoa_horizlinesabovebelow_render_region',
  'render pane'   => 'pharmacyoa_horizlinesabovebelow_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_horizlinesabovebelow_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];

  $content->css_class .= ' pane-horizlinesabovebelow';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
