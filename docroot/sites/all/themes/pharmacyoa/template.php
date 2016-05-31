<?php
/**
 * Implementation of hook_preprocess_page()
 */
function pharmacyoa_preprocess_page(&$vars, $hook) {
  //  begin - set page type
  // 2013.0410 frankfarm
  // page types
  /*
  Because we have so many different kinds of page types, the variable called page_type simplifies how we determine which page type to render.

  page_type:
    0 = unknown
    1 = School of Pharmacy home page (only pharmacy.ucsf.edu)
    2 = School of Pharmacy secondary page (e.g., pharmacy.ucsf.edu/about)
    3 = Department home page (only pharmchem.ucsf.edu, bts.ucsf.edu, and clinicalpharmacy.ucsf.edu)
    4 = Department secondary page (e.g., pharmchem.ucsf.edu/about, bts.ucsf.edu/about, and clinicalpharmacy.ucsf.edu/about)
    5 = Microsites home page (only pharm.ucsf.edu)
    6 = Lab home page (e.g., pharm.ucsf.edu/desai)
    7 = Lab secondary page (e.g., pharm.ucsf.edu/desai/about or pharm.ucsf.edu/desai/about)
    8 = PharmD home page (only pharmd.ucsf.edu)
    9 = PharmD secondary page (e.g., pharmd.ucsf.edu/about)
   10 = Center/program/project home (e.g., pharm.ucsf.edu/micrositetest)
   11 = Center/program/project secondary page (e.g., pharm.ucsf.edu/micrositetest/pants)
   12 = Lab secondary page, but view-generated, not a basic page (e.g., pharm.ucsf.edu/roy/news)
  */

  // This is the machine name of the current theme
  global $theme_key;
  // It's the front page
  $is_front = drupal_is_front_page();

  //  declare the page type to be unknown
  $vars['page_type'] = 0;

  // $url = parse_url($_SERVER['REQUEST_URI']);
  if ( $theme_key == 'pharmacyoa') {
  // if ( stristr( $_SERVER['SERVER_NAME'] , 'pharmacy.ucsf.edu' ) ) {
    if ($is_front) {
    // if ( $url['path'] == '/' ) { // test for pharmacy.ucsf.edu
      $vars['page_type'] = 1;
      $vars['classes_array'][] = 'is-sop-home';
    } else { // this must be a pharmacy.ucsf.edu secondary page
      $vars['page_type'] = 2;
      $vars['classes_array'][] = 'is-sop-secondary';
    }
  }
  elseif ( $theme_key == 'pharmchem' || $theme_key == 'bts' || $theme_key == 'clinicalpharmacy') {

  /* if (
    stristr( $_SERVER['SERVER_NAME'] , 'pharmchem.ucsf.edu' )
    || stristr( $_SERVER['SERVER_NAME'] , 'bts.ucsf.edu' )
    || stristr( $_SERVER['SERVER_NAME'] , 'clinicalpharmacy.ucsf.edu' ) */

    if ( $is_front ) {
    // if ( $url['path'] == '/' ) { // test for a dept home page
      $vars['page_type'] = 3;
      $vars['classes_array'][] = 'is-dept-home';
    } else { // this must be a dept secondary page
      $vars['page_type'] = 4;
      $vars['classes_array'][] = 'is-dept-secondary';
      $vars['classes_array'][] = 'is-dept-' . $theme_key;
    }
  }
  elseif ( $theme_key == 'labpc' ) {
  // if ( stristr( $_SERVER['SERVER_NAME'] , 'pharm.ucsf.edu' ) ) {
    if ( module_exists('domain') ) {
      $_domain = domain_get_domain();
      $default = domain_default();
      if ($_domain['domain_id'] == $default['domain_id']) {
        $microsite_home = true;
      }
    }
    // $vars['slashcount'] = substr_count( $url['path'] , '/' );
    // if ( $url['path'] == '/' ) { // test for the page at pharm.ucsf.edu
    if ( isset( $microsite_home)) {
      $vars['page_type'] = 5;
      $vars['classes_array'][] = 'is-microsites-home';
    }
    // elseif ( $vars['slashcount'] == 1 ) { // if this is true the page must be a lab home page
    elseif ( $is_front ) {
      $vars['page_type'] = 6;
      $vars['classes_array'][] = 'is-lab-home';
    }
    //elseif ( $vars['slashcount'] > 1 ) { // if this is true the page must be a lab secondary page
    else{
      $vars['page_type'] = 7;
      $vars['classes_array'][] = 'is-lab-secondary';
      //$current_page_view = views_get_page_view();
      //dpm( $current_page_view );
      //dpm( $vars );
    }
  }
  //if ( stristr( $_SERVER['SERVER_NAME'] , 'pharmd.ucsf.edu' ) ) {
  elseif ( $theme_key == 'pharmd' ) {
    //if ( $url['path'] == '/' ) { // test for pharmacy.ucsf.edu
    if ($is_front) {
      $vars['page_type'] = 8;
      $vars['classes_array'][] = 'is-pharmd-home';
    } else { // this must be a pharmacy.ucsf.edu secondary page
      $vars['page_type'] = 9;
      $vars['classes_array'][] = 'is-pharmd-secondary';
    }
  }
  elseif ( $theme_key == 'pharmacymicrosite' || $theme_key == 'pharmacymicrositeonepage' ) {
    //if ( $url['path'] == '/' ) { // test for pharmacy.ucsf.edu
    if ($is_front) {
      $vars['page_type'] = 10;
      $vars['classes_array'][] = 'is-microsite-home';
    } else { // this must be a pharmacy.ucsf.edu secondary page
      $vars['page_type'] = 11;
      $vars['classes_array'][] = 'is-microsite-secondary';
    }
  }
  // end - set page type

  $vars['deptaffiliation'] = 0;
  if ( in_array( $vars['page_type'], array( 6 , 7 , 10 , 11) ) ) {
    $vars['deptaffiliation'] = theme_get_setting('deptaffiliation');
    switch ( $vars['deptaffiliation'] ) {
      case 0:
        $vars['depttitle'] = l(t('Department of Pharmaceutical Chemistry'),'http://pharmchem.ucsf.edu');
        $vars['classes_array'][] = 'is-pharmchem';
        break;
      case 1:
        $vars['depttitle'] = l(t('Department of Bioengineering and Therapeutic Sciences'),'http://bts.ucsf.edu');
        $vars['classes_array'][] = 'is-bts';
        break;
      case 2:
        $vars['depttitle'] = l(t('Department of Clinical Pharmacy'),'http://clinicalpharmacy.ucsf.edu');
        $vars['classes_array'][] = 'is-clinicalpharmacy';
        break;
      case 3:
        $vars['classes_array'][] = 'is-sop';
        $vars['depttitle'] = '';
        break;

      default:
        $vars['depttitle'] = '';
    }
  }

  $vars['parent_name_and_link'] = (
    stristr( $_SERVER['SERVER_NAME'] , 'bts.ucsf.edu' ) || $vars['deptaffiliation'] == 1
    ?
    t('Schools of ') . l(t('Pharmacy'), 'http://pharmacy.ucsf.edu/' ) . t(' and ') . l(t('Medicine'), 'http://medschool.ucsf.edu/?p=1' )
    :
    l(t('School of Pharmacy'), 'http://pharmacy.ucsf.edu/' )
  );

  // add the page type as a class to the #page element
  $vars['classes_array'][] = 'page-type-' . $vars['page_type'];

  // set up $node
  if ( isset($vars['node']) ) {
     $node = $vars['node'];
  }

  // This needs to be refactored...
  // Subtitle for events page
  $vars['subtitle'] = FALSE;
  if (isset($node->type) && $node->type == "openacademy_event") {
    if ( isset($node->field_event_subtitle['und'][0]['safe_value']) && $node->field_event_subtitle['und'][0]['safe_value'] != "" ) {
     $vars['subtitle'] = $node->field_event_subtitle['und'][0]['safe_value'];
    }
  }

  // Check if the user wants this page being viewed to hide title
  if (true) { // add condition later that does.
    $vars['hide_page_title'] = false;
  }

  // Setup the search box functionality
  $search_box_form                                 = drupal_get_form('search_form');
  $search_box_form['basic']['keys']['#title']      = t('Search');
  $search_box_form['basic']['keys']['#title_display']      = 'invisible'; // Toggle label visibilty
  $search_box_form['basic']['keys']['#attributes'] = array('placeholder' => t('search'));
  $search_box_form['basic']['submit']['#value']    = t('Search');
  //empty size causes validation error
  unset($search_box_form['basic']['keys']['#size']);
  //dvm($search_box_form);

  $search_box                                      = drupal_render($search_box_form);
  $vars['search_box']                              = (user_access('search content')) ? $search_box : NULL;
  //dpm($search_box);
  // Setup the contact information
  $vars['contact_information']['site_name'] = variable_get('site_name');
  $vars['contact_information']['address']   = _filter_autop(theme_get_setting('address'));
  $vars['contact_information']['phone']     = theme_get_setting('phone');
  $vars['contact_information']['fax']       = theme_get_setting('fax');

   // Setup Make a Gift link
  if ($make_a_gift_link = theme_get_setting('make_a_gift_link')) {
    $vars['make_a_gift_link'] = l(t('Make a Gift'), $make_a_gift_link);
  }
  else {
    $vars['make_a_gift_link'] = '';
  }

  // Setup the social links
  $social_links = array();
  if (module_exists('openacademy_news')) {
    #$social_links[] = l(t('RSS'), 'rss.xml', array('attributes' => array('class' => 'rss')));
  }
  if ($facebook_link = theme_get_setting('facebook_link')) {
    $social_links[] = l('f', $facebook_link, array('attributes' => array('class' => 'facebook')) );
  }
  if ($youtube_link = theme_get_setting('youtube_link')) {
    $social_links[] = l('y', $youtube_link, array('attributes' => array('class' => 'youtube')) );
  }
  if ($twitter_link = theme_get_setting('twitter_link')) {
    $social_links[] = l('t', $twitter_link, array('attributes' => array('class' => 'twitter')) );
  }
  $vars['social_links'] = theme('item_list', array('items' => $social_links));

  //taken from OA upon exorcism
  $vars['footer_menu'] = menu_navigation_links('menu-footer-menu');

  // Add a login menu item to the footer
  /*
  if ($vars['user']->uid != 0) {
    // commented out for now since the design doesn't call for it
    // but it may be asked for back
    // $new_links['account-link'] = array(
    //   'attributes' => array('title' => 'Account link'),
    //   'href' => 'user',
    //   'title' => 'My Account'
    // );
    $new_links['logout-link'] = array(
      'attributes' => array('title' => t('Logout link')),
      'href' => 'user/logout',
      'title' => t('Log out')
    );
  } else {
    if (module_exists('ucsf_myaccess_settings')  && $_SERVER["AH_SITE_ENVIRONMENT"] == 'prod'){
      $new_links['login-link'] = array(
        'attributes' => array('title' => t('Log in link')),
        'href' => 'saml_login',
        'title' => t('Log in')
      );
    }
    else {
      $new_links['login-link'] = array(
        'attributes' => array('title' => t('Log in link')),
        'href' => 'user',
        'title' => t('Log in')
      );
    }
  }
  if ( isset( $vars['footer_menu'] ) ){
    $vars['footer_menu'] = array_merge_recursive($vars['footer_menu'], $new_links);
  }
  */

  // 2013.0410 frankfarm: in this section we determine what kind of header is required and display it.
  switch ($vars['page_type']) {

    // most of the home pages
    case 1:
    case 3:
    case 5:
    case 8:
      $vars['page_header'] = sprintf( '<h1 id="site-name">%s</h1>' , $vars['site_name'] );
      break;

    // most of the secondary pages
    case 2:
    case 4:
    case 9:
      $vars['page_header'] = sprintf( '<div id="site-name"><a href="%s" rel="home">%s</a></div>' , $vars['front_page'], $vars['site_name'] );
      break;

    // lab sites
    case 6:
    case 7:
      $vars['page_header'] = sprintf( '<div id="parent-2-name">%s</div>' , $vars['depttitle'] );
      break;

    // microsites
    case 10:
    case 11:
      $vars['page_header'] = sprintf( '<div id="parent-2-name">%s</div>' , $vars['depttitle'] );
      break;

    default:
      break;
  }


// if it has term heading it must be a term page, probably maybe
// if (isset($vars['page']['content']['system_main']['term_heading'])){
if (isset($vars['theme_hook_suggestions']) && in_array("page__taxonomy__term", $vars['theme_hook_suggestions'])) {
    //if so set prepent "Tagged: " to the tile
    if (empty($vars['title'])) {
      $vars['title'] = 'Tagged: ' . drupal_get_title();
    } else {
      $vars['title'] = 'Tagged: ' . $vars['title'];
    }
  }
}


