|===============================|
| DRUPALGAP MODULE INSTALLATION |
|===============================|

|========|
| Step 1 |
|========|

Download the DrupalGap module and upload it to your 'sites/all/modules'
directory in Drupal.

|========|
| Step 2 |
|========|

Download the modules that DrupalGap is dependant on:

  Views Datasource (http://drupal.org/project/views_datasource)
    Views JSON

  Services (http://drupal.org/project/services)
    REST Server (this module requires the SPYC library, see below for info)

Upload these two modules to your 'sites/all/modules' directory.

|========|
| Step 3 |
|========|

Enable the Views JSON module that comes with the Views Datasource module.

|========|
| Step 4 |
|========|

Before the REST Server module can be enabled, you need to download SPYC and
extract the spyc.php file so it lives here, for example:

~/www/sites/all/modules/services/servers/rest_server/lib/spyc.php

Spyc can be downloaded here: http://code.google.com/p/spyc/downloads/list

Note for advanced users, you can use the following commands to quickly take
care of the SPYC dependency for the REST Server module:

# cd ~/www/sites/all/modules/services/servers/rest_server/lib
# wget http://spyc.googlecode.com/svn/trunk/spyc.php -O spyc.php

|========|
| Step 5 |
|========|

Enable the REST Server module.

|========|
| Step 6 |
|========|

Enable the DrupalGap module.

|====================================|
| DRUPALGAP MOBILE APPLICATION SETUP |
|====================================|

Mobile Application Users
------------------------

Please download the DrupalGap mobile app from the Android marketplace. Once
installed, follow the setup wizard in the app.

https://market.android.com/details?id=com.drupalgap

Mobile Application Developers
-----------------------------

To begin developing your own mobile application with PhoneGap and DrupalGap
the following steps must be completed:

1. Download PhoneGap
(http://phonegap.com/)

2. Complete the PhoneGap Getting Started Guide for Android to create your new
Android Application in PhoneGap
(http://phonegap.com/start#android)

3. Download JQuery 1.6.4 & JQuery Mobile 1.0 to PhoneGap's assets/www directory
  a. http://code.jquery.com/jquery-1.6.4.min.js
  b. http://code.jquery.com/mobile/1.0/jquery.mobile-1.0.min.js
  c. http://code.jquery.com/mobile/1.0/jquery.mobile-1.0.min.css

4. Download DrupalGap and extract to PhoneGap's assets/www directory so
DrupalGap's JavaScript file is located at assets/www/drupalgap/drupalgap.js
(https://github.com/signalpoint/DrupalGap)

5. Run your new Android Application!
