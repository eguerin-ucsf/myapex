Notes of config changes made by John Kealy December 20, 2012

1. Copied 1.10 release version of simpleSAML and renamed to simpleSAML
2. Started this README.txt file
3. Moved Sanity Check config from the old install to the new install
4. Altered new authsources.php in the SAML 2.0 Array section (left note and intials)
	4.1  added https://idp-stage.ucsf.edu/idp/shibboleth
	4.2  added
                'privatekey' => 'saml.pem',
                'certificate' => 'saml.crt',
5. Altered new config.php
	5.1 changed auth.adminpassword
	5.2 changed secretsalt
	5.3 changed technical name
	5.4 changed technical contact email
	5.5 added ('class' => 'core:AttributeMap', 'oid2name') in authproc.idp array
	5.6 added Aquia cloud settings to end of file

