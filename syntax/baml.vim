" syntax/baml.vim

" Clear existing syntax definitions
syntax clear

" -----------------------------
" Keywords & Basic Types
" -----------------------------
" Define keywords (including function, class, etc.)
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt string int model image

" Define special built-in types as keywords as well (for simplicity)
" Already included above: string, int, image, model, etc.
" If you'd like them strictly as types, you can remove them from bamlKeyword and highlight via bamlTypeAnnotation below.

" -----------------------------
" Classes & Functions
" -----------------------------
" Highlight the first word after 'class' as a class name
syntax match bamlClassName /\vclass\s+\zs\k+/

" Highlight the first word after 'function' as a function name
syntax match bamlFunctionName /\vfunction\s+\zs\k+/

" -----------------------------
" Types & Returns
" -----------------------------
" Match a type annotation after a colon (e.g. arg: type or arg: type[])
syntax match bamlTypeAnnotation /\v:\s*\k+(\[\])?/

" Match a return type after '->' (e.g. -> Type or -> Type[])
syntax match bamlReturnTypeAnnotation /\v->\s*\k+(\[\])?/

" -----------------------------
" Comments & Strings
" -----------------------------
" Single-line comments starting with //
syntax match bamlComment "//.*$"

" Strings inside double quotes
syntax region bamlString start=+"+ skip=+\\\\\|\\\"+ end=+"+

" -----------------------------
" Numbers
" -----------------------------
" Highlight numbers only if surrounded by whitespace or line boundaries
syntax match bamlNumber "\v(^|\s)\d+(\.\d+)?(\s|$)"

" -----------------------------
" Curly Braces Outside Jinja
" -----------------------------
syntax match bamlCurlyBrace "[{}]"

" -----------------------------
" Jinja Syntax
" -----------------------------
" Jinja Variables: {{ ... }}
syntax match bamlJinjaVariableName /\<this\>/ contained
syntax match bamlJinjaFunction /\<contains\|length\>/ contained

syntax region bamlJinjaVariable start="{{" end="}}" keepend contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaBlock start="{%" end="%}" keepend contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaComment start="{#" end="#}" keepend

" -----------------------------
" Decorators (e.g., @check, @assert)
" -----------------------------
syntax match bamlDecorator /\v\@\k+/

" -----------------------------
" Prompt String (e.g., prompt #""# blocks)
" -----------------------------
" Assuming prompt blocks can contain Jinja syntax and normal strings
syntax region bamlPromptString start=+#""+ end=+"#"+ contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString

" -----------------------------
" Highlighting Links
" -----------------------------
highlight link bamlKeyword Keyword
highlight link bamlClassName Type
highlight link bamlFunctionName Identifier

highlight link bamlComment Comment
highlight link bamlString String
highlight link bamlNumber Number
highlight link bamlCurlyBrace Delimiter

highlight link bamlJinjaVariable Special
highlight link bamlJinjaBlock Special
highlight link bamlJinjaComment Comment
highlight link bamlJinjaVariableName Identifier
highlight link bamlJinjaFunction Function

highlight link bamlDecorator PreProc

highlight link bamlTypeAnnotation Type
highlight link bamlReturnTypeAnnotation Type

highlight link bamlPromptString String