/**
 * Implementation of hook_preprocess_node()
 */
function pharmacyoa_preprocess_node(&$vars, $hook) {

  // Customize the submitted by text
  $vars['date'] = format_date($vars['created'], 'panopoly_day');

  $vars['submitted'] = t('By !username / !datetime', array('!username' => $vars['name'], '!datetime' => $vars['date']));

  /**
   *revised by GHall on 3/6/2013, revised to only assign function value to variable if function exist
   *In the Starter kit there are no panels in the home page so function call would not be applicable
   */
  if (function_exists('panels_get_current_page_display')) {
    $panel_display = panels_get_current_page_display();
  }

  if (isset($panel_display) && !empty($panel_display)) {
    if ($panel_display->layout == "micro_layout") {
      # lets pass variables specifically used in this layout
      $vars['theme_hook_suggestions'][] = "micro_layout";
    }
  }
  // 2013.0514 frankfarm: remove Read More link from nodes
  unset($vars['content']['links']['node']['#links']['node-readmore']);

  //teaser-specific preprocess alterations
  if (isset($vars['view_mode']) && $vars['view_mode'] == 'teaser') {
    // News teaser specific
    if (isset($vars['type']) && ($vars['type'] == 'openacademy_news' || $vars['type'] == 'syndicated_news')) {
      $vars['submitted'] = $vars['date'];
    }
  }
}

