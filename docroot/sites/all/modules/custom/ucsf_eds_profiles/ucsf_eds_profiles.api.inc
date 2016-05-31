<?php
/*
 * Contains all API calls for the ucsf_eds_profiles module
 */

//Docs: http://opendata.profiles.ucsf.edu/json-v1.html
//define("UCSF_EDS_PROFILE_PROFILE_BASE_URL", "http://profiles.ucsf.edu/CustomAPI/v1/JSONProfile.aspx?publications=full&source=ucsf_eds_profiles_drupal7_module&EmployeeID=");
//define("UCSF_EDS_PROFILE_PROFILE_BASE_URL", "http://base.ctsi.ucsf.edu/profiles/json_api_v2_beta/?publications=full&source=ucsf_eds_profiles_drupal7_module&EmployeeID=");
define("UCSF_EDS_PROFILE_PROFILE_BASE_URL", "http://api.profiles.ucsf.edu/json/v2/?publications=full&source=ucsf_eds_profiles_drupal7_module&EmployeeID=");
/**
 * Get LDAP/Profiles data for a given email, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_data($identifier, $quiet = FALSE, $is_form = FALSE) {

  if (is_numeric($identifier)){
    // Get the LDAP data
    if (!$ldap = ucsf_eds_profiles_get_ldap_by_id($identifier, $quiet)) {
      ucsf_eds_profiles_log('LDAP data cannot be located for @identifier.', NULL,
        array('@identifier' => $identifier), 'error', $quiet, $is_form);
      return FALSE;
    }
  }
  else {
    // Get the LDAP data
    if (!$ldap = ucsf_eds_profiles_get_ldap_person($identifier, $quiet)) {
      ucsf_eds_profiles_log('LDAP data cannot be located for @identifier.', NULL,
        array('@identifier' => $identifier), 'error', $quiet, $is_form);
      return FALSE;
    }
  }
  //if mail exists use that as the identifier, or double back
  if (isset($ldap['mail'][0])){
    $ldap['identifier'][0] = $ldap['mail'][0];
  } else {
    $ldap['identifier'][0] = $identifier;
  }

  if (isset($ldap['ucsfeduentryreleasecode'])) {
    //fail if release code != 1
    if ($ldap['ucsfeduentryreleasecode'][0] != 1) {
      //cannot release witout being sure
      ucsf_eds_profiles_log('LDAP entry does not allow release for for @email.', NULL,
        array('@email' => $identifier), 'error', $quiet, $is_form);
      return FALSE;
    }
  }
  else {
    //cannot release witout being sure
    ucsf_eds_profiles_log('LDAP entry release code missing for @email.', NULL,
      array('@email' => $identifier), 'error', $quiet, $is_form);
    return FALSE;
  }

  if (!isset($ldap['ucsfeduprimarydepartmentnumber'][0])) {
    ucsf_eds_profiles_log('LDAP Primary Department Number cannot be located for @email.', NULL,
                          array('@email' => $identifier), 'error', $quiet, $is_form);
    return FALSE;
  }
  $dept_num = $ldap['ucsfeduprimarydepartmentnumber'][0];
  // Get the LDAP Primary Department Number
  if (!$ldap_dept = ucsf_eds_profiles_get_ldap_dept($dept_num, $quiet)) {
    ucsf_eds_profiles_log('LDAP data cannot be located for Department: @dept.', NULL,
                          array('@dept' => $dept_num), 'error', $quiet, $is_form);
    return FALSE;
  }
  if (!isset($ldap_dept['ucsfedudepartmentname'][0])) {
    ucsf_eds_profiles_log('LDAP Name cannot be located for Department: @dept.', NULL,
                          array('@dept' => $dept_num), 'error', $quiet, $is_form);
    return FALSE;
  }
  // Found department name!
  $ldap['ucsfedudepartmentname'][0] = $ldap_dept['ucsfedudepartmentname'][0];
  //keep this because EDS is confusing and makes me cry

  //get rid of the people hack address data
  unset($ldap['postaladdress']);
  //unset($ldap['ucsfedutelephonenumberreleasecode']);
  unset($ldap['postalcode']);
  unset($ldap['telephonenumber']);
  unset($ldap['street']);
  unset($ldap['l']);
  unset($ldap['st']);
  unset($ldap['ucsfeducampusbox']);

  //grab the PP address data
  if ($ldap_ppaddress = ucsf_eds_profiles_get_ldap_address($ldap['uid'][0], 'Private Practice Address', TRUE)) {
    $ldap['privatepracticeaddress'] = $ldap_ppaddress;
    //pretzel logic for EDS phone releases (if there is a PP address it should use the primary release code.. according to Mukesh)
    if (!isset($ldap['privatepracticeaddress']['ucsfedutelephonenumberreleasecode']) && isset($ldap['ucsfedutelephonenumberreleasecode'])){
        $ldap['privatepracticeaddress']['ucsfedutelephonenumberreleasecode'] = $ldap['ucsfedutelephonenumberreleasecode'];
        //don't provide it to other address bewcause we used it
        unset($ldap['ucsfedutelephonenumberreleasecode']);
    }

  }  
  //grab the true address data
  if ($ldap_address = ucsf_eds_profiles_get_ldap_address($ldap['uid'][0], 'Campus Address', TRUE)) {
    // more pretzel logic for release -- if the campus-specific query has a release, use that...
    if (isset($ldap_address['ucsfedutelephonenumberreleasecode'])) {
      unset($ldap['ucsfedutelephonenumberreleasecode']);
    }

    unset($ldap_address['cn']);
    unset($ldap_address['objectclass']);
    $ldap = array_merge($ldap,$ldap_address);
  }

  // If person is faculty get their Profile
  $profile = FALSE;
  if (isset($ldap['edupersonaffiliation'])) {
    if (in_array('faculty', $ldap['edupersonaffiliation'])) {
      //force affiliation to faculty
      $ldap['edupersonprimaryaffiliation'][0] = 'faculty';
      // Check for usfeduidnumber
      if (!isset($ldap['ucsfeduidnumber'][0])) {
        ucsf_eds_profiles_log('ucsfeduidnumber for @email is missing in EDS/LDAP. Please update HR.',
                              'ucsfeduidnumber for @email is missing in EDS/LDAP.',
                              array('@email' => $identifier), 'warning', $quiet, $is_form);
        return FALSE;
      }
      if (!$profile = ucsf_eds_profiles_get_profile($ldap['ucsfeduidnumber'][0], $quiet)) {
        $profilemessage = ucsf_eds_profiles_log('@email not found in UCSF Profiles. A Profile is strongly recommended for Faculty.', NULL, array('@email' => $identifier), 'warning', $quiet, $is_form);
        //return FALSE;
      }
    }
    //Else person is not faculty
    else {
      //make a quiet profiles call.
      if (!$profile = ucsf_eds_profiles_get_profile($ldap['ucsfeduidnumber'][0], TRUE)) {
        ucsf_eds_profiles_log('Profile data cannot be located for @email, skipping.', NULL,
                              array('@email' => $identifier), 'status', $quiet, $is_form);
      }
      /*
      if (!$quiet) {
        drupal_set_message('Profiles ignored for non-Faculty.');
      }
      */
    }
  }

  if (!ucsf_eds_profiles_required_ldap_fields($ldap, $quiet, $is_form)) {
    if ($is_form) {
      form_set_error('email', t('A LDAP field validation error occurred.'));
    }
    return FALSE;
  }
  $ldap['ucsfedsprofilesimportmessages'] = ucsf_eds_profiles_recommended_ldap_fields($ldap, $quiet, $is_form);
  if (isset($profilemessage)) {
    $ldap['ucsfedsprofilesimportmessages'][] = $profilemessage;
  }
  // If the user has a Profile, their keywords must be set.
  //  Actually this causes unexpected problems and does not need to be required (EFD 20130312)
  /*
  if ($profile) {
    if (!isset($profile['Keywords']) || count($profile['Keywords']) == 0) {
      ucsf_eds_profiles_log('Profile Keywords are missing for @email. Please update Profiles.',
                            'Profile Keywords are missing for @email.',
                            array('@email' => $identifier), 'warning', $quiet, $is_form);
      return FALSE;
    }
  }
  */
  
  // All data is available and tests pass, return the requested data.
  return array($ldap, $profile);
}

