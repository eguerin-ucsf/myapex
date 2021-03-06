<?php
// $Id$
/**
 * @file
 * simpltest authentication config
 */

$authentication = array(
    'authenticationMode' => LDAP_AUTHENTICATION_EXCLUSIVE,
    'loginConflictResolve' => LDAP_AUTHENTICATION_CONFLICT_LOG,
    'ldapUserHelpLinkUrl' => '',
    'ldapUserHelpLinkText' => '',
    'emailOption' => LDAP_AUTHENTICATION_EMAIL_FIELD_DISABLE,
    'emailUpdate' => LDAP_AUTHENTICATION_EMAIL_UPDATE_ON_LDAP_CHANGE_DISABLE,
    'allowOnlyIfTextInDn' => NULL,
    'excludeIfTextInDn' => NULL,
    'allowTestPhp' => NULL,
  );
