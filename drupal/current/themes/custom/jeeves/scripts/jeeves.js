/**
 * Main menu & Search-bar - expand
 */

jQuery(function($){
  // Use strict mode to avoid errors: https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";

  var $navButton = $('<div class="navigate">'+Drupal.t('Menu')+'<span></span></div>');
  var $searchButton = $('<div class="search-button"><span></span></div>');
  var $searchForm = $('#block-search-form').clone();
  var $mainMenu = $('header .menu');

  $searchForm.addClass('mobile');

  // add buttons and search-form for mobile
  $('.region-header-secondary').prepend($searchButton, $navButton).append($searchForm);

  // toggle menu
  $navButton.unbind('click').click(function(){
    // make sure search is hidden before showing menu
    if ($searchForm.is(':visible')) $searchForm.hide();

    $mainMenu.toggle();
  });

  // toggle search
  $searchButton.click(function(){
    // make sure menu is hidden before showing search
    if ($mainMenu.is(':visible')) $mainMenu.hide();

    $searchForm.toggle();
  });

  // Make sure the main-menu is shown correct in different layouts. The navButton
  // is shown/hidden with css and can be used to verify which menu-version is being used.
  var showMenu = function(){
    // mobile menu
    if ($navButton.is(':visible')) {

      // $mainMenu.hide();
      // $searchForm.hide();

      replaceSelectBoxes();
    }
    // desktop menu
    else {
      // hide mobile search-form
      $searchForm.hide();
      // make sure menu is shown
      $mainMenu.show();
    }
  };
  $(window).resize(showMenu);

  var parentHeight = $('.node-type-landing-page .group_resources').parent().height();
  $('.node-type-landing-page .group_resources').height(parentHeight-70);

  $(window).resize(function(event) {
    var parentHeight = $('.node-type-landing-page .group_resources').parent().height();
    $('.node-type-landing-page .group_resources').height(parentHeight-70);
  });
});

/**
 * Select-menu for mobile
 */
jQuery(function($){
  "use strict";

  var $submenu = $('.aside-primary .block-menu-block');

  // got submenu?
  if ($submenu.length) {
    // create a select version of the submenu
    $submenu.find('ul.menu:first').tinyNav({
//      active: 'selected',
      header: Drupal.t('Navigation')
    });
    // move the select-menu above the content
    $('.region-content .main-primary:first').prepend($submenu.find('.tinynav'));
    // wrap the select in divs
    $('.main-primary').find('.tinynav').wrap('<div class="mobile-submenu"/>').wrap('<div class="form-type-select"/>');
  }
});

/**
 * Key features
 */
jQuery(function($){
  "use strict";

  // got key features?
  if ($('.main-primary .key_features').length) {
    // add class to lists with children
    $('.main-primary .key_features').find('li').each(function(){
      if ($(this).children('ul').length) $(this).addClass('has-children');
    });
  }
});

/**
 * Placeholder fallback
 */
jQuery(function($){
  "use strict";

  //Assign to those input elements that have 'placeholder' attribute
  $('.ie input[placeholder]').each(function(){
    var $this = $(this);
    var placeholder = $this.attr('placeholder');

    // set value at init if empty
    if ($this.val() == '') {
      $this.val(placeholder);
    }

    // value the same as placeholder? remove value
    $this.focus(function(){
      if ($this.val() == placeholder) {
        $this.val('');
      }
    });

    // value empty or the same as placeholder? set placeholder as value
    $this.blur(function(){
      if ($this.val() == '') {
        $this.val(placeholder);
      }
    });
  });
});

/**
 * External links
 */
