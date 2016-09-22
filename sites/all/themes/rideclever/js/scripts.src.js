var myLat, myLon, accuracy, locationDebug;
accuracy = 100;
if (navigator.geolocation) {
    navigator.geolocation.watchPosition(function (position) {
        accuracy = position.coords.accuracy;
        myLat = position.coords.latitude.toFixed(5);
        myLon = position.coords.longitude.toFixed(5);
        locationDebug = jQuery('#location-debug input[name=geolocation]');
        if(locationDebug.length > 0 ) {
          locationDebug.val(JSON.stringify(position));
        }
    }, function () {
    }, {
        maximumAge: 300000,
        timeout: 30000,
        frequency: 3000,
        enableHighAccuracy: true
    });
}
(function ($) {
    $(document).ready(function () {
        //document.addEventListener("deviceready", onDeviceReady, false);
        var address0, address1, saveLaterRide;
        locationHashChanged();

        if ($('.openlayers-map').length === 1) {
            setTimeout(function () {
                resizeRideMap();
            }, 500);
            $(window).resize(function () {
                resizeRideMap();
            });
        }

        if ($('#refresh-this-page').length > 0) {
            setInterval(function () {
                location.reload();
                // The following is a semi-failed attempt to use ajax to reload the page.
                //$.ajax({
                //    url: location.href,
                //    cache: false
                //}).done(function( returnText ) {
                //    y = $(returnText).filter('body');
                //    $('body').html(y);
                //});
            }, 24000);
        }
        address0 = '#edit-field-rider-address-und-0-value';
        address1 = '#field-start-time-address';
        if ($(address0).length > 0) {
            if ($(address1).length > 0) {
                $(address1).attr('value', $(address0).attr('value'));
                syncTextFields(address0, address1);
            }
        }
        saveLaterRide = $('#save-later-ride');

        if (saveLaterRide.length > 0) {
            saveLaterRide.click(function () {
                $('#edit-submit').click();
            });
        }

        //function onDeviceReady() {
        //  if (typeof(window.device) != 'undefined'){
        //    if (window.device.platform === 'android' || window.device.platform === 'Android') {
        //      $('#app-debug').text('andriod');
        //    }
        //    else {
        //      $('#app-debug').text(window.device.platform);
        //    }
        //  }
        //  else {
        //    $('#app-debug').text('not an app');
        //  }
        //}
    });


    /*  if (navigator.geolocation) {
     var t1, t2;
     navigator.geolocation.watchPosition(showPosition, function(){}, {maximumAge:300000, timeout:30000});
     }
     else {
     $('.bottom-bar').html("Geolocation is not supported by this browser.");
     }

     function showPosition(position) {
     var pC = position.coords;
     var lastUpdate, theTime;
     if (typeof t2 === 'undefined') {
     t2 = new Date().getTime();
     lastUpdate = 'First data point. ';
     }
     else {
     t1 = position.timestamp;
     lastUpdate = ((t1 - t2) / 1000 ) + ' seconds ago.';
     t2 = t1;
     }
     theTime = new Date(position.timestamp);
     $('#app-debug').html('Accuracy: ' + pC.accuracy + '<br>last updated  ' + lastUpdate + ' at ' + theTime + '<br>Speed: ' + (pC.speed * 2.23694) + ' mph ' + pC.heading + 'degrees' + '<br>At: ' + pC.latitude + ', ' + pC.longitude);
     }

     */
    function syncTextFields(address0, address1) {
        $(address0).change(function () {
            $(address1).val($(address0).val());
        });
        $(address1).change(function () {
            $(address0).val($(address1).val());
        });
        $('#block-block-8').find('a').click(function () {
            $(address1).val($(address0).val());
        });
    }
})
    (jQuery);

function getUrlVars() {
    var hashes, vars = [], hash;
    hashes = window.location.href.slice(window.location.href.indexOf('#') + 1).split('&');
    for (var i = 0; i < hashes.length; i++) {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
        vars[hash[0]] = hash[1];
    }
    return vars;
}

function printStreetAddress(x, y) {
    var url, key, streetAddress;
    key = 'secret-key';
    url = '/sites/all/modules/openlayers_proxy/ymap.php?lat=' + x + '&lon=' + y;
    if (typeof x !== 'undefined' && typeof y !== 'undefined') {
        if (Number(x).toFixed(3) !== '37.780' || Number(y).toFixed(3) !== '-122.351') {
                jQuery.getJSON(url, function (data) {
                    streetAddress = data.ResultSet.Results[0]['line1'];
                    if (streetAddress != 'Pier 50') {
                      locationJson = jQuery('#location-debug input[name=json]');
                      if(locationJson.length > 0 ) {
                        locationJson.val(JSON.stringify(data));
                      }
                      if( streetAddress != '') {
            if (myLat !== Number(x).toFixed(5) || myLon !== Number(y).toFixed(5) || accuracy < 60) {
                        jQuery('#edit-field-rider-address-und-0-value').attr('value', streetAddress);
            }
                      }
                      jQuery.post(
                        '/sites/all/modules/geo_location_debug/logger.php', 
                        jQuery('#location-debug').serialize()).done(
                          function(data){
                            console.log("results: " + data);
                          }
                        );
                    }
                });
        }
    }
}

function setLatLong() {
    var lon, lat;
    lon = getUrlVars()['lon'];
    lat = getUrlVars()['lat'];
    jQuery('#edit-field-geoloc-und-0-lng').val(lon);
    jQuery('#edit-field-geoloc-und-0-lat').val(lat);
    printStreetAddress(lat, lon);
}

function locationHashChanged() {
    if (jQuery('#edit-field-geoloc-und-0-lng').length > 0 && jQuery('#edit-field-geoloc-und-0-lat').length > 0) {
        setLatLong();
    }
}

function resizeRideMap() {
    var mapHeight, openLayersMap;
    openLayersMap = jQuery('.openlayers-map');
    mapHeight = jQuery(window).height() - (openLayersMap.offset().top + 36);
    jQuery('.openlayers-container-map-').css('height', mapHeight);
    openLayersMap.css('height', mapHeight);
    jQuery('#block-block-1').css('margin-top', (mapHeight / 2) - 40);
    locationHashChanged();
}

window.onhashchange = locationHashChanged;

