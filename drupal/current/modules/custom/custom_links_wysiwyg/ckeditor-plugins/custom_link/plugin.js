/**
 * @file
 * CKEditor native plugin to provide integration with Collapse Text.
 */

(function ($) {

  CKEDITOR.plugins.add('custom_link',
  {
    init: function(editor)
    {
      // Get the major CKeditor verison.
      // We do not care about minor versions.
      var version = parseInt(CKEDITOR.version);

      /* COMMAND */
      editor.addCommand('cmdCustomLinkDialog', new CKEDITOR.dialogCommand('customLinkDialog'));

      // Use the strings provided by Drupal.settings for translation support.
      pluginStrings = Drupal.settings.custom_link.pluginStrings;

      /* BUTTON */
      editor.ui.addButton('custom_link',
      {
        label: pluginStrings.buttonLabel,
        command: 'cmdCustomLinkDialog',
        icon: this.path + 'button.png'
      });

      // Ckeditor version lower then 4 needs to have a icon path.
      if (version < 4) {
        editor.ui._.items.custom_link.icon = this.path + 'button.png';
        editor.ui._.items.custom_link.args[0].icon = this.path + 'button.png';
      }

      /* DIALOG */
      CKEDITOR.dialog.add('customLinkDialog', function (editor)
      {
        var i = editor.lang.common,
            b = editor.lang.link;
        return {
          title : pluginStrings.windowLabel,
          minWidth : 300,
          minHeight : 200,
          contents :
          [{
            id : 'tab1',
            elements :
            [{
              type : 'text',
              id : 'title',
              label : pluginStrings.titleLabel,
              validate : CKEDITOR.dialog.validate.notEmpty(pluginStrings.titleValidateError)
            }, {
              type: 'text',
              id: 'url',
              label: pluginStrings.urlLabel,
              validate : CKEDITOR.dialog.validate.notEmpty(pluginStrings.urlValidateError)
            }, {
              type: "button",
              id: "browse",
              hidden: "true",
              filebrowser: "url",
              label: i.browseServer
            }, {

            //   type : 'checkbox',
            //   id : 'state',
            //   label : pluginStrings.stateLabel,
            // },{
              type : 'select',
              id : 'type',
              label : pluginStrings.typeLabel,
              items: [
                  ["http://‎", "http://"],
                  ["https://‎", "https://"],
                  ["ftp://‎", "ftp://"],
                  ["news://‎", "news://"]
              ]
            }]
          }],
          onOk : function()
          {
            var dialog = this;
            var title = dialog.getValueOf('tab1', 'title');
            var url = dialog.getValueOf('tab1', 'url');
            var type = dialog.getValueOf('tab1', 'type');

            var openTag = '[link title="' + title + '"' + ((type != "") ? ' type="' + type + '"' : 'type="default"') + ']';
            var closeTag = '[/link]';
            var inplaceTag = openTag + url + closeTag;

            var S = editor.getSelection();

            if(S == null)
            {
              editor.insertHtml(inplaceTag);
              return;
            }

            var R = S.getRanges();
            R = R[0];

            if(R == null)
            {
              editor.insertHtml(inplaceTag);
              return;
            }

            var startPos = Math.min(R.startOffset, R.endOffset);
            var endPos = Math.max(R.startOffset, R.endOffset);

            if(startPos == endPos)
            {
              editor.insertHtml(inplaceTag);
              return;
            }

            var container = new CKEDITOR.dom.element('p');
            var fragment = R.extractContents();

            container.appendText(openTag);
            fragment.appendTo(container);
            container.appendText(closeTag);

            editor.insertElement(container);
          }
        };
        // End CKEDITOR.dialog.add.
      });
    }// End init.
    // End CKEDITOR.plugins.add.
  });

})(jQuery);
