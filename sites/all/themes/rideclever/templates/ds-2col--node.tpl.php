<?php

/**
 * @file
 * Display Suite 2 column template.
 */
?>
<div class="row">
  <div class="six columns">
    <?php print $left; ?>
  </div>
  <div class="six columns">
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    <?php print $right; ?>
  </div>
</div>
<?php if (!empty($drupal_render_children)): ?>
  <div class="row">
    <?php print $drupal_render_children ; ?>
  </div>
<?php endif; ?>
