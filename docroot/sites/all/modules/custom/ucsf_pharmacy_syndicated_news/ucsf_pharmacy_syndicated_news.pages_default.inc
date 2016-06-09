<?php
/**
 * @file
 * ucsf_pharmacy_syndicated_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ucsf_pharmacy_syndicated_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openacademy_news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
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
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_openacademy_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openacademy_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'css_id' => 'news-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
    ),
    'sidebar' => array(
      'style' => 'background_callout',
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '9d0d2dba-c971-4f15-8b79-6dea35c506f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f174bf5-7747-42ec-ba06-c7c77f8a3f72';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-news_preview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '9',
      'view_mode' => NULL,
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f174bf5-7747-42ec-ba06-c7c77f8a3f72';
    $display->content['new-3f174bf5-7747-42ec-ba06-c7c77f8a3f72'] = $pane;
    $display->panels['contentmain'][0] = 'new-3f174bf5-7747-42ec-ba06-c7c77f8a3f72';
    $pane = new stdClass();
    $pane->pid = 'new-5416d455-84ec-4e20-b3e3-1e9118b861dd';
    $pane->panel = 'contentmain';
    $pane->type = 'rss_link';
    $pane->subtype = 'rss_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rss_type' => 'news',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5416d455-84ec-4e20-b3e3-1e9118b861dd';
    $display->content['new-5416d455-84ec-4e20-b3e3-1e9118b861dd'] = $pane;
    $display->panels['contentmain'][1] = 'new-5416d455-84ec-4e20-b3e3-1e9118b861dd';
    $pane = new stdClass();
    $pane->pid = 'new-07ed62bf-1980-42f1-8b68-b461f1c551f3';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '9',
      'view_mode' => NULL,
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '07ed62bf-1980-42f1-8b68-b461f1c551f3';
    $display->content['new-07ed62bf-1980-42f1-8b68-b461f1c551f3'] = $pane;
    $display->panels['contentmain'][2] = 'new-07ed62bf-1980-42f1-8b68-b461f1c551f3';
    $pane = new stdClass();
    $pane->pid = 'new-d5405002-ac71-492d-9c8b-148d752a53d0';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-featured_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'title' => '',
        'widget_title' => '<none>',
      ),
      'view_mode' => NULL,
      'widget_title' => '<none>',
      'items_per_page' => NULL,
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'body' => 1,
        'view_node' => 1,
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd5405002-ac71-492d-9c8b-148d752a53d0';
    $display->content['new-d5405002-ac71-492d-9c8b-148d752a53d0'] = $pane;
    $display->panels['header'][0] = 'new-d5405002-ac71-492d-9c8b-148d752a53d0';
    $pane = new stdClass();
    $pane->pid = 'new-fe98101a-a7f7-4cd6-b4d4-16eff232204f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'openacademy_news-panel_pane_uftd';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Update from the Dean',
      'items_per_page' => NULL,
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
    $pane->uuid = 'fe98101a-a7f7-4cd6-b4d4-16eff232204f';
    $display->content['new-fe98101a-a7f7-4cd6-b4d4-16eff232204f'] = $pane;
    $display->panels['sidebar'][0] = 'new-fe98101a-a7f7-4cd6-b4d4-16eff232204f';
    $pane = new stdClass();
    $pane->pid = 'new-04bb606e-5237-4a42-88da-01c34dd468e9';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-category_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '04bb606e-5237-4a42-88da-01c34dd468e9';
    $display->content['new-04bb606e-5237-4a42-88da-01c34dd468e9'] = $pane;
    $display->panels['sidebar'][1] = 'new-04bb606e-5237-4a42-88da-01c34dd468e9';
    $pane = new stdClass();
    $pane->pid = 'new-2f44d910-8175-444a-95be-5d21fc6d7e55';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_coverage-news_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => NULL,
      'fields_override' => array(
        'field_featured_image' => 0,
        'title' => 1,
        'created' => 0,
        'body' => 0,
        'field_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => 'Media coverage',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background_callout',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2f44d910-8175-444a-95be-5d21fc6d7e55';
    $display->content['new-2f44d910-8175-444a-95be-5d21fc6d7e55'] = $pane;
    $display->panels['sidebar'][2] = 'new-2f44d910-8175-444a-95be-5d21fc6d7e55';
    $pane = new stdClass();
    $pane->pid = 'new-2cb1cdf2-622d-463b-9eaf-9f48632b3d7f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_fromt_he_dean-update_from_dean_block_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Update From The Dean',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background_callout',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2cb1cdf2-622d-463b-9eaf-9f48632b3d7f';
    $display->content['new-2cb1cdf2-622d-463b-9eaf-9f48632b3d7f'] = $pane;
    $display->panels['sidebar'][3] = 'new-2cb1cdf2-622d-463b-9eaf-9f48632b3d7f';
    $pane = new stdClass();
    $pane->pid = 'new-0057c4a8-16c7-4492-845d-613e6e735e02';
    $pane->panel = 'sidebar';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background_callout',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0057c4a8-16c7-4492-845d-613e6e735e02';
    $display->content['new-0057c4a8-16c7-4492-845d-613e6e735e02'] = $pane;
    $display->panels['sidebar'][4] = 'new-0057c4a8-16c7-4492-845d-613e6e735e02';
    $pane = new stdClass();
    $pane->pid = 'new-a42c7135-5a9c-49dc-b5d4-1c9c2c10cdc6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'archive_of_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'News Archive',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a42c7135-5a9c-49dc-b5d4-1c9c2c10cdc6';
    $display->content['new-a42c7135-5a9c-49dc-b5d4-1c9c2c10cdc6'] = $pane;
    $display->panels['sidebar'][5] = 'new-a42c7135-5a9c-49dc-b5d4-1c9c2c10cdc6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openacademy_news'] = $page;

  return $pages;

}