jQuery(function($){
  "use strict";

  var is_mobile;
  if(/Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
    is_mobile = true;
  } else {
    is_mobile = false;
  }

  // got dpm? skip the loop
  if (!$('.krumo-root').length) {
    // mail-links
    var $mailLinks = $('a[href^="mailto:"]');
    // exclude mail-links and loop through the rest
    $('a').not($mailLinks).each(function() {
      // skip if link contains host url since its an internal link
      if (String(this.href).indexOf(window.location.host) == -1) {
        // Check if it is an internal anchor without href
        var hashref = this.href;
        if (hashref) {
          if(hashref != 'javascript:void(0);'){
            // add class for css and set target to blank to open external links in new window
            $(this).addClass('external-link').attr('target', '_blank');
          }
        }
      }
    });
    var linksToTel = $('a[href^="tel:"]');
    $(linksToTel).each(function() {
      var telWrapper = $('<span>');
      telWrapper.addClass('link-phone');
      $(this).wrap(telWrapper);
      if(!is_mobile) {
        var linkText = $(this).html();
        $(this).replaceWith(linkText);
      }
    });

  }
});

// IE > 9 conditional styles does not work so we use javascript hack to apply class to html
if (navigator.userAgent.indexOf('MSIE') !== -1 || navigator.appVersion.indexOf('Trident/') > 0) {
  if (jQuery.browser.version > 9) {
    jQuery("html").addClass("ie gt-ie9");
  }
}

(function ($) {
	Drupal.behaviors.jeeves_images = {
    attach: function (context, settings) {
     $('.body img').each(function( key, obj ) {
       if ( $(obj).parent().attr("tagName") != 'A' ) {
        var src = $(obj).attr('src');
        src = src.replace('styles/large/public/', '').replace('styles/medium/public/', '').replace('styles/square_thumbnail/public/', '');

        $(obj).wrap($('<a>',{
           'href': src,
           'class': 'colorbox'
        }));
       } else {
         var cl = $(obj).parent().attr('class');
         $(obj).parent().attr('class', cl + ' colorbox');
       }
     });

     $(".colorbox").colorbox({maxWidth: 800});
    },
  }
} (jQuery));


// replace selectboxes with specially crafted ones
(function (jQuery) {
  Drupal.behaviors.selectBoxes = {
    attach: function (context, settings) {
      // probably change this to UFD, https://code.google.com/p/ufd/
      replaceSelectBoxes();
    }
  };
})(jQuery);

// document.ready for navigation dropdown on mobile view
jQuery(document).ready(function() {
  replaceSelectBoxes();

  jQuery('.view-partner.view-display-id-attachment_1 .view-content').hide();
  jQuery('#partner-locations').click(function() {
    jQuery('.view-partner.view-display-id-attachment_1 .view-content').toggle();
    jQuery(this).toggleClass('active');
    jQuery(this).toggleClass('closed');
    var textHide = Drupal.t('Hide All Locations');
    var texShow = Drupal.t('Show All Locations');
    if (jQuery(this).hasClass('active')) {
      jQuery(this).html(textHide);
    }
    if (jQuery(this).hasClass('closed')) {
      jQuery(this).html(texShow);
    }
    return false;
  });

});

function replaceSelectBoxes() {
  jQuery("select").selectbox({
    effect: "fade",
    speed: 50
  });
};

(function ($) {
  Drupal.behaviors.FullscreenPagesStickyNav = {

    attach: function(context, settings) {

      $('#page', context).once('FullscreenPagesStickyNav', function () {

        $(window).scroll(function () {

          var elemTop =  $('.header-secondary').offset().top;

          var offsetTop = 0;
          if (jQuery('#admin-menu').length > 0) offsetTop = jQuery('#admin-menu').outerHeight();

          if ($(window).scrollTop() + offsetTop > elemTop) {
            // if floating menu does not exist, we create one
            if ($(".header-secondary-float").length == false){

              $('body').append('<div id="header-secondary-float" class="header-secondary header-secondary-float"></div>');
              $('.header-secondary-float').html($('.header-secondary').html()).css('top', offsetTop).css('background', '#FFF').css('z-index', '10').show();
            }
          }
          else {
            $('.header-secondary-float').remove();
          }

        }); // scroll
      }); // once
    }, // attach

  };

})(jQuery);
