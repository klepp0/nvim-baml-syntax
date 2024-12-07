" -----------------------------------------------------------------------
" syntax/baml.vim - Syntax file for BAML
" -----------------------------------------------------------------------
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

" Clear existing syntax definitions
syntax clear

" Use very magic mode for regex
" We will use `\v` in all patterns to reduce escaping complexity.

" -----------------------------------------------------------------------
" Keywords & Basic Types
" -----------------------------------------------------------------------
" Primary keywords: class, function, enum, etc.
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt

" Primitive and multimodal types
syntax keyword bamlPrimitiveTypes bool int float string null
syntax keyword bamlMultimodalTypes image audio model

" -----------------------------------------------------------------------
" Functions, Classes, Enums
" -----------------------------------------------------------------------
" Match function names
syntax match bamlFunctionName /\vfunction\s+\zs\k+/ containedin=ALL

" Match class names
syntax match bamlClassName /\vclass\s+\zs\k+/ containedin=ALL

" Match enum names
syntax match bamlEnumName /\venum\s+\zs\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Types & Return Types
" -----------------------------------------------------------------------
" Type annotation after colon: arg: Type or arg: Type[]
syntax match bamlTypeAnnotation /\v:\s*\k+(\[\])?/ containedin=ALL

" Return type after '->': -> Type or -> Type[]
syntax match bamlReturnTypeAnnotation /\v->\s*\k+(\[\])?/ containedin=ALL

" -----------------------------------------------------------------------
" Comments
" -----------------------------------------------------------------------
" Single-line comments: // or /// (docstring)
" Note: /// considered a docstring but we can treat it similarly
syntax match bamlComment /\v\/\/\/?.*/ containedin=ALL

" -----------------------------------------------------------------------
" Strings
" -----------------------------------------------------------------------
" Normal strings: double quotes, with escape handling
" Contained so they only show up where valid (e.g., not inside a comment)
syntax region bamlString start=+"+ skip=+\\."+ end=+"+ contained

" Multiline strings: #"...#" blocks
syntax region bamlMultilineString start=+#"+ end=+"#"+ contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString contained

" Template strings: identified by template_string or just treat as multiline
" The existing multiline string rule will handle #"...#" forms.

" -----------------------------------------------------------------------
" Numbers
" -----------------------------------------------------------------------
" Highlight standalone numbers
" Adjust boundary if needed for your grammar
syntax match bamlNumber /\v(^|\s)\d+(\.\d+)?(\s|$)/ containedin=ALL

" -----------------------------------------------------------------------
" Delimiters
" -----------------------------------------------------------------------
syntax match bamlCurlyBrace /[{}]/ containedin=ALL

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
" Nested Jinja syntax often appears inside prompt strings.
" We make Jinja items `contained` so they only highlight inside defined regions.

syntax match bamlJinjaVariableName /\v\<this\>/ contained
syntax match bamlJinjaFunction /\v<(contains|length)>/ contained

syntax region bamlJinjaVariable start="{{" end="}}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaBlock start="{%" end="%}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaComment start="{#" end="#}" keepend contained

" -----------------------------------------------------------------------
" Decorators (like @check, @assert, @destripe, etc.)
" -----------------------------------------------------------------------
syntax match bamlDecorator /\v\@\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Highlighting Links
" -----------------------------------------------------------------------
highlight link bamlKeyword Keyword
highlight link bamlPrimitiveTypes Type
highlight link bamlMultimodalTypes Type
highlight link bamlFunctionName Function
highlight link bamlClassName Type
highlight link bamlEnumName Type

highlight link bamlComment Comment
highlight link bamlString String
highlight link bamlMultilineString String
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

" -----------------------------------------------------------------------
" End of baml.vim
" -----------------------------------------------------------------------
