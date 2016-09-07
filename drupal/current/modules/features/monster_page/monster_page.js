(function ($, Drupal, window, document, undefined) {


  Drupal.behaviors.monster_page = {
    attach: function(context, settings) {

      $('body', context).once('monster_page', function(){

        var throttleResizeMap = _.throttle(initializeMap, 200);
        $(window).resize(throttleResizeMap);

      });

      var map;
      var iconBase = Drupal.settings.basePath + 'sites/all/modules/custom/features/ventosta_getlocations_feature/markers/ventosta/';
      var latlon = Drupal.settings.embed_map;
      var myLatlng = new google.maps.LatLng(latlon.lat, latlon.lon);

      function initializeMap() {
        var mapOptions = {
          zoom: 12,
          center: new google.maps.LatLng(latlon.lat, latlon.lon),
          mapTypeId: google.maps.MapTypeId.ROADMAP,
        };
        map = new google.maps.Map(document.getElementById('map-canvas'), mapOptions);
        new google.maps.Marker({
          map:map,
          position: myLatlng
          // icon: iconBase + 'ship.png'
        });
      }
      google.maps.event.addDomListener(window, 'load', initializeMap);
    },
  };
})(jQuery, Drupal, this, this.document);



