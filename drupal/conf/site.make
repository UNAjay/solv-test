; Core compatibility
; ---------
core = 7.x
api = 2

; Drupal
; ---------
projects[drupal][type] = core
projects[drupal][version] = 7.43

; Contrib projects
; ---------

defaults[projects][subdir] = contrib

projects[i18n][version] = "1.13"
projects[variable][version] = "2.5"
projects[lang_dropdown][version] = "1.5"
;projects[i10n][version] = "1.0-beta3"
;projects[potx][version] = "1.0"
projects[l10n_client][version] = "1.3"

projects[language_access][version] = "1.01"

projects[admin_menu][version] = '3.0-rc5'
projects[devel][version] = "1.5"
projects[ctools][version] = "1.7"
projects[views][version] = "3.13"
projects[features][version] = "2.5"
projects[features_extra][version] = "1.0-beta1"
projects[strongarm][version] = "2.0"
projects[ds][version] = "2.8"
projects[panels][version] = "3.5"
projects[pathauto][version] = "1.2"
projects[pathauto][patch][] = https://www.drupal.org/files/issues/existing_alias_data_check-2316429.patch
projects[token][version] = "1.6"
projects[better_exposed_filters][version] = "3.2"
projects[link][version] = "1.2"
projects[context][version] = "3.6"
projects[context_condition_theme][version] = "1.0"

projects[config_perms][version] = "2.1"

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][revision] = 949039351d71d24d60faee4f63c6527e54761ee1

projects[libraries][version] = "2.2"
projects[imce][version] = "1.9"
projects[imce_wysiwyg][version] = "1.0"

projects[linkit][version] = 3.3

projects[pathologic][version] = 3.0-beta2

projects[navigation404][version] = "1.0"
projects[menu_trail_by_path][version] = "2.0"
projects[node_menu_permissions][version] = "1.0"
projects[filefield_sources][version] = "1.9"
projects[role_delegation][version] = "1.1"
projects[admin_theme][version] = "1.0"
projects[maxlength][version] = "3.x-dev"
projects[maxlength][revision] = "8db419b822a21027bc0935d1ff3d4bf44ba2a0ae"
projects[view_unpublished][version] = "1.x-dev"
projects[view_unpublished][revision] = "e9df1d3f33b93410bb62e65f70981286db2007bd"
projects[eva][version] = "1.x-dev"
projects[eva][revision] = "579823151e247cc24de34b4d929bb5d7a45d8e0d"
projects[email][version] = "1.3"
; projects[eck][version] = "2.0-rc4"
; projects[eck][patch][] = https://www.drupal.org/files/issues/eck-entity_translation_integration-1798646-47.patch

projects[node_clone][version] = "1.x-dev"
projects[node_clone][revision] = "b308e75eb42a81769a6d7269d8b1979c14f26b5c"
projects[node_clone_tab][version] = "1.1"

projects[field_tools][version] = "1.0-alpha7"
projects[field_tools][patch][] = https://www.drupal.org/files/issues/display-settings-across-bundles-2032735-22.patch
projects[field_tools][patch][] = https://www.drupal.org/files/issues/field_tools-fieldgroup-update-1352162_0.patch

; fix term pages, remove pager
projects[taxonomy_display][version] = "1.1"

projects[field_group][version] = "1.5"
projects[views_arguments_extras][version] = "1.0-beta1"
projects[views_data_export][version] = "3.0-beta7"

projects[menu_block][version] = "2.7"

projects[entityreference][version] = "1.1"
; issue where entity is displayed in english instead of referenced language. https://drupal.org/node/1674792 comment 30
projects[entityreference][patch][] = "https://drupal.org/files/issues/entityreference-rendered-entity-is-not-language-aware-1674792-30.patch"

; Needed to get Sections referencing Page node
projects[entityreference_backreference][version] = 1.0-beta3
projects[entityreference_backreference][subdir] = contrib

projects[override_node_options][version] = "1.13"

projects[countries][version] = "2.3"
projects[entity][version] = "1.6"

projects[file_entity][version] = 2.0-beta2
; projects[file_entity][patch][2192391] = https://www.drupal.org/files/issues/default_file_entities-2192391-51.patch
projects[file_entity][patch][2312603] = https://www.drupal.org/files/issues/fix_entity_api_create_access-2312603-8.patch

projects[inline_entity_form][version] = "1.6"
; projects[inline_entity_form][patch][] = https://www.drupal.org/files/issues/entity-translations-1545896-55.patch
projects[inline_entity_form][patch][] = https://www.drupal.org/files/issues/d7_ief_et_autogenerate_title.patch

projects[media][version] = 2.0-beta1
projects[media][patch][] = https://www.drupal.org/files/issues/media_remove_file_display_alter-2104193-100.patchf.diff

projects[media_youtube][version] = 3.0

