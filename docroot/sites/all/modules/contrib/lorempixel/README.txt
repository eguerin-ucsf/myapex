 INTRODUCTION
 ============
 
  Lorempixel
  This is a simple module that lets you generate many images at once 
  (like devel generate) and the images are created/fetched from the awesome 
  image web service at lorempixel.com.

  You can now use this with Devel generate for images if you use the latest 
  7.x-1.x-dev branch of Devel. And with this patch http://drupal.org/node/1589056#comment-6013772 
  you can use it with file fields with media widget as well.

 See http://drupal.org/project/lorempixel for more information
 
 
 INSTALLATION
 ============
 
  1. Install and configure the dependencies. Check their README files for
   details.
  2. Install and enable the lorempixel module.
  3. Goto: admin/config/development/generate/lorempixel and
  4. a) Create file entities with images directly
  4. b) Check the checkbox "Use lorempixel with Devel generate" if you want to use it with Devel generate.

 
 OPTIONAL DEPENDENCIES
 ============
 
  Lorempixel can be used without any other module. However if you would like to use it
  together with Devel generate you will need the folowing modules:
 
  *  Devel
  *  Devel generate (part of devel)

 
 CONFIGURATION
 =============
  1. Goto: admin/config/development/generate/lorempixel
  2. You can set values for min and max images sizes, color och greyscale images, 
     categories and how many to generate.

 
 MAINTAINERS
 ===========
 
  *  anon <http://drupal.org/user/464598>
  *  bobodrone <http://drupal.org/user/398315>
