CKEDITOR.editorConfig = function(config) {
    // Allow <i class="xyz"></i> for Font Awesome.
    config.protectedSource.push( /<i class=\".*\"\><\/i\>/g );
    config.protectedSource.push( /<span class=\".*\"\><\/span\>/g );

    // Allow <div class="xyz"></div> tags through.
    config.protectedSource.push( /<div class=\".*\"\>.*?<\/div\>/g );

    // Activate automatic AFC mode (if not already set).
    config.allowedContent = true;
};

CKEDITOR.dtd.$removeEmpty['i'] = false;