projects[media_vimeo][version] = "2.x-dev"
projects[media_vimeo][revision] = "0841d8eb8982d6fe007316fbc43bdfb2402c05ab"

projects[fitvids][version] = "1.17"

projects[focal_point][version] = 1.x-dev
projects[focal_point][subdir] = contrib
projects[focal_point][revision] = 0fe8db00de4c3ada962b8816cc6ac906a3f8f417

projects[mediafront][version] = "2.2"
projects[html5_media][version] = "1.1"

projects[bg_image][version] = 1.4
projects[bg_image_formatter][version] = 1.4

projects[module_filter][version] = "2.0"
projects[taxonomy_menu][version] = "1.5"
projects[ckeditor_styles][version] = "1.0-alpha1"

projects[apachesolr][version] = "1.3"
; project has dev release only
projects[apachesolr_term][version] = "1.x-dev"
projects[apachesolr_term][revision] = "8f6b67e7f8bceab30db5adb210ddbac62b3ee35f"
; project has dev release only
projects[apachesolr_user][version] = "1.x-dev"
projects[apachesolr_user][revision] = "a86c5aebfceaf4a3fc53544762a36ca1b70809d5"
projects[apachesolr_multilingual][version] = "1.0-beta1"
projects[facetapi][version] = "1.5"
projects[apachesolr_panels][version] = "1.1"

; Search API
projects[search_api][version] = "1.12"
projects[search_api_solr][version] = "1.5"
projects[search_api_page][version] = "1.1"
projects[search_api_override][version] = "1.0-rc1"
projects[search_api_et][version] = "2.x-dev"
projects[search_api_et][revision] = "a56f5273bc4cef18ebac797a9f04410224601d2f"
projects[search_api_et_solr][version] = "1.x-dev"
projects[search_api_et_solr][revision] = "ad701b9aeb60ce87f55121b18453f8a38527837a"


projects[tagclouds][version] = "1.9"
projects[addthis][version] = "4.0-alpha2"

; projects[cer][version] = "3.0-alpha5"
; projects[cer][version] = "2.x-dev"
projects[hierarchical_select][version] = "3.0-alpha6"

projects[cs_adaptive_image][version] = "1.0"
projects[transliteration][version] = "3.2"

projects[imagecache_actions][version] = "1.5"

; SEO
projects[hreflang][version] = 1.1
projects[xmlsitemap][version] = 2.0

projects[l10n_update][version] = "1.0"
projects[potx][version] = "1.0"
projects[i18nviews][version] = "3.x-dev"
projects[i18nviews][revision] = "27e98096013f030b0b33e37806685e83deb95bfe"
; fallback for un-translatable content
projects[entity_translation][version] = "1.0-beta4"
projects[entity_translation][patch][] = https://www.drupal.org/files/issues/entity_services-2485525.patch
; projects[entity_translation][patch][] = https://drupal.org/files/entity_translation-expose_translations_to_views-beta2-1605406-23.patch

; projects[workbench][version] = "1.2"
; projects[workbench_moderation][version] = "1.3"
projects[tmgmt][version] = "1.x-dev"
projects[tmgmt][revision] = "0d1f88ee21a3354d9fcb11eb7b377d915f45b378"
projects[views_bulk_operations][version] = "3.2"
projects[table_element][version] = "1.0-beta1"

projects[taxonomy_access_fix][version] = "2.1"


projects[rules][version] = "2.9"
projects[message][version] = "1.x-dev"
projects[message][revision] = "3bbdd5e62c56014c581c19f415a9ac0a3e3a824c"
projects[message_notify][version] = "2.x-dev"
projects[message_notify][revision] = "7247ec2f850c4d0a5095a857dab1dbe44583375d"

projects[flippy][version] = "1.4"

; Maps
projects[geofield][version] = "2.3"
projects[geophp][version] = "1.7"
projects[geocoder][version] = "1.2"


projects[title][version] = "1.0-alpha8"
projects[page_title][version] = "2.7"

; projects[webform][version] = "3.19"
projects[flexslider][version] = "2.0-alpha3"

projects[colorbox][version] = "2.8"
projects[colorbox_node][version] = "3.0"
projects[download_file][version] = "1.1"
; projects[webform_ajax][version] = "1.1"
projects[node_clone][version] = "1.0-rc1"

projects[date][version] = "2.8"
projects[metatag][version] = "1.5"
projects[menu_position][version] = "1.1"

projects[google_analytics][version] = "1.4"
projects[tracking_code][version] = "1.6"

projects[better_formats][version] = 1.x-dev
projects[better_formats][subdir] = contrib
projects[better_formats][revision] = 3b4a8c92b317add4e218216a002b2bc777fbc736


; Development
projects[diff][version] = "3.2"

projects[markdown][version] = "1.2"

; Deployment
projects[uuid][version] = "1.x-dev"
projects[uuid][revision] = "a7bf2dbeb323a587a831238fa977a604920d256c"

