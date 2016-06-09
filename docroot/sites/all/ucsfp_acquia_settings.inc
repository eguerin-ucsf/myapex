<?php
/**
 * Masterful settings for awesome sites
 * On the ucsfp d7 docroot ON acquia
 * Some people might hate this
 * They cry now
 *
 * to load, add to a site's settings.php
 * at the end of settings.php:
 * (The include needs to come before domain access you're a cat)
 *
 * require_once("./sites/all/ucsfp_acquia_settings.inc");
 *
 * opt out of memcache
 * by setting it to true in your settings.php
 * (upstream of this include)
 *
 * opt out of fast 404 completely
 * $conf['ucsfp_fast_404_optout'] = true;
 *
 * opt into 404 path check (i.e. not files only)
 * known to have problems with _access modules, redirect module, others
 *    $conf['fast_404_path_check'] = TRUE;
 *
 * set a custom 404 error page
 *  $conf['fast_404_HTML_error_page'] = './my_page.html';
 */

//only do memcache and newrelic if on acquia
if (isset($_ENV['AH_SITE_ENVIRONMENT'])){

  if (!isset($conf['ucsfp_memcache_optout']) || $conf['ucsfp_memcache_optout'] == FALSE){
  	/**
  	 * Use memcache because not using it is uncool
  	 */
  	  $conf['cache_backends'][] = './sites/all/modules/contrib/memcache/memcache.inc';
  	  $conf['cache_default_class'] = 'MemCacheDrupal';
  	  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

  }
  /**
   * new relic appnamme setting
   */
  if (extension_loaded('newrelic')) {
    $appname = str_replace("preview-", '',str_replace("preview.", '',str_replace("dev.", '',str_replace("stage.", '',str_replace(".ucsf.edu", '', $_SERVER['SERVER_NAME']))))) . "." . $_ENV['AH_SITE_ENVIRONMENT'];
    newrelic_set_appname($appname);
  }

}

//don't do fast 404 if fast404 is opted out
if (!isset($conf['ucsfp_fast_404_optout']) || $conf['ucsfp_fast_404_optout'] == FALSE){

  /**
   * Fast 404 settings:
   *
   * Fast 404 will do two separate types of 404 checking.
   *
   * The first is to check for URLs which appear to be files or images. If Drupal
   * is handling these items, then they were not found in the file system and are
   * a 404.
   *
   * The second is to check whether or not the URL exists in Drupal by checking
   * with the menu router, aliases and redirects. If the page does not exist, we
   * will server a fast 404 error and exit.
   */

  # Load the fast_404.inc file. This is needed if you wish to do extension
  # checking in settings.php.
  include_once('./sites/all/modules/contrib/fast_404/fast_404.inc');

  # Disallowed extensions. Any extension in here will not be served by Drupal and
  # will get a fast 404.
  $conf['fast_404_exts'] = '/[^robots]\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';

  # Allow anonymous users to hit URLs containing 'imagecache' even if the file
  # does not exist. TRUE is default behavior. If you know all imagecache
  # variations are already made set this to FALSE.
  $conf['fast_404_allow_anon_imagecache'] = TRUE;

  # Extension list requiring whitelisting to be activated **If you use this
  # without whitelisting enabled your site will not load!
  //$conf['fast_404_exts'] = '/\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp|php|html?|xml)$/i';

  # Default fast 404 error message.
  $conf['fast_404_html'] = '<html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

  # Don't check path table during bootstrap
  #Originally we wanted this TRUE but causes problems with many modules.  Instead it is now FALSE (as default) but can be turned on -efd
  if (!isset($conf['fast_404_path_check'])){
    $conf['fast_404_path_check'] = FALSE;
  }

  # If enabled, you may add extensions such as xml and php to the
  $conf['fast_404_url_whitelisting'] = FALSE;

  # Array of whitelisted files/urls. Used if whitelisting is set to TRUE.
  $conf['fast_404_whitelist'] = array('index.php', 'rss.xml', 'install.php', 'cron.php', 'update.php', 'xmlrpc.php');

  # Array of whitelisted URL fragment strings that conflict with fast_404.
  $conf['fast_404_string_whitelisting'] = array('cdn/farfuture', '/advagg_');

  # By default we will show a super plain 404, because usually errors like this are shown to browsers who only look at the headers.
  #$conf['fast_404_HTML_error_page'] = './my_page.html';

  # By default the custom 404 page is only loaded for path checking. Load it for all 404s with the below option set to TRUE
  $conf['fast_404_HTML_error_all_paths'] = FALSE;

  # Call the extension checking now. This will skip any logging of 404s.
  fast_404_ext_check();

  # Path checking. USE AT YOUR OWN RISK (only works with MySQL).
  fast_404_path_check();

  /**
   * Authorized file system operations:
   *
   * The Update manager module included with Drupal provides a mechanism for
   * site administrators to securely install missing updates for the site
   * directly through the web user interface by providing either SSH or FTP
   * credentials. This allows the site to update the new files as the user who
   * owns all the Drupal files, instead of as the user the webserver is running
   * as. However, some sites might wish to disable this functionality, and only
   * update the code directly via SSH or FTP themselves. This setting completely
   * disables all functionality related to these authorized file operations.
   *
   * Remove the leading hash signs to disable.
   */
  # $conf['allow_authorize_operations'] = FALSE;
}
