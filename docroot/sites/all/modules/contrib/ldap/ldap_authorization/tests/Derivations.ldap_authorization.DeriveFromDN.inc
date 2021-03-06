<?php
// $Id$

/**
 * @file
 * simpletest authorization configuration
 */

$authorization['drupal_role'] =  array(
  'consumerModule' =>  'ldap_authorization_drupal_role',

  'description' =>  'UIUC AD',
  'status' =>  1,
  'onlyApplyToLdapAuthenticated' =>  1,

  'deriveFromDn' =>  1,
  'deriveFromDnAttr' =>  'ou',

  'mappings' =>  array(
    0 =>  array('Campus Accounts', 'campus accounts'),
    1 =>  array('guest accounts', 'guests'),
    2 =>  array('special guests', 'special guests'),
    3 =>  array('cn=sysadmins,ou=it,dc=ad,dc=myuniveristy,dc=edu', 'sysadmins'),
  ),

  'useMappingsAsFilter' =>  1,

  'synchOnLogon' =>  1,
  'synchManually' =>  1,

  'revokeLdapProvisioned' =>  1,
  'createConsumers' =>  1,
  'regrantLdapProvisioned' =>  1,
);
