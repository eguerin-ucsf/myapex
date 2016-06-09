<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ucsf_pharmacy_syndicated_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openacademy_events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openacademy_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openacademy_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'css_id' => 'events-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '4786907a-4330-4c8c-9800-4d6d175461af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2fed5f33-1ec8-4e03-a5ed-ff0c8dc9b13d';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2fed5f33-1ec8-4e03-a5ed-ff0c8dc9b13d';
    $display->content['new-2fed5f33-1ec8-4e03-a5ed-ff0c8dc9b13d'] = $pane;
    $display->panels['contentmain'][0] = 'new-2fed5f33-1ec8-4e03-a5ed-ff0c8dc9b13d';
    $pane = new stdClass();
    $pane->pid = 'new-0fd58557-2633-43bc-9eaa-ded1fdf66af8';
    $pane->panel = 'contentmain';
    $pane->type = 'rss_link';
    $pane->subtype = 'rss_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rss_type' => 'events',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fd58557-2633-43bc-9eaa-ded1fdf66af8';
    $display->content['new-0fd58557-2633-43bc-9eaa-ded1fdf66af8'] = $pane;
    $display->panels['contentmain'][1] = 'new-0fd58557-2633-43bc-9eaa-ded1fdf66af8';
    $pane = new stdClass();
    $pane->pid = 'new-fdda1418-a919-4881-8119-3eb9524c40ea';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'syndicated_events-monthly_mini_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fdda1418-a919-4881-8119-3eb9524c40ea';
    $display->content['new-fdda1418-a919-4881-8119-3eb9524c40ea'] = $pane;
    $display->panels['sidebar'][0] = 'new-fdda1418-a919-4881-8119-3eb9524c40ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openacademy_events'] = $page;

  return $pages;

}
