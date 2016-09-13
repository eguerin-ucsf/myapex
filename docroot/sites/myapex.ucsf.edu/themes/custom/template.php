<?php
function myapex_preprocess_page(&$vars, $hook) {
  if (isset($vars['node'])) {
    // If the node type is "blog_madness" the template suggestion will be "page--blog-madness.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__'. $vars['node']->type;
  }
}


function clean_anchor($anchor) {

  //reformat for the anchor tag
  $replace = array('/','\\','@','{','}','=','(',')','*','^','%','$','#','!','~','``','|','[',']','+','_',';',':',"'","\\",'?','&');
  $anchor = str_ireplace($replace, '', strtolower($anchor));
  $anchor = urlencode(str_ireplace(' ', '-', $anchor));

  return $anchor;
}



?>