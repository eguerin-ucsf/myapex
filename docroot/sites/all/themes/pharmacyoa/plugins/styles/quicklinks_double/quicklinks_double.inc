<?php
$plugin = array(
  'title' => t('Quicklinks double'),
  'description' => t('One heading spanning two columns of quicklinks'),
  'render region' => 'pharmacyoa_quicklinks_double_render_region',
  'render pane' => 'pharmacyoa_quicklinks_double_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_quicklinks_double_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-float-left-fifty pane-quicklinks-double';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
 
/**
 * Theme function for the region style.
 */
function theme_pharmacyoa_quicklinks_double_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $output = '';
  $output .= '<div class="region region-' . $vars['region_id'] . ' region-quicklinks-double">';
  $output .= implode('<div class="panel-separator"></div>', $panes);
  $output .= '</div>';
  return $output;
}