/*
 * Gets LDAP data for a given email, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_ldap_person($email, $quiet = FALSE) {
  return ucsf_eds_profiles_get_ldap('ou=people,dc=ucsf,dc=edu', 'mail=' . $email, $quiet);
}
/*
 * Gets LDAP data for a given email, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_ldap_by_id($ucid, $quiet = FALSE) {
  return ucsf_eds_profiles_get_ldap('ou=people,dc=ucsf,dc=edu', 'ucsfEduIDNumber=' . $ucid, $quiet);
}

/*
 * Gets LDAP data for a given department number, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_ldap_dept($dept_num, $quiet = FALSE) {
  return ucsf_eds_profiles_get_ldap('ou=departments,dc=ucsf,dc=edu', 'ou=' . $dept_num, $quiet);
}




/*
 * Gets LDAP address for a given ldap uid, $quiet = TRUE suppresses messages
 *
 * $address_type = 'Campus Address' or 'Private Practice Address'
 *
 * should we be aware of ucsfEduAddressPrimaryFlag ?
 */
function ucsf_eds_profiles_get_ldap_address($uid, $address_type ="Campus Address", $quiet = FALSE) {
  return ucsf_eds_profiles_get_ldap('cn=' . $address_type . ',uid=' . $uid . ',ou=people,dc=ucsf,dc=edu', "cn=" . $address_type, $quiet);

}

