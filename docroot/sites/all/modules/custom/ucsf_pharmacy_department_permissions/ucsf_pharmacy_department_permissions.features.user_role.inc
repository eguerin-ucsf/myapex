<?php
/**
 * @file
 * ucsf_pharmacy_department_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ucsf_pharmacy_department_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => '6',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '9',
  );

  // Exported role: administrative user.
  $roles['administrative user'] = array(
    'name' => 'administrative user',
    'weight' => '2',
  );

  return $roles;
}
