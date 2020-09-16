<?php

/**
 * @file
 * elmcip_field_instances.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function elmcip_field_instances_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_auth_email'.
  $permissions['create field_auth_email'] = array(
    'name' => 'create field_auth_email',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_editorial_notes'.
  $permissions['create field_editorial_notes'] = array(
    'name' => 'create field_editorial_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_record_status_lib'.
  $permissions['create field_record_status_lib'] = array(
    'name' => 'create field_record_status_lib',
    'roles' => array(
      'Librarian' => 'Librarian',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_record_status_tax'.
  $permissions['create field_record_status_tax'] = array(
    'name' => 'create field_record_status_tax',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_students'.
  $permissions['create field_students'] = array(
    'name' => 'create field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_teacher_link'.
  $permissions['create field_teacher_link'] = array(
    'name' => 'create field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_your_notes'.
  $permissions['create field_your_notes'] = array(
    'name' => 'create field_your_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_auth_email'.
  $permissions['edit field_auth_email'] = array(
    'name' => 'edit field_auth_email',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_editorial_notes'.
  $permissions['edit field_editorial_notes'] = array(
    'name' => 'edit field_editorial_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_record_status_lib'.
  $permissions['edit field_record_status_lib'] = array(
    'name' => 'edit field_record_status_lib',
    'roles' => array(
      'Librarian' => 'Librarian',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_record_status_tax'.
  $permissions['edit field_record_status_tax'] = array(
    'name' => 'edit field_record_status_tax',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_students'.
  $permissions['edit field_students'] = array(
    'name' => 'edit field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_teacher_link'.
  $permissions['edit field_teacher_link'] = array(
    'name' => 'edit field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_your_notes'.
  $permissions['edit field_your_notes'] = array(
    'name' => 'edit field_your_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_auth_email'.
  $permissions['edit own field_auth_email'] = array(
    'name' => 'edit own field_auth_email',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_editorial_notes'.
  $permissions['edit own field_editorial_notes'] = array(
    'name' => 'edit own field_editorial_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_record_status_lib'.
  $permissions['edit own field_record_status_lib'] = array(
    'name' => 'edit own field_record_status_lib',
    'roles' => array(
      'Librarian' => 'Librarian',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_record_status_tax'.
  $permissions['edit own field_record_status_tax'] = array(
    'name' => 'edit own field_record_status_tax',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_students'.
  $permissions['edit own field_students'] = array(
    'name' => 'edit own field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_teacher_link'.
  $permissions['edit own field_teacher_link'] = array(
    'name' => 'edit own field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_your_notes'.
  $permissions['edit own field_your_notes'] = array(
    'name' => 'edit own field_your_notes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_auth_email'.
  $permissions['view field_auth_email'] = array(
    'name' => 'view field_auth_email',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_editorial_notes'.
  $permissions['view field_editorial_notes'] = array(
    'name' => 'view field_editorial_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_record_status_lib'.
  $permissions['view field_record_status_lib'] = array(
    'name' => 'view field_record_status_lib',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_record_status_tax'.
  $permissions['view field_record_status_tax'] = array(
    'name' => 'view field_record_status_tax',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_students'.
  $permissions['view field_students'] = array(
    'name' => 'view field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_teacher_link'.
  $permissions['view field_teacher_link'] = array(
    'name' => 'view field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_your_notes'.
  $permissions['view field_your_notes'] = array(
    'name' => 'view field_your_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_auth_email'.
  $permissions['view own field_auth_email'] = array(
    'name' => 'view own field_auth_email',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_editorial_notes'.
  $permissions['view own field_editorial_notes'] = array(
    'name' => 'view own field_editorial_notes',
    'roles' => array(
      'Librarian' => 'Librarian',
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'submitter' => 'submitter',
      'supereditor' => 'supereditor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_record_status_lib'.
  $permissions['view own field_record_status_lib'] = array(
    'name' => 'view own field_record_status_lib',
    'roles' => array(
      'Librarian' => 'Librarian',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_record_status_tax'.
  $permissions['view own field_record_status_tax'] = array(
    'name' => 'view own field_record_status_tax',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_students'.
  $permissions['view own field_students'] = array(
    'name' => 'view own field_students',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_teacher_link'.
  $permissions['view own field_teacher_link'] = array(
    'name' => 'view own field_teacher_link',
    'roles' => array(
      'administrative editor' => 'administrative editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'teacher' => 'teacher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_your_notes'.
  $permissions['view own field_your_notes'] = array(
    'name' => 'view own field_your_notes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