projects[uuid_features][version] = "1.0-alpha4"
projects[deploy][version] = "2.0-alpha2"
projects[services][version] = "3.12"
projects[entity_dependency][version] = "1.x-dev"
projects[entity_dependency][revision] = "f20eb2945f880736b00c82d8a2b70fe29ef3c93d"
projects[deploy_services_client][version] = "1.0-beta2"


; image cropping
projects[imagefield_focus][version] = "1.0"
projects[smartcrop][version] = "1.0-beta2"

; field collection for landing pages
projects[field_collection][version] = "1.x-dev"
projects[field_collection][revision] = "ae778f23f8e0968fa3a10a727c6e26c6e63309a0"
projects[field_collection][patch][] = https://drupal.org/files/issues/field_collection-field_collection_uuid-2075325-3.patch
projects[field_collection_tabs][version] = "1.1"

; old news import
projects[feeds][version] = "2.x-dev"
projects[feeds][revision] = "3fa9752f685e8be2f039d7385d7da56babd2c4af"
projects[job_scheduler][version] = "2.0-alpha3"
projects[feeds_tamper][version] = "1.0-beta5"
projects[feeds_xpathparser][version] = "1.0-beta4"
;projects[feeds_querypath_parser][version] = "1.0-beta1"
;projects[querypath][version] = "7.x-2.1"

; for future. chosen. and it needs jquery_update.
projects[chosen][version] = "2.0-alpha4"
projects[jquery_update][version] = "2.6"

; sitemap
projects[site_map][version] = "1.0"

; global redirect to redirect away from node/xxx to alias
projects[globalredirect][version] = "1.5"
projects[redirect][version] = "1.0-rc1"

; backup site, we need this to get more actual copy from swe hosting
projects[backup_migrate][version] = "2.8"
projects[backup_migrate_files][version] = "1.x-dev"
projects[backup_migrate_files][revision] = "51562f652b6935ce005dddddd2529b4f7392998e"
projects[backup_migrate_sftp][version] = "1.0"

; stage file proxt for swe staging
projects[stage_file_proxy][version] = "1.7"


; Issues
; 1.6 (2013-Mar-17) wouldn't save term linage, dev (2013-May-25) works
; Drush 4.5 had problems finding shs and project type. Using git to download instead.
projects[shs][type] = module
projects[shs][download][type] = git
projects[shs][download][revision] = ee6f612914764a4e6f48494d44c2c8325b896ca5

projects[viewfield][version] = 2.0
projects[viewreference][version] = 3.5
projects[insert_block][version] = 1.x-dev
projects[insert_block][subdir] = contrib
projects[insert_block][revision] = be4314aef56af4b6bdf78d2f18e005c959d8cdd9

projects[views_selective_filters][version] = 1.4

projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib

projects[view_mode_selector][version] = 1.x-dev
projects[view_mode_selector][subdir] = contrib
projects[view_mode_selector][revision] = 2e299d1be927e0181b4dfe3b330ddf1403e74efa

projects[views_load_more][version] = 1.x-dev
projects[views_load_more][revision] = 04c3555847237e2ba6409b25a7a8cbee4d59f3b5
projects[views_load_more][patch][] = https://www.drupal.org/files/issues/views_load_more-grouping-1475642-6.patch

projects[tagadelic][version] = "2.x-dev"
projects[tagadelic][revision] = 26cf4681830770aa6a2700f3e1913d7c270afcab

projects[tagadelic_views][version] = "2.x-dev"
projects[tagadelic_views][revision] = 1c40767d25df956f9f6c19c926b0cd2f56725580

projects[draggableviews][version] = 2.1

projects[optimizely][version] = 2.18

projects[advagg][version] = 2.17

projects[devdocs][type] = module
projects[devdocs][download][type] = git
projects[devdocs][download][url] = "https://gitlab.com/cbones/devdocs.git"
projects[devdocs][download][branch] = "7.x-1.x"

; Libraries
; ---------

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][destination] = "libraries"

libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = https://github.com/ckeditor/ckeditor-releases/archive/full/4.5.1.zip
libraries[ckeditor][destination] = libraries

libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[flexslider][destination] = "libraries"

libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/1.0.0/chosen_v1.0.0.zip"
libraries[chosen][destination] = "libraries"

libraries[spyc][download][type] = "get"
libraries[spyc][download][url] = "https://github.com/mustangostang/spyc/archive/master.zip"
libraries[spyc][destination] = "libraries"

libraries[fitvids][download][type] = "file"
libraries[fitvids][download][url] = "https://github.com/davatron5000/FitVids.js/archive/master.zip"
libraries[fitvids][destination] = "libraries"

libraries[inview][download][type] = "file"
libraries[inview][download][url] = "https://github.com/protonet/jquery.inview/archive/master.zip"
libraries[inview][destination] = "libraries"


