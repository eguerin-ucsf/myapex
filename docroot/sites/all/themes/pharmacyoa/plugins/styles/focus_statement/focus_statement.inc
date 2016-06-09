<?php
$plugin = array(
  'title'         => t('Focus statement with introduction'),
  'description'   => t('First paragraph uses the typeface called Preface in a special color. Following paragraph is larger than normal body copy.'),
  'render region' => 'pharmacyoa_focus_statement_render_region',
  'render pane'   => 'pharmacyoa_focus_statement_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_focus_statement_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];

  $content->css_class .= ' pane-focus-statement';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}



