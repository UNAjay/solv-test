(function ($) {

  Drupal.behaviors.iframeDisplay = {
    attach: function (context, settings) {

      // $(document).bind('cbox_complete', function() {
      //   setTimeout($.colorbox.resize, 1000);
      // });

      // Parent.
      var iframedisplay_listener = function (event, iframe) {

        // Listening whitelist.
        if (event.origin !== "http://www.jeeveserp.com" &&
            event.origin !== "http://jeeveserp.com" &&
            event.origin !== "http://marketing.jeeves.se" &&
            event.origin !== "http://jeeveserp.wkdev.lv" &&
            event.origin !== "http://ci34.actonsoftware.com"
        ) {
          return;
        }

        // parsing posted data
        try {
          var data = $.parseJSON(event.data);

          if (data.action == 'RESIZE') {

            // If we get an integer, that is a request to resize the window
            var intRegex = /^\d+$/;
            if (intRegex.test(data.height)) {
              // $('iframe[src=' + data.url + ']').height(Math.round(data.height));
              $('#iframe iframe').height(Math.round(data.height));
            }

          }

        } // try
        catch(err) {
          console.log(err);
        } // catch

      }

      // Setup the listener.
      if (window.addEventListener) { // one for standarts compiland (normal) browsers
        addEventListener("message", iframedisplay_listener, false);
      }
      else {
        attachEvent("onmessage", iframedisplay_listener); // and one for Microsoft Internet Explorer
      }

    }

  };

})(jQuery);
