
// This uses Superfish 1.4.8
// (http://users.tpg.com.au/j_birch/plugins/superfish)

// Add Superfish to all Nice menus with some basic options.
(function ($) {
  $(document).ready(function() {
    $('ul.nice-menu').superfish({
      // Apply a generic hover class.
      hoverClass: 'over',
      // Disable generation of arrow mark-up.
      autoArrows: false,
      // Disable drop shadows.
      dropShadows: false,
      // Mouse delay.
      delay: Drupal.settings.nice_menus_options.delay,
      // Animation speed.
      speed: Drupal.settings.nice_menus_options.speed
    // Add in Brandon Aaron’s bgIframe plugin for IE select issues.
    // http://plugins.jquery.com/node/46/release
    }).find('ul').bgIframe({opacity:false});
    $('ul.nice-menu ul').css('display', 'none');
  });
})(jQuery);

window.onload = function() {
  if (document.all) {
    //add decreasing z-index to avoid overlapping of menu items
    var menuzindex = 1000;
    var menu = document.getElementById('nice-menu-1');
    var items = menu.getElementsByTagName('li');
    for (var i = 0; i < items.length; i++) {
         items[i].style.zIndex = menuzindex;
         menuzindex--;
    }
  }
}