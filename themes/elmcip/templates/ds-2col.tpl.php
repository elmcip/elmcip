<?php

/**
 * @file
 * Display Suite 2 column template.
 */
?>
<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($left): ?>
    <div class="group-left<?php print $left_classes; ?>">
      <div class="inner">
        <?php print $left; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div class="group-right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </div>
  <?php endif; ?>

</div>
