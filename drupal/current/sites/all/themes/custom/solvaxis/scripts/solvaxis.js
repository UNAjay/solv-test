(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.solvaxis = {
    attach: function(context, settings) {

      // Sticky header
      $(window).scroll(function() {
      if ($(this).scrollTop() > 0){
          $('.header-secondary').addClass( "sticky" );
        }
        else{
          $('.header-secondary').removeClass( "sticky" );
        }
      });
      
      // Collapse/expand text
      // ------------------------------------------------------------------------------------------------
      $('.not-front .group-left .field-items h5').each(function(index) {
          $(this).nextUntil('h2,h3,h4,h5').wrapAll('<div class="content-wrap"></div>');
      });

      $('.not-front .group-left .field-items h5').click(function(){
        $(this).next('.content-wrap').slideToggle( "slow", function() {
        });
        $(this).toggleClass( "collapsed" );
      });
      
      // Add class to section outer element
      $( ".section_dark" ).parent().addClass( "dark" );
      $( ".section_light" ).parent().addClass( "light" );
      $( ".node-section.transparent" ).parent().addClass( "transparent_wrapper" );
      
      // Section banners
      $( ".front .field-item" ).has( ".group-banner" ).css( {marginBottom: "-95px" } );
      $( ".not-front .field-item" ).has( ".group-banner" ).css( {marginBottom: "-95px" } ).addClass( "with-banner" );
      $( ".not-front .node-page > .region-holder" ).has( ".group-banner" ).css( {marginBottom: "-95px" } ).addClass( "with-banner" );

      // $(window, context).on('load', function(e){
      //   $('html,body').animate({
      //     scrollTop: $('html,body').offset().top
      //   });
      // });

      // Scroll to hash.
      // ------------------------------------------------------------------------------------------------

      // $(window, context).on('load hashchange', function(e){
      //   var hash = window.location.hash.substr(1);
      //   if (hash && hash.charAt(0).match(/[a-z]/i) && typeof $('.' + hash).offset() != 'undefined') {
      //     $('html,body').animate({
      //       scrollTop: $('.' + hash).offset().top - 144
      //     });
      //   }

      // });
    }
  }

})(jQuery, Drupal, this, this.document);

Drupal.behaviors.FullscreenPagesStickyNav = function (context) {
  return;
};
Drupal.behaviors.jeeves_images = function (context) {
  return;
};

(function ($) {
  Drupal.behaviors.action_colorbox = {
    attach: function (context, settings) {

      $(document).ready(function() {
        $('a.call-to-action.fill-form.external-link, a.call-to-action.download-pdf.external-link').each(function() {
          var href = $(this).attr('href');
          var title = $(this).text();
          var urlVars = getUrlVars(href)['width'];
          if (urlVars == null) {
            $(this).colorbox({title:title, iframe:true, innerWidth:455, innerHeight:450});
          }
        });
      });

    },
  }
} (jQuery));


// Read a page's GET URL variables and return them as an associative array.
function getUrlVars(url)
{
    var vars = [], hash;
    var hashes = url.slice(url.indexOf('?') + 1).split('&');
    for(var i = 0; i < hashes.length; i++)
    {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
        vars[hash[0]] = hash[1];
    }
    return vars;
}


jQuery(function($){
  // Use strict mode to avoid errors: https://developer.mozilla.org/en/JavaScript/Strict_mode
  "use strict";

  var $navButton = $('.navigate');
  var $searchButton = $('<div class="search-button"></div>');
  var $searchForm = $('#block-search-form').clone();

  $searchForm.addClass('desktop');

  $searchForm.hide();
  $('.region-header-secondary').hide();

  $('.header-secondary .region-holder').prepend($navButton, $searchButton, $searchForm);

  // toggle search
  $searchButton.click(function(){
    $searchForm.toggle();
  });

  // search utton active
  $searchButton.click(function(){
    $searchButton.toggleClass( "active" );
  });

  // header class when hidden on mobile
  $navButton.click(function(){
    $('.region-header-secondary').toggle();
    $('.region-header-secondary').toggleClass( "expanded" );
    $navButton.toggleClass( "close" );
  });


  // var hideSearch = function(){
 //    // mobile menu
 //    if ($navButton.is(':visible')) {
 //
 //      $searchForm.hide();
 //    }
 //  };
 //  $(window).resize(hideSearch);

});


