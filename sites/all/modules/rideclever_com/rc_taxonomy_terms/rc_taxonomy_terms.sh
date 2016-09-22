#!/bin/bash

if [ '-h' = $1 ]
then
  echo 'this command disables uninstalls and enables the module'
  break
else 
  drush $1 -y dis rc_taxonomy_terms
  drush $1 -y pm-uninstall rc_taxonomy_terms
  drush $1 -y en rc_taxonomy_terms
fi
