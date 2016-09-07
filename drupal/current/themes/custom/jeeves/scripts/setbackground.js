(function ($) {
	Drupal.behaviors.jeeves = {
		attach: function (context, settings) {
      // var slider = $(#block-views-promo-slideshow-block .flexslider);
      var slider = $(".view-promo-slideshow .flexslider");

      // got slider? run it
      if (slider.length) {
        slider.flexslider({
            start: function(slider){
                Drupal.behaviors.jeeves.set_background(slider);
            },
            after: function(slider){
                Drupal.behaviors.jeeves.set_background(slider);
            }
        });
      }
    },
    set_background:function(slider) {
      var currentSlide = slider.slides.eq(slider.currentSlide);
      currentFrame = currentSlide.find('img');

      var imgsrc = $(currentFrame).attr('src');

      //$('body > #page').css('background-image', 'url('+imgsrc+')');
      $('body > #page').css('background-image', 'none');
      //$(currentSlide).closest('.node').css('background', 'url('+imgsrc+') no-repeat center center')
      $('.first-section-container').css('background', 'url('+imgsrc+') no-repeat center center')
        .css('-webkit-background-size', 'cover')
        .css('-moz-background-size', 'cover')
        .css('-o-background-size', 'cover')
        .css('background-size', 'cover');
        //.css('background-size', '100% 100%');

    },
  };
}(jQuery));
