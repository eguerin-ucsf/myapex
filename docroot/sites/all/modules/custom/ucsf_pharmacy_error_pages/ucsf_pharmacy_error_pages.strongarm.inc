<?php
/**
 * @file
 * ucsf_pharmacy_error_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ucsf_pharmacy_error_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403';
  $strongarm->value = '<h1>access denied</h1>
<p>
Unfortunately, the web page you requested is not available to you unless you log in using the link in the footer. Or, if you believe your credentials don\'t have the correct permissions, <a href="///pharmacy.ucsf.edu/about/contact/support">request support</a>.
</p>';
  $export['customerror_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_php';
  $strongarm->value = 0;
  $export['customerror_403_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_theme';
  $strongarm->value = '0';
  $export['customerror_403_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_403_title';
  $strongarm->value = '';
  $export['customerror_403_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404';
  $strongarm->value = '<h1>page not found</h1>
<p>
Unfortunately, the web page you requested is not available. To resolve the problem:
</p>
<h2>Check that your URL is correct</h2>
<p>
Is every slash, colon, and letter correct? If you found the URL in a printed document, check it against what appears on your screen. Also, if someone gave you a URL to this website, ask him or her to verify the URL.
</p>
<h2>Browse from the home page</h2>
<p>
Browse for the information you\'re seeking from the:
</p>
<ul>
<li><a href="/">Home page</a></li>
<li><a href="///pharmacy.ucsf.edu/">UCSF School of Pharmacy home page</a></li>
<li><a href="http://www.ucsf.edu/">UCSF home page</a></li>
</ul>
<h2>Use the search engine</h2>
<p>
To search for web pages containing words that you specify, use the search engine in the top right corner.
</p>
<h2>Request support</h2>
<p>
If you are still unsuccessful, <a href="///pharmacy.ucsf.edu/about/contact/support">request support</a>.
</p>';
  $export['customerror_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_php';
  $strongarm->value = 0;
  $export['customerror_404_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_theme';
  $strongarm->value = '0';
  $export['customerror_404_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_404_title';
  $strongarm->value = '';
  $export['customerror_404_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'customerror_redirect';
  $strongarm->value = '';
  $export['customerror_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'customerror/403';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'customerror/404';
  $export['site_404'] = $strongarm;

  return $export;
}