/*
ldapsearch -x -H ldaps://eds.ucsf.edu:636 -D 'uid=School of Pharmacy Drupal Lookup,ou=applications,dc=ucsf,dc=edu' -W -b "cn=Campus Address,uid=3089,ou=people,dc=ucsf,dc=edu"
*/

/*
 * Runs a LDAP search for a give base_dn and filter, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_ldap($base_dn, $filter, $quiet = FALSE) {

  // Get all enabled enabled servers.
  if (!$ldap_servers = ldap_servers_get_servers(NULL, 'enabled')) {
    ucsf_eds_profiles_log('EDS/LDAP connection error. Please contact an Administrator.',
                          'EDS/LDAP connection error.',
                          array(), 'error', $quiet);
    return FALSE;
  }
  // Get first server.
  $ldap_server = current($ldap_servers);
  // Run a search.
  if (!$results = $ldap_server->search($base_dn, $filter)) {
    ucsf_eds_profiles_log('EDS/LDAP search error. Please contact an Administrator.',
                          'EDS/LDAP search error for !filter.',
                          array('!filter' => $filter), 'warning', $quiet);
    return FALSE;
  }
  // Check for valid result
  if (!isset($results[0])) {
    ucsf_eds_profiles_log('Email address: @email cannot be found in the EDS/LDAP system. Please update HR.',
                          'Email address: @email cannot be found in the EDS/LDAP system.',
                          array('@email' => $identifier), 'warning', $quiet);
    return FALSE;
  }
  // Get the LDAP search result data
  $ldap = $results[0];

  // Clean up the data, remove numbers, and counts
  unset($ldap['count']);
  unset($ldap['dn']);
  foreach ($ldap as $key => &$item) {
    if (is_numeric($key)) {
      unset($ldap[$key]);
    }
    else {
      unset($item['count']);
    }
  }
  return $ldap;
}

/*
 * Gets profiles data for a given ucid, $quiet = TRUE suppresses messages
 */
function ucsf_eds_profiles_get_profile($ucid, $quiet = FALSE) {
  // Perform Profile request
  $profile_request = drupal_http_request(UCSF_EDS_PROFILE_PROFILE_BASE_URL . $ucid);
  if ($profile_request->code != 200) {
    $data = isset($profile_request->data) ? $profile_request->data : 'NULL';
    ucsf_eds_profiles_log('Profile API connection error. Please contact an Administrator.',
                          'Profile API connection error. Code: @code Error: @error Response data: @data',
                          array(
                            '@code' => $profile_request->code,
                            '@error' => $profile_request->error,
                            '@data' => $data,
                          ), 'error', TRUE);
    return FALSE;
  }
  //Decode JSON to Array
  $profile = json_decode($profile_request->data, true);
  if (is_null($profile)) {
    ucsf_eds_profiles_log('Profile API transfer error. Please contact an Administrator.',
                          'Profile API transfer/JSON error. JSON data: @data',
                          array('@data' => $profile_request->data), 'error', $quiet);
    return FALSE;
  }
  if (empty($profile)) {
    ucsf_eds_profiles_log('UCSF Profiles data cannot be located.','UCSF Profiles data cannot be located for UCID: @UCID', array('@UCID' => $UCID), 'warning', TRUE);
    return FALSE;
  }
  // JSON data is invalid.
  if (!isset($profile['Profiles'][0])) {
    ucsf_eds_profiles_log('Profile API transfer error. Please contact an Administrator.',
                          'Profile API transfer/JSON error. JSON data: @data',
                          array('@data' => $profile_request->data), 'error', $quiet);
    return FALSE;
  }
  return $profile['Profiles'][0];
}
