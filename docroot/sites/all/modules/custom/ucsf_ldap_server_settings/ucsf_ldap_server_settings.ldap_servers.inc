<?php
/**
 * @file
 * ucsf_ldap_server_settings.ldap_servers.inc
 */

/**
 * Implements hook_default_ldap_servers().
 */
function ucsf_ldap_server_settings_default_ldap_servers() {
  $export = array();

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'ucsf';
  $ldap_servers_conf->name = 'UCSF';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'default';
  $ldap_servers_conf->address = 'ldaps://eds.ucsf.edu:636';
  $ldap_servers_conf->port = 636;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->bind_method = TRUE;
  $ldap_servers_conf->binddn = 'uid=School of Pharmacy Drupal Lookup,ou=applications,dc=ucsf,dc=edu';
  $ldap_servers_conf->bindpw = 'kie6Loo&()#';
  $ldap_servers_conf->basedn = array();
  $ldap_servers_conf->user_attr = 'cn';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = '';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->unique_persistent_attr_binary = FALSE;
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = '';
  $ldap_servers_conf->testingDrupalUserDn = '';
  $ldap_servers_conf->groupFunctionalityUnused = FALSE;
  $ldap_servers_conf->group_object_category = '';
  $ldap_servers_conf->groupNested = FALSE;
  $ldap_servers_conf->groupUserMembershipsAttrExists = FALSE;
  $ldap_servers_conf->groupUserMembershipsAttr = '';
  $ldap_servers_conf->groupMembershipsAttr = '';
  $ldap_servers_conf->groupMembershipsAttrMatchingUserAttr = '';
  $ldap_servers_conf->groupDeriveFromDn = FALSE;
  $ldap_servers_conf->groupDeriveFromDnAttr = '';
  $ldap_servers_conf->groupTestGroupDn = '';
  $ldap_servers_conf->groupTestGroupDnWriteable = '';
  $ldap_servers_conf->search_pagination = FALSE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['ucsf'] = $ldap_servers_conf;

  return $export;
}