/**
 * impelentation of template_preprocess_username
 */
function pharmacyoa_preprocess_username(&$vars){
  //news author cleanup = if the calling object looks like news
  if (isset($vars['account']) && property_exists($vars['account'], 'type') && $vars['account']->type == 'openacademy_news'){
    //change to full raw name
    $vars['name'] = check_plain($vars['name_raw']);
    //dont link to the user profile
    //todo: in future add a way to find the ucsf person page, or a view list by author
    unset($vars['link_path']);
  }
}

/**
 * Theme the elements that are created in the AddThis module. This is
 * created with hook_addthis_element.
 */
function pharmacyoa_addthis_element($variables) {
  $element = $variables['addthis_element'];

  // Updated so that it adds the alt tag
  if (!isset($element['#value'])) {
    return '<' . $element['#tag'] . drupal_attributes($element['#attributes']) . " alt=\"AddThis Social\"/>\n";
  }

  $output = '<' . $element['#tag'] . drupal_attributes($element['#attributes']) . '>';
  if (isset($element['#value_prefix'])) {
    $output .= $element['#value_prefix'];
  }
  $output .= $element['#value'];
  if (isset($element['#value_suffix'])) {
    $output .= $element['#value_suffix'];
  }
  $output .= '</' . $element['#tag'] . ">\n";
  return $output;
}

