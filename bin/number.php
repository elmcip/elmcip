<?php

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'platform_software')
  ->fieldCondition('field_number');

$result = $query->execute();
$news_items_nids = array_keys($result['node']);

foreach ($news_items_nids as $nid) {
  $platform_entity = entity_metadata_wrapper('node', $nid);
  $year = strtotime($platform_entity->field_number->value() . '-01');
  $date = $platform_entity->field_platform_year->value();
  if ($year) {
    $platform_entity->field_platform_year->set($year);
    $platform_entity->save();
    print("Updated node: $nid \n");
  }
}

// Let's remove field.
$fields = array('field_number');
foreach ($fields as $field) {
  $instance = field_info_instance('node', $field, 'platform_software');
  field_delete_instance($instance, TRUE);
  field_purge_batch(100);
}
