<?php
/**
 * Implementation of hook_preprocess_html()
 */
function pharmacyoa_preprocess_html(&$vars) {

  // Extra body classes
  $vars['classes_array'][] = theme_get_setting('subsite') ? 'is-subsite' : 'not-subsite';

}
/**
 * Implementation of hook_preprocess_page()
 */
function pharmacyoa_preprocess_page(&$vars, $hook) {
  // Setup the search box functionality
  $search_box_form                                 = drupal_get_form('search_form');
  $search_box_form['basic']['keys']['#title']      = '';
  $search_box_form['basic']['keys']['#attributes'] = array('placeholder' => 'Search');
  $search_box_form['basic']['submit']['#value']    = t('Go');
  $search_box                                      = drupal_render($search_box_form);
  $vars['search_box']                              = (user_access('search content')) ? $search_box : NULL;

  // Setup the contact information
  $vars['contact_information']['site_name'] = variable_get('site_name');
  $vars['contact_information']['address']   = _filter_autop(theme_get_setting('address'));
  $vars['contact_information']['phone']     = theme_get_setting('phone');
  $vars['contact_information']['fax']       = theme_get_setting('fax');

   // Setup Make a Gift link
  if ($make_a_gift_link = theme_get_setting('make_a_gift_link')) {
    $vars['make_a_gift_link'] = l('Make a Gift', $make_a_gift_link);  
  }
  
  // Setup subsite bool and associated variables if in place. 
  if ($subsite = theme_get_setting('subsite')) {
    $vars['subsite'] = $subsite ? true : false;

    if ($vars['subsite_parent_url'] = theme_get_setting('subsite_parent_url')) {
      $vars['subsite_parent_title'] = l(theme_get_setting('subsite_parent_title'), $vars['subsite_parent_url']);
    } else {
      $vars['subsite_parent_title'] = theme_get_setting('subsite_parent_title');
    }
  }

  // Setup the quote
  $vars['footer_quote'] = theme_get_setting('footer_quote_text');

  // Setup the social links
  $social_links = array();
  if (module_exists('openacademy_news')) {
    #$social_links[] = l('RSS', 'rss.xml', array('attributes' => array('class' => 'rss')));
  }
  if ($twitter_link = theme_get_setting('twitter_link')) {
    $social_links[] = l('Twitter', $twitter_link, array('attributes' => array('class' => 'twitter')) );
  }
  if ($facebook_link = theme_get_setting('facebook_link')) {
    $social_links[] = l('Facebook', $facebook_link, array('attributes' => array('class' => 'facebook')) );
  }
  if ($youtube_link = theme_get_setting('youtube_link')) {
    $social_links[] = l('YouTube', $youtube_link, array('attributes' => array('class' => 'youtube')) );
  }
  $vars['social_links'] = theme('item_list', array('items' => $social_links));

  // Define the university seal 
  if (theme_get_setting('seal_path') && !theme_get_setting('default_seal')) {
    $seal_path = theme_get_setting('seal_path');
    $vars['seal'] = file_create_url($seal_path);
  }
  else {
    $vars['seal'] = '/' . path_to_theme() . '/images/seal.png';
  }


  /* Add a login menu item to the footer */
  if ($vars['user']->uid != 0) {
    $new_links['account-link'] = array(
      'attributes' => array('title' => 'Account link'), 
      'href' => 'user', 
      'title' => 'My Account'
    );
    $new_links['logout-link'] = array(
      'attributes' => array('title' => 'Logout link'), 
      'href' => 'logout', 
      'title' => 'Logout'
    );
  } else {
    $new_links['login-link'] = array(
      'attributes' => array('title' => 'Login link'), 
      'href' => 'user', 
      'title' => 'Login'
    );
  }
  $vars['footer_menu'] = array_merge_recursive($vars['footer_menu'], $new_links);

}

/**
 * Implementation of hook_preprocess_node()
 */
function pharmacyoa_preprocess_node(&$vars, $hook) {

  // Customize the submitted by text
  $vars['date'] = format_date($vars['created'], 'panopoly_day');
  $vars['submitted'] = t('By !username / !datetime', array('!username' => $vars['name'], '!datetime' => $vars['date']));
}