/**
 *
 * implementation of hook_css_alter()
 *
 * here we can change the load order and details of css files.
 *
 * 2013.0430 frankfarm ericdavila
 *
*/
function pharmacyoa_css_alter(&$css) {
  // we need this section because panopoly loads panopaly-images.css in the wrong order. it loads it *after* our own stylesheets, and we need it to come before so that we can override its styles.
  $panopoly_images_css_path = 'sites/all/modules/panopoly/panopoly_images/panopoly-images.css';
  if ( isset( $css[ $panopoly_images_css_path ] ) ){
    $css[$panopoly_images_css_path]['every_page'] = TRUE;
    $css[$panopoly_images_css_path]['weight'] = -0.001;
  }
}


/**
 *
 * implementation of hook_preprocess_file_entity()
 *
 * this cleans up any HTML tags inserted by using tokens in file_entity.
 *
 * 2013.0507 frankfarm ericdavila
 *
*/
function pharmacyoa_preprocess_file_entity(&$variables) {
  if ($variables['type'] == 'image'  && isset($variables['content']['file']['#title'])) {
    $variables['content']['file']['#title'] = strip_tags($variables['content']['file']['#title']);
  }
}

/**
 *
 * 2013.1105 frankfarm ericdavila
 *
 * implementation of hook_menu_link()
 *
 * this resolves a problem in which values for the class attribute in Nice Menus
 * erroneously include space characters after the last character in the string
 * and before the closing double quotation mark. this causes warnings in some
 * validation tools (like Total Validator). this code gets the job done, but
 * there's probably a better way to do this without having theme_menu_link() being
 * called twice.
 *
 * Example:
 *
 * BEFORE
 * <li class="menu-8276 menu-path-taxonomy-term-9181   even  "><a href="/people/faculty" title="faculty">faculty</a></li>
 * <li class="menu-7876 menu-path-taxonomy-term-9171   odd  "><a href="/people/member" title="member">member</a></li>
 * <li class="menu-7871 menu-path-taxonomy-term-9166   even  "><a href="/people/staff" title="staff">staff</a></li>
 * <li class="menu-8286 menu-path-taxonomy-term-10481   odd   last "><a href="/people/student" title="student">student</a></li>
 *
 * AFTER
 * <li class="menu-8276 menu-path-taxonomy-term-9181 even"><a href="/people/faculty" title="faculty">faculty</a></li>
 * <li class="menu-7876 menu-path-taxonomy-term-9171 odd"><a href="/people/member" title="member">member</a></li>
 * <li class="menu-7871 menu-path-taxonomy-term-9166 even"><a href="/people/staff" title="staff">staff</a></li>
 * <li class="menu-8286 menu-path-taxonomy-term-10481 odd last"><a href="/people/student" title="student">student</a></li>
 *
 * TO DO: rewrite so that theme_menu_link() is not called twice.
 *
*/
function pharmacyoa_menu_link(array $variables) {
  if ( isset($variables['element']['#attributes']['class'] )){
    foreach ( $variables['element']['#attributes']['class'] as $index => $class ){
      $variables['element']['#attributes']['class'][$index] = trim( $class );
      if ( empty( $class ) ){
        unset( $variables['element']['#attributes']['class'][$index] );
      }
    }
  }
  $output = theme_menu_link($variables);
  return $output;
}
/**
 * Implementation of hook_form_alter()
 */
