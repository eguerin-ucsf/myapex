<?php
//send a plaintext header
error_reporting(0);
header("Content-Type:text/plain");
//deny action defaults to true
$deny = TRUE;

//check if we're running on the acquia production server
if (isset($_SERVER["AH_SITE_ENVIRONMENT"]) && $_SERVER["AH_SITE_ENVIRONMENT"] == 'prod') {
  //break the domain name at . or - 
  $domain_split = preg_split("/\.|-/",$_SERVER['SERVER_NAME']);
  //pull off the first value
  $prefix = array_shift($domain_split);
  //implemented as switch to support future cases (dev stage local protection if needed)
  switch ($prefix) {
  	//if the prefix matches
  	case "preview":
      //exit and remain default deny
  	  break;
  	//the server is prod and not a deny case
  	default:
  	  //don't deny robots
      $deny = FALSE;
  }
}

//serve robots file content based on deny boolean
if ($deny === FALSE) {
  //serve drupal's original robots file
  include_once __DIR__ . "/robots.txt";
} 
else {
  //serve the deny all robots file
  include_once __DIR__ . "/robots.deny.txt";
}