<?php
	if ($_REQUEST['path']) { ?>
	body {background-image: url("<?php echo base64_decode($_REQUEST['path']); ?>");}
<?php } ?>