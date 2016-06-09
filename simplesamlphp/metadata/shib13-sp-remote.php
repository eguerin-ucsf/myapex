<?php
/**
 * SAML 1.1 remote SP metadata for simpleSAMLphp.
 *
 * Changed for UCSF use by John kealy APril 28, 2013
 */
$metadata['https://it.ucsf.edu/simplesaml/module.php/saml/sp/metadata.php/default-sp'] = array (
  'entityid' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/metadata.php/default-sp',
  'contacts' => 
  array (
    0 => 
    array (
      'contactType' => 'technical',
      'givenName' => 'John',
      'surName' => 'Kealy',
      'emailAddress' => 
      array (
        0 => 'john.kealy@ucsf.edu',
      ),
    ),
  ),
  'metadata-set' => 'shib13-sp-remote',
  'AssertionConsumerService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://it.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    2 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    3 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    4 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    5 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    6 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    7 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    8 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://it.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    9 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    10 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    11 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    12 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    13 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://it.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    14 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    15 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://diversity.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    16 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    17 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    18 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    19 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    20 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    21 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    22 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://diversity.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    23 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    24 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    25 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    26 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    27 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://diversity.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    28 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    29 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mrc.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    30 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    31 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    32 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    33 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    34 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    35 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    36 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mrc.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    37 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    38 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    39 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    40 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    41 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://mrc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    42 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    43 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://shpr.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    44 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    45 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    46 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    47 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    48 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    49 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    50 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shpr.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    51 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    52 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    53 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    54 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    55 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://shpr.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    56 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    57 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://lgbt.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    58 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    59 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    60 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    61 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    62 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    63 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    64 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://lgbt.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    65 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    66 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    67 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    68 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    69 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://lgbt.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    70 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    71 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://partnerships.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    72 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    73 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    74 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    75 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    76 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    77 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    78 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://partnerships.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    79 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    80 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    81 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    82 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    83 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://partnerships.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    84 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    85 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://immunology.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    86 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    87 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    88 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    89 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    90 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    91 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    92 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://immunology.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    93 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    94 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    95 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    96 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    97 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://immunology.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    98 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    99 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mphd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    100 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    101 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    102 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    103 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    104 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    105 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    106 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mphd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    107 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    108 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    109 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    110 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    111 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://mphd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    112 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    113 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://mstp.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    114 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    115 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    116 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    117 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    118 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    119 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    120 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mstp.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    121 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    122 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    123 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    124 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    125 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://mstp.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    126 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    127 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    128 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    129 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    130 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    131 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    132 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    133 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    134 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    135 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    136 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    137 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    138 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    139 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    140 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    141 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmchem.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    142 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    143 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    144 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    145 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    146 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    147 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    148 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmchem.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    149 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    150 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    151 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    152 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    153 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    154 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    155 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://clinicalpharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    156 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    157 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    158 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    159 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    160 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    161 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    162 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://clinicalpharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    163 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    164 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    165 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    166 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    167 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    168 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    169 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bts.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    170 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    171 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    172 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    173 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    174 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    175 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    176 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bts.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    177 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    178 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    179 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    180 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    181 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    182 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    183 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    184 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    185 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    186 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    187 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    188 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    189 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    190 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    191 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    192 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    193 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    194 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    195 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://preview-pharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    196 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    197 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmchem.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    198 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    199 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    200 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    201 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    202 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    203 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    204 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmchem.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    205 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    206 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    207 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    208 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    209 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://preview-pharmchem.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    210 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    211 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-clinicalpharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    212 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    213 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    214 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    215 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    216 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    217 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    218 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    219 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    220 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    221 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    222 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    223 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://preview-clinicalpharmacy.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    224 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    225 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-bts.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    226 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    227 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    228 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    229 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    230 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    231 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    232 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-bts.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    233 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    234 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    235 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    236 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    237 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://preview-bts.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    238 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    239 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://preview-pharmd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    240 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    241 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    242 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    243 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    244 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    245 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    246 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    247 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    248 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    249 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    250 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    251 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://preview-pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    252 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    253 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharmd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    254 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    255 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    256 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    257 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    258 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    259 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    260 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmd.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    261 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    262 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    263 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    264 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    265 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pharmd.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    266 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    267 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pharm.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    268 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    269 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    270 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    271 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    272 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    273 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    274 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharm.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    275 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    276 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    277 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    278 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    279 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pharm.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    280 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    281 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://qbc.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    282 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    283 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    284 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    285 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    286 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    287 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    288 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbc.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    289 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    290 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    291 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    292 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    293 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://qbc.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    294 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    295 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://ipqb.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    296 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    297 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    298 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    299 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    300 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    301 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    302 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ipqb.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    303 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    304 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    305 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    306 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    307 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://ipqb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    308 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    309 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://ccb.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    310 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    311 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    312 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    313 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    314 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    315 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    316 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ccb.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    317 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    318 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    319 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    320 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    321 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://ccb.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    322 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    323 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bmi.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    324 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    325 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    326 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    327 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    328 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    329 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    330 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bmi.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    331 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    332 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    333 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    334 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    335 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://bmi.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    336 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    337 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://pspg.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    338 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    339 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    340 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    341 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    342 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    343 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    344 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pspg.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    345 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    346 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    347 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    348 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    349 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pspg.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    350 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    351 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://biophysics.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    352 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    353 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    354 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    355 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    356 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    357 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    358 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://biophysics.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    359 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    360 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    361 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    362 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    363 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://biophysics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    364 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    365 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://bioinformatics.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    366 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    367 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    368 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    369 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    370 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    371 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    372 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bioinformatics.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    373 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    374 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    375 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    376 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    377 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://bioinformatics.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    378 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    379 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://qbcmaster.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    380 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    381 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    382 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    383 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    384 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    385 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    386 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbcmaster.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    387 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    388 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    389 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    390 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    391 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://qbcmaster.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    392 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    393 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'http://www.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    394 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    395 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'http://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    396 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    397 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'http://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    398 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'http://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
    399 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    400 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://www.ucsf.edu:80/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    401 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    402 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    403 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    404 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    405 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://www.ucsf.edu/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIE9DCCA9ygAwIBAgIJAJad6GVxryr4MA0GCSqGSIb3DQEBBQUAMIGsMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEWMBQGA1UEBxMNU2FuIEZyYW5jaXNjbzENMAsGA1UEChMEVUNTRjEoMCYGA1UECxMfSW5mb3JtYXRpb24gVGVjaG5vbG9neSBTZXJ2aWNlczETMBEGA1UEAxMKSm9obiBLZWFseTEiMCAGCSqGSIb3DQEJARYTam9obi5rZWFseUB1Y3NmLmVkdTAeFw0xMjA2MjYyMjU3MzZaFw0yMjA2MjYyMjU3MzZaMIGsMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEWMBQGA1UEBxMNU2FuIEZyYW5jaXNjbzENMAsGA1UEChMEVUNTRjEoMCYGA1UECxMfSW5mb3JtYXRpb24gVGVjaG5vbG9neSBTZXJ2aWNlczETMBEGA1UEAxMKSm9obiBLZWFseTEiMCAGCSqGSIb3DQEJARYTam9obi5rZWFseUB1Y3NmLmVkdTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALHufRgvQdVLkuJOB00xm+uD/lo+hpSU7ZtfTJYENZ039txFvtg2f0pkoEq7v/+U5nCy8qkGKznv3ox0x5H/lbzBwKIA2JpyHZ88RGlFpDqGNT3U1CMZmKRSH7qpEOLjlHEe9GcZRt1EOAS3h4KI83DgNikA+W0vKuThdLDVkDQyUSnfq7HuzddC8OJQd9fi6wvxyy8Ghl/XJoWgFUfOErSVHVG3Vz0Kfka9JxEqPm0FRKUhMqu0MugL11unxIhyCXM5+xcnjMS4v7YChJxI/4tMyo3D4z2pORH04fbif1ARDgkkNyeQoC3RgYHILgd82tOT3Y5+UKOwCu3l5K2ne+0CAwEAAaOCARUwggERMB0GA1UdDgQWBBRks8W3Oc8Ph1L4iEaMKbp1QA95ozCB4QYDVR0jBIHZMIHWgBRks8W3Oc8Ph1L4iEaMKbp1QA95o6GBsqSBrzCBrDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3JuaWExFjAUBgNVBAcTDVNhbiBGcmFuY2lzY28xDTALBgNVBAoTBFVDU0YxKDAmBgNVBAsTH0luZm9ybWF0aW9uIFRlY2hub2xvZ3kgU2VydmljZXMxEzARBgNVBAMTCkpvaG4gS2VhbHkxIjAgBgkqhkiG9w0BCQEWE2pvaG4ua2VhbHlAdWNzZi5lZHWCCQCWnehlca8q+DAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQCdNKLIb8sXLDCLDl2jlIFZoonpb7rmQWCWeMKczUePYdxguZvS+3MYfKsc2MwwHTQMWKAKH33xz60IxJqMEt1fRyr7731/pUQ3UChThBs9Tr4NDc44/GKfzbchyHPjmxcvy9vEzsKMYEM7izK0LP25j3cRJ3zPNAM8WuGcr/o2LZxELCd0pWRfnVDwp9NPfI4Jvw/JhY87AShjUyqpvvxSHm1q6HL9HeXkb6Zl8BS7IZMzUY/9vV9PhNEGNEAlpihuzTQZQNDE0VpBrq2sx2HPZsRAhdLJ2DxqlL28zXaFAbDpCGJH7rZ1N0nETV3hPkJp8ltELpZRkxmAuE5aHd5E',
    ),
    1 => 
    array (
      'encryption' => true,
      'signing' => false,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIE9DCCA9ygAwIBAgIJAJad6GVxryr4MA0GCSqGSIb3DQEBBQUAMIGsMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEWMBQGA1UEBxMNU2FuIEZyYW5jaXNjbzENMAsGA1UEChMEVUNTRjEoMCYGA1UECxMfSW5mb3JtYXRpb24gVGVjaG5vbG9neSBTZXJ2aWNlczETMBEGA1UEAxMKSm9obiBLZWFseTEiMCAGCSqGSIb3DQEJARYTam9obi5rZWFseUB1Y3NmLmVkdTAeFw0xMjA2MjYyMjU3MzZaFw0yMjA2MjYyMjU3MzZaMIGsMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEWMBQGA1UEBxMNU2FuIEZyYW5jaXNjbzENMAsGA1UEChMEVUNTRjEoMCYGA1UECxMfSW5mb3JtYXRpb24gVGVjaG5vbG9neSBTZXJ2aWNlczETMBEGA1UEAxMKSm9obiBLZWFseTEiMCAGCSqGSIb3DQEJARYTam9obi5rZWFseUB1Y3NmLmVkdTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALHufRgvQdVLkuJOB00xm+uD/lo+hpSU7ZtfTJYENZ039txFvtg2f0pkoEq7v/+U5nCy8qkGKznv3ox0x5H/lbzBwKIA2JpyHZ88RGlFpDqGNT3U1CMZmKRSH7qpEOLjlHEe9GcZRt1EOAS3h4KI83DgNikA+W0vKuThdLDVkDQyUSnfq7HuzddC8OJQd9fi6wvxyy8Ghl/XJoWgFUfOErSVHVG3Vz0Kfka9JxEqPm0FRKUhMqu0MugL11unxIhyCXM5+xcnjMS4v7YChJxI/4tMyo3D4z2pORH04fbif1ARDgkkNyeQoC3RgYHILgd82tOT3Y5+UKOwCu3l5K2ne+0CAwEAAaOCARUwggERMB0GA1UdDgQWBBRks8W3Oc8Ph1L4iEaMKbp1QA95ozCB4QYDVR0jBIHZMIHWgBRks8W3Oc8Ph1L4iEaMKbp1QA95o6GBsqSBrzCBrDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3JuaWExFjAUBgNVBAcTDVNhbiBGcmFuY2lzY28xDTALBgNVBAoTBFVDU0YxKDAmBgNVBAsTH0luZm9ybWF0aW9uIFRlY2hub2xvZ3kgU2VydmljZXMxEzARBgNVBAMTCkpvaG4gS2VhbHkxIjAgBgkqhkiG9w0BCQEWE2pvaG4ua2VhbHlAdWNzZi5lZHWCCQCWnehlca8q+DAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQCdNKLIb8sXLDCLDl2jlIFZoonpb7rmQWCWeMKczUePYdxguZvS+3MYfKsc2MwwHTQMWKAKH33xz60IxJqMEt1fRyr7731/pUQ3UChThBs9Tr4NDc44/GKfzbchyHPjmxcvy9vEzsKMYEM7izK0LP25j3cRJ3zPNAM8WuGcr/o2LZxELCd0pWRfnVDwp9NPfI4Jvw/JhY87AShjUyqpvvxSHm1q6HL9HeXkb6Zl8BS7IZMzUY/9vV9PhNEGNEAlpihuzTQZQNDE0VpBrq2sx2HPZsRAhdLJ2DxqlL28zXaFAbDpCGJH7rZ1N0nETV3hPkJp8ltELpZRkxmAuE5aHd5E',
    ),
  ),
);
