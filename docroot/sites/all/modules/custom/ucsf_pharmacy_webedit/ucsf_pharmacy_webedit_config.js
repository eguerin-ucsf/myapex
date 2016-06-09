/**
 * @license Copyright (c) 2003-2012, CKSource - Frederico Knabben. All rights reserved.
 * For licensing, see LICENSE.html or http://ckeditor.com/license
 */

CKEDITOR.editorConfig = function( config ) {
  // Define changes to default configuration here. For example:
  // config.language = 'fr';
  // config.uiColor = '#AADC6E';
//  config.extraPlugins = 'devtools';
  console.log(JSON.stringify(config));
  var webeditPath = config.customConfig.replace(/_pharmacy_webedit/g,"_webedit");
  config.customConfig = webeditPath;

};


CKEDITOR.on('dialogDefinition', function( ev ) {
  var dialogName = ev.data.name;
  var dialogDefinition = ev.data.definition;

  if ( dialogName == 'link' )
  {
     // Remove the 'Link' and 'Advanced' tabs from the 'Image' dialog.
     dialogDefinition.removeContents( 'target' );
    
  /*
     // Get a reference to the 'Image Info' tab.
     var infoTab = dialogDefinition.getContents( 'advanced' );
    
     // Remove unnecessary widgets/elements from the 'Image Info' tab.   
     infoTab.remove( 'txtHSpace');
     infoTab.remove( 'txtVSpace');
  */
  }


});