<?php
/**
 * @file
 * ucsf_pharmacy_department_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ucsf_pharmacy_department_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'views',
  );

  // Exported permission: access announcement node view.
  $permissions['access announcement node view'] = array(
    'name' => 'access announcement node view',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access ckeditor link.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access large_slider node view.
  $permissions['access large_slider node view'] = array(
    'name' => 'access large_slider node view',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: access memcache statistics.
  $permissions['access memcache statistics'] = array(
    'name' => 'access memcache statistics',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: access openacademy_event node view.
  $permissions['access openacademy_event node view'] = array(
    'name' => 'access openacademy_event node view',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: access panopoly_page node view.
  $permissions['access panopoly_page node view'] = array(
    'name' => 'access panopoly_page node view',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: access slab cachedump.
  $permissions['access slab cachedump'] = array(
    'name' => 'access slab cachedump',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'memcache_admin',
  );

  // Exported permission: access syndicated_media_coverage node view.
  $permissions['access syndicated_media_coverage node view'] = array(
    'name' => 'access syndicated_media_coverage node view',
    'roles' => array(),
    'module' => 'internal_nodes',
  );

  // Exported permission: access syndicated_news node view.
  $permissions['access syndicated_news node view'] = array(
    'name' => 'access syndicated_news node view',
    'roles' => array(),
    'module' => 'internal_nodes',
  );

  // Exported permission: access syndicated_person node view.
  $permissions['access syndicated_person node view'] = array(
    'name' => 'access syndicated_person node view',
    'roles' => array(),
    'module' => 'internal_nodes',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: administer addthis.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'addthis',
  );

  // Exported permission: administer advanced addthis.
  $permissions['administer advanced addthis'] = array(
    'name' => 'administer advanced addthis',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'addthis',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer apps.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'apps',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'block',
  );

  // Exported permission: administer breakpoints.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: administer ckeditor link.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: administer default config.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'defaultconfig',
  );

  // Exported permission: administer entity view modes.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: administer facets.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'features',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer feeds_tamper.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: administer fieldable panels panes.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'image',
  );

  // Exported permission: administer internal nodes.
  $permissions['administer internal nodes'] = array(
    'name' => 'administer internal nodes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: administer manualcrop settings.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: administer media browser.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: administer media wysiwyg view mode.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodequeue.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcement defaults.
  $permissions['administer panelizer node announcement defaults'] = array(
    'name' => 'administer panelizer node announcement defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node large_slider defaults.
  $permissions['administer panelizer node large_slider defaults'] = array(
    'name' => 'administer panelizer node large_slider defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event content.
  $permissions['administer panelizer node openacademy_event content'] = array(
    'name' => 'administer panelizer node openacademy_event content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event context.
  $permissions['administer panelizer node openacademy_event context'] = array(
    'name' => 'administer panelizer node openacademy_event context',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event defaults.
  $permissions['administer panelizer node openacademy_event defaults'] = array(
    'name' => 'administer panelizer node openacademy_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event layout.
  $permissions['administer panelizer node openacademy_event layout'] = array(
    'name' => 'administer panelizer node openacademy_event layout',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event overview.
  $permissions['administer panelizer node openacademy_event overview'] = array(
    'name' => 'administer panelizer node openacademy_event overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openacademy_event settings.
  $permissions['administer panelizer node openacademy_event settings'] = array(
    'name' => 'administer panelizer node openacademy_event settings',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page content.
  $permissions['administer panelizer node panopoly_page content'] = array(
    'name' => 'administer panelizer node panopoly_page content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page context.
  $permissions['administer panelizer node panopoly_page context'] = array(
    'name' => 'administer panelizer node panopoly_page context',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page defaults.
  $permissions['administer panelizer node panopoly_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page layout.
  $permissions['administer panelizer node panopoly_page layout'] = array(
    'name' => 'administer panelizer node panopoly_page layout',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page overview.
  $permissions['administer panelizer node panopoly_page overview'] = array(
    'name' => 'administer panelizer node panopoly_page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page settings.
  $permissions['administer panelizer node panopoly_page settings'] = array(
    'name' => 'administer panelizer node panopoly_page settings',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user content.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user context.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user defaults.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user layout.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      0 => 'Contributor',
      1 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user overview.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user settings.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer pictures.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'picture',
  );

  // Exported permission: administer quicktabs.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'search',
  );

  // Exported permission: administer simpleSAMLphp authentication.
  $permissions['administer simpleSAMLphp authentication'] = array(
    'name' => 'administer simpleSAMLphp authentication',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'simplesamlphp_auth',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: administer unit tests.
  $permissions['administer unit tests'] = array(
    'name' => 'administer unit tests',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'simpletest',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'uuid',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'system',
  );

  // Exported permission: blocked node status.
  $permissions['blocked node status'] = array(
    'name' => 'blocked node status',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'internal_nodes',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: clear node feeds.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear syndicated_media_coverage feeds.
  $permissions['clear syndicated_media_coverage feeds'] = array(
    'name' => 'clear syndicated_media_coverage feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear syndicated_news feeds.
  $permissions['clear syndicated_news feeds'] = array(
    'name' => 'clear syndicated_news feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear syndicated_people feeds.
  $permissions['clear syndicated_people feeds'] = array(
    'name' => 'clear syndicated_people feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear user feeds.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create announcement content.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: create fieldable basic_file.
  $permissions['create fieldable basic_file'] = array(
    'name' => 'create fieldable basic_file',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable fieldable_panels_pane.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable image.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable map.
  $permissions['create fieldable map'] = array(
    'name' => 'create fieldable map',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable quick_links.
  $permissions['create fieldable quick_links'] = array(
    'name' => 'create fieldable quick_links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable spotlight.
  $permissions['create fieldable spotlight'] = array(
    'name' => 'create fieldable spotlight',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable table.
  $permissions['create fieldable table'] = array(
    'name' => 'create fieldable table',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable text.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable video.
  $permissions['create fieldable video'] = array(
    'name' => 'create fieldable video',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create large_slider content.
  $permissions['create large_slider content'] = array(
    'name' => 'create large_slider content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: create openacademy_event content.
  $permissions['create openacademy_event content'] = array(
    'name' => 'create openacademy_event content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: create panopoly_page content.
  $permissions['create panopoly_page content'] = array(
    'name' => 'create panopoly_page content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: create syndicated_media_coverage content.
  $permissions['create syndicated_media_coverage content'] = array(
    'name' => 'create syndicated_media_coverage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create syndicated_news content.
  $permissions['create syndicated_news content'] = array(
    'name' => 'create syndicated_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create syndicated_person content.
  $permissions['create syndicated_person content'] = array(
    'name' => 'create syndicated_person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any announcement content.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any audio files.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any document files.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any image files.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any large_slider content.
  $permissions['delete any large_slider content'] = array(
    'name' => 'delete any large_slider content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any openacademy_event content.
  $permissions['delete any openacademy_event content'] = array(
    'name' => 'delete any openacademy_event content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panopoly_page content.
  $permissions['delete any panopoly_page content'] = array(
    'name' => 'delete any panopoly_page content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any syndicated_media_coverage content.
  $permissions['delete any syndicated_media_coverage content'] = array(
    'name' => 'delete any syndicated_media_coverage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any syndicated_news content.
  $permissions['delete any syndicated_news content'] = array(
    'name' => 'delete any syndicated_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any syndicated_person content.
  $permissions['delete any syndicated_person content'] = array(
    'name' => 'delete any syndicated_person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any video files.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete fieldable basic_file.
  $permissions['delete fieldable basic_file'] = array(
    'name' => 'delete fieldable basic_file',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable fieldable_panels_pane.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable image.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable map.
  $permissions['delete fieldable map'] = array(
    'name' => 'delete fieldable map',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable quick_links.
  $permissions['delete fieldable quick_links'] = array(
    'name' => 'delete fieldable quick_links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable spotlight.
  $permissions['delete fieldable spotlight'] = array(
    'name' => 'delete fieldable spotlight',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable table.
  $permissions['delete fieldable table'] = array(
    'name' => 'delete fieldable table',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable text.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable video.
  $permissions['delete fieldable video'] = array(
    'name' => 'delete fieldable video',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete own announcement content.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own audio files.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own document files.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own image files.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own large_slider content.
  $permissions['delete own large_slider content'] = array(
    'name' => 'delete own large_slider content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own openacademy_event content.
  $permissions['delete own openacademy_event content'] = array(
    'name' => 'delete own openacademy_event content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panopoly_page content.
  $permissions['delete own panopoly_page content'] = array(
    'name' => 'delete own panopoly_page content',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own syndicated_media_coverage content.
  $permissions['delete own syndicated_media_coverage content'] = array(
    'name' => 'delete own syndicated_media_coverage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own syndicated_news content.
  $permissions['delete own syndicated_news content'] = array(
    'name' => 'delete own syndicated_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own syndicated_person content.
  $permissions['delete own syndicated_person content'] = array(
    'name' => 'delete own syndicated_person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own video files.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 16.
  $permissions['delete terms in 16'] = array(
    'name' => 'delete terms in 16',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 21.
  $permissions['delete terms in 21'] = array(
    'name' => 'delete terms in 21',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 26.
  $permissions['delete terms in 26'] = array(
    'name' => 'delete terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 31.
  $permissions['delete terms in 31'] = array(
    'name' => 'delete terms in 31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 36.
  $permissions['delete terms in 36'] = array(
    'name' => 'delete terms in 36',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 41.
  $permissions['delete terms in 41'] = array(
    'name' => 'delete terms in 41',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 46.
  $permissions['delete terms in 46'] = array(
    'name' => 'delete terms in 46',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download any audio files.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download any document files.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download any image files.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download any video files.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download own audio files.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download own document files.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download own image files.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: download own video files.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: edit any announcement content.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any audio files.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any document files.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any image files.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any large_slider content.
  $permissions['edit any large_slider content'] = array(
    'name' => 'edit any large_slider content',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any openacademy_event content.
  $permissions['edit any openacademy_event content'] = array(
    'name' => 'edit any openacademy_event content',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panopoly_page content.
  $permissions['edit any panopoly_page content'] = array(
    'name' => 'edit any panopoly_page content',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any syndicated_media_coverage content.
  $permissions['edit any syndicated_media_coverage content'] = array(
    'name' => 'edit any syndicated_media_coverage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any syndicated_news content.
  $permissions['edit any syndicated_news content'] = array(
    'name' => 'edit any syndicated_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any syndicated_person content.
  $permissions['edit any syndicated_person content'] = array(
    'name' => 'edit any syndicated_person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any video files.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit fieldable basic_file.
  $permissions['edit fieldable basic_file'] = array(
    'name' => 'edit fieldable basic_file',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable fieldable_panels_pane.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable image.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable map.
  $permissions['edit fieldable map'] = array(
    'name' => 'edit fieldable map',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable quick_links.
  $permissions['edit fieldable quick_links'] = array(
    'name' => 'edit fieldable quick_links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable spotlight.
  $permissions['edit fieldable spotlight'] = array(
    'name' => 'edit fieldable spotlight',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable table.
  $permissions['edit fieldable table'] = array(
    'name' => 'edit fieldable table',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable text.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable video.
  $permissions['edit fieldable video'] = array(
    'name' => 'edit fieldable video',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: edit own announcement content.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own audio files.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own document files.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own image files.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own large_slider content.
  $permissions['edit own large_slider content'] = array(
    'name' => 'edit own large_slider content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own openacademy_event content.
  $permissions['edit own openacademy_event content'] = array(
    'name' => 'edit own openacademy_event content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panopoly_page content.
  $permissions['edit own panopoly_page content'] = array(
    'name' => 'edit own panopoly_page content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own syndicated_media_coverage content.
  $permissions['edit own syndicated_media_coverage content'] = array(
    'name' => 'edit own syndicated_media_coverage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own syndicated_news content.
  $permissions['edit own syndicated_news content'] = array(
    'name' => 'edit own syndicated_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own syndicated_person content.
  $permissions['edit own syndicated_person content'] = array(
    'name' => 'edit own syndicated_person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own video files.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 16.
  $permissions['edit terms in 16'] = array(
    'name' => 'edit terms in 16',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 21.
  $permissions['edit terms in 21'] = array(
    'name' => 'edit terms in 21',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 26.
  $permissions['edit terms in 26'] = array(
    'name' => 'edit terms in 26',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 31.
  $permissions['edit terms in 31'] = array(
    'name' => 'edit terms in 31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 36.
  $permissions['edit terms in 36'] = array(
    'name' => 'edit terms in 36',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 41.
  $permissions['edit terms in 41'] = array(
    'name' => 'edit terms in 41',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 46.
  $permissions['edit terms in 46'] = array(
    'name' => 'edit terms in 46',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import node feeds.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import syndicated_media_coverage feeds.
  $permissions['import syndicated_media_coverage feeds'] = array(
    'name' => 'import syndicated_media_coverage feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import syndicated_news feeds.
  $permissions['import syndicated_news feeds'] = array(
    'name' => 'import syndicated_news feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import syndicated_people feeds.
  $permissions['import syndicated_people feeds'] = array(
    'name' => 'import syndicated_people feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import user feeds.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'features',
  );

  // Exported permission: manipulate all queues.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Editor',
      1 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'user',
  );

  // Exported permission: tamper node.
  $permissions['tamper node'] = array(
    'name' => 'tamper node',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper syndicated_media_coverage.
  $permissions['tamper syndicated_media_coverage'] = array(
    'name' => 'tamper syndicated_media_coverage',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper syndicated_news.
  $permissions['tamper syndicated_news'] = array(
    'name' => 'tamper syndicated_news',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper syndicated_people.
  $permissions['tamper syndicated_people'] = array(
    'name' => 'tamper syndicated_people',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper user.
  $permissions['tamper user'] = array(
    'name' => 'tamper user',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: unlock node feeds.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock syndicated_media_coverage feeds.
  $permissions['unlock syndicated_media_coverage feeds'] = array(
    'name' => 'unlock syndicated_media_coverage feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock syndicated_news feeds.
  $permissions['unlock syndicated_news feeds'] = array(
    'name' => 'unlock syndicated_news feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock syndicated_people feeds.
  $permissions['unlock syndicated_people feeds'] = array(
    'name' => 'unlock syndicated_people feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock user feeds.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'feeds',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: use pasteformat.
  $permissions['use pasteformat'] = array(
    'name' => 'use pasteformat',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'pasteformat',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format panopoly_html_text.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format panopoly_wysiwyg_text.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format webedit.
  $permissions['use text format webedit'] = array(
    'name' => 'use text format webedit',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format webedit_paste.
  $permissions['use text format webedit_paste'] = array(
    'name' => 'use text format webedit_paste',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view diffs of changed files.
  $permissions['view diffs of changed files'] = array(
    'name' => 'view diffs of changed files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'hacked',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'administrative user',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'panels',
  );

  // Exported permission: view private files.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'node',
  );

  // Exported permission: view style guides.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      0 => 'administrative user',
    ),
    'module' => 'styleguide',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Contributor',
      1 => 'Editor',
      2 => 'administrative user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
