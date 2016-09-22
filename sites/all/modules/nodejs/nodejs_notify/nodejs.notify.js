
(function ($) {

Drupal.Nodejs.callbacks.nodejsNotify = {
  callback: function (message) {
    var notifyTime = Drupal.settings.nodejs_notify.notification_time;
    if (notifyTime > 0) {
      $.jGrowl(message.data.body, {
        header: message.data.subject,
        open: function(){
          if ( $('.driver-alert .jp-play').length > 0) {
            $('.driver-alert .jp-play').click();
            if (typeof(navigator) == typeof(Function) && typeof(navigator.notification) == typeof(Function)) {
              navigator.notification.beep(5);
            }
          }
        },
        afterOpen: function(){
          if ($('.reject').length > 0){
            $('.reject').click(function(){$(this).parent().parent().find('.jGrowl-close').click();});
          }
        },

        life:(notifyTime * 1000),
				position:'center',
      });
    }
    else {
      $.jGrowl(message.data.body, {header: message.data.subject, sticky:true});
    }
  }
};

})(jQuery);

// vi:ai:expandtab:sw=2 ts=2

