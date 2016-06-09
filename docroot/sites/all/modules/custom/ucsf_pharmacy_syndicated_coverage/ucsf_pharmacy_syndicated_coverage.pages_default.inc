<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_coverage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ucsf_pharmacy_syndicated_coverage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media_coverage';
  $page->task = 'page';
  $page->admin_title = 'Media Coverage';
  $page->admin_description = 'Media Coverage page';
  $page->path = 'media-coverage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_coverage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'media_coverage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel  - Media Coverage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
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
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'background_callout',
    ),
  );
  $display->cache = array();
  $display->title = 'Media Coverage';
  $display->uuid = 'c8ab55a6-6621-42da-bb41-0f4dcce8aac4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3070f7e6-e2eb-4f5d-8fed-5cfc0f9676c7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_coverage-all_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '7',
      'view_mode' => NULL,
      'widget_title' => '',
      'use_pager' => 1,
      'pager_id' => '0',
      'offset' => '0',
      'fields_override' => array(
        'field_article_link' => 1,
        'title' => 1,
        'field_original_title' => 1,
        'field_article_source' => 1,
        'field_article_date' => 1,
        'field_related_profile_text' => 1,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3070f7e6-e2eb-4f5d-8fed-5cfc0f9676c7';
    $display->content['new-3070f7e6-e2eb-4f5d-8fed-5cfc0f9676c7'] = $pane;
    $display->panels['contentmain'][0] = 'new-3070f7e6-e2eb-4f5d-8fed-5cfc0f9676c7';
    $pane = new stdClass();
    $pane->pid = 'new-c196867d-900b-47cb-8fbe-8e19310c510d';
    $pane->panel = 'contentmain';
    $pane->type = 'rss_link';
    $pane->subtype = 'rss_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rss_type' => 'coverage',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c196867d-900b-47cb-8fbe-8e19310c510d';
    $display->content['new-c196867d-900b-47cb-8fbe-8e19310c510d'] = $pane;
    $display->panels['contentmain'][1] = 'new-c196867d-900b-47cb-8fbe-8e19310c510d';
    $pane = new stdClass();
    $pane->pid = 'new-9eae89f0-a4de-4d2b-9363-5423e0abd495';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-news_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => NULL,
      'fields_override' => array(
        'field_featured_image' => 0,
        'title' => 1,
        'created' => 0,
        'body' => 0,
        'field_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => 'Recent news',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background_callout',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9eae89f0-a4de-4d2b-9363-5423e0abd495';
    $display->content['new-9eae89f0-a4de-4d2b-9363-5423e0abd495'] = $pane;
    $display->panels['sidebar'][0] = 'new-9eae89f0-a4de-4d2b-9363-5423e0abd495';
    $pane = new stdClass();
    $pane->pid = 'new-3d2af4a2-c1d9-46b2-aee1-10b98c6dceb5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'archive_of_media_coverage-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => '',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background_callout',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d2af4a2-c1d9-46b2-aee1-10b98c6dceb5';
    $display->content['new-3d2af4a2-c1d9-46b2-aee1-10b98c6dceb5'] = $pane;
    $display->panels['sidebar'][1] = 'new-3d2af4a2-c1d9-46b2-aee1-10b98c6dceb5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3070f7e6-e2eb-4f5d-8fed-5cfc0f9676c7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media_coverage'] = $page;

  return $pages;

}
