<?php
/**
 * @file
 * jeeves_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function jeeves_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__content__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_cs_adaptive_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '',
      'style_1' => '',
      'breakpoint_2' => '',
      'style_2' => '',
      'breakpoint_3' => '',
      'style_3' => '',
      'breakpoint_4' => '',
      'style_4' => '',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => '',
      'fallback_style' => '',
    ),
  );
  $export['image__content__file_field_cs_adaptive_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__content__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__content__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_flexslider';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'optionset' => 'default',
    'image_style' => '',
    'caption' => 0,
  );
  $export['image__content__file_field_flexslider'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['image__content__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $export['image__content__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__content__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__content__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__content__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__content__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__logo__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_cs_adaptive_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '',
      'style_1' => '',
      'breakpoint_2' => '',
      'style_2' => '',
      'breakpoint_3' => '',
      'style_3' => '',
      'breakpoint_4' => '',
      'style_4' => '',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => '',
      'fallback_style' => '',
    ),
  );
  $export['image__logo__file_field_cs_adaptive_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__logo__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__logo__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_flexslider';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'optionset' => 'default',
    'image_style' => '',
    'caption' => 0,
  );
  $export['image__logo__file_field_flexslider'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['image__logo__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'partner_logo',
    'image_link' => '',
  );
  $export['image__logo__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__logo__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__logo__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__logo__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__logo__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => '',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__wysiwyg__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_cs_adaptive_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '',
      'style_1' => '',
      'breakpoint_2' => '',
      'style_2' => '',
      'breakpoint_3' => '',
      'style_3' => '',
      'breakpoint_4' => '',
      'style_4' => '',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => '',
      'fallback_style' => '',
    ),
  );
  $export['image__wysiwyg__file_field_cs_adaptive_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_flexslider';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'optionset' => 'default',
    'image_style' => '',
    'caption' => 0,
  );
  $export['image__wysiwyg__file_field_flexslider'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['image__wysiwyg__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $export['image__wysiwyg__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['image__wysiwyg__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__content__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__content__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__content__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['video__content__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__content__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__content__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__content__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__content__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__content__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__content__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__content__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__content__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['video__default__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_media_large_icon';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_direct_download';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_direct_download_accessible';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_direct_download_accessible_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_direct_download_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__wysiwyg__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__wysiwyg__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_html5_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'template' => 'default',
    'preload' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '100%',
    'height' => '400px',
    'volume' => '80',
    'sources' => 0,
    'debug' => 0,
  );
  $export['video__wysiwyg__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__wysiwyg__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__wysiwyg__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__wysiwyg__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
    'color' => '',
    'protocol_specify' => 0,
    'protocol' => 'https://',
    'autoplay' => 0,
    'loop' => 0,
    'title' => 1,
    'byline' => 1,
    'portrait' => 1,
    'api' => 0,
  );
  $export['video__wysiwyg__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__wysiwyg__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__wysiwyg__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__wysiwyg__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => '',
  );
  $export['video__wysiwyg__mediafront_file_player'] = $file_display;

  return $export;
}
