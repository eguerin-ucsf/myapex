<?php
$plugin = array(
  'title'         => t('Accredited by the ACPE'),
  'description'   => t('Adds the ACPE logo, a blue rule, and hexagons'),
  'render region' => 'pharmacyoa_accredited_render_region',
  'render pane'   => 'pharmacyoa_accredited_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_accredited_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];

  $content->css_class .= ' pane-accredited';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}



