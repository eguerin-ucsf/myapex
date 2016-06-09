<?php
$plugin = array(
  'title'         => t('Landing page overview'),
  'description'   => t('Provides a style treatment for landing page overview. Presumes one image followed by an h2 heading followed by one or more paragraphs.'),
  'render region' => 'pharmacyoa_landingoverview_render_region',
  'render pane'   => 'pharmacyoa_landingoverview_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_landingoverview_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];

  $content->css_class .= ' pane-landingoverview';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}