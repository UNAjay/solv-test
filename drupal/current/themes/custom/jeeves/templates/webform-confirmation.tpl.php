<?php

/**
 * @file
 * Customize confirmation screen after successful submission.
 *
 * This file may be renamed "webform-confirmation-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-confirmation.tpl.php" to affect all webform confirmations on your
 * site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $confirmation_message: The confirmation message input by the webform author.
 * - $sid: The unique submission ID of this submission.
 */
?>

<div class="webform-confirmation">
  <?php if ($confirmation_message): ?>
    <?php print $confirmation_message ?>
  <?php else: ?>
    <p><?php print t('Thank you, your submission has been received.'); ?></p>
  <?php endif; ?>
</div>

<div class="buttons">
  <a href="javascript:void(0);" onclick="(function ($) { $.fn.colorbox.close(); window.location = window.location; })(jQuery);"><?php print t('Close window') ?></a>
</div>

<?php if (isset($_REQUEST['submitted']['downlink']) && $_REQUEST['submitted']['downlink']) { ?>
  <script type="text/javascript">
    window.location = "<?php echo $_REQUEST['submitted']['downlink']; ?>";
  </script>
<?php } ?>

