<?php
$plugin = array(
  'title' => t('Basic'),
  'description' => t('No styling'),
  'render pane' => 'pharmacyoa_basic_render_pane',
  'weight' => 0,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_basic_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-basic';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
