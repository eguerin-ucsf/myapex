<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($main_menu || $secondary_menu): ?>
    <nav class="navigation">
    </nav>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
