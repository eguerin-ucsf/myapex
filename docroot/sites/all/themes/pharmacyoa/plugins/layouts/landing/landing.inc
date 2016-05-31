<?php
// Plugin definition
$plugin = array(
  'title' => t('Landing Page'),
  'icon' => 'landing.png',
  'category' => t('Panopoly'),
  'theme' => 'landing',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
    'footer' => t('Footer'),
  ),
);
