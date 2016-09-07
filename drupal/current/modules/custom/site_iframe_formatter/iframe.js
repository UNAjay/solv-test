// var _jpd = (window.domain != document.referrer) ? _jpgh(document.referrer): document.domain;

// // append css file to page
// var style   = document.createElement( 'link' );
// style.rel   = 'stylesheet';
// style.type  = 'text/css';
// style.href  = 'http://' + _jpd + '/sites/all/modules/custom/site_iframe_formatter/iframe.css';
// document.getElementsByTagName( 'head' )[0].appendChild( style );

// append css file to page
var style   = document.createElement( 'link' );
style.rel   = 'stylesheet';
style.type  = 'text/css';
style.href  = 'http://www.jeeveserp.com/sites/all/modules/custom/site_iframe_formatter/iframe.css';
document.getElementsByTagName( 'head' )[0].appendChild( style );


// post messages from iframe
parentDocHeight = getDocHeight();

var resizeParentFrame = function() {

  var docHeight = getDocHeight();
  if (docHeight != parentDocHeight) {

    parentDocHeight = docHeight;
    // There is no need to filter this to specific domains, since the data is
    // not sensitive, so just send it everywhere.
    window.parent.postMessage('{"action":"RESIZE", "height":' + parentDocHeight + ', "url": "' + window.location.href + '" }', "*");
  }

};

// Check frequently to see if we need to resize again.
setInterval(resizeParentFrame, 250);

// Function for getting document height
function getDocHeight() {
  var D = document;
  return Math.max(
    D.body.scrollHeight, D.documentElement.scrollHeight,
    D.body.offsetHeight, D.documentElement.offsetHeight,
    D.body.clientHeight, D.documentElement.clientHeight
  );
}

// function _jpgh(u){var a=document.createElement('a');a.href=u;return a.hostname;}
