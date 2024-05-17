<?php

/**
 * @file
 * feature_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_avatar_per_page';
  $strongarm->value = '30';
  $export['avatar_selection_avatar_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_disable_user_upload';
  $strongarm->value = 1;
  $export['avatar_selection_disable_user_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_distinctive_avatars';
  $strongarm->value = 0;
  $export['avatar_selection_distinctive_avatars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_force_user_avatar';
  $strongarm->value = 1;
  $export['avatar_selection_force_user_avatar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_force_user_avatar_reg';
  $strongarm->value = 1;
  $export['avatar_selection_force_user_avatar_reg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_imagecache_preset';
  $strongarm->value = 'avatar_100x100';
  $export['avatar_selection_imagecache_preset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_set_random_default';
  $strongarm->value = 1;
  $export['avatar_selection_set_random_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_countries';
  $strongarm->value = 'AFG|Afghanistan
AL|Albania
GBA|Alderney
DZ|Algeria
AN|Angola
RA|Argentina
ARM|Armenia
AUS|Australia
A|Austria
AZ|Azerbaijan
BFPO|B.F.P.O
BS|Bahamas
BRN|Bahrain
BD|Bangladesh
BDS|Barbados
BY|Belarus
B|Belgium
BH|Belize
BM|Bermuda
BOL|Bolivia
BIH|Bosnia-Herzegovina
RB|Botswana
BR|Brazil
BVI|British Virgin Islands
BRU|Brunei
BG|Bulgaria
BUR|Burma
CA|Cambodia
CAM|Cameroon
CDN|Canada
CAY|Cayman Islands
RCH|Chile
PRC|China
CO|Colombia
CR|Costa Rica
HR|Croatia
C|Cuba
CY|Cyprus
CS|Czech Republic
DK|Denmark
DOM|Dominican Republic
EC|Ecuador
ET|Egypt
ES|El Salvador
EST|Estonia
ETE|Ethiopia
FJI|Fiji Islands
SF|Finland
F|France
WAG|Gambia
GE|Georgia
D|Germany
G|Germany (duplicate)
GBZ|Gibraltar
GR|Greece
WG|Grenada
GBG|Guernsey
GUY|Guyana
HO|Hondurus
HK|Hong Kong
H|Hungary
IS|Iceland
IND|India
INS|Indonesia
IRL|Ireland
GBM|Isle of Man
IL|Israel
I|Italy
CI|Ivory Coast
JA|Jamaica
J|Japan
GBJ|Jersey
HKJ|Jordan
KZ|Kazakhstan
EAK|Kenya
ROK|Korea (South)
KWT|Kuwait
KS|Kyrgyzstan
LV|Latvia
RL|Lebanon
FL|Liechtenstein
LT|Lithuania
LIT|Lithuania
L|Luxembourg
MK|Macedonia
MWI|Malawi
MAL|Malaysia
M|Malta
MS|Mauritius
MEX|Mexico
MD|Moldova
MC|Monaco
MA|Morocco
MOC|Mozambique
SWA|Namibia
NE|Nepal
NL|Netherlands
NZ|New Zealand
NIC|Nicaragua
WAN|Nigeria
NI|Northern Ireland
N|Norway
PAK|Pakistan
PA|Panama
PNG|Papua New Guinea
PE|Peru
RP|Philippines
PL|Poland
P|Portugal
PR|Puerto Rico
QTR|Qatar
RO|Romania
RS|Russia
AS|Saudi Arabia
SYL|Seychelles
WAL|Sierra Leone
SGP|Singapore
SK|Slovakia
SLO|Slovenia
SOMA|Somalia
ZA|South Africa
SP|Spain
CL|Sri Lanka
STH|St Helena
WL|St Lucia
WY|St Vincent
SUD|Sudan
SO|Sultanate of Oman
SD|Swaziland
SW|Sweden
CH|Switzerland
SYR|Syria
RC|Taiwan
TJ|Tajikistan
EAT|Tanzania
T|Thailand
TT|Trinidad and Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
EAU|Uganda
UA|Ukraine
UAE|United Arab Emirates
UK|United Kingdom
USA|United States of America
UR|Uruguay
UZ|Uzbekistan
V|Vatican
YV|Venezuela
VN|Vietnam
ADN|Yemen
YU|Yugoslavia
ZRE|Zaire
Z|Zambia
EAZ|Zanzibar
ZW|Zimbabwe';
  $export['care_fields_countries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_country_default';
  $strongarm->value = 'UK';
  $export['care_fields_country_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_email_devices';
  $strongarm->value = 'EM|Home E-Mail
EW|Work Email';
  $export['care_fields_email_devices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_show_numbers';
  $strongarm->value = 1;
  $export['care_fields_show_numbers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_telephone_devices';
  $strongarm->value = 'TH|Home telephone
MB|Mobile Phone
TE|Work Telephone';
  $export['care_fields_telephone_devices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_titles';
  $strongarm->value = 'Dr
Miss
Mr
Mrs
Ms';
  $export['care_fields_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_fields_website_devices';
  $strongarm->value = 'W|Web Site Address';
  $export['care_fields_website_devices'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_log_calls';
  $strongarm->value = 'part';
  $export['care_log_calls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_log_results';
  $strongarm->value = 'part';
  $export['care_log_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_address_field';
  $strongarm->value = 'field_care_addresses';
  $export['care_user_address_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_dob_field';
  $strongarm->value = 'field_care_dob';
  $export['care_user_dob_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_email_field';
  $strongarm->value = 'field_care_emails';
  $export['care_user_email_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_keep_history';
  $strongarm->value = '1';
  $export['care_user_keep_history'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_memberships_field';
  $strongarm->value = 'field_memberships';
  $export['care_user_memberships_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_membership_number_field';
  $strongarm->value = 'field_membership_number';
  $export['care_user_membership_number_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_message_date_format';
  $strongarm->value = 'long';
  $export['care_user_message_date_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_name_field';
  $strongarm->value = 'field_care_name';
  $export['care_user_name_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_rules_messages';
  $strongarm->value = '1';
  $export['care_user_rules_messages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_user_telephone_field';
  $strongarm->value = 'field_care_telephones';
  $export['care_user_telephone_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'care_wsdl_url';
  $strongarm->value = 'https://care.ctc.org.uk/careservices/ndataaccess.asmx?WSDL';
  $export['care_wsdl_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '11';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = FALSE;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Account cancellation request for [user:name] at [site:name]';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html style="font-family: Arial, Helvetica, sans-serif" xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title></title>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><meta name="viewport" content="width=device-width" />
	<link href="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/styles.css?v=1459504041000" rel="stylesheet" />
	<style type="text/css">

    body {
      margin: 0;
      padding: 0;
    }
    
    .header {
      background-color: red;
    }
    table {
      width: 100%;
      max-width:600px;
      text-align: left;
    }
    .footer {
      background-color: green;
    }
    
    .footer-text {
      color: #999999;
      text-align: center;
    }
    
    .footer-text a {
      color: #666666;
    }
    
    .footer-links {
      text-align: center;
    }
    
    .footer-link {
      font-family: Arial, Helvetica, sans-serif;
      font-size: 21px;
      font-weight: bold;
      text-decoration: none;
      color: #0093d3;
    }
    
    html {
      font-family: Arial, Helvetica, sans-serif;
    }
    
    img {
      padding: 0;
      margin: 0;
      display: block;
    }
    
    h1,
    h2,
    h3,
    h4,
    h5 {
      color: #0093d3;
    }
    
    p {
      font-size: 15px;
      line-height: 20px;
    }
    
    p a {
      color: #0093d3;
      text-decoration: none;
    }
    
    .cta-white h3 {
      color: #ffffff;
    }
    
    .cta-white p {
      color: #ffffff;
    }
    
    .cta-white a {
      color: #ffffff;
    }
    
  
</style>

</head>
<body style="margin: 0; padding: 0;">

<table border="0" cellpadding="0" cellspacing="0" width="100%">
	<tbody>
		<tr>
			<td align="center" style="min-width: 600px" width="100%"><!-- content-header -->

			<table border="0" cellpadding="0" cellspacing="0" width="600"><!-- Logo and strapline -->
				<tbody>
					<tr>
						<td>
						<div editable="true" en-image="true"><a href="{external_url~http://www.cyclinguk.org~Visit_Cycling_UK}"><img alt="We are cycling UK" class="emailImage" height="118" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-email-header-no-tab.jpg?v=1459775353000" width="600" /></a></div>
						</td>
					</tr>
				</tbody>
			</table>
			<!-- Content intro row -->

			<div>
			<table border="0" cellpadding="0" cellspacing="0" width="600">
				<tbody>
					<tr>
						<td>
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
								<tr>
									<td width="20">&nbsp;</td>
									<td class="body-text" style="font-family: Arial, Helvetica, sans-serif" width="560">
									<div en-editable="true">
									<p style="font-size: 15px; line-height: 20px">

<p>A request to reset the password for your account has been made at [site:name].<br>
<br>
You may now log in by clicking this link or copying and pasting it to your browser:<br>
<br>
[user:one-time-login-url]<br>
<br>
This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.<br>
<br>
--  [site:name] team<br></p>


                                                                        </p>
									</div>
									</td>
									<td width="20">&nbsp;</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
				</tbody>
			</table>
			</div>
			
			<!-- Footer -->

			<table bgcolor="#f6f6f6" border="0" cellpadding="0" cellspacing="0" width="100%"><!-- Footer links -->
				<tbody>
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
								<tr>
									<td align="center" class="footer-links" style="text-align: center">
									<table border="0" cellpadding="0" cellspacing="0" width="100%">
										<tbody>
											<tr>
												<td width="3">&nbsp;</td>
												<td><a class="footer-link" href="http://www.cyclinguk.org" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Cycling UK">Cycling UK</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/groups" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Groups">Groups</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/news" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="News">News</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/join" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" arget="_blank" title="Join">Join</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link last" href="http://www.cyclinguk.org/donate" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Donate">Donate</a></td>
												<td width="3">&nbsp;</td>
											</tr>
										</tbody>
									</table>
									</td>
								</tr>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<!-- Social links -->
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td><a href="https://www.facebook.com/cyclinguk" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-facebook.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Facebook" width="200" /> </a></td>
									<td><a href="http://www.twitter.com/wearecyclinguk}" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-twitter.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Twitter" width="200" /> </a></td>
									<td><a href="https://www.instagram.com/wearecyclinguk" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-instagram.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Instagram" width="200" /> </a></td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
					<!-- Footer information -->
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td class="body-text" style="font-family: Arial, Helvetica, sans-serif">
									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center"><a href="mailto:shop@cyclinguk.org?Unsubscribe" style="color: #666666; text-decoration: none">Unsubscribe</a> from Cycling UK Emails</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Registered office: Cycling UK National Office, Parklands, Railton Road, Guildford, GU2 9JX</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Cycling UK is a trading name of Cyclists&rsquo; Touring Club (CTC) a company limited by guarantee, registered in England no.25185.</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Registered as a charity in England and Wales no.1147607 and in Scotland no.SC042541.</p>
									</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
				</tbody>
			</table>
			</td>
		</tr>
	</tbody>
</table>
</body>
</html>';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Replacement login information for [user:name] at [site:name]';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'An administrator created an account for you at [site:name]';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html style="font-family: Arial, Helvetica, sans-serif" xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title></title>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" /><meta name="viewport" content="width=device-width" />
	<link href="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/styles.css?v=1459504041000" rel="stylesheet" /><!-- Inline styles -->
	<style type="text/css">body {
      margin: 0;
      padding: 0;
    }
    
    .header {
      background-color: red;
    }
    table {
      width: 100%;
      max-width:600px;
      text-align: left;
    }
    .footer {
      background-color: green;
    }
    
    .footer-text {
      color: #999999;
      text-align: center;
    }
    
    .footer-text a {
      color: #666666;
    }
    
    .footer-links {
      text-align: center;
    }
    
    .footer-link {
      font-family: Arial, Helvetica, sans-serif;
      font-size: 21px;
      font-weight: bold;
      text-decoration: none;
      color: #0093d3;
    }
    
    html {
      font-family: Arial, Helvetica, sans-serif;
    }
    
    img {
      padding: 0;
      margin: 0;
      display: block;
    }
    
    h1,
    h2,
    h3,
    h4,
    h5 {
      color: #0093d3;
    }
    
    p {
      font-size: 15px;
      line-height: 20px;
    }
    
    p a {
      color: #0093d3;
      text-decoration: none;
    }
    
    .cta-white h3 {
      color: #ffffff;
    }
    
    .cta-white p {
      color: #ffffff;
    }
    
    .cta-white a {
      color: #ffffff;
    }
    .body-text {
      font-family: Arial, Helvetica, sans-serif;
    }
    </style>    

</head>
<body style="margin: 0; padding: 0">
<style type="text/css">body {
      margin: 0;
      padding: 0;
    }
    
    img {
      padding: 0;
      margin: 0;
      display: block;
    }
    
    body {
      margin: 0;
      padding: 0;
    }
    
    img {
      padding: 0;
      margin: 0;
      display: block;
    }
</style>
<table border="0" cellpadding="0" cellspacing="0" width="100%">
	<tbody>
		<tr>
			<td align="center" style="min-width: 600px" width="100%"><!-- content-header -->

			<table border="0" cellpadding="0" cellspacing="0" width="600"><!-- Logo and strapline -->
				<tbody>
					<tr>
						<td>
						<div editable="true" en-image="true"><a href="{external_url~http://www.cyclinguk.org~Visit_Cycling_UK}"><img alt="We are cycling UK" class="emailImage" height="118" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-email-header-no-tab.jpg?v=1459775353000" width="600" /></a></div>
						</td>
					</tr>
				</tbody>
			</table>
			<!-- Content intro row -->

			<div>
			<table border="0" cellpadding="0" cellspacing="0" width="600">
				<tbody>
					<tr>
						<td>
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
								<tr>
									<td width="20">&nbsp;</td>
									<td class="body-text" style="font-family: Arial, Helvetica, sans-serif" width="560">
									<div en-editable="true">
									<p style="font-size: 15px; line-height: 20px">

 
<p>Thank you for registering at [site:name]. Click on the link below to complete your registration and gain full access:<br>
 <br>
<p>[user:validate-url] <br>
<br>
This link can only be used once to complete the registration of your account.<br> 
<br> 
username: [user:name]<br>
</p>

<p>Thank you for registering at www.cyclinguk.org</p>
 
<p>Cycling UK</p>


                                                                        </p>
									</div>
									</td>
									<td width="20">&nbsp;</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
				</tbody>
			</table>
			</div>
			
			<!-- Footer -->

			<table bgcolor="#f6f6f6" border="0" cellpadding="0" cellspacing="0" width="100%"><!-- Footer links -->
				<tbody>
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
								<tr>
									<td align="center" class="footer-links" style="text-align: center">
									<table border="0" cellpadding="0" cellspacing="0" width="100%">
										<tbody>
											<tr>
												<td width="3">&nbsp;</td>
												<td><a class="footer-link" href="http://www.cyclinguk.org" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Cycling UK">Cycling UK</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/groups" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Groups">Groups</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/news" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="News">News</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link" href="http://www.cyclinguk.org/join" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" arget="_blank" title="Join">Join</a></td>
												<td><img src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/footer-divide.gif?v=1459499062000" style="display: block; margin: 0; padding: 0" /></td>
												<td><a class="footer-link last" href="http://www.cyclinguk.org/donate" style="color: #0093d3; font-family: Arial, Helvetica, sans-serif; font-size: 18px; font-weight: bold; text-decoration: none" target="_blank" title="Donate">Donate</a></td>
												<td width="3">&nbsp;</td>
											</tr>
										</tbody>
									</table>
									</td>
								</tr>
								<tr>
									<td height="30">&nbsp;</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<!-- Social links -->
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td><a href="https://www.facebook.com/cyclinguk" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-facebook.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Facebook" width="200" /> </a></td>
									<td><a href="http://www.twitter.com/wearecyclinguk}" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-twitter.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Twitter" width="200" /> </a></td>
									<td><a href="https://www.instagram.com/wearecyclinguk" target="_blank" title=""><img height="50" src="https://aaf1a18515da0e792f78-c27fdabe952dfc357fe25ebf5c8897ee.ssl.cf5.rackcdn.com/1689/ctc-content-footer-instagram.jpg?v=1459416814000" style="display: block; margin: 0; padding: 0" title="Cycling UK on Instagram" width="200" /> </a></td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
					<!-- Footer information -->
					<tr>
						<td align="center" style="min-width: 600px" width="600">
						<table border="0" cellpadding="0" cellspacing="0" width="600">
							<tbody>
								<tr>
									<td class="body-text" style="font-family: Arial, Helvetica, sans-serif">
									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center"><a href="mailto:shop@cyclinguk.org?Unsubscribe" style="color: #666666; text-decoration: none">Unsubscribe</a> from Cycling UK Emails</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Registered office: Cycling UK National Office, Parklands, Railton Road, Guildford, GU2 9JX</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Cycling UK is a trading name of Cyclists&rsquo; Touring Club (CTC) a company limited by guarantee, registered in England no.25185.</p>

									<p align="center" class="footer-text" style="color: #999999; font-size: 15px; line-height: 20px; text-align: center">Registered as a charity in England and Wales no.1147607 and in Scotland no.SC042541.</p>
									</td>
								</tr>
							</tbody>
						</table>
						</td>
					</tr>
					<tr>
						<td height="30">&nbsp;</td>
					</tr>
				</tbody>
			</table>
			</td>
		</tr>
	</tbody>
</table>
</body>
</html>';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (pending admin approval)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (approved)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (blocked)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (canceled)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