function pharmacyoa_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_form' || $form_id == 'search_theme_form') {
    $form['#submit'] = array('pharmacyoa_search_form_submit');
    if (!empty($form['basic']['keys'])) {
      $form['basic']['keys']['#size'] = '';
    }
  }
}

/**
 * Implementation of theme_preprocess_field
 */
function pharmacyoa_preprocess_field(&$variables, $hook){
  //section for taxonomy term reference fields
  if ($variables['element']['#field_type'] == 'taxonomy_term_reference') {
    //if there is more than one item
    if(count($variables['items']) > 1) {
      //append a comma and space to each except the last
      for ($i=0; $i < count($variables['items'])-1; $i++) { 
        if (isset($variables['items'][$i]['#title'])){
          $variables['items'][$i]['#title'].=', ';
        }
      }
    }
  }
  //end term refernce fields
}

/**
 * Custom form submit handler to change redirect state of the form
 */
function pharmacyoa_search_form_submit($form, &$form_state) {
  $keys = trim($form_state['values']['keys']);
  $module = !empty($form_state['values']['module']) ? $form_state['values']['module'] : 'site';
  $module = ($module === 'node') ? 'site' : $module;
  $form_state['redirect'] = array('search/' . $module . '/' . $keys);
}

/**
 * Implementaion of theme_preprocess_HOOK for date_nav_title
 */
function pharmacyoa_preprocess_date_nav_title(&$params){
  //this makes the mini calendar include the year
  //todo: this should be fine on it's own but if more calendars happen, select the view first!
  unset($params['view']->date_info->mini);
}

