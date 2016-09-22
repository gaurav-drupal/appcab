<?php

$_SERVER['HTTP_HOST'] = 'dev.rc.gotpantheon.com';
$_SERVER['REMOTE_ADDR'] = '127.0.0.1';


chdir('../../../..');
$current_drupal_root = getcwd() ;

define('DRUPAL_ROOT', $current_drupal_root);
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

print_r(module_list());
