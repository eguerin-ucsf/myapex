CKEDITOR.addStylesSet( 'my_styles',
[

	{ name : 'Blue Title'		, element : 'h3', styles : { 'color' : 'Blue' } },
	{ name : 'Red Title'		, element : 'h3', styles : { 'color' : 'Red' } },
	
    // Block Styles
	{ name : 'Blockquote'	, element : 'blockquote' },
	
	{
		name : 'Image Left',
		element : 'img',
		attributes : {'style' : 'float: left; margin-right: 10px; border:1px solid #666;'}
	},

	{
		name : 'Image Right',
		element : 'img',
		attributes : {'style' : 'float: right; margin-left: 10px; border:1px solid #666;'}
	},
	
	{
		name : 'Image Center',
		element : 'img',
		attributes : {'style' : 'padding:10px', 'align' : 'center'}
	}
	
]);