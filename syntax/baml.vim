" -----------------------------------------------------------------------
" syntax/baml.vim
" BAML syntax highlighting
" -----------------------------------------------------------------------
" Guard against multiple loads
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

" Clear existing syntax definitions
syntax clear

" Use very magic mode (`\v`) consistently for clearer regex patterns
" -----------------------------------------------------------------------
" Keywords & Basic Types
" -----------------------------------------------------------------------
" Define keywords (language constructs)
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt

" Define primitive and multimodal types
syntax keyword bamlPrimitiveTypes bool int float string null
syntax keyword bamlMultimodalTypes image audio model

" -----------------------------------------------------------------------
" Functions, Classes, Enums
" -----------------------------------------------------------------------
" Function names: first word after 'function'
syntax match bamlFunctionName /\vfunction\s+\zs\k+/

" Class names: first word after 'class'
syntax match bamlClassName /\vclass\s+\zs\k+/

" Enum names: first word after 'enum'
syntax match bamlEnumName /\venum\s+\zs\k+/

" -----------------------------------------------------------------------
" Types & Return Types
" -----------------------------------------------------------------------
" Type annotation after a colon: arg: Type or arg: Type[]
syntax match bamlTypeAnnotation /\v:\s*\k+(\[\])?/

" Return type after '->': -> Type or -> Type[]
syntax match bamlReturnTypeAnnotation /\v->\s*\k+(\[\])?/

" -----------------------------------------------------------------------
" Comments & Strings
" -----------------------------------------------------------------------
" Single-line comments starting with //
syntax match bamlComment /\v\/\/.*/ 

" Strings inside double quotes
syntax region bamlString start=+"+ skip=+\\."+ end=+"+ contained

" -----------------------------------------------------------------------
" Numbers
" -----------------------------------------------------------------------
" Highlight standalone numbers: 
" Adjust as needed if numbers can appear without whitespace boundaries.
syntax match bamlNumber /\v(^|\s)\d+(\.\d+)?(\s|$)/

" -----------------------------------------------------------------------
" Curly Braces Outside Jinja
" -----------------------------------------------------------------------
syntax match bamlCurlyBrace /[{}]/

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
" Marking contained Jinja syntax (variables, functions, etc.)
" `contained` ensures these do not highlight outside intended regions.

syntax match bamlJinjaVariableName /\v\<this\>/ contained
syntax match bamlJinjaFunction /\v<(contains|length)>/ contained

syntax region bamlJinjaVariable start="{{" end="}}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaBlock start="{%" end="%}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaComment start="{#" end="#}" keepend contained

" -----------------------------------------------------------------------
" Decorators
" -----------------------------------------------------------------------
syntax match bamlDecorator /\v\@\k+/

" -----------------------------------------------------------------------
" Prompt Strings (e.g., prompt #""# blocks)
" Can contain Jinja syntax and normal strings
" Note: Add `containedin=ALL` if you want this block to appear anywhere.
syntax region bamlPromptString start=+#""+ end=+"#"+ contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString

" -----------------------------------------------------------------------
" Highlighting Links
" Consider semantic groups: functions as `Function`, classes as `Type`, etc.
" -----------------------------------------------------------------------
highlight link bamlKeyword Keyword
highlight link bamlPrimitiveTypes Type
highlight link bamlMultimodalTypes Type
highlight link bamlFunctionName Function
highlight link bamlClassName Type
highlight link bamlEnumName Type

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

" -----------------------------------------------------------------------
" End of baml.vim
" -----------------------------------------------------------------------
