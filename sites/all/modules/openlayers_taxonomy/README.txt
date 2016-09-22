$Id:

Description
===========
This module will create an openlayer layer for each term in an selected vocabulary. The features for each layer are rendered by an openlayers data view display that accepts the taxonomy term as an argument.

Configuration
=============
* Create at least one vocabulary.
* Create at least one view with at least one openlayers data display. This view MUST take a taxonomy term id as an argument and not return results if the argument is not present, otherwise, you will have duplicate data.
* Configure the vocabularies and view/display combo you want to create layers from.
* Optionally add those layers to a map preset.