<?php

/**
 * Implements hook_install_tasks()
 */
function ucsfp_install_tasks($install_state) {

  // Kick off the tasks and attempt to increase the memory if
  // provided with less than 196M
  $tasks = array();
  if (ini_get('memory_limit') != '-1' && ini_get('memory_limit') <= '196M') {
    ini_set('memory_limit', '196M');
  }

  // Summon the power of the Apps module
  require_once(drupal_get_path('module', 'apps') . '/apps.profile.inc');

  // // Set up a task to verify capability to run apps
  // $tasks['ucsfp_apps_check'] = array(
  //   'display_name' => t('Enable apps support'),
  //   'type' => 'form',
  // );

  // Set up the Open Academy Apps install task
  $openacademy_server = array(
    'machine name' => 'openacademy',
    'default apps' => array(
      'openacademy_core',
      'openacademy_news',
      'openacademy_events',
      'openacademy_publications',
      'openacademy_courses',
      'openacademy_people',
    ),
    'required apps' => array(
      'openacademy_core',
    ),
    'default content callback' => 'openacademy_default_content',
  );
  $tasks = $tasks + apps_profile_install_tasks($install_state, $openacademy_server);

  // Rename one of the default apps tasks. In the case of a non-interactive
  // installation, apps_profile_install_tasks() never defines this task, so we
  // need to make sure we don't accidentally create it when it doesn't exist.
  if (isset($tasks['apps_profile_apps_select_form_openacademy'])) {
    $tasks['apps_profile_apps_select_form_openacademy']['display_name'] = t('Install apps for Open Academy');
  }

  require_once(drupal_get_path('module', 'feature_set') . '/feature_set.admin.inc');
  $feature_set_install_tasks = feature_set_install_tasks();

  // customize feature set install tasks
  $feature_set_install_tasks['feature_set_admin_form']['display_name'] = st('Enable UCSF Pharmacy Features');
  $tasks += $feature_set_install_tasks;

  // Set up the theme selection and configuration tasks
  $tasks['ucsfp_theme_form'] = array(
    'display_name' => t('Choose a theme'),
    'type' => 'form',
  );
  $tasks['ucsfp_theme_configure_form'] = array(
    'display_name' => t('Configure theme settings'),
    'type' => 'form',
  );

  // Set up the prepare task to close it out
  $tasks['ucsfp_prepare'] = array(
    'display_name' => t('Prepare site'),
    'type' => 'form',
  );

  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function ucsfp_form_install_configure_form_alter(&$form, $form_state) {

  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'UCSF Pharmacy Subsite';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles'; // West coast, best coast
  // Don't set the email address to "admin@localhost" as that will fail D7's
  // email address validation.
  if ($_SERVER['HTTP_HOST'] != 'localhost') {
    $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function ucsfp_form_apps_profile_apps_select_form_alter(&$form, $form_state) {

  // For some things there are no need
  $form['apps_message']['#access'] = FALSE;
  $form['apps_fieldset']['apps']['#title'] = NULL;

  // Improve style of apps selection form
  if (isset($form['apps_fieldset'])) {
    $options = array();
    foreach($_SESSION['apps_manifest'] as $name => $app) {
      if ($name != '#theme' && is_array($app)) {
        $options[$name] = '<strong>' . $app['name'] . '</strong><p><div class="admin-options"><div class="form-item">' . theme('image', array('path' => $app['logo']['path'], 'height' => '32', 'width' => '32')) . '</div>' . $app['description'] . '</div></p>';
      }
    }
    ksort($options);
    $form['apps_fieldset']['apps']['#options'] = $options;
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ucsfp_form_feature_set_admin_form_alter(&$form, $form_state) {
  drupal_set_title(st('Enable UCSF Pharmacy Features'));
  $form['submit']['#value'] = st('Enable Features');
}

/**
 * Implements hook_install_tasks_alter()
 */
function ucsfp_install_tasks_alter(&$tasks, $install_state) {

  // Insert install task to set theme
  ucsfp_maintenance_array_insert(
    $tasks, 
    'install_load_profile', array(
      'ucsfp_set_theme' => array(
        'run' => INSTALL_TASK_RUN_IF_REACHED,
      ),
    )
  );

  // Since we only offer one language, define a callback to set this
  $tasks['install_select_locale']['function'] = 'ucsfp_locale_selection';

  // Create a more fun finished page with our Open Academy Saurus
  $tasks['install_finished']['function'] = 'ucsfp_finished_yah';
  $tasks['install_finished']['display_name'] = t('Finished!');
  $tasks['install_finished']['type'] = 'form';
}

/**
 * Task handler to set the language to English since that is the only one
 * we have at the moment.
 */
function ucsfp_locale_selection(&$install_state) {
  $install_state['parameters']['locale'] = 'en';
}

/**
 * Implements hook_appstore_stores_info()
 */
function ucsfp_apps_servers_info() {
  $profile = variable_get('install_profile', 'openacademy');
  $info =  drupal_parse_info_file(drupal_get_path('profile', $profile) . '/' . $profile . '.info');
  return array(
    'openacademy' => array(
      'title' => 'Open Academy',
      'description' => "Apps for Open Academy",
      'manifest' => 'http://apps.chapterthree.com/openacademy',
      'profile' => $profile,
      'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x',
      'server_name' => (!empty($_SERVER['SERVER_NAME'])) ? $_SERVER['SERVER_NAME'] : NULL,
      'server_ip' => (!empty($_SERVER['SERVER_ADDR'])) ? $_SERVER['SERVER_ADDR'] : NULL,
    ),
    'panopoly' => array(
      'title' => 'Panopoly',
      'description' => 'Apps for Panopoly',
      'manifest' => 'http://apps.getpantheon.com/panopoly',
      'profile' => $profile,
      'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x',
      'server_name' => (!empty($_SERVER['SERVER_NAME'])) ? $_SERVER['SERVER_NAME'] : NULL,
      'server_ip' => (!empty($_SERVER['SERVER_ADDR'])) ? $_SERVER['SERVER_ADDR'] : NULL,
    ),
  );
}

/**
 * Apps installer default content callback.
 *
 * Adapted from openenterprise_default_content()
 */
function ucsfp_default_content(&$modules) {
  $files = system_rebuild_module_data();
  foreach($modules as $module) {
    // This assumes a pattern MYMODULE_democontent which is probably not always true. Might be 
    // better to check $_SESSION['apps_manifest'] and check to see if this exists:
    // function_exists($_SESSION['module']['configure form'])
    if (isset($files[$module . '_democontent'])) {
      $modules[] = $module . '_democontent';
    }
  }
}

/**
 * Task handler to set the awesome maintenance theme
 */
function ucsfp_set_theme() {
  $themes = list_themes();
  $theme = $themes['ucsfp_maintenance'];
  _drupal_theme_initialize($theme);
}

/**
 * Form to check to see if Apps support is possible
 */
function ucsfp_apps_check($form, &$form_state) {
  $form = array();

  // Set the title
  drupal_set_title(t('Enable Support for Apps'));

  $form['openingtext'] = array(
    '#markup' => '<p>' . t('Apps uses the same mechanism for installing modules as the update module in core. This depends on certain php extensions to be installed on your server. Below is the documentation for the various methods of installing.') . '</p>',
  );

  // UCSF does not run Pantheon.
  // $form['pantheon'] = array(
  //   '#title' => t('Pantheon'),
  //   '#type' => 'fieldset',
  //   '#description' => theme('image', array('path' => drupal_get_path('profile', 'openacademy') . '/images/enable-apps-pantheon.png')) . t('If you are installing Open Academy on Pantheon, you need to enable "On Server Development" to use apps.<br /><br />After you install your apps, you will need to use the "Commit" button to add them to the version control system.'),
  // );

  $form['ftp'] = array(
    '#title' => t('FTP'),
    '#type' => 'fieldset',
    '#description' => 'In order to install via ftp, you must have the ftp php extension enabled. Most apache2/php installs have this by default which is by it probably shows up on most installs. <br /><br />You may run into a server that doesn\'t have ftp so then you will need to install it or use an alternative method. See <a href="http://us2.php.net/manual/en/book.ftp.php">http://us2.php.net/manual/en/book.ftp.php</a> for how to install the ftp php extension. You will also need an ftp username and password that has rights to write to your site directory on your server. Be aware that FTP is not an encrypted protocol and your credentials will be transmitted in the clear.',
  );

  $form['ssh'] = array(
    '#title' => t('SSH'),
    '#type' => 'fieldset',
    '#description' => 'In order to install via ssh, you must have the ssh2 php extension installed and enabled. This does not come by default with many apache2/php installs so it commonly needs to be added. <br /><br />See <a href="http://us2.php.net/manual/en/book.ssh2.php">http://us2.php.net/manual/en/book.ssh2.php</a> for how to install the ssh2 php extension. You will also need a username and password of a user that can ssh into the server and has write permissions to your site directory on your server.',
  );

  $form['webserver'] = array(
    '#title' => 'Webserver Direct Install',
    '#type' => 'fieldset',
    '#description' => 'In order to install directly to the sites/all/modules directory it needs to be writable. In order to do this go to the root of your drupal install and type <strong>sudo chmod -R 777 sites/all/modules</strong>. Be aware that there are security issues with leaving your site in this state.',
  );

  $form['continue'] = array(
    '#type' => 'submit',
    '#value' => 'Continue',
  );

  return $form;
}
                
/**
 * Form to choose the starting theme from list of available options
 */
function ucsfp_theme_form($form, &$form_state) {

  // Set the page title
  drupal_set_title(t('Choose a theme!'));
  
  $ucsf_themes = array('pharmacyoa');

  // Create list of theme options
  $themes = array();
  foreach(system_rebuild_theme_data() as $theme) {
    if (in_array($theme->name, $ucsf_themes)) {
      $themes[$theme->name] = theme('image', array('path' => $theme->info['screenshot'])) . '<strong>' . $theme->info['name'] . '</strong><br><p><em>' . $theme->info['description'] . '</em></p>';
    }
  }

  $form['theme'] = array(
    '#title' => t('Starting Theme'),
    '#type' => 'radios',
    '#options' => $themes,
    '#default_value' => 'openacademy_default',
  );
  
  $form['actions'] = array(
   '#prefix' => '<div class="form-actions">',
   '#suffix' => '</div>',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Choose theme',
  );

  return $form;
}

/**
 * Form submit handler to select the theme
 */
function ucsfp_theme_form_submit($form, &$form_state) {
  
  // Enable and set the theme of choice
  $theme = $form_state['input']['theme'];
  theme_enable(array($theme));
  variable_set('theme_default', $theme);
 
  // Flush theme caches so things are right
  system_rebuild_theme_data();
  drupal_theme_rebuild();
}

/**
 * Form to choose the starting theme
 */
function ucsfp_theme_configure_form($form, &$form_state) {

  // Set the title
  drupal_set_title(t('Configure theme settings!'));
  
  $theme = variable_get('theme_default');
  ctools_include('system.admin', 'system', '');
  $form = system_theme_settings($form, $form_state, $theme);

  return $form;
}

/**
 * Form to talk about preparing the site for prime time
 */
function ucsfp_prepare($form, &$form_state) {
  
  // Set the title 
  drupal_set_title(t('Prepare Site'));
  
  $form = array();

  $form['openingtext'] = array(
    '#markup' => '<h2>' . t('We now need to do a bit more Drupal magic to get everything setup.') . '</h2>',
  );
  
  $form['actions'] = array(
   '#prefix' => '<div class="form-actions">',
   '#suffix' => '</div>',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Prepare your site',
  );

  return $form;
}

/**
 * Submit form to prepare site for prime time
 */
function ucsfp_prepare_submit($form, &$form_state) {
  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the install profile are registered correctly.
  drupal_flush_all_caches();

  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());

  // Install profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);

  // Run cron to populate update status tables (if available) so that users
  // will be warned if they've installed an out of date Drupal version.
  // Will also trigger indexing of profile-supplied content or feeds.
  drupal_cron_run();
}

/**
 * Form to finish it all out and send us on our way
 */
function ucsfp_finished_yah($form, &$form_state) {
  $form = array();
  
  // Set the title
  drupal_set_title(st('Congratulations!'));
  
  $form['openingtext'] = array(
    '#markup' => '<h2 class="bubble">' . t('Congratulations, your UCSF Pharmacy site is ready!') . '</h2>',
  );
  
  $form['actions'] = array(
   '#prefix' => '<div class="form-actions">',
   '#suffix' => '</div>',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Visit your new site!',
  );

  return $form;
}

/**
 * Submit form to finish it out and send us on our way!
 */
function ucsfp_finished_yah_submit($form, &$form_state) {

  // Allow anonymous and authenticated users to see content
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content'));

  // Once more for good measure
  drupal_flush_all_caches();

  // And away we go
  // $form_state['redirect'] won't work here since we are still in the
  // installer, so use drupal_goto() (for interactive installs only) instead.
  $install_state = $form_state['build_info']['args'][0];
  if ($install_state['interactive']) {
    drupal_goto('<front>');
  }
}

/**
* Helper function to adjust an array and put an element right where we want it. 
*/
function ucsfp_maintenance_array_insert(&$array, $key, $insert_array, $before = FALSE) {
  $done = FALSE;
  foreach ($array as $array_key => $array_val) {
    if (!$before) {
      $new_array[$array_key] = $array_val;
    }
    if ($array_key == $key && !$done) {
      foreach ($insert_array as $insert_array_key => $insert_array_val) {
        $new_array[$insert_array_key] = $insert_array_val;
      }
      $done = TRUE;
    }
    if ($before) {
      $new_array[$array_key] = $array_val;
    }
  }
  if (!$done) {
    $new_array = array_merge($array, $insert_array);
  }
  // Put the new array in the place of the original.
  $array = $new_array;
}
