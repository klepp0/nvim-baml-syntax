" Clear previous syntax
syntax clear

" 1) Keywords & Mappings (lowest priority)
syntax keyword bamlKeyword function class enum test generator retry_policy template_string functions
" If you have specific mappings or dictionary keys, define them here:
" syntax match bamlKey /^\s*\k\+\s*:/ " Example of keys before strings
highlight link bamlKeyword Keyword
" highlight link bamlKey Identifier

" 2) Strings (second priority)
" Normal strings
syntax region bamlString start='"' skip='\\\"' end='"'
highlight link bamlString String

" Multiline strings (#" ... "#)
" Define after normal strings to allow Jinja inside them
syntax region bamlMultilineString start='#"' end='"#' contains=bamlString
highlight link bamlMultilineString String

" 3) Comments (highest priority)
syntax match bamlComment /^\/\/[^/].*/
syntax match bamlDocstring /^\/\/\/.*/
highlight link bamlComment Comment
highlight link bamlDocstring SpecialComment