/**
 * InView
 */
jQuery(function($){
  "use strict";

  $('.bg-wrapper').on('inview', function (event, isInView) {
    if (isInView) {
      $(this).addClass("inview");
    }
  });

});


/**
 * Product tour prev/next arrows
 */
jQuery(function($){
  var $anchors = $('.node-product .group-navigation li a');
  $(".node-product .group-preface .views-row.views-row").each(function(e) {
        if (e != 0)
            $(this).removeClass('visible');
    });

    $(".next").click(function(){
        if ($(".node-product .group-preface .views-row.views-row:visible").next().length != 0)
            $(".node-product .group-preface .views-row.views-row:visible").next().addClass('visible').prev().removeClass('visible');
        else {
            $(".node-product .group-preface .views-row.views-row:visible").removeClass('visible');
            $(".node-product .group-preface .views-row.views-row:first").addClass('visible');
        }
        return false;
    });

    $(".prev").click(function(){
        if ($(".node-product .group-preface .views-row.views-row:visible").prev().length != 0)
            $(".node-product .group-preface .views-row.views-row:visible").prev().addClass('visible').next().removeClass('visible');
        else {
            $(".node-product .group-preface .views-row.views-row:visible").removeClass('visible');
            $(".node-product .group-preface .views-row.views-row:last").addClass('visible');
        }
        return false;
    });
});


/**
 * Product tour - navigation
 */
jQuery(function($){
  "use strict";

  var $anchors = $('.node-product .group-navigation li a'),
  $items = $('.group-preface .views-row');

  $anchors.on('click', function() {
    var selectedIndex = $anchors.index(this);

    $anchors.removeClass('visible').eq(selectedIndex).addClass('visible');
    $items.removeClass('visible').eq(selectedIndex).addClass('visible');
  });
  
  $(".node-product .group-navigation li").click(function(){
    $('.active').removeClass('active');
    $(this).addClass('active');
    $(this).addClass('done');
    $(this).nextAll().removeClass('active done');
    $(this).prevAll().removeClass('active');
  });

  $(".node-product .group-preface .views-row.views-row-first").addClass('visible');

  $(".node-product .group-navigation li:not(.views-row-1)").click(function(){
    $(".node-product .group-preface .views-row.views-row-first").removeClass('visible');
  });
  
  // Count items in navigation and add class
  $('.node-product .group-navigation ul li').each(function (e) {
      $('.node-product .group-navigation ul').addClass('count_' + e);
  });
  
  $(".node-product .group-navigation .count_8").each(function(index) {
    $(".node-product .group-navigation li.views-row-7, .node-product .group-navigation li.views-row-8").wrapAll('<span class="ellipsis"></span>');
    $(".node-product .group-navigation li.views-row-2, .node-product .group-navigation li.views-row-3").wrapAll('<span class="ellipsis"></span>');
  });
  
  // $(".node-product .group-navigation .count_7").each(function(index) {
 //    $(".node-product .group-navigation li.views-row-6, .node-product .group-navigation li.views-row-7").wrapAll('<span class="ellipsis"></span>');
 //    $(".node-product .group-navigation li.views-row-2, .node-product .group-navigation li.views-row-3").wrapAll('<span class="ellipsis"></span>');
 //  });
 //
 //  $(".node-product .group-navigation .count_6").each(function(index) {
 //    $(".node-product .group-navigation li.views-row-5, .node-product .group-navigation li.views-row-6").wrapAll('<span class="ellipsis"></span>');
 //    $(".node-product .group-navigation li.views-row-2, .node-product .group-navigation li.views-row-3").wrapAll('<span class="ellipsis"></span>');
 //  });
 //
 //  $(".node-product .group-navigation .count_5").each(function(index) {
 //    $(".node-product .group-navigation li.views-row-3, .node-product .group-navigation li.views-row-4").wrapAll('<span class="ellipsis"></span>');
 //  });
 $(".node-product .group-navigation .ellipsis").each(function(index) {
   $(this).prev().addClass('no-line');
 });
 
});


