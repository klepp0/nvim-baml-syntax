" Clear previous syntax
syntax clear

" 1) Keywords & Mappings (lowest priority)
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt template_string map args functions
" If you have specific mappings or dictionary keys, define them here:
" syntax match bamlKey /^\s*\k\+\s*:/ " Example of keys before strings
highlight link bamlKeyword Keyword
" highlight link bamlKey Identifier

" 2) Strings (second priority)
" Normal strings
syntax region bamlString start='"' skip='\\."' end='"'
highlight link bamlString String

" Multiline strings (#" ... "#)
" Define after normal strings to allow Jinja inside them
syntax region bamlMultilineString start='#"' end='"#' contains=bamlString
highlight link bamlMultilineString String

" 3) Jinja Syntax (higher priority than strings)
" Jinja inside strings: define after strings and add Jinja matches to their contains.
" Jinja constructs
syntax match bamlJinjaVariableName /\<this\>/ contained
syntax match bamlJinjaFunction /<(contains|length)>/ contained
syntax keyword bamlJinjaOperator or and not in contained
syntax keyword bamlJinjaControl if else elif for endfor endif contained
syntax match bamlJinjaPipe /\|/ contained

" Jinja regions
syntax region bamlJinjaVariable start='{{' end='}}' keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaBlock start='{%' end='%}' keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaComment start='{#' end='#}' keepend contained

syntax match bamlJinjaDelim /{{/ contained
syntax match bamlJinjaDelim /}}/ contained
syntax match bamlJinjaDelim /{%/ contained
syntax match bamlJinjaDelim /%}/ contained
syntax match bamlJinjaDelim /{#/ contained
syntax match bamlJinjaDelim /#}/ contained

" Add Jinja to string containers
syntax clear bamlMultilineString
syntax region bamlMultilineString start='#"' end='"#' contains=bamlString,bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlJinjaDelim,bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe
" Now Jinja overrides normal string highlighting inside multiline strings.

" Highlight Jinja groups
highlight link bamlJinjaVariable Special
highlight link bamlJinjaBlock Special
highlight link bamlJinjaComment Comment
highlight link bamlJinjaVariableName Identifier
highlight link bamlJinjaFunction Function
highlight link bamlJinjaOperator Operator
highlight link bamlJinjaControl Conditional
highlight link bamlJinjaPipe Operator
highlight link bamlJinjaDelim Special

" 4) Comments (highest priority)
syntax match bamlComment /^\/\/[^/].*/
syntax match bamlDocstring /^\/\/\/.*/
highlight link bamlComment Comment
highlight link bamlDocstring SpecialComment
