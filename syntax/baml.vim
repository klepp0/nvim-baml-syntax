" Clear previous syntax
syntax clear

" 1) Keywords (lowest priority)
" Define these first so they are easily overridden by others
syntax keyword bamlKeyword function class enum test generator retry_policy client template_string map args functions

" 2) Dictionary Keys
" Suppose dictionary keys are something like `key "value"` or `key #"..."#`
" Match a pattern that recognizes keys followed by a string or multiline string delimiter.
" For example, keys at the start of a line or after whitespace, followed by a quote could be:
syntax match bamlKey /^\s*\k\+\s*(?=")/

" Highlight keys differently, so they override keywords on those tokens
highlight link bamlKey Identifier

" 3) Strings
" Normal strings
syntax region bamlString start='"' skip='\\."' end='"'
" Multiline strings
syntax region bamlMultilineString start='#"' end='"#' contains=bamlString
" By defining strings after keywords and keys, strings will override any keyword matches inside them.

" 4) Comments (highest priority)
" Docstring comments
syntax match bamlDocstring /^\/\/\/.*/ 
" Normal single-line comments
syntax match bamlComment /^\/\/.*/

" Highlighting groups
highlight link bamlKeyword Keyword
highlight link bamlString String
highlight link bamlMultilineString String
highlight link bamlComment Comment
highlight link bamlDocstring SpecialComment
