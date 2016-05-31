# How to use this Sub Theme

Main theme is built with SASS/COMPASS. If you do not know how to setup or don't wish to do that. Can just ignore
and use your css files as normal. 

The best way to use this theme would be to copy the existing themes sass and css folders to this one and
continue building off them. 

  1. Copy this STARTER_SUBTHEME to the themes folder
  2. Rename STARTER_SUBTHEME and all references to it in your theme to your theme name
  3. at this point you need to choose to go either with SASS/COMPASS which is setup here or CSS If you choose

## Using SASS/COMPASS

  1. Point your compass to this project and rename your files as nomral. Make sure to change the **STARTER_SUBTHEME.scss_** to **yourtheme.scss**
  2. if your starting from scratch, just need to do the previous step and move on.
  3. If you want to inherit/change original/global layout, copy the  contents of the SASS folder from the main theme to your new theme SASS folder. The variables and mixins are all in there and tie into the system.


## Some CSS if your not using SASS

If you plan to use the SASS, just copy the entire SASS directory to this directory as
it ties together with all the variables. The list of code below isn't the full solution
to working with the CSS but it should provide some elements to work with that are the main
stand outs of the design.


### Announcement Block on home page
    .panel-pane.pane-announcements-panel-pane-announcements {
      padding: 10px 30px 30px;
      background: transparent url("../images/bg-announcement.png") no-repeat 0 0;
    }

### Spotlight
    @media screen and (min-width: 480px) {
      .flex-nav-container .flexslider::after {
        background: transparent url("../images/flare-spotlight.png") no-repeat -160px -157px;
      }
    }

### Subtle Spotlight
    @media screen and (min-width: 480px) {
      .view-display-id-subtle_spotlight .flex-nav-container .flexslider::after {
        background: none;
      }	
    }
 
### Header Flare 
    #header #search {
      position: absolute;
      right: 0;
      top: -30px;
      padding-top: 30px;
      display: block;
      background: transparent url("../images/bg-abstract-1.png") no-repeat 54px -86px;
      height: 90px;
      width: 340px;
    }

### Footer Flare
    #footer-wrapper #footer #make-a-gift a {
      display: block;
      overflow: hidden;
      background: transparent url("../images/bg-abstract-footer.png") no-repeat top left;
      width: 294px;
      height: 130px;
      white-space: nowrap;
      text-indent: 100%;
    }

### Link List with Gradients as shown on home page 
    .pane-float-left-fifty.pane-bundle-quick-links .item-list ul li {
      list-style: none;
      margin: 0 0 10px 0;
      padding: 0 1em 0 0;
      position: relative;
      background: -webkit-gradient(linear, 0% 50%, 100% 50%, color-stop(0%, white), color-stop(100%, #EAEAE4));
      background: -webkit-linear-gradient(left, white, #EAEAE4);
         background: -moz-linear-gradient(left, white, #EAEAE4);
           background: -o-linear-gradient(left, white, #EAEAE4);
              background: linear-gradient(left, white, #EAEAE4);
    }
    .pane-float-left-fifty.pane-bundle-quick-links .item-list ul li:hover {
      background: -webkit-gradient(linear, 0% 50%, 100% 50%, color-stop(0%, white), color-stop(100%, #6EA5DB));
      background: -webkit-linear-gradient(left, white, #6EA5DB);
         background: -moz-linear-gradient(left, white, #6EA5DB);
           background: -o-linear-gradient(left, white, #6EA5DB);
              background: linear-gradient(left, white, #6EA5DB);
    }

















