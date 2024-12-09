" Clear previous syntax
syntax clear

" 1) Keywords & Mappings (lowest priority)
syntax keyword bamlKeyword function class enum test generator retry_policy template_string
syntax match bamlKeyword /\<client<llm>\>/
highlight link bamlKeyword Keyword

" Environment variables
syntax region bamlEnvVariable start='env.' end='[a-zA-Z0-9_]*'
highlight link bamlEnvVariable Constant

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
