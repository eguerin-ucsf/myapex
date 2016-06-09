<?php
$plugin = array(
  'title'         => t('Float panel left with 50% width (aka quicklinks single)'),
  'description'   => t('Provides a background callout style for a panel region or pane.'),
  'render region' => 'pharmacyoa_float_left_fifty_render_region',
  'render pane'   => 'pharmacyoa_float_left_fifty_render_pane',
  'weight'        => -10,
);

/**
 * Theme function for the pane style.
 */
function theme_pharmacyoa_float_left_fifty_render_pane($vars) {
  $content = $vars['content'];
  $pane    = $vars['pane'];
  $display = $vars['display'];
  $plugin  = $vars['style'];
  
  // Ugly fix for a layout issue. 
  // allows you to hook specific panes by their class unique class name 
  if (isset($vars['content']->title) && !empty($vars['content']->title)) {
    // Take the title and create a css class for focusing on the element
    // Replace whitespace.
    $cssName = str_replace(' ', '-', $vars['content']->title);
    // Remove remaining unsafe characters.cssName
    $cssName = preg_replace('![^0-9A-Za-z_.-]!', '', $cssName);
    $cssName = strtolower($cssName);
    $content->css_class .= " pane-float-left-fifty-$cssName";
  }

  $content->css_class .= ' pane-float-left-fifty';
  return theme('panels_pane', array('classes'=> ' monkey','content' => $content, 'pane' => $pane, 'display' => $display));
}

/**
 * Theme function for the region style.
 * remove the panel separators 
 */
function theme_pharmacyoa_float_left_fifty_render_region($vars) {
  $display   = $vars['display'];
  $region_id = $vars['region_id'];
  $panes     = $vars['panes'];
  $settings  = $vars['settings'];

  $output = '';
  $output .= '<div class="region region-' . $vars['region_id'] . ' region-float_left_fifty">';
  $output .= implode('', $panes);
  $output .= '</div>';
  return $output;
}
