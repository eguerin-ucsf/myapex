<?php

/**
 * @file
 * Configuration file for Drupal's multi-site directory aliasing feature.
 *
 * Drupal searches for an appropriate configuration directory based on the
 * website's hostname and pathname. A detailed description of the rules for
 * discovering the configuration directory can be found in the comment
 * documentation in 'sites/default/default.settings.php'.
 *
 * This file allows you to define a set of aliases that map hostnames and
 * pathnames to configuration directories. These aliases are loaded prior to
 * scanning for directories, and they are exempt from the normal discovery
 * rules. The aliases are defined in an associative array named $sites, which
 * should look similar to the following:
 *
 * $sites = array(
 *   'devexample.com' => 'example.com',
 *   'localhost.example' => 'example.com',
 * );
 *
 * The above array will cause Drupal to look for a directory named
 * "example.com" in the sites directory whenever a request comes from
 * "example.com", "devexample.com", or "localhost/example". That is useful
 * on development servers, where the domain name may not be the same as the
 * domain of the live server. Since Drupal stores file paths into the database
 * (files, system table, etc.) this will ensure the paths are correct while
 * accessed on development servers.
 *
 * To use this file, copy and rename it such that its path plus filename is
 * 'sites/sites.php'. If you don't need to use multi-site directory aliasing,
 * then you can safely ignore this file, and Drupal will ignore it too.
 */

/**
 * Multi-site directory aliasing:
 *
 * Edit the lines below to define directory aliases. Remove the leading hash
 * signs to enable.
 */
# $sites['devexample.com'] = 'example.com';
# $sites['localhost.example'] = 'example.com';

/**
 * Site aliases for ucsf QBC domain subsites
*/
$sites['qbc.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['ccb.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['bmi.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['www.bmi.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['biophysics.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['bioinformatics.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['pspg.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['ipqb.ucsf.edu'] = 'qbcmaster.ucsf.edu';
$sites['dev.qbc.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.ccb.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.bmi.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.www.bmi.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.biophysics.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.bioinformatics.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.pspg.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';
$sites['dev.ipqb.ucsf.edu'] = 'dev.qbcmaster.ucsf.edu';

/**
 * Site aliases for safeopioids.org
*/
$sites['safeopioids.net'] = 'safeopioids.org';
$sites['safeopioids.com'] = 'safeopioids.org';

/**
 * Site alias for ucghiresearchhub.ucsf.edu
 */
$sites['ucgo.org'] = 'ucghiresearchhub.ucsf.edu';

/**
 * Site aliases for jpsandbox
*/
$sites['dev.jpsandbox2.ucsf.edu'] = 'dev.jpsandbox.ucsf.edu';

//$sites['dev.pharmacy.ucsf.edu'] = 'dev.pharm.ucsf.edu';
/**
 * Site aliases for preview-* sites
*/
$sites['preview-pharmacy.ucsf.edu'] = 'pharmacy.ucsf.edu';
$sites['preview-bts.ucsf.edu'] = 'bts.ucsf.edu';
$sites['preview-pharmd.ucsf.edu'] = 'pharmd.ucsf.edu';
$sites['preview-pharmchem.ucsf.edu'] = 'pharmchem.ucsf.edu';
$sites['preview-clinicalpharmacy.ucsf.edu'] = 'clinicalpharmacy.ucsf.edu';
$sites['preview-kidney.ucsf.edu'] = 'kidney.ucsf.edu';

/**
 * Site aliases for preview-* sites
*/
$sites['preview-it.ucsf.edu'] = 'it.ucsf.edu';

/**
 * Site aliases for med ctr pharmacy
*/
$sites['medctrpharm.lvh.me'] = 'medctrpharm.ucsf.edu';
$sites['medctrpharm.ubuntu.empirestaging.com'] = 'medctrpharm.ucsf.edu';


/**
 * Site aliases for Affirmative Action (dev initally)
*/
$sites['dev.discrimination.ucsf.edu'] = 'dev.shpr.ucsf.edu';
$sites['dev.aaeeo.ucsf.edu'] = 'dev.shpr.ucsf.edu';
$sites['dev.aaeo.ucsf.edu'] = 'dev.shpr.ucsf.edu';
$sites['dev.disability.ucsf.edu'] = 'dev.shpr.ucsf.edu';

/**
 * database time out fix suggested by Acquia... added by JK 2013-08-13
*/

$sites['dev.myapex.ucsf.edu'] = 'myapx.ucsf.edu';

if (php_sapi_name() == 'cli') {
  ini_set('max_execution_time','7200');
}


if (!isset($_ENV['AH_SITE_ENVIRONMENT']) && file_exists(__DIR__ . '/local.sites.inc')) {
   require(__DIR__ . '/local.sites.inc');
}

$conf["testString"]="somethign";

