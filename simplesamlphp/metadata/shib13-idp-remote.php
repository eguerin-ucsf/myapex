<?php
/**
 * MyAccess and UC InCommon IDPs.
 *
 * Generated via the "XML to simpleSAMLphp metadata converter".
 * XML sources:
 *     https://dp.ucsf.edu/idp/shibboleth
 *     http://md.incommon.org/InCommon/InCommon-metadata.xml
 *
 * @link https://gist.github.com/stopfstedt/ef159c79874e3f2249b7
 */

// MyAccess IdP comes first. UCSF #1!
$metadata['https://dp.ucsf.edu/idp/shibboleth'] = array (
  'entityid' => 'https://dp.ucsf.edu/idp/shibboleth',
  'name' =>
    array (
      'en' => 'UC San Francisco',
    ),
  'contacts' =>
    array (
    ),
  'metadata-set' => 'shib13-idp-remote',
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://dp.ucsf.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://dp.ucsf.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://dp.ucsf.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => true,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => 'MIIDFzCCAf+gAwIBAgIUW2hLRYSTq6yflHpRZ5ZBXty14rYwDQYJKoZIhvcNAQEFBQAwFjEUMBIG
A1UEAxMLZHAudWNzZi5lZHUwHhcNMDkwODI5MDQwMzU5WhcNMjkwODI5MDQwMzU5WjAWMRQwEgYD
VQQDEwtkcC51Y3NmLmVkdTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAK+WY9j/fuME
Q2u4mKKeU5LXO+mi7BKKkJP3PUN0Iz4whL/M9uTR+C7x6DCVbi4CXNia8hmoNbWIKCKto9UJT/e+
Y4y+dZjC4TLcIvdUog7x4/3qlcwI76jkomyL5uy2/7Ow+l/pmX99wph+K4/d8EpwE3NTXcFOVv1D
8M3pUrVEfT1aoAm7p4SXS3uohM7KDXTljqtxImt/Q+cRFBImNyp7YTFp37024eMwtNfLJxEajodI
FOCCYP6DmN5I1RWTF808BPPbkt7agjuz50pCdXHxfgnCfUmHeeUz4yLI6cgOWkB9JISN567vAH68
IInM9with782aIsVLf2Fs5pQqxECAwEAAaNdMFswOgYDVR0RBDMwMYILZHAudWNzZi5lZHWGImh0
dHBzOi8vZHAudWNzZi5lZHUvaWRwL3NoaWJib2xldGgwHQYDVR0OBBYEFDfsmZZFJeq4xHogyRDy
+1N69EEKMA0GCSqGSIb3DQEBBQUAA4IBAQBiK5W3RyQc/LL+FOy9mQIFzmobtJCGYUHwn/jMzZ+F
diV688MOA94AHGnxlvjjlVE7sjI83XgUK80IpLWz1QtCN9Pcwo5M0tNCxOFAkIe1xRadZmN4LpFO
enH8vd5TF7DjrozFivFC4+l/mTTW4hfl+RaR34zgrzBAv+fUNrq7cNrid11w0h17HNqD964TR4Qp
hmFyIrFR9skSs+41ScRMa4c7Svel8p4f+ptoATHSlSm0OZayjktgJp4o+Ld8xiH8Q5oLQ/qNG0hx
9IRMaum9h0HCnxwHKsrxcJW2/A/CVhaVlj4Jp/B3Zs13i2Wc6VGZGK1rfVetLqSnvfVPnT+h',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucsf.edu',
    ),
);
// IdPs of other UC campuses.
$metadata['urn:mace:incommon:berkeley.edu'] = array (
  'entityid' => 'urn:mace:incommon:berkeley.edu',
  'name' =>
  array (
    'en' => 'UC Berkeley',
  ),
  'description' =>
  array (
    'en' => 'UC Berkeley',
  ),
  'OrganizationName' =>
  array (
    'en' => 'UC Berkeley',
  ),
  'OrganizationDisplayName' =>
  array (
    'en' => 'UC Berkeley',
  ),
  'url' =>
  array (
    'en' => 'http://www.berkeley.edu/',
  ),
  'OrganizationURL' =>
  array (
    'en' => 'http://www.berkeley.edu/',
  ),
  'contacts' =>
  array (
    0 =>
    array (
      'contactType' => 'technical',
      'givenName' => 'Jeff McCullough',
      'emailAddress' =>
      array (
        0 => 'jeffmc@berkeley.edu',
      ),
    ),
    1 =>
    array (
      'contactType' => 'technical',
      'givenName' => 'Karl Grose',
      'emailAddress' =>
      array (
        0 => 'karlgrose@berkeley.edu',
      ),
    ),
  ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
  array (
    0 =>
    array (
      'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
      'Location' => 'https://shib.berkeley.edu/idp/profile/Shibboleth/SSO',
    ),
    1 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://shib.berkeley.edu/idp/profile/SAML2/POST/SSO',
    ),
    2 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
      'Location' => 'https://shib.berkeley.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
    ),
    3 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://shib.berkeley.edu/idp/profile/SAML2/Redirect/SSO',
    ),
  ),
  'ArtifactResolutionService' =>
  array (
    0 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
      'Location' => 'https://shib.berkeley.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
      'index' => 1,
    ),
    1 =>
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
      'Location' => 'https://shib.berkeley.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
      'index' => 2,
    ),
  ),
  'keys' =>
  array (
    0 =>
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => '
MIIE9DCCA9ygAwIBAgIJAPg8VmRSQ3pCMA0GCSqGSIb3DQEBBQUAMIGsMQswCQYD
VQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTERMA8GA1UEBxMIQmVya2VsZXkx
FDASBgNVBAoTC1VDIEJlcmtlbGV5MRMwEQYDVQQLEwpJU1QtQ2FsbmV0MRowGAYD
VQQDExFzaGliLmJlcmtlbGV5LmVkdTEuMCwGCSqGSIb3DQEJARYfY2FsbmV0LWFk
bWluQGxpc3RzLmJlcmtlbGV5LmVkdTAeFw0xMTA5MDEwNTU1MzRaFw0zMTA5MDEw
NTU1MzRaMIGsMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTERMA8G
A1UEBxMIQmVya2VsZXkxFDASBgNVBAoTC1VDIEJlcmtlbGV5MRMwEQYDVQQLEwpJ
U1QtQ2FsbmV0MRowGAYDVQQDExFzaGliLmJlcmtlbGV5LmVkdTEuMCwGCSqGSIb3
DQEJARYfY2FsbmV0LWFkbWluQGxpc3RzLmJlcmtlbGV5LmVkdTCCASIwDQYJKoZI
hvcNAQEBBQADggEPADCCAQoCggEBAMEPHLk1prO4Trb9nAgtVYWaqpLi1j0d9rbA
X6v+/O8zI9ltKshho/r9EWelfxCnVzL2ufs44n+Mgqovl03IJXYKJluHILHppPUW
tu3FF1D6kD9yXIOqc4vw/GHs5IHEjmm7jWyisNULf9zywjykcswFoBplF4xyhlHA
k79uN3yYEGlOIQnrQfgMrbrrWTjlbZ/bb3QeFBhFnS6yujyDD1GBl2pWQYFjp+TD
JBluvuwCe5F7gehqq7mmCWadpVCE/GT2LEgiCMyJxerVwwLjGC63/YF5pJ2NnZhd
f8g86/GmG3LL/BS4Q1fuZ5A4MBJGT2/iVsGMcmC+/jTzJ3RZC8sCAwEAAaOCARUw
ggERMB0GA1UdDgQWBBRTW0Xhkt2L5j4f8BJ5RmbxtGNQ/TCB4QYDVR0jBIHZMIHW
gBRTW0Xhkt2L5j4f8BJ5RmbxtGNQ/aGBsqSBrzCBrDELMAkGA1UEBhMCVVMxEzAR
BgNVBAgTCkNhbGlmb3JuaWExETAPBgNVBAcTCEJlcmtlbGV5MRQwEgYDVQQKEwtV
QyBCZXJrZWxleTETMBEGA1UECxMKSVNULUNhbG5ldDEaMBgGA1UEAxMRc2hpYi5i
ZXJrZWxleS5lZHUxLjAsBgkqhkiG9w0BCQEWH2NhbG5ldC1hZG1pbkBsaXN0cy5i
ZXJrZWxleS5lZHWCCQD4PFZkUkN6QjAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEB
BQUAA4IBAQBuiTYdJVZE7K20QpIDdRAJb6dQuzaQfz783r3rdk8K4oCEMxclgdIF
Y1kLF0zGKExTuHke5Jn4fPhSDc66273orJwfX8JPRhj0UsD0oJxiZzX1e47udpKO
RrH0qjwpuWVq69aRQdNvg2ReEP0YLFrGE05GlBtM1wVXRy6N4TofybNVj9VvcIWR
j+OKY/1E48QNYKEnxTdKbe5HEzm5Qzh9CwDpnWEEPTYVGXkcZr834c5rfCC9eJFW
DwHJO2iXtfD8CCpYzg2Qm85yQo3LKavIRnDiPFC0SUliC9pyGGrf9Apsxfisx0Um
qL/5vv0Vxy0Ba8FeI9WOTs3mSavQNGQ/
          ',
    ),
  ),
  'scope' =>
  array (
    0 => 'berkeley.edu',
  ),
);
$metadata['urn:mace:incommon:ucop.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucop.edu',
  'name' =>
    array (
      'en' => 'UC Office of the President',
    ),
  'description' =>
    array (
      'en' => 'UC Office of the President',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Office of the President',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Office of the President',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucop.edu/welcome.html',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucop.edu/welcome.html',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'support',
          'givenName' => 'UCOP DataCenter HelpDesk',
          'emailAddress' =>
            array (
              0 => 'ucopdatacenter.helpdesk@ucop.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Munish Malik',
          'emailAddress' =>
            array (
              0 => 'aig@ucop.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Paul Weiss',
          'emailAddress' =>
            array (
              0 => 'Paul.Weiss@ucop.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://ucopidp.ucop.edu/idp/profile/SAML2/POST/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://ucopidp.ucop.edu/idp/profile/Shibboleth/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://ucopidp.ucop.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://ucopidp.ucop.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://ucopidp.ucop.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://ucopidp.ucop.edu/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIDLDCCAhSgAwIBAgIVAMQjUagrFAAc3mU/MM8Y89753FJsMA0GCSqGSIb3DQEB
                            BQUAMBsxGTAXBgNVBAMTEHVjb3BpZHAudWNvcC5lZHUwHhcNMTEwNDE1MjE0NDQy
                            WhcNMzEwNDE1MjE0NDQyWjAbMRkwFwYDVQQDExB1Y29waWRwLnVjb3AuZWR1MIIB
                            IjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA5yWRcAVFF4lApTgaJ6Wiq4HQ
                            cnHxfdZwqWwEeyKGcjhzS3mbaNZAjR37wsnK19npCIunzb966PK8BAXhATX5L7x9
                            0+F8qTDL9NWGB2usN4ftkxDjCbHSzQP8/C1+nLdj0EuyxXxbn5etiVn5ScQ+xMHc
                            Myo+u2+7crKloeUERtgXV9d8wbMZ+5dNeSjIVBq/EldB1xpo1oSQz5LSZoWppjqR
                            j+HDHQNY2rGdyJchd6M5QjtV5/yWZsjhd++9AiD+avAcNkWrF+3Yg5mcRzgHhMtb
                            YHZXtb69hJfO+vwQ655wlgN25pw4H0wLB5/GehMAi82hnL3PGnwvgFDrt2uTIwID
                            AQABo2cwZTBEBgNVHREEPTA7ghB1Y29waWRwLnVjb3AuZWR1hidodHRwczovL3Vj
                            b3BpZHAudWNvcC5lZHUvaWRwL3NoaWJib2xldGgwHQYDVR0OBBYEFOM/H8+UOT/R
                            Dmr2WHQCXELzAZztMA0GCSqGSIb3DQEBBQUAA4IBAQBVzHO+GyiTfvkhMqz29wl5
                            6wLckOvYuilJqru9jXZOCzBzpjnK2YbAKmbmDs2BDT3cJfJDDAxM7bZG69mFf+0h
                            2qIcgCoZd6054kAEe/T9WloBVRWa2AnQlbtkd3YIkmlCpB6jLNUpkgX6PAVPOpBa
                            vEMn/hMWxQb10qaOsGyzp3uXz2aYJgZoEv2qAdVtKpuDSOcPt11A7rwZE4XhVwhb
                            hdYDgZJ0gVCbr3oNhiccN7cf790QxrUdTjDq2qSl47S/SpOOLSLH0vflygsdASlb
                            r5yHRx2chce62RYQtpM9sBEJjMZ9seBMN3J+y29vdvayfD1mo9Ma56VSHLitFJ9N
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucop.edu',
    ),
);
$metadata['urn:mace:incommon:uci.edu'] = array (
  'entityid' => 'urn:mace:incommon:uci.edu',
  'name' =>
    array (
      'en' => 'UC Irvine',
    ),
  'description' =>
    array (
      'en' => 'UC Irvine',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Irvine',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Irvine',
    ),
  'url' =>
    array (
      'en' => 'http://www.uci.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.uci.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Brian Roode',
          'emailAddress' =>
            array (
              0 => 'bgroode@uci.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Chris Peters',
          'emailAddress' =>
            array (
              0 => 'cjpeters@uci.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'support',
          'givenName' => 'OIT Response Center',
          'emailAddress' =>
            array (
              0 => 'oit@uci.edu',
            ),
        ),
      3 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Cliff Chuang',
          'emailAddress' =>
            array (
              0 => 'lchuang1@uci.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://shib.nacs.uci.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://shib.nacs.uci.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://shib.nacs.uci.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://shib.nacs.uci.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://shib.nacs.uci.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://shib.nacs.uci.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIDODCCAiCgAwIBAgIJAO1Yk17FZKi5MA0GCSqGSIb3DQEBBQUAMBwxGjAYBgNV
                            BAMTEXNoaWIubmFjcy51Y2kuZWR1MB4XDTEzMDcyNDA3NTYxOVoXDTE2MDcyMzA3
                            NTYxOVowHDEaMBgGA1UEAxMRc2hpYi5uYWNzLnVjaS5lZHUwggEiMA0GCSqGSIb3
                            DQEBAQUAA4IBDwAwggEKAoIBAQCg9pYLWgF5p/EplyTruFy7hklZv1IHVUQdYk3h
                            kDI4iRl8ILBF9jiu/kjmojk9B88BKmmJIlsgNDDTXAVTzSBwxj/pjXpAkYKQYLu2
                            Dcm6Kh8TS4Fx4M3RjGc9fDK5JG+sVRUU4htTkBPSLEgIPCATbemprFb538HRr8Eg
                            Ve7jRzm+w+xAbxu0em/J4JH9av9+GDL6PyQ1NqrOFWYnUZ499KuztiEVggIwFV/g
                            vd0Hz18IsIN0ApBpt1X1EN6YqunvrWrOBznFNGHncezSG9MxdBZNCtRZn5OIhaph
                            TLsb+vSBrQWVZPdZ0OIfsPeaHoeaBxl2xYWR7M8Wm01DvPq3AgMBAAGjfTB7MB0G
                            A1UdDgQWBBSTqMlmxQq3XpYjILYWxYH4Y/NSRzBMBgNVHSMERTBDgBSTqMlmxQq3
                            XpYjILYWxYH4Y/NSR6EgpB4wHDEaMBgGA1UEAxMRc2hpYi5uYWNzLnVjaS5lZHWC
                            CQDtWJNexWSouTAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQBGIhIN
                            uaSEU3++yhSBynQP/yIRzekCWSPB98Vx7qRFiyyUPNNDUApk+4y/Fx1BcoM7eiGx
                            mMtTre7aRX7G8rs6DtvqQ7vndOUUVIngbOwf8rIrt1I+mviAXn+FLtnIzkIOTOtm
                            7Duvs8V6TVcU/8uQEqtdRRscc6hMjkhZJ1odo7l7p4m9UqLlz/JqcoeqKTR3F8Ix
                            hsP7gGcE2xwe7Mis8qEzSytn6kbkfT7w0ctddiL8J87/rIrsedREN8TFhuhlg8fZ
                            v9aJmWKZeZ+2/K2ANetQpVHeZWel58B1y52d0VKhRA1D3IPmtlVETakAsNeTJ1UH
                            SQUxnEmjRWv0mN8R
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'uci.edu',
    ),
);
$metadata['urn:mace:incommon:ucsd.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucsd.edu',
  'name' =>
    array (
      'en' => 'UC San Diego',
    ),
  'description' =>
    array (
      'en' => 'UC San Diego',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC San Diego',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC San Diego',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucsd.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucsd.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'support',
          'givenName' => 'ACT Help Desk',
          'emailAddress' =>
            array (
              0 => 'acthelp@ucsd.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Shibboleth Support',
          'emailAddress' =>
            array (
              0 => 'shibsupport@ucsd.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://a4.ucsd.edu/tritON/HS',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://a4.ucsd.edu/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 1,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIFjzCCBHegAwIBAgICAQwwDQYJKoZIhvcNAQEFBQAwVjELMAkGA1UEBhMCVVMx
                            HDAaBgNVBAoTE0luQ29tbW9uIEZlZGVyYXRpb24xKTAnBgNVBAMTIEluQ29tbW9u
                            IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MB4XDTA4MDIyODIxMTg0NFoXDTEwMDIy
                            ODIxMTg0NFowFjEUMBIGA1UEAxMLYTQudWNzZC5lZHUwggEiMA0GCSqGSIb3DQEB
                            AQUAA4IBDwAwggEKAoIBAQDcEzH+KYmuGSDjlZeaOJc8VJS0/bRBjfE6HHDV9nN8
                            ghEm5AMS5OPx/ruM+5gchwuryogOMY7abSe3BpvVT/3A+fjKSNnklMPmQUuO6AqW
                            7a6/w9w30tl/2OzG3u1sGAr1FkEXf/DmJOtXpAOhPAmyYb6o41k+ZwpvnRuyaoup
                            IC1R5LLU2jCnnZCxBF6gvDlvmpaEO2c2aHrKJIaqxDuVhTDJRWp+IkcT8Jy4JAwv
                            0R1w8FJXLyZ0RVeNL8v3ZcCzInfxsS1/+FuOOHitZ18WO4Ds5PJ5tEzree95EGe+
                            U9dpjMrJQDdKiqPE18K7cQGuHfVkIMkU4phuyUXWKk09AgMBAAGjggKlMIICoTAO
                            BgNVHQ8BAf8EBAMCBaAwDAYDVR0TAQH/BAIwADAdBgNVHSUEFjAUBggrBgEFBQcD
                            AQYIKwYBBQUHAwIwHQYDVR0OBBYEFPe85gpJxg5DPieEeNZF9FHWbW0rMH4GA1Ud
                            IwR3MHWAFJMtyGEYrWPjm2Wznd2Nk7rnymNFoVqkWDBWMQswCQYDVQQGEwJVUzEc
                            MBoGA1UEChMTSW5Db21tb24gRmVkZXJhdGlvbjEpMCcGA1UEAxMgSW5Db21tb24g
                            Q2VydGlmaWNhdGlvbiBBdXRob3JpdHmCAQAwgboGCCsGAQUFBwEBBIGtMIGqMIGn
                            BggrBgEFBQcwAoaBmmh0dHA6Ly9pbmNvbW1vbmNhMS5pbmNvbW1vbmZlZGVyYXRp
                            b24ub3JnL2JyaWRnZS9jZXJ0cy9jYS1jZXJ0cy5wN2IKCQlDQSBJc3N1ZXJzIC0g
                            VVJJOmh0dHA6Ly9pbmNvbW1vbmNhMi5pbmNvbW1vbmZlZGVyYXRpb24ub3JnL2Jy
                            aWRnZS9jZXJ0cy9jYS1jZXJ0cy5wN2IwgY0GA1UdHwSBhTCBgjA/oD2gO4Y5aHR0
                            cDovL2luY29tbW9uY3JsMS5pbmNvbW1vbmZlZGVyYXRpb24ub3JnL2NybC9lZWNy
                            bHMuY3JsMD+gPaA7hjlodHRwOi8vaW5jb21tb25jcmwyLmluY29tbW9uZmVkZXJh
                            dGlvbi5vcmcvY3JsL2VlY3Jscy5jcmwwXgYDVR0gBFcwVTBTBgsrBgEEAa4jAQQB
                            ATBEMEIGCCsGAQUFBwIBFjZodHRwOi8vaW5jb21tb25jYS5pbmNvbW1vbmZlZGVy
                            YXRpb24ub3JnL3ByYWN0aWNlcy5wZGYwFgYDVR0RBA8wDYILYTQudWNzZC5lZHUw
                            DQYJKoZIhvcNAQEFBQADggEBAJeIDxI87H9yjtD8BLdiwEBsyKiADqL4jo2EeF9Z
                            kz6GA89zEUXaL6M+UeWaHwrpbKbpR7JYb87qJhFYzCBBdLjUpHnvHI1M1/wl44XF
                            /W8PpcuDF5vZmVDxYmKEJQJHnvRqOU08vIvk5bpgcI8ctNXUDWh9uEdtKMrg3+Tk
                            gKCmAXAl9I6SOrnEy98RJ7yWL51qXHaWE5xXl9dTCh43JONZWlsah0smeDYkYhZq
                            7g+zU6RW3i/LigqVYW84V0+WH30htKco5uwr0SGoL9u8PGbYPgrRtCJIo5r8eE7N
                            R1kv+lykb9hrz1KUyDvLTDhWQ7l4bXDaP7/dIpaTrtd0zC4=
                        ',
        ),
      1 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIDJjCCAg6gAwIBAgIJAPn3wXbFGjOZMA0GCSqGSIb3DQEBBQUAMBYxFDASBgNV
                            BAMTC2E0LnVjc2QuZWR1MB4XDTEwMDQwODIyNDcwOVoXDTIwMDQwNTIyNDcwOVow
                            FjEUMBIGA1UEAxMLYTQudWNzZC5lZHUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAw
                            ggEKAoIBAQDUEpd4l0/TgMjGp8nyEA3eyMDB001MZIq/u9wjSNsPFoXGudwyRryf
                            B+yKk4MTX/VqQ6cMZ1oFjP1h1phl5xWG1PZu2vXpjJuHb5X1J4GCK2u7j5mwN6zK
                            /ekTVI4X/0ALe7uPE6ltcKd1XQctZfCe27e+cUdbqz3y16s+RWyUrC2pRK2aJuxm
                            hR7rxMwAcpUYBrINqvoGAz7MIBZ2MNwNlMNK2scGBLsdahBG/JZk0PUYiwRxA1aq
                            YAEeOsuR6jVhudDOAfTK/XtWneUrO0G0C3fCVmX5MGrUCPIY/cVAbuNBLGYDjg1+
                            7iazyImK4nbgXQzBd7QfLayuITY5pludAgMBAAGjdzB1MB0GA1UdDgQWBBTIPcIR
                            7y/+BZAKv3XBLkJsAw0l9DBGBgNVHSMEPzA9gBTIPcIR7y/+BZAKv3XBLkJsAw0l
                            9KEapBgwFjEUMBIGA1UEAxMLYTQudWNzZC5lZHWCCQD598F2xRozmTAMBgNVHRME
                            BTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQAwB9Fwts/0sEse6XtafnaYxoAukZwS
                            CpbUv+LOLgwmFgLCm+eo9kCvbTTS4JZ3Ctz9/yGfRIcNygWsALSeBvpXmNA0gI/V
                            CcsFrrllX1SrpIz5yuwHRZcj1WDDvAzqanvjXGT+2BxmjYS7E25XG+eMC0JlzxLV
                            4PKbKEVZlfBEoRSZ/8wS2MqtZm2COZ21PRBHyfkxopkKpdqImQksx36nvEj4Ow6H
                            ua34fsQvpcou9ufs1WPqLRTD6AVU1ZrGFdFFAOFY8mG6BEDEplp0Jpn8knxtc2Cg
                            Y8R3vksytTmgdqrqYKEpA/CP8EUxyRB3IGOdZ3cJgxabq5X2FBWEFU8y
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucsd.edu',
    ),
);
$metadata['urn:mace:incommon:ucla.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucla.edu',
  'name' =>
    array (
      'en' => 'UC Los Angeles',
    ),
  'description' =>
    array (
      'en' => 'UC Los Angeles',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Los Angeles',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Los Angeles',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucla.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucla.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Albert Wu',
          'emailAddress' =>
            array (
              0 => 'albertwu@ucla.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Datta Sharma',
          'emailAddress' =>
            array (
              0 => 'datta@it.ucla.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'support',
          'givenName' => 'Service Desk',
          'emailAddress' =>
            array (
              0 => 'sdhelp@ais.ucla.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://shb.ais.ucla.edu/shibboleth-idp/profile/SAML2/POST/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://shb.ais.ucla.edu/shibboleth-idp/profile/SAML2/Redirect/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://shb.ais.ucla.edu/shibboleth-idp/profile/Shibboleth/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://shb.ais.ucla.edu:8443/shibboleth-idp/Artifact',
          'index' => 1,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIEUTCCAzmgAwIBAgIJAN9yBVEMv3+OMA0GCSqGSIb3DQEBBQUAMHgxCzAJBgNV
                            BAYTAlVTMRMwEQYDVQQIEwpDYWxpZm9ybmlhMRQwEgYDVQQHEwtMb3MgQW5nZWxl
                            czENMAsGA1UEChMEVUNMQTEUMBIGA1UECxMLSVQgU2VydmljZXMxGTAXBgNVBAMT
                            EHNoYi5haXMudWNsYS5lZHUwHhcNMTMwNDA5MjIyNjE2WhcNMTUwNDA5MjIyNjE2
                            WjB4MQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEUMBIGA1UEBxML
                            TG9zIEFuZ2VsZXMxDTALBgNVBAoTBFVDTEExFDASBgNVBAsTC0lUIFNlcnZpY2Vz
                            MRkwFwYDVQQDExBzaGIuYWlzLnVjbGEuZWR1MIIBIjANBgkqhkiG9w0BAQEFAAOC
                            AQ8AMIIBCgKCAQEAuNBbYnnEsTYpPKGIFBFOkTnxRCmodpMfgGS3JQr3gRxgt8MB
                            +xp1+cvm93gbut6tQSACztN/OLMnC8lgdRg3QZz+N321qbK3q4TzM1tf/ICILLXt
                            hKM/WjSy9Fkt2x7kCGWkMZMfoZAyzsW/i1+7jvKmGH7NhT4WEJVubZqP8ghYYiRF
                            zrvhNZ7xIiiRfQg4ZRDYQpIUbvRz94/hpoLEfom8g+Zh9xwNw4exMIjQZx9pKdVt
                            qCg2f+XG06yAqkkGCXzb8QUCZBweWPom/TqO7eZguSbHbtMSjuCIc/ocdkmD0qCy
                            fgb7jBR96al77DDKa7oJBF2Y9R+PxOHkAhThtwIDAQABo4HdMIHaMB0GA1UdDgQW
                            BBTVtismdhOnGwFAqSueBUY2HUxr+zCBqgYDVR0jBIGiMIGfgBTVtismdhOnGwFA
                            qSueBUY2HUxr+6F8pHoweDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3Ju
                            aWExFDASBgNVBAcTC0xvcyBBbmdlbGVzMQ0wCwYDVQQKEwRVQ0xBMRQwEgYDVQQL
                            EwtJVCBTZXJ2aWNlczEZMBcGA1UEAxMQc2hiLmFpcy51Y2xhLmVkdYIJAN9yBVEM
                            v3+OMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEFBQADggEBAIkVjn3Yh5gjoM6q
                            Q6SA0w4b0EV05OV0AKUbt+hdA0MCwN2M3DWZ1+mn+r5z9EpnHJyKQryB4NEUwa71
                            ZEBMeWCtwpiGxEGie7ASXqF+kgnKM5QIdzlsgp3rIeVYKuhwLyMc88rDu6B2dvG0
                            HG3KtR57YiYCuymxGvquh2fddaH3/a1dkcBHPrNW+hYkmzy8RpS4l/AF3KCKCymh
                            Lzu060OV3DxZK8QXAfmAeE4FY0IRXSAoUXocfBLowjVw9Ax0bIFHMa+Gche+VOZw
                            joEXnqXWzhMZBROIOEapECpB0IdV17OV8juQHVpuSU8V72ZLt8VdEGn0XbSwkw+a
                            KN4OPEQ=
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucla.edu',
    ),
);
$metadata['urn:mace:incommon:ucr.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucr.edu',
  'name' =>
    array (
      'en' => 'UC Riverside',
    ),
  'description' =>
    array (
      'en' => 'UC Riverside',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Riverside',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Riverside',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucr.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucr.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'UCR Shibboleth Administrators',
          'emailAddress' =>
            array (
              0 => 'shibboleth@ucr.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'UCR Shibboleth Administrators',
          'emailAddress' =>
            array (
              0 => 'shibboleth@ucr.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'support',
          'givenName' => 'UCR Helpdesk',
          'emailAddress' =>
            array (
              0 => 'helpdesk@ucr.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://shibboleth.ucr.edu/shibboleth-idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://shibboleth.ucr.edu/shibboleth-idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://shibboleth.ucr.edu/shibboleth-idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://shibboleth.ucr.edu:8443/shibboleth-idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://shibboleth.ucr.edu/shibboleth-idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIF1zCCBL+gAwIBAgICANwwDQYJKoZIhvcNAQEFBQAwVjELMAkGA1UEBhMCVVMx
                            HDAaBgNVBAoTE0luQ29tbW9uIEZlZGVyYXRpb24xKTAnBgNVBAMTIEluQ29tbW9u
                            IENlcnRpZmljYXRpb24gQXV0aG9yaXR5MB4XDTA3MTAzMTIwNTgwOVoXDTA4MTAz
                            MDIwNTgwOVowVzELMAkGA1UEBhMCVVMxKzApBgNVBAoTIlVuaXZlcnNpdHkgb2Yg
                            Q2FsaWZvcm5pYS1SaXZlcnNpZGUxGzAZBgNVBAMTEnNoaWJib2xldGgudWNyLmVk
                            dTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALK8YCXNZ9JU8GCIfhNY
                            JIOV2o6OqPdqfkUNrhFXYokkmR3r9/hkw7FizSqq8ojvyL/n8D03tIudNBsDsz7X
                            J3SE0M/hK4INDpD5qH7kax9CEZoKdyiMrrIyDDzcdGNG99XO+2me24CYQJBUHvdl
                            jytqMiFuf29x/lyLjJFd4OoapZRlfDL8PgKZdjkbis+mvcCUARpgTFaY68iWwOuc
                            RIisVQx6QHvMorqfqJcvfW7a3Ta19nho8uKbB/BSjZ1Cp8ntK4z0qTUZMUCrY1sA
                            wkOFEI2z1mWVNfEgBpEfNrxqWWP8jLkbQFCTNyP6GrWEQSnorDPftg7qMfTOmbyC
                            HkUCAwEAAaOCAqwwggKoMA4GA1UdDwEB/wQEAwIFoDAMBgNVHRMBAf8EAjAAMB0G
                            A1UdJQQWMBQGCCsGAQUFBwMBBggrBgEFBQcDAjAdBgNVHQ4EFgQUdBdr9xbDpybh
                            58J/mSI5cs0bFiswfgYDVR0jBHcwdYAUky3IYRitY+ObZbOd3Y2TuufKY0WhWqRY
                            MFYxCzAJBgNVBAYTAlVTMRwwGgYDVQQKExNJbkNvbW1vbiBGZWRlcmF0aW9uMSkw
                            JwYDVQQDEyBJbkNvbW1vbiBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eYIBADCBugYI
                            KwYBBQUHAQEEga0wgaowgacGCCsGAQUFBzAChoGaaHR0cDovL2luY29tbW9uY2Ex
                            LmluY29tbW9uZmVkZXJhdGlvbi5vcmcvYnJpZGdlL2NlcnRzL2NhLWNlcnRzLnA3
                            YgoJCUNBIElzc3VlcnMgLSBVUkk6aHR0cDovL2luY29tbW9uY2EyLmluY29tbW9u
                            ZmVkZXJhdGlvbi5vcmcvYnJpZGdlL2NlcnRzL2NhLWNlcnRzLnA3YjCBjQYDVR0f
                            BIGFMIGCMD+gPaA7hjlodHRwOi8vaW5jb21tb25jcmwxLmluY29tbW9uZmVkZXJh
                            dGlvbi5vcmcvY3JsL2VlY3Jscy5jcmwwP6A9oDuGOWh0dHA6Ly9pbmNvbW1vbmNy
                            bDIuaW5jb21tb25mZWRlcmF0aW9uLm9yZy9jcmwvZWVjcmxzLmNybDBeBgNVHSAE
                            VzBVMFMGCysGAQQBriMBBAEBMEQwQgYIKwYBBQUHAgEWNmh0dHA6Ly9pbmNvbW1v
                            bmNhLmluY29tbW9uZmVkZXJhdGlvbi5vcmcvcHJhY3RpY2VzLnBkZjAdBgNVHREE
                            FjAUghJzaGliYm9sZXRoLnVjci5lZHUwDQYJKoZIhvcNAQEFBQADggEBAE603Wiq
                            Gj7gmiIQwdc0pPGUnIUBe2fbYFZJxFEb6Kz4KvWbK6T0tfB6jLjkvHIGgxLl1QAo
                            g6bfEqCJ758J4R9ii1N72d2aLq2EMUpNmgEEJe/wORSikEA7fbHfW5zfxPgSvkZK
                            XBTOApeOHyEeZJNC50/ntZpLJjfwRp2amMUVxUeVgkGJHTxkMw5VbLlELjHMW02B
                            uzNRc6klcFcrP07gOu0zdwE07+OI7i+wE0Qls+ysXcCGC+jZJrkbEkTY18jjLvo9
                            wB4mCO1FqOShVABtLQhLpu+imnH2SHGgjViOP/XHfPNymFMOhNDgU9j1qVFDjPzg
                            oKfFUuXOmS1G2Ew=
                        ',
        ),
      1 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIFkzCCBHugAwIBAgIHB8bPY37MQDANBgkqhkiG9w0BAQUFADCByjELMAkGA1UE
                            BhMCVVMxEDAOBgNVBAgTB0FyaXpvbmExEzARBgNVBAcTClNjb3R0c2RhbGUxGjAY
                            BgNVBAoTEUdvRGFkZHkuY29tLCBJbmMuMTMwMQYDVQQLEypodHRwOi8vY2VydGlm
                            aWNhdGVzLmdvZGFkZHkuY29tL3JlcG9zaXRvcnkxMDAuBgNVBAMTJ0dvIERhZGR5
                            IFNlY3VyZSBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0eTERMA8GA1UEBRMIMDc5Njky
                            ODcwHhcNMTIwOTA0MjEwOTA0WhcNMTUwOTE5MjI1NjUxWjCBlDELMAkGA1UEBhMC
                            VVMxCzAJBgNVBAgTAkNBMRIwEAYDVQQHEwlSaXZlcnNpZGUxKzApBgNVBAoTIlVu
                            aXZlcnNpdHkgb2YgQ2FsaWZvcm5pYS1SaXZlcnNpZGUxIzAhBgNVBAsMGkNvbXB1
                            dGluZyAmIENvbW11bmljYXRpb25zMRIwEAYDVQQDDAkqLnVjci5lZHUwggEiMA0G
                            CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCiyuuvGGhHE8NBACe22S7dSYgkkADk
                            2QkV844ukDJHIEVbU/oHaPCO2oQoDt4RVNfrP3hNse0Hd0AVWGh/NHMvDAJY4CRo
                            AynJtWcDan1H3aILXDNCnqocsAxE77YCiPnqCAueTJkSqbjdRhPppOs1tPrDl044
                            9ejsO8IoseA7Qn9mdxd4K26Yr0Ib7R/lAFVlUYG6ivwAR0TBtGeD2PCFVPHHvxVX
                            LTbbVxGhGHDGamHyD/lqyBcWguavvlwNzJQnSmONSkxCVQg+2hYcc8jaPUwe7C0y
                            6RMuZzG/uxAMz9DvpZ6SNTGLkgVDzesIaXfK42hzlPqKN+9flbYY0boBAgMBAAGj
                            ggGwMIIBrDAPBgNVHRMBAf8EBTADAQEAMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggr
                            BgEFBQcDAjAOBgNVHQ8BAf8EBAMCBaAwMwYDVR0fBCwwKjAooCagJIYiaHR0cDov
                            L2NybC5nb2RhZGR5LmNvbS9nZHMyLTE3LmNybDBTBgNVHSAETDBKMEgGC2CGSAGG
                            /W0BBxcCMDkwNwYIKwYBBQUHAgEWK2h0dHA6Ly9jZXJ0aWZpY2F0ZXMuZ29kYWRk
                            eS5jb20vcmVwb3NpdG9yeS8wgYAGCCsGAQUFBwEBBHQwcjAkBggrBgEFBQcwAYYY
                            aHR0cDovL29jc3AuZ29kYWRkeS5jb20vMEoGCCsGAQUFBzAChj5odHRwOi8vY2Vy
                            dGlmaWNhdGVzLmdvZGFkZHkuY29tL3JlcG9zaXRvcnkvZ2RfaW50ZXJtZWRpYXRl
                            LmNydDAfBgNVHSMEGDAWgBT9rGEyk2xF1uLuhV+auud2mWjM5zAdBgNVHREEFjAU
                            ggkqLnVjci5lZHWCB3Vjci5lZHUwHQYDVR0OBBYEFM9FzOPikX7ic75S/Jf+wSp9
                            NwnUMA0GCSqGSIb3DQEBBQUAA4IBAQAxLg8bHFBzayKArIMt3wsPCJKaVoBAYK+V
                            GqH3sYBM3sLUuFnyONm8GXMz1aLqaKqRZtNLMKt2Ot3RdbCfeYhU5nniRD+06xs0
                            5BpvyAvB5MZ8eUdVyeC8Cb0bAriPyOdd0uEOm+V/83VjLciIt/+3vEUgd5Bw+vcX
                            csyYKIaamX+mxRNZViemY17WIeTDRs8tYX5+f9mgKb4IuIaSlOz499F+6bfB55DA
                            z0R6nTHJw4I4UDp8rIl9JMozRSPKAFNjlxyLhYPzL2VemCJF58GvVV67QtHz6vO5
                            NJrEZwJQFlGvcwHAG4X4v+8K5hMKTl5GSilAVPD7gMckO+YLp7LB
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucr.edu',
    ),
);
$metadata['urn:mace:incommon:ucmerced.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucmerced.edu',
  'name' =>
    array (
      'en' => 'UC Merced',
    ),
  'description' =>
    array (
      'en' => 'UC Merced',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Merced',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Merced',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucmerced.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucmerced.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Greg Fellin',
          'emailAddress' =>
            array (
              0 => 'gfellin@ucmerced.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Brian Koehmstedt',
          'emailAddress' =>
            array (
              0 => 'bkoehmstedt@ucmerced.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Faust Gorham',
          'emailAddress' =>
            array (
              0 => 'fgorham@ucmerced.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://shib.ucmerced.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://shib.ucmerced.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://shib.ucmerced.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://shib.ucmerced.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://shib.ucmerced.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://shib.ucmerced.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIEjDCCA3SgAwIBAgIJAOupCdJ2sSXbMA0GCSqGSIb3DQEBBQUAMIGKMQswCQYD
                            VQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEpMCcGA1UEChMgVW5pdmVyc2l0
                            eSBvZiBDYWxpZm9ybmlhLCBNZXJjZWQxHzAdBgNVBAsTFkluZm9ybWF0aW9uIFRl
                            Y2hub2xvZ3kxGjAYBgNVBAMTEXNoaWIudWNtZXJjZWQuZWR1MB4XDTEwMDgyMDIx
                            NTY1MVoXDTM4MDEwNDIxNTY1MVowgYoxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpD
                            YWxpZm9ybmlhMSkwJwYDVQQKEyBVbml2ZXJzaXR5IG9mIENhbGlmb3JuaWEsIE1l
                            cmNlZDEfMB0GA1UECxMWSW5mb3JtYXRpb24gVGVjaG5vbG9neTEaMBgGA1UEAxMR
                            c2hpYi51Y21lcmNlZC5lZHUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
                            AQDfJkuFl7d2fl92r5hV56rYFJW5bHJGGXjmossXjEfaBVYaxnBC5HpWf2LxKhbm
                            ihJt5taV0icxGH8I1Pzc/5vHbWRmAWQPGjv+Zqs3/AbgdG9hwfgDrbFFHfZE7l2n
                            dXhmWrjBu+M9CygbVkzTTMeLQ8HmlGeLJQRAixa85SL4j5ZGNGVK5Gi/NFjyuGL2
                            TDLBVvmPlwLUM1T66QsCz0ceEm4OT1n1V8y+JQ8YR/bJa6CljdNKKCprFnBkVFhk
                            Euybjb2/Mf2D+f0cY5TZntVA5cjWwZPy+3D9MKas/s41B5hZjqFv2mEf1jLYYM6k
                            mv4oKL9kSBgGh9+JH+eES3uJAgMBAAGjgfIwge8wHQYDVR0OBBYEFL0bO2LYqE2L
                            YMpAErrAY6uTagRFMIG/BgNVHSMEgbcwgbSAFL0bO2LYqE2LYMpAErrAY6uTagRF
                            oYGQpIGNMIGKMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEpMCcG
                            A1UEChMgVW5pdmVyc2l0eSBvZiBDYWxpZm9ybmlhLCBNZXJjZWQxHzAdBgNVBAsT
                            FkluZm9ybWF0aW9uIFRlY2hub2xvZ3kxGjAYBgNVBAMTEXNoaWIudWNtZXJjZWQu
                            ZWR1ggkA66kJ0naxJdswDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQUFAAOCAQEA
                            lX6J5Df1EUiDuCwlFyRbmgch54ywFsIvKW/q2VfwH8DQePoQqetsm8frHtnKyBjN
                            EKPwE63XV79n3mTei6kMFdB/e10SPa5vdOc/kzVvy4a2gBEfH+YPerbAiiAllKfW
                            V9lkQ7BGzb8d9guY7ZZvy8BJyNqrcfdcqAETBWYLrJx65UYo4hJZyG/X1JUX3WZ8
                            ff2dPd5C7gboKQO4y76D1uEgwR+XEexamlmpLvREfaZMyN3dbpXCjYmvSayBGUgM
                            I/HsbnejDezNN+Za/qaXjv+9wsXOGgmF3QQlQsbKXcLHb0eHYqaB604kQ6I+6y5X
                            kFhAPTrlZdh9/KLkKhq9QA==
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucmerced.edu',
    ),
);
$metadata['urn:mace:incommon:ucdavis.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucdavis.edu',
  'name' =>
    array (
      'en' => 'UC Davis',
    ),
  'description' =>
    array (
      'en' => 'UC Davis',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Davis',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Davis',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucdavis.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucdavis.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'support',
          'givenName' => 'Infrastructure Systems Management',
          'emailAddress' =>
            array (
              0 => 'sysadmin@ucdavis.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'EAIS Shibboleth Group',
          'emailAddress' =>
            array (
              0 => 'shibadmin@ucdavis.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'EAIS Shibboleth Group',
          'emailAddress' =>
            array (
              0 => 'shibadmin@ucdavis.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://shibboleth.ucdavis.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://shibboleth.ucdavis.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://shibboleth.ucdavis.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://shibboleth.ucdavis.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIDFTCCAf2gAwIBAgIJAPPcLMuZiVH8MA0GCSqGSIb3DQEBBQUAMCExHzAdBgNV
                            BAMMFnNoaWJib2xldGgudWNkYXZpcy5lZHUwHhcNMTMwNDAzMjAxNDE2WhcNMzMw
                            NTAzMjAxNDE2WjAhMR8wHQYDVQQDDBZzaGliYm9sZXRoLnVjZGF2aXMuZWR1MIIB
                            IjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAsp192eOPILgmh31WyOOXSfAe
                            Hy26ZLQPynjO011vO2iN9WfpNnkw10jOYc8n++rmTBt+CPrld6zPm9vyF0YyhFgA
                            3np8nEnsX94rdc/x4bZaVHDo5V0yUW7dqeZ0QpxMMBDLiJu+i5QyHzGORgrfA9vb
                            ditbtIF2yBKVhtwtuAJ4EMMVXMgDrddh3iwuYDIkizb9ro6wyb+g2BYft/rXYzV1
                            Q5y7PJuu7/5tobEELnBPUX96NBtN0xHPRk69BmqIOHb0I3subojQd2mJMHAJZBa3
                            1rVSqMoqDc1XvzRoNAnbFGVkoFsDJ7Pub/Bp9TwpY5M4x20xLereaW3XOU3+dQID
                            AQABo1AwTjAdBgNVHQ4EFgQUgYNUwHp+5Mcj29XUBc82gYlyAGAwHwYDVR0jBBgw
                            FoAUgYNUwHp+5Mcj29XUBc82gYlyAGAwDAYDVR0TBAUwAwEB/zANBgkqhkiG9w0B
                            AQUFAAOCAQEAjx0V9ar1jRCHJQ/iZQ27oHbIOTW+eM0LDO6j9vESk5a+4CvpIJ+F
                            +Wjom1eCaM6Hm1o0ZLcODJRQpJVuWEItoe3vaa3flN5L7KX7txP7/BQrfm6SY+RM
                            4HtVAidvTfycM5nTxWpy84E19u2VU4THdwAWEBGcJUNxlNrgT9ELZpOorx5+g2v7
                            wNQMjfSwPtyOLPTF/1jGkQcTao1ZdejLuVbwTykBVFPeFQ8kAU6wsQpXeG3atpQl
                            zxm9ugFEeQnBFLCckELT9sAV/5yzXtAdSexhyi4+wJ4peM57Kncf/SfdKeMKiyWt
                            EyhVP7yaI/7vtaqct2bie69yO4PiaRMyaQ==
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucdavis.edu',
    ),
  'EntityAttributes' =>
    array (
      'http://macedir.org/entity-category-support' =>
        array (
          0 => 'http://id.incommon.org/category/research-and-scholarship',
        ),
    ),
  'UIInfo' =>
    array (
      'DisplayName' =>
        array (
          'en' => 'UC Davis',
        ),
      'Description' =>
        array (
        ),
      'InformationURL' =>
        array (
        ),
      'PrivacyStatementURL' =>
        array (
        ),
      'Logo' =>
        array (
          0 =>
            array (
              'url' => '
                        https://shibboleth.ucdavis.edu/icons/ucd_logo.png
                    ',
              'height' => 101,
              'width' => 396,
            ),
        ),
    ),
);
// This is essentially the same as the MyAccess IdP listed above.
// No need to list it twice.
// Left in here commented-out for reference.
// [ST 2014/05/02]
/*
$metadata['urn:mace:incommon:ucsf.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucsf.edu',
  'name' =>
    array (
      'en' => 'UC San Francisco',
    ),
  'description' =>
    array (
      'en' => 'UC San Francisco',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC San Francisco',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC San Francisco',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucsf.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucsf.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Kevin Dale',
          'emailAddress' =>
            array (
              0 => 'kevin.dale@ucsf.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Elliot Kendall',
          'emailAddress' =>
            array (
              0 => 'elliot.kendall@ucsf.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://dp.ucsf.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://dp.ucsf.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://dp.ucsf.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://dp.ucsf.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIDFzCCAf+gAwIBAgIUW2hLRYSTq6yflHpRZ5ZBXty14rYwDQYJKoZIhvcNAQEF
                            BQAwFjEUMBIGA1UEAxMLZHAudWNzZi5lZHUwHhcNMDkwODI5MDQwMzU5WhcNMjkw
                            ODI5MDQwMzU5WjAWMRQwEgYDVQQDEwtkcC51Y3NmLmVkdTCCASIwDQYJKoZIhvcN
                            AQEBBQADggEPADCCAQoCggEBAK+WY9j/fuMEQ2u4mKKeU5LXO+mi7BKKkJP3PUN0
                            Iz4whL/M9uTR+C7x6DCVbi4CXNia8hmoNbWIKCKto9UJT/e+Y4y+dZjC4TLcIvdU
                            og7x4/3qlcwI76jkomyL5uy2/7Ow+l/pmX99wph+K4/d8EpwE3NTXcFOVv1D8M3p
                            UrVEfT1aoAm7p4SXS3uohM7KDXTljqtxImt/Q+cRFBImNyp7YTFp37024eMwtNfL
                            JxEajodIFOCCYP6DmN5I1RWTF808BPPbkt7agjuz50pCdXHxfgnCfUmHeeUz4yLI
                            6cgOWkB9JISN567vAH68IInM9with782aIsVLf2Fs5pQqxECAwEAAaNdMFswOgYD
                            VR0RBDMwMYILZHAudWNzZi5lZHWGImh0dHBzOi8vZHAudWNzZi5lZHUvaWRwL3No
                            aWJib2xldGgwHQYDVR0OBBYEFDfsmZZFJeq4xHogyRDy+1N69EEKMA0GCSqGSIb3
                            DQEBBQUAA4IBAQBiK5W3RyQc/LL+FOy9mQIFzmobtJCGYUHwn/jMzZ+FdiV688MO
                            A94AHGnxlvjjlVE7sjI83XgUK80IpLWz1QtCN9Pcwo5M0tNCxOFAkIe1xRadZmN4
                            LpFOenH8vd5TF7DjrozFivFC4+l/mTTW4hfl+RaR34zgrzBAv+fUNrq7cNrid11w
                            0h17HNqD964TR4QphmFyIrFR9skSs+41ScRMa4c7Svel8p4f+ptoATHSlSm0OZay
                            jktgJp4o+Ld8xiH8Q5oLQ/qNG0hx9IRMaum9h0HCnxwHKsrxcJW2/A/CVhaVlj4J
                            p/B3Zs13i2Wc6VGZGK1rfVetLqSnvfVPnT+h
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucsf.edu',
    ),
  'EntityAttributes' =>
    array (
      'http://macedir.org/entity-category-support' =>
        array (
          0 => 'http://id.incommon.org/category/research-and-scholarship',
        ),
    ),
);
*/
$metadata['urn:mace:incommon:ucsc.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucsc.edu',
  'name' =>
    array (
      'en' => 'UC Santa Cruz',
    ),
  'description' =>
    array (
      'en' => 'UC Santa Cruz',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Santa Cruz',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Santa Cruz',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucsc.edu',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucsc.edu',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Jeffrey Crawford',
          'emailAddress' =>
            array (
              0 => 'jeffreyc@ucsc.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'support',
          'givenName' => 'UCSC Support Center',
          'emailAddress' =>
            array (
              0 => 'help@ucsc.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'John Bartlett',
          'emailAddress' =>
            array (
              0 => 'bartlett@ucsc.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://login.ucsc.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://login.ucsc.edu/idp/profile/SAML2/POST/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://login.ucsc.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://login.ucsc.edu/idp/profile/SAML2/Redirect/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://login.ucsc.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://login.ucsc.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIEhTCCA22gAwIBAgIBADANBgkqhkiG9w0BAQUFADCBjTELMAkGA1UEBhMCVVMx
                            EzARBgNVBAgTCkNhbGlmb3JuaWExEzARBgNVBAcTClNhbnRhIENydXoxLTArBgNV
                            BAoTJFVuaXZlcnNpdHkgb2YgQ2FsaWZvcm5pYSwgU2FudGEgQ3J1ejEMMAoGA1UE
                            CxMDSVRTMRcwFQYDVQQDEw5sb2dpbi51Y3NjLmVkdTAeFw0xMDExMzAxNzI4MTBa
                            Fw0xNTExMjkxNzI4MTBaMIGNMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZv
                            cm5pYTETMBEGA1UEBxMKU2FudGEgQ3J1ejEtMCsGA1UEChMkVW5pdmVyc2l0eSBv
                            ZiBDYWxpZm9ybmlhLCBTYW50YSBDcnV6MQwwCgYDVQQLEwNJVFMxFzAVBgNVBAMT
                            DmxvZ2luLnVjc2MuZWR1MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA
                            +EvXogDySR+Ue3QdUNMCmiZKFJwY/ssWfImrb7HmrqNFtvK+RZ/iaUk61uv+EKGg
                            ovE66IgQkl/X0oz7i/RkJlDWce4PhJlJ478ZUv0rA30BW29nTZZfT926kNukxlnN
                            bVLCWfG1eVV5wvZOaCWTzClxLRs3Da/ye2BfFvnaAI0xPk2+f5mZ+XLKvUD/e7cA
                            /PFrX6AUQ9J2hssjUZE2KYjIst8So+shiRQdcCcIr8tG+O4SapMlnhQQsTWUNJiz
                            4eJmzjcjy7hsz+uqQP6nxMyDYQsmVIUINnPiT6in4WgBn82EkqU0PBgr0rKJVIQQ
                            DinIWFwVROPzTkw3qu3J5wIDAQABo4HtMIHqMB0GA1UdDgQWBBQYh+8P6YBPEGqR
                            vsFZCYL4RTAE7DCBugYDVR0jBIGyMIGvgBQYh+8P6YBPEGqRvsFZCYL4RTAE7KGB
                            k6SBkDCBjTELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3JuaWExEzARBgNV
                            BAcTClNhbnRhIENydXoxLTArBgNVBAoTJFVuaXZlcnNpdHkgb2YgQ2FsaWZvcm5p
                            YSwgU2FudGEgQ3J1ejEMMAoGA1UECxMDSVRTMRcwFQYDVQQDEw5sb2dpbi51Y3Nj
                            LmVkdYIBADAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQAhY3T2imQZ
                            o9YqfC0eJJPIQFnMXSgeKBNiIZWG1eBJcZLbLQ3zbmvwNmaUBt+rkjNGjzrEaVkI
                            zPJfVRmW1E5oFKc1xjW8LxNvCgh7QCCFFqq2dVD1fZCfDYRiDcIWSnJZ+4tUjVco
                            Lh0sZShx1vsKzhSZ7ZdeAEh/RXfhDtS1RDmUxyRKFRznW+wyYB33K4j9lllR9wCU
                            kgqrF+iWn6GPa5SeVdgBzaHV9vH2Wxy+mm2X0o2CKLbXweSmU9UVex44bcq2CCNi
                            kUI95P/3oKya5oagwSgrm3VcjYoo0NdH8fkd7TmquBGXr7afpD2gclZ/Mh8sbRFZ
                            ZkyBB6hxis5f
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucsc.edu',
    ),
);
$metadata['urn:mace:incommon:ucsb.edu'] = array (
  'entityid' => 'urn:mace:incommon:ucsb.edu',
  'name' =>
    array (
      'en' => 'UC Santa Barbara',
    ),
  'description' =>
    array (
      'en' => 'UC Santa Barbara',
    ),
  'OrganizationName' =>
    array (
      'en' => 'UC Santa Barbara',
    ),
  'OrganizationDisplayName' =>
    array (
      'en' => 'UC Santa Barbara',
    ),
  'url' =>
    array (
      'en' => 'http://www.ucsb.edu/',
    ),
  'OrganizationURL' =>
    array (
      'en' => 'http://www.ucsb.edu/',
    ),
  'contacts' =>
    array (
      0 =>
        array (
          'contactType' => 'administrative',
          'givenName' => 'Matthew Dunham',
          'emailAddress' =>
            array (
              0 => 'matthew.dunham@ucsb.edu',
            ),
        ),
      1 =>
        array (
          'contactType' => 'technical',
          'givenName' => 'Identity Services Operations',
          'emailAddress' =>
            array (
              0 => 'sysadmin@identity.ucsb.edu',
            ),
        ),
      2 =>
        array (
          'contactType' => 'support',
          'givenName' => 'Identity Service Support',
          'emailAddress' =>
            array (
              0 => 'help@identity.ucsb.edu',
            ),
        ),
    ),
  'metadata-set' => 'shib13-idp-remote',
  //'expire' => 1400148000,
  'SingleSignOnService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
          'Location' => 'https://passport.identity.ucsb.edu/idp/profile/Shibboleth/SSO',
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
          'Location' => 'https://passport.identity.ucsb.edu/idp/profile/SAML2/Redirect/SSO',
        ),
      2 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
          'Location' => 'https://passport.identity.ucsb.edu/idp/profile/SAML2/POST/SSO',
        ),
      3 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
          'Location' => 'https://passport.identity.ucsb.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
        ),
    ),
  'ArtifactResolutionService' =>
    array (
      0 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
          'Location' => 'https://passport.identity.ucsb.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
          'index' => 1,
        ),
      1 =>
        array (
          'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
          'Location' => 'https://passport.identity.ucsb.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
          'index' => 2,
        ),
    ),
  'keys' =>
    array (
      0 =>
        array (
          'encryption' => false,
          'signing' => true,
          'type' => 'X509Certificate',
          'X509Certificate' => '
                            MIIEwzCCA6ugAwIBAgIJALXsPc8MIWgFMA0GCSqGSIb3DQEBBQUAMIHlMQswCQYD
                            VQQGEwJVUzETMBEGA1UECBMKQ2FsaWZvcm5pYTEWMBQGA1UEBxMNU2FudGEgQmFy
                            YmFyYTEwMC4GA1UEChMnVW5pdmVyc2l0eSBvZiBDYWxpZm9ybmlhLCBTYW50YSBC
                            YXJiYXJhMScwJQYDVQQLEx5FbnRlcnByaXNlIFRlY2hub2xvZ3kgU2VydmljZXMx
                            IzAhBgNVBAMTGnBhc3Nwb3J0LmlkZW50aXR5LnVjc2IuZWR1MSkwJwYJKoZIhvcN
                            AQkBFhpzeXNhZG1pbkBpZGVudGl0eS51Y3NiLmVkdTAeFw0xNDAzMTcyMzM4NDFa
                            Fw0zNDAzMTcyMzM4NDFaMIHlMQswCQYDVQQGEwJVUzETMBEGA1UECBMKQ2FsaWZv
                            cm5pYTEWMBQGA1UEBxMNU2FudGEgQmFyYmFyYTEwMC4GA1UEChMnVW5pdmVyc2l0
                            eSBvZiBDYWxpZm9ybmlhLCBTYW50YSBCYXJiYXJhMScwJQYDVQQLEx5FbnRlcnBy
                            aXNlIFRlY2hub2xvZ3kgU2VydmljZXMxIzAhBgNVBAMTGnBhc3Nwb3J0LmlkZW50
                            aXR5LnVjc2IuZWR1MSkwJwYJKoZIhvcNAQkBFhpzeXNhZG1pbkBpZGVudGl0eS51
                            Y3NiLmVkdTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAJs7aac3RDir
                            o1na35ngbZ6ANQ0bY8GigpXb7UfKDqQ8lpSVEqJm6LPbmhstiPQ1MopFM2x25A4T
                            jRPgNEChb4GWMbblRZkF/bBDFNykLgxgcS5+IRu8lQRME5karb3VFNZhhFic8X6s
                            fQd+k0Z1DbVw/cLP3kzgcVu24dBAynWhN0Heuu5x1OUeNiE19mxxKjfLZqvCjLd6
                            wyp1P+5huidqT8Svx5pG0j19zHTRrlFU7t/gCVgGNgfE6aaA+YcryOkfwdVKS1RS
                            XbcwBSvCch366OUEdE1oU5L7hkB5EQMCRgCcnS8J9m1Nlw6VvmPN/1r9Il1nK0Km
                            VVCPELTliIUCAwEAAaN0MHIwCQYDVR0TBAIwADALBgNVHQ8EBAMCBeAwWAYDVR0R
                            BFEwT4IacGFzc3BvcnQuaWRlbnRpdHkudWNzYi5lZHWGMWh0dHBzOi8vcGFzc3Bv
                            cnQuaWRlbnRpdHkudWNzYi5lZHUvaWRwL3NoaWJib2xldGgwDQYJKoZIhvcNAQEF
                            BQADggEBAHhc3LxPiz0Aw+0mhWbIBFCT9BxRc2//mDbaC/2bFKCeHL3ffd3ND3Ad
                            EB7sme6ApKgzcT6m29dTHGc0FLWAfn+vQEOLZFhdxYlKEwo6luLuR/urktY1YVZm
                            vV/kS9sFxlQJAAA01oZIOP5vryMW0g6+2cCC3GQDJFr4B4MJ0b+2Ubvzogjh6O2U
                            WfybDi2fQ7QNKkIkh4yGi58Ole9wS7V8p1tchlKFCGiApnyeYj7Cy0MjuSC64FUj
                            Ls6JGZp/+BoiS9inWJItj8ZjPY7cGaN1TD5hzeNxfThwJAenGSJS0nr3B4wh+5kb
                            KFf7dOk/JbGUoqizayuf7Ucaf5A5MzI=
                        ',
        ),
    ),
  'scope' =>
    array (
      0 => 'ucsb.edu',
    ),
  'UIInfo' =>
    array (
      'DisplayName' =>
        array (
          'en' => 'UC Santa Barbara',
        ),
      'Description' =>
        array (
          'en' => 'UCSB is a public research university within the University of
                        California system. It is located on the California coast about 100 miles northwest of Los
                        Angeles.',
        ),
      'InformationURL' =>
        array (
          'en' => 'http://www.ucsb.edu/campus/index.shtml',
        ),
      'PrivacyStatementURL' =>
        array (
          'en' => 'http://www.ucsb.edu/policies/index.shtml',
        ),
    ),
);
// KLUDGE!
// Ignore MyAccess dev and stage instances in the production environment.
// [ST 2014/05/02]
if ('prod' !== $_ENV['AH_SITE_ENVIRONMENT']) {
  $metadata['https://idp-stage.ucsf.edu/idp/shibboleth'] = array (
    'entityid' => 'https://idp-stage.ucsf.edu/idp/shibboleth',
    'name' =>
      array (
        'en' => 'MyAccess (Stage)',
      ),
    'contacts' =>
      array (
      ),
    'metadata-set' => 'shib13-idp-remote',
    'SingleSignOnService' =>
      array (
        0 =>
          array (
            'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
            'Location' => 'https://idp-stage.ucsf.edu/idp/profile/Shibboleth/SSO',
          ),
        1 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
            'Location' => 'https://idp-stage.ucsf.edu/idp/profile/SAML2/POST/SSO',
          ),
        2 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
            'Location' => 'https://idp-stage.ucsf.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
          ),
        3 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
            'Location' => 'https://idp-stage.ucsf.edu/idp/profile/SAML2/Redirect/SSO',
          ),
      ),
    'ArtifactResolutionService' =>
      array (
        0 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
            'Location' => 'https://idp-stage.ucsf.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
            'index' => 1,
          ),
        1 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
            'Location' => 'https://idp-stage.ucsf.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
            'index' => 2,
          ),
      ),
    'keys' =>
      array (
        0 =>
          array (
            'encryption' => true,
            'signing' => true,
            'type' => 'X509Certificate',
            'X509Certificate' => 'MIICSTCCAbKgAwIBAgIES6G0XDANBgkqhkiG9w0BAQUFADBpMQswCQYDVQQGEwJVUzELMAkGA1UE
                          CBMCQ0ExFjAUBgNVBAcTDVNhbiBGcmFuY2lzY28xDTALBgNVBAoTBFVDU0YxDjAMBgNVBAsTBU9B
                          QUlTMRYwFAYDVQQDEw1kNW4xLnVjc2YuZWR1MB4XDTEwMDMxODA1MDQyOFoXDTIwMDMxNTA1MDQy
                          OFowaTELMAkGA1UEBhMCVVMxCzAJBgNVBAgTAkNBMRYwFAYDVQQHEw1TYW4gRnJhbmNpc2NvMQ0w
                          CwYDVQQKEwRVQ1NGMQ4wDAYDVQQLEwVPQUFJUzEWMBQGA1UEAxMNZDVuMS51Y3NmLmVkdTCBnzAN
                          BgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAsOc8xqTk6GD3WIaw/qheJ+YTXWTKdt831hxcnSenjRg1
                          PwnXmfIOmO/sACyGUF3UWJiaboHZZTxVCsVziTB8y6g3fI88yE2hudJDRKEL90m9l3m/LKmWN6MZ
                          WiEnd5GvpfDU497hJkC3hemG7Vwq0Ui/1vSx9lFmQ7585yQAQQMCAwEAATANBgkqhkiG9w0BAQUF
                          AAOBgQA2aFehGkLM7C9xDWBmwqS2HdbMeYnmItkl7ye8bNjuNB6G80wAtER8KcPwEHElHThbMM0J
                          KBCPTzogMRseLFGsHKP1msFkZe1rYcwKt5Nkrkp6A5rLqxrioCvc+vNwod+R99RZz2gCZPJvaqM0
                          5WaQ9pcTT6yB31fqqd2xrLFEjA==',
          ),
        1 =>
          array (
            'encryption' => true,
            'signing' => true,
            'type' => 'X509Certificate',
            'X509Certificate' => 'MIIDvTCCAqWgAwIBAgIJAKIRmuYzjT8GMA0GCSqGSIb3DQEBBQUAMHQxCzAJBgNV
                          BAYTAlVTMRMwEQYDVQQIDApDYWxpZm9ybmlhMRYwFAYDVQQHDA1TYW4gRnJhbmNp
                          c2NvMQ0wCwYDVQQKDARVQ1NGMQwwCgYDVQQLDANJVFMxGzAZBgNVBAMMEmlkcC1z
                          dGFnZS51Y3NmLmVkdTAgFw0xMjA5MDUyMjQ1NTdaGA8yMTEyMDgxMjIyNDU1N1ow
                          dDELMAkGA1UEBhMCVVMxEzARBgNVBAgMCkNhbGlmb3JuaWExFjAUBgNVBAcMDVNh
                          biBGcmFuY2lzY28xDTALBgNVBAoMBFVDU0YxDDAKBgNVBAsMA0lUUzEbMBkGA1UE
                          AwwSaWRwLXN0YWdlLnVjc2YuZWR1MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIB
                          CgKCAQEArktmiHdvhHTov+AnmJoskeOZkkoYJkczPRwb2C8gfhhg+bPcp+0vEgDX
                          n4GjxUk5E3ALLpGYNra+WDv6fkLGxxnhNW7NZbWrTE1oiXroiTZ6uKOJTbopDUUY
                          Zrq1UvBUsUzrNTB8AzqWHMtuWVkXNyF+u1l6w6qvlhfyp+G6AgJALRSLDBev3JQ9
                          pVxnEitu4LxXx24tzedeWTCTuoE7kIkd8ereiFsKCdQm06NIusZbRV8yr89oIFCG
                          bWp1W3TLcOg34ItegTaFeD6Poe5QT8NXruvAmHcLO8spoJXgeU4Kverw6Z5uRg28
                          mYZorNhTC8PREXeHW+fG53Z0KQI3xwIDAQABo1AwTjAdBgNVHQ4EFgQUFjqh/zPG
                          wBggGf5SHyblYLafMsYwHwYDVR0jBBgwFoAUFjqh/zPGwBggGf5SHyblYLafMsYw
                          DAYDVR0TBAUwAwEB/zANBgkqhkiG9w0BAQUFAAOCAQEAGc65YVfKyMuG+RlVd50n
                          2idLF7VT07oMetEQJBMh4gqKQY5p5Jf1T9EJYyK5HDDMSi0xml9P+G0t5DAIrYkK
                          gJ6ZVVyTaaEqz9ux8ZbWcikakjQHNsZrtDDWVCRihrqhcJ4zbRbTWu10vjNe4+DI
                          XstsHtg6waEFXaeMg+mB6Amp//VJiaaGBNy5Dodq2qsCXtsZQ9eoIa+0OGG0yjoV
                          w2pRehMsft5d/v2ljDjdgemqd1p9hN5/0mpP56edg9VXCIIIcRcQEck+FH2dP9yH
                          Zz3AFrm5SG5A7KAU150PTSeXaVsW4WKVUbs0uZ/R+hFet+OFj0oVrVUNQ2flHZeO
                          Tw==',
          ),
      ),
    'scope' =>
      array (
        0 => 'ucsf.edu',
      ),
  );

  $metadata['https://idp-dev.ucsf.edu/idp/shibboleth'] = array (
    'entityid' => 'https://idp-dev.ucsf.edu/idp/shibboleth',
    'name' =>
      array (
        'en' => 'MyAccess (Dev)',
      ),
    'contacts' =>
      array (
      ),
    'metadata-set' => 'shib13-idp-remote',
    'SingleSignOnService' =>
      array (
        0 =>
          array (
            'Binding' => 'urn:mace:shibboleth:1.0:profiles:AuthnRequest',
            'Location' => 'https://idp-dev.ucsf.edu/idp/profile/Shibboleth/SSO',
          ),
        1 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
            'Location' => 'https://idp-dev.ucsf.edu/idp/profile/SAML2/POST/SSO',
          ),
        2 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST-SimpleSign',
            'Location' => 'https://idp-dev.ucsf.edu/idp/profile/SAML2/POST-SimpleSign/SSO',
          ),
        3 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
            'Location' => 'https://idp-dev.ucsf.edu/idp/profile/SAML2/Redirect/SSO',
          ),
      ),
    'ArtifactResolutionService' =>
      array (
        0 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:1.0:bindings:SOAP-binding',
            'Location' => 'https://idp-dev.ucsf.edu:8443/idp/profile/SAML1/SOAP/ArtifactResolution',
            'index' => 1,
          ),
        1 =>
          array (
            'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:SOAP',
            'Location' => 'https://idp-dev.ucsf.edu:8443/idp/profile/SAML2/SOAP/ArtifactResolution',
            'index' => 2,
          ),
      ),
    'keys' =>
      array (
        0 =>
          array (
            'encryption' => true,
            'signing' => true,
            'type' => 'X509Certificate',
            'X509Certificate' => 'MIIDHzCCAgegAwIBAgIUZhMP4HJ/Nba30l5ICVLtGqrsdMkwDQYJKoZIhvcNAQEF
                          BQAwGDEWMBQGA1UEAxMNdng0My51Y3NmLmVkdTAeFw0xMTAzMjkwNDMzNDFaFw0z
                          MTAzMjkwNDMzNDFaMBgxFjAUBgNVBAMTDXZ4NDMudWNzZi5lZHUwggEiMA0GCSqG
                          SIb3DQEBAQUAA4IBDwAwggEKAoIBAQCkK4nyEMABnp3iXaiYbaK1frLDisxQYGZu
                          +AN3DMtHQhIJVTkaNOBrlLCxawdwWiV96DRwOseMj6WBvqxBKtOAZieb2oC8mi5O
                          Y4PvvRNdLjnn6s2xzg/lHZjHEM09KGrRGcwJtWCkEL5+FtVz92L480QhSbohPGJZ
                          y60mhy4M7/msNHlghjBV/+jHDwi93GhMzTvGyTqzi1zojnEzqUvQUUHAQdGdu6iH
                          txT3NZyCJxskU3W8zvzBgeqvQr64s612iekFN7tDadgYdyHni0zo6TXniyWBTPJD
                          akCay9Oz/UmQKLvwed0LDopdX9+o4QMEgZiy83ZIUjx8J0UxGlbrAgMBAAGjYTBf
                          MD4GA1UdEQQ3MDWCDXZ4NDMudWNzZi5lZHWGJGh0dHBzOi8vdng0My51Y3NmLmVk
                          dS9pZHAvc2hpYmJvbGV0aDAdBgNVHQ4EFgQUBVbGdRS9BswhnVsDYKKJPNaIBcow
                          DQYJKoZIhvcNAQEFBQADggEBAAUATVvFHwWrrq3n3Q6FVdNSl6G7QtAjOcfl0kGk
                          yyiOdavxyWbMorMef5d5RdYcPLhNCi7LmbfeZkxHht/d5IwqbCbyMw8x+Koaokxx
                          kXGF2A8Ccy5aqesjO/4Fz8aWK/lPy6ohSwe/XSbjoJLoQClCZ2VBxWB5RINOnE5u
                          4jPlDva7OloQoWqw58KxcxJKv9pA3CJabC3iXWlws2pM8Z9p2xBjlJe95pDSMLjw
                          xskv1QqjsGQRp8c8yih5AjNOJSpxyG/Di4f3Ca9/rQA7bsEiBc/wWTTrdlMy8nuA
                          v8nB5oT/OvO8bJZhRKORNAWlADHhZsJl8t7O0cn0ulcqGx0=',
          ),
        1 =>
          array (
            'encryption' => true,
            'signing' => true,
            'type' => 'X509Certificate',
            'X509Certificate' => 'MIIDuTCCAqGgAwIBAgIJAJhYDamGbwfsMA0GCSqGSIb3DQEBBQUAMHIxCzAJBgNV
                          BAYTAlVTMRMwEQYDVQQIDApDYWxpZm9ybmlhMRYwFAYDVQQHDA1TYW4gRnJhbmNp
                          c2NvMQ0wCwYDVQQKDARVQ1NGMQwwCgYDVQQLDANJVFMxGTAXBgNVBAMMEGlkcC1k
                          ZXYudWNzZi5lZHUwIBcNMTIwOTA1MjIwODQ0WhgPMjExMjA4MTIyMjA4NDRaMHIx
                          CzAJBgNVBAYTAlVTMRMwEQYDVQQIDApDYWxpZm9ybmlhMRYwFAYDVQQHDA1TYW4g
                          RnJhbmNpc2NvMQ0wCwYDVQQKDARVQ1NGMQwwCgYDVQQLDANJVFMxGTAXBgNVBAMM
                          EGlkcC1kZXYudWNzZi5lZHUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
                          AQDbNXgVex6yhYadG2LlUSygJ44Ad9VKh7jJwd3wU40KbIyhXxajii8aBi4IDvqA
                          7xPdzpYufglljCZfdUgqke1V/T/WVTj1bLqgjpjh1GC4ElG9SJKoo8u1tdgizjQv
                          DxSli8E5a5M0KSDxdt8B1XVdiZ+7AwJeCXEhblQHbn5P1nuGMBmq0bAJCty994PP
                          ANEuPBrsAtda8krKa53kp3axJNETCrNOtyBFJb/KmarJxMg71N0R26ljeSDGDt6l
                          v7cfiuUKlKINogFMkbZ+x6ISlXBAbKfWS53XC/cOWFTdqeZqOmRChJ2+NEhmu0Ga
                          JPNcNf5c3c8tPgZioxIYXFIZAgMBAAGjUDBOMB0GA1UdDgQWBBQrvYqfu/6NgzH0
                          45bq1WhPa1tq3DAfBgNVHSMEGDAWgBQrvYqfu/6NgzH045bq1WhPa1tq3DAMBgNV
                          HRMEBTADAQH/MA0GCSqGSIb3DQEBBQUAA4IBAQDau+qj+Zlq7Na9nEZzxinWxpot
                          neuQY5eFZMlFIDGTtj30TfhXrbqluxBVwOP6VqsXkTqIH4vQJuZ82rQbBkzQPytj
                          8WI6Tv1gqvnZBvrtvYKnDjWEPhIYl+KqJPw5csys0JrYQlIg8lgiwjbZIQ6owUaK
                          HdO5+aqpaRLO+9kUdtZvOwAMiobXLejk+nQ6BPor0McohRBf+zZGoXKtqag/4dNe
                          44HhpgqBt6lzk4SzX5HhMifU8iz1FQh8mJZnL59TtG/wokQrnbBvhoAeJtxvW4N0
                          0iMjxB98Bb/TfUUIdAHhnaWgNj6weQHlQrpYWphgWAEq9iPVC6NQDb2zLjIC',
          ),
      ),
    'scope' =>
      array (
        0 => 'ucsf.edu',
      ),
  );
}
