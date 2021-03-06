(function ($) {
  Drupal.behaviors.deviceGeolocationCheck = {
    attach: function (context, settings) {
      $.ajax({
        url:  settings.basePath + 'check-geolocation-attempt',
        type: 'POST',
        dataType: 'json',
        success: function(data) {
          if (data.ask_geolocate) {
            settings.device_geolocation.ask_geolocate = true;
            Drupal.behaviors.deviceGeolocationAutoDetect.attach(context, settings);
          }
        }
      });
    }
  };  
})(jQuery);