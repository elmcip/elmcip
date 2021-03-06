<?php

/**
 * @file
 * elmcip_layout.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function elmcip_layout_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'all_tags_pane';
  $content->admin_title = 'Browse';
  $content->admin_description = 'Link to all tags';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'body' => 'See all tags used in the Knowledge Base by <a href="/knowledgebase/all_tags_frequency">frequency</a> or <a href="/knowledgebase/all_tags">alphabetically</a>.
See the latest <a href="/video_index">videos and multimedia</a> content in Knowledge Base.',
    'format' => '1',
    'substitute' => 1,
    'title' => 'Browse',
  );
  $export['all_tags_pane'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'contribute_pane';
  $content->admin_title = 'contribute_pane';
  $content->admin_description = 'pane with links to all knowledge base content type add forms.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'contribute_pane',
    'body' => '<p>The ELMCIP Knowledge Base is a research resource for electronic literature and it is open for new contributions and submissions.&nbsp;Add a new <a href="/node/add/person" target="_blank">author</a>, <a href="/node/add/work" target="_blank"> creative work</a>, <a href="/node/add/critical-writing" target="_blank">critical writing</a>, <a href="/node/add/platform-software" target="_blank">platform/software</a>, <a href="/node/add/event" target="_blank">event</a>, <a href="/node/add/organization" target="_blank">organization</a>, <a href="/node/add/publisher" target="_blank">publisher</a>, <a href="http://elmcip.net/node/add/databases-and-archives" target="_blank">database or archive</a>, or&nbsp;<a href="/node/add/teaching-resource" target="_blank">teaching resource</a>. You may also add a new <a href="/node/add/research-collection" target="_blank">research collection</a> of resources addressing a specific topic within the Knowledge Base. To prevent duplicate records, before you enter a new author or record, please be sure to <a href="/search" target="_blank">search the knowledge base</a> to see if it is already there.&nbsp;When you are done editing the Knowledge Base, remember to <a href="/logout">Logout</a>. The Knowledge Base is developed in Drupal 7 by the University of Bergen Electronic Literature Research Group as an outcome of the ELMCIP project. Please report bugs and feature requests by emailing kb_editor@elmcip.net or by visiting https://github.com/elmcip/elmcip/issues.</p>',
    'format' => 'basic_text_editor',
    'substitute' => 1,
    'title' => 'Contribute to the Knowledge Base',
    'title_heading' => 'h2',
  );
  $export['contribute_pane'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'contribute_pane_non_contrib';
  $content->admin_title = 'contribute_pane for noncontributors';
  $content->admin_description = 'Pane to encourage people to sign up as contributors';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'contribute_pane',
    'body' => '<p>The ELMCIP Knowledge Base is a research resource for electronic literature and it is open for new contributions and submissions.&nbsp;It provides cross-referenced, contextualized information about authors, creative works, critical writing, platforms, and practices. Current contributors should <a href="/user">log in</a> to the knowledge base to enter new records.</p><p>The ELMCIP Knowledge Base depends on the active participation of a community of international researchers and writers working on electronic literature. To join us in building the Knowledge Base, <a href="https://skjemaker.app.uib.no/view.php?id=9418367">sign up for an account</a> we can set you up with a contributor account to add and edit records. The Knowledge Base is developed in Drupal 7 by the University of Bergen Electronic Literature Research Group as an outcome of the ELMCIP project.</p>',
    'format' => 'basic_text_editor',
    'substitute' => 1,
    'title' => 'Contribute to the Knowledge Base',
    'title_heading' => 'h2',
  );
  $export['contribute_pane_non_contrib'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'user_profile_dashboard';
  $content->admin_title = 'User Dashboard';
  $content->admin_description = 'pane with links to all knowledge base content type add forms and browse links.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'contribute_pane',
    'body' => '<ul><li>Add new <a href="/node/add/person" target="_blank">author</a>, <a href="/node/add/work" target="_blank"> creative work</a>, <a href="/node/add/critical-writing" target="_blank">critical writing</a>, <a href="/node/add/event" target="_blank">event</a>, <a href="/node/add/organization" target="_blank">organization</a>, <a href="/node/add/publisher" target="_blank">publisher</a>, <a href="http://elmcip.net/node/add/databases-and-archives">database or archive</a>, or&nbsp;<a href="/node/add/teaching_resource" target="_blank">teaching resource</a> record to the knowledge base.</li><li>Add a new <a href="/node/add/notebook" target="_blank">notebook</a> or <a href="/node/add/notebook-entry">notebook entry</a> in an existing notebook.</li><li>You may also add a new public <a href="http://elmcip.net/node/add/research-collection" target="_blank">research collection</a> of resources addressing a specific topic within the Knowledge Base.</li><li><a href="/search" target="_blank">Search the knowledge base</a> or browse: <a href="/knowledgebase" target="_blank">all</a>, <a href="/author" target="_blank">authors</a>, <a href="/work" target="_blank">creative works</a>, <a href="/critical_writing" target="_blank">critical writing</a>, <a href="/event" target="_blank">events</a>, <a href="/organization" target="_blank">organizations</a>, <a href="/publisher" target="_blank">publishers</a>, <a href="/teaching_resource" target="_blank">teaching resources.</a></li></ul>',
    'format' => '2',
    'substitute' => 1,
    'title' => 'User Dashboard',
    'title_heading' => 'h2',
  );
  $export['user_profile_dashboard'] = $content;

  return $export;
}
