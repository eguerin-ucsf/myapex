<?php
/* 
UCID as key, array.
optional array keys:

displayname 	= full name, page title (minus degrees)
sn 				= last name
givenname 		= first name

$name_fixes['1234567'] = array('displayname' => 'Johnny K.R. Kealy', 'sn' => 'Kealy', 'givenname' => 'Johnny');
$name_fixes['UCIDNUMBER'] = array('displayname' => 'FULL', 'sn' => 'LAST', 'givenname' => 'FIRST');

WARNING: Setting a value to '' will EMPTY the field!

NOTE: This replacement system should be used only for correcting spelling, fixing accents, or punctuation changes.  Fields such as ucsfedupreferredgivenname exist to help with nicknames, etc.  CLS/HR should be corrected for any actual spelling or name change problems. INAPPROPRIATELY PLACED OVERRIDES MAY BE ELIMINATED WITHOUT WARNING!
*/
$name_fixes['023924822'] = array('displayname' => 'William DeGrado', 'sn' => 'DeGrado');
//$name_fixes['026185116'] = array('displayname' => 'Esteban González Burchard');