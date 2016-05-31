(function ($) {

Drupal.behaviors.initColorboxDefaultStyle = {
  attach: function (context, settings) {
    /*
    $(document).bind('cbox_complete', function () {
      // Only run if there is a title.
      if ($('#cboxTitle:empty', context).length == false) {
        setTimeout(function () { $('#cboxTitle', context).slideUp() }, 1500);
        $('#cboxLoadedContent img', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideDown();
        });
        $('#cboxOverlay', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideUp();
        });
      }
      else {
        $('#cboxTitle', context).hide();
      }
    });
*/
//fix for rel vs data-rel in html spec (rel is more restrictive)
$('a[data-rel*=ucsf-images-gallery]').attr('rel','ucsf-images-gallery');

if ($('a[rel*=ucsf-images-gallery]').length > 0 ){
    $('a[rel*=ucsf-images-gallery]').colorbox({onComplete:function(){
     $("#cboxTitle").html($('#gallery-caption-' + $("#cboxTitle").html()).html());

     if ($('#cboxCaptionCtrl').length === 0) {
//       $("#cboxCurrent").after("<div id='cboxCaptionCtrl' style='float: left; display: block;'>Toggle captions</div>");
       $("#cboxCurrent").after("<button type='button' id='cboxCaptionCtrl' class='symbol' title='Toggle image captions...' style='display: block;'>c</button>");
       $("#cboxCaptionCtrl").css("cursor","pointer");
       $("#cboxCaptionCtrl").toggle(function() {
          $("#cboxContent").toggleClass( "cbox-hide-caption", true );
          //$("#cboxTitle").css("display","none");
          //$("#cboxCaptionCtrl").html("Show captions");
        }, function() {
          $("#cboxContent").toggleClass( "cbox-hide-caption", false );
          //$("#cboxTitle").css("display","block");
          //$("#cboxCaptionCtrl").html("Hide captions");
        });
     }
     if ($('#cboxTitle:empty').length === 0) {
       $("#cboxCaptionCtrl").css("display","block");
     } else {
       $("#cboxTitle:empty").css("display","none");
       $("#cboxCaptionCtrl").css("display","none");
     }
     //$("#cboxCaptionCtrl").css("float","left").css("display","block");
      //$.fn.colorbox.resize();
      //alert('cats');
      //$.fn.colorbox.position();
    }});
   }
  }
};

})(jQuery);
