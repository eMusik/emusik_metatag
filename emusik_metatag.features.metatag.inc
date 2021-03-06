<?php
/**
 * @file
 * emusik_metatag.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function emusik_metatag_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_campaign.
  $config['node:ding_campaign'] = array(
    'instance' => 'node:ding_campaign',
    'config' => array(
      'description' => array(
        'value' => '[node:field_camp_text_plain]',
      ),
      'og:image' => array(
        'value' => '[node:field_camp_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_event.
  $config['node:ding_event'] = array(
    'instance' => 'node:ding_event',
    'config' => array(
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_news.
  $config['node:ding_news'] = array(
    'instance' => 'node:ding_news',
    'config' => array(
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_main_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_page.
  $config['node:ding_page'] = array(
    'instance' => 'node:ding_page',
    'config' => array(
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:emusik_playlist.
  $config['node:emusik_playlist'] = array(
    'instance' => 'node:emusik_playlist',
    'config' => array(
      'og:image' => array(
        'value' => '[node:field_playlist_image]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
    ),
  );

  return $config;
}
