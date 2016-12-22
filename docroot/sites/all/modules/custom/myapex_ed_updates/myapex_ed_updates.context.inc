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
        'provider-updates' => 'provider-updates',
        'provider-updates/*' => 'provider-updates/*',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'adminimal' => array(
        'disable' => array(
          'hidden' => 0,
          'content_before' => 0,
          'sidebar_left' => 0,
          'content' => 0,
          'sidebar_right' => 0,
          'content_after' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
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
    ),
  );
  $context->condition_mode = 0;
  $export['hide-blocks'] = $context;

  return $export;
}
