<?php

/**
 * Spit out the item list
 * 
 * TODO - is this the right way to create this output?
 * EFD- NO, NO IT WAS NEVER RIGHT TO DO WHAT YOU DID
 */
$items = array();
foreach($element as $key => $value) {
  if (is_numeric($key)) {
  	//wrong in 7.x-1.0-rc3 (supposedly updated in dev)
    //$items[] = $value['#markup'];
    //correct way to create this output
    //see: http://drupal.org/node/1970262
    $items[] = render($value);
   }
}
print theme('item_list', array('items' => $items));
