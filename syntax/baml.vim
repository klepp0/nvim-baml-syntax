" Clear previous syntax
syntax clear

" 1) Keywords & Mappings (lowest priority)
syntax keyword bamlKeyword function class enum test generator retry_policy template_string
highlight link bamlKeyword Keyword


" 2) Strings (second priority)
" Normal strings
syntax region bamlString start='"' skip='\\\"' end='"'
highlight link bamlString String

" Multiline strings (#" ... "#)
syntax region bamlMultilineString start='#"' end='"#'
highlight link bamlMultilineString String

" 3) Comments (highest priority)
" Single-line comments
syntax match bamlComment /^\/\/[^/].*/
highlight link bamlComment Comment

" Docstrings
syntax match bamlDocstring /^\/\/\/.*/
highlight link bamlDocstring SpecialComment

highlight! link @comment Comment
highlight! link @keyword Keyword
highlight! link @function Function
highlight! link @type Type
highlight! link @parameter Identifier
highlight! link @string String
highlight! link @number Number
highlight! link @operator Operator
highlight! link @variable.builtin Identifier
highlight! link @identifier Identifier
highlight! link @structure Structure
highlight! link @constant.builtin Constant
highlight! link @property Property
highlight! link @block Block
