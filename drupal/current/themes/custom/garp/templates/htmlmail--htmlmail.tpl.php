<?php

/**
 * @file
 * Sample template for HTML Mail test messages.
 */
?>
<style type="text/css">
body, table.htmlmail-background {
    background-color: #fff;
    font-family: 'OpenSansRegular', Helvetica, Arial, sans-serif;
    color: #4e4e4e;
    overflow-y: scroll;
    font-size: 13px;
    line-height: 15px;
  }

  a {
    color:#ee5322
  }

  h1, h2, h3, h4, h5, h6 {
  color:#000;
  }

  table.htmlmail-main {
     background-color: #ffffff;
  }

  td.htmlmail-header {
     background-color:#BBC8D1;
     color: #000;
     font-size: 14px;
     padding: 10px 20px 10px 20px;
  }

  td.htmlmail-header a,
  td.htmlmail-footer a {
     color: #ff0000;
  }

  td.htmlmail-body {
     font-size: 12px;
     padding: 10px 20px 10px 20px;
     background-color: #ffffff;
  }

  td.htmlmail-footer {
     font-size: 11px;
     color: #ffffff;
     line-height: 16px;
     padding: 10px 20px 10px 20px;
     background-color: #5f707f;
     vertical-align: middle;
  }
.htmlmail-body table,
.htmlmail-body tbody,
.htmlmail-body tfoot,
.htmlmail-body thead,
.htmlmail-body tr,\
.htmlmail-body th,
.htmlmail-body td {
  vertical-align: top;
}
.htmlmail-body table {
  border-collapse: collapse;
  border-spacing: 0;
  /*width: 100%;*/
  border: 0;
  border-radius: 5px;
  padding-bottom: 15px;
  box-shadow: 0 3px 4px #ccc;
  font-size: 12px;
}


</style>

  <table width="100%" border="0" cellspacing="0" cellpadding="0" class="htmlmail-background">
    <tr>
      <td align="center">
        <table width="800" border="0" cellspacing="0" cellpadding="0" class="htmlmail-main">
          <tr>
            <td valign="top" align="left">

            </td>
          </tr>

          <tr>
            <td valign="top" align="left" class="htmlmail-body">
                  <div id="center">
                    <div id="main">
                      <h1><a href="http://drupal.org/project/htmlmail">HTML Mail</a> test message</h1>
                      <?php echo $body ?>
                    </div>
                  </div>

            </td>
          </tr>

          <tr>
            <td valign="middle" align="left" class="htmlmail-footer">

            </td>
          </tr>
        </table>
      </td>
    </tr>
  </table>

<?php if ($debug): ?>
<hr />
<div class="htmlmail-debug">
  <dl><dt><p>
    To customize this test message:
  </p></dt><dd><ol><li><p><?php if (empty($theme)): ?>
    Visit <u>admin/config/system/htmlmail</u>
    and select a theme to hold your custom email template files.
  </p></dt><dd><ol><li><p><?php elseif (empty($theme_path)): ?>
    Visit <u>admin/appearance</u>
    to enable your selected <u><?php echo ucfirst($theme); ?></u> theme.
  </p></dt><dd><ol><li><p><?php endif; ?>
    Copy the
    <a href="http://drupalcode.org/project/htmlmail.git/blob_plain/refs/heads/7.x-2.x:/htmlmail--htmlmail.tpl.php"><code>htmlmail--htmlmail.tpl.php</code></a>
    file to your <u><?php echo ucfirst($theme); ?></u> theme directory
    <u><code><?php echo $theme_path; ?></code></u>.
  </p></li><li><p>
    Edit the copied file.
  </p></li></ol></dd></dl>
</div>
<?php endif;
