<?php
/**
 * @file
 * svg_inline.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function svg_inline_filter_default_formats() {
  $formats = array();

  // Exported format: SVG inline.
  $formats['svg_inline'] = array(
    'format' => 'svg_inline',
    'name' => 'SVG inline',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <altGlyph> <altGlyphDef> <altGlyphItem> <animate> <animateColor> <animateMotion> <animateTransform> <circle> <clipPath> <color-profile> <cursor> <definition-src> <defs> <desc> <ellipse> <feBlend> <feColorMatrix> <feComponentTransfer> <feComposite> <feConvolveMatrix> <feDiffuseLighting> <feDisplacementMap> <feDistantLight> <feFlood> <feFuncA> <feFuncB> <feFuncG> <feFuncR> <feGaussianBlur> <feImage> <feMerge> <feMergeNode> <feMorphology> <feOffset> <fePointLight> <feSpecularLighting> <feSpotLight> <feTile> <feTurbulence> <filter> <font> <font-face> <font-face-format> <font-face-name> <font-face-src> <font-face-uri> <foreignObject> <g> <glyph> <glyphRef> <hkern> <image> <line> <linearGradient> <marker> <mask> <metadata> <missing-glyph> <mpath> <path> <pattern> <polygon> <polyline> <radialGradient> <rect> <script> <set> <stop> <style> <svg> <switch> <symbol> <text> <textPath> <title> <tref> <tspan> <use> <view> <vkern>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'svg_inline_href' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
