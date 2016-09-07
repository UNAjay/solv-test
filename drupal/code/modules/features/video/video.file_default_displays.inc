<?php
/**
 * @file
 * video.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function video_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_media_large_icon';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_media_large_icon';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__default__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $export['image__preview__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $export['image__teaser__file_field_image'] = $file_display;

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
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_rendered';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'full',
  );
  $export['video__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = -50;
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
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_image';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['video__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_image';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__default__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_direct_download';
  $file_display->weight = -34;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_direct_download_accessible';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_direct_download_accessible_icon';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_direct_download_icon';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_default';
  $file_display->weight = -38;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__full__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_rendered';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'full',
  );
  $export['video__full__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_table';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_file_url_plain';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_html5_player';
  $file_display->weight = -36;
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
  $export['video__full__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_media_large_icon';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__full__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_field_mediafront_player';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__full__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__file_image';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['video__full__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_vimeo_image';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__full__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_vimeo_video';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__full__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_image';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__full__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__media_youtube_video';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
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
  $export['video__full__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__full__mediafront_file_player';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__full__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_direct_download';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_direct_download'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_direct_download_accessible';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_direct_download_accessible'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_direct_download_accessible_icon';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_direct_download_accessible_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_direct_download_icon';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_direct_download_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_default';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_rendered';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'full',
  );
  $export['video__preview__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_table';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_url_plain';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_html5_player';
  $file_display->weight = -34;
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
  $export['video__preview__file_field_html5_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_media_large_icon';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_mediafront_player';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_image';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['video__preview__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_vimeo_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__preview__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_vimeo_video';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__preview__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_youtube_video';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
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
  $export['video__preview__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__mediafront_file_player';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'mini',
  );
  $export['video__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__teaser__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:field_file_image_alt_text]',
    'title' => '[file:field_file_image_title_text]',
  );
  $export['video__teaser__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__teaser__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__teaser__media_vimeo_video'] = $file_display;

  return $export;
}
