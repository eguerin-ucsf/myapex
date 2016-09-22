<?php
/**
 * @file
 * myapex_ed_updates.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function myapex_ed_updates_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide-blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'update-blog/*' => 'update-blog/*',
        'apex-updates' => 'apex-updates',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'myapex' => array(
        'disable' => array(
          'leftcol' => 'leftcol',
          'rightcol' => 'rightcol',
          'ucsf_nav' => 0,
          'search_form' => 0,
          'subscribe_login' => 0,
          'banner' => 0,
          'content' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'sevenadjusted' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content' => 0,
          'header' => 0,
          'footer' => 0,
          'highlighted' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'STARTER_SUBTHEME' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'content' => 0,
          'footer' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'tao' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content' => 0,
          'header' => 0,
          'help' => 0,
          'footer' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'ucsf_base' => array(
        'disable' => array(
          'page_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'page_bottom' => 0,
          'top_header' => 0,
          'header' => 0,
          'footer_top' => 0,
          'footer' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'help' => 0,
          'highlighted' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zen' => array(
        'disable' => array(
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
          'bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['hide-blocks'] = $context;

  return $export;
}
