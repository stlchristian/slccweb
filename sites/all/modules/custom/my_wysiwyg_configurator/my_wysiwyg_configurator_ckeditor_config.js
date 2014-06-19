/**
 * @file my_wysiwyg_configurator_ckeditor_config.js
 *
 * Custom configuration for CKEditor.
 */
 
/**
 * Set up custom configurations for the CKEditor editor.
 */
CKEDITOR.editorConfig = function(config) {
 
  // Allow <i class="xyz"></i> for Font Awesome.
  config.protectedSource.push( /<i class=\".*\"\><\/i\>/g );
 
  // Allow <div class="xyz"></div> tags through.
  config.protectedSource.push( /<div class=\".*\"\>.*?<\/div\>/g );
 
  // Activate automatic AFC mode (if not already set).
  config.allowedContent = true;
};
