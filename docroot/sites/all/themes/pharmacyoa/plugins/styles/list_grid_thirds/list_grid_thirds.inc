<?php
$plugin = array(
  'title' => t('List item float into thirds'),
  'description' => t('Provides a background callout style for a panel region or pane.'),
  'render region' => 'pharmacyoa_list_grid_thirds_render_region',
  'render pane' => 'pharmacyoa_list_grid_thirds_render_pane',
  'weight' => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_list_grid_thirds_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $plugin = $vars['style'];

  $content->css_class .= ' pane-list-grid-thirds';

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
 
/**
 * Theme function for the region style.
 */
function theme_pharmacyoa_list_grid_thirds_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $output = '';
  $output .= '<div class="region region-' . $vars['region_id'] . ' region-list-grid-thirds">';
  $output .= implode('<div class="panel-separator"></div>', $panes);
  $output .= '</div>';
  return $output;
}

