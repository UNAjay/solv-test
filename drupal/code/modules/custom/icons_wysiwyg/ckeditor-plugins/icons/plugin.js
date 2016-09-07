/**
 * @file
 * CKEditor native plugin to provide integration with Collapse Text.
 */

CKEDITOR.plugins.add('icons',
{
  init: function(editor)
  {
    /* COMMAND */
    editor.addCommand('cmdIconsDialog', new CKEDITOR.dialogCommand('iconsDialog'));

    // Use the strings provided by Drupal.settings for translation support.
    pluginStrings = Drupal.settings.icons.pluginStrings;

    /* BUTTON */
    editor.ui.addButton('icons',
    {
      label: pluginStrings.buttonLabel,
      command: 'cmdIconsDialog',
      icon: this.path + 'button.png'
    });

    /* DIALOG */
    CKEDITOR.dialog.add('iconsDialog', function (editor)
    {
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
            label : pluginStrings.titleLabel
          }, {
            type : 'select',
            id : 'type',
            label : pluginStrings.typeLabel,
            validate : CKEDITOR.dialog.validate.notEmpty(pluginStrings.typeValidateError),
            items: [
                ['Icon 1', 'icon_1'],
                ['Icon 2', 'icon_2'],
                ['Icon 3', 'icon_3'],
                ['Icon 4', 'icon_4']
            ]
          }, {
            type : 'select',
            id : 'position',
            label : pluginStrings.typeLabel,
            validate : CKEDITOR.dialog.validate.notEmpty(pluginStrings.typeValidateError),
            items: [
                ['Float', 'float'],
                ['Center', 'center']
            ]
          }]
        }],
        onOk : function()
        {
          var dialog = this;
          var title = dialog.getValueOf('tab1', 'title');
          var type = dialog.getValueOf('tab1', 'type');
          var position = dialog.getValueOf('tab1', 'position');

          // var wrapperTagOpen = '<span class="icon-wrapper">';
          var iconTag = '[icon:' + type + ',' + position + '=' + title + ']';
          // var textTag = '<span class="icon-title">' + title + '</span>';
          // var wrapperTagClose = '</span>';
          var inplaceTag = iconTag;

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

          var container = new CKEDITOR.dom.element('div');
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
