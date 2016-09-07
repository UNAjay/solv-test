(function ($) {


  // fix position after screen resize
  $(window).resize(function() {
    move_floatbar();
  });

  Drupal.behaviors.floatbar = {
    attach: function (context, settings) {
      move_floatbar(this);

      // $('#floatbar_feedback').colorbox({iframe:true, innerWidth:455, innerHeight:450});

    }
  };

  function move_floatbar() {
    // set menu position to center.
    var screenHeight = $(window).height();
    var floatbarHeight = $(".block-floatbar").outerHeight();
    var floatbarTop = (screenHeight / 2) - ( floatbarHeight / 2);
    $(".block-floatbar").css({'top': floatbarTop+'px'});

    // TODO: fix position after items have resized height
  }
})(jQuery);
