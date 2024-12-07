" -----------------------------------------------------------------------
" syntax/baml.vim - Enhanced Syntax File for BAML
" -----------------------------------------------------------------------
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

" Clear existing syntax definitions
syntax clear

" Use very magic mode for simpler regex
" -----------------------------------------------------------------------
" Keywords & Basic Types
" -----------------------------------------------------------------------
" Includes template_string, map, args, functions for clarity
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt template_string map args functions

syntax keyword bamlPrimitiveTypes bool int float string null
syntax keyword bamlMultimodalTypes image audio model

" -----------------------------------------------------------------------
" Classes, Functions, Enums
" -----------------------------------------------------------------------
syntax match bamlClassName /\vclass\s+\zs\k+/ containedin=ALL
syntax match bamlFunctionName /\vfunction\s+\zs\k+/ containedin=ALL
syntax match bamlEnumName /\venum\s+\zs\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Types & Return Types
" -----------------------------------------------------------------------
syntax match bamlTypeAnnotation /\v:\s*\k+(\[\])?/ containedin=ALL
syntax match bamlReturnTypeAnnotation /\v->\s*\k+(\[\])?/ containedin=ALL

" Optional and union type indicators
syntax match bamlTypeOptional /\v\k+\?/ containedin=ALL
syntax match bamlTypeUnion /\v\|/ containedin=ALL
syntax match bamlAngleBracket /[<>]/ containedin=ALL

" -----------------------------------------------------------------------
" Comments & Docstrings
" -----------------------------------------------------------------------
syntax match bamlDocstring /\v\/\/\/.*/ containedin=ALL
syntax match bamlComment /\v\/\/[^/].*/ containedin=ALL

" -----------------------------------------------------------------------
" Strings (Normal & Multiline)
" -----------------------------------------------------------------------
syntax region bamlString start=+"+ skip=+\\."+ end=+"+ contained
syntax region bamlMultilineString start='#"' end='"#' contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString contained

" -----------------------------------------------------------------------
" Numbers
" -----------------------------------------------------------------------
syntax match bamlNumber /\v(^|\s)\d+(\.\d+)?(\s|$)/ containedin=ALL

" -----------------------------------------------------------------------
" Delimiters & Operators
" -----------------------------------------------------------------------
syntax match bamlCurlyBrace /[{}]/ containedin=ALL
syntax match bamlParen /[()]/ containedin=ALL
syntax match bamlBracket /[\[\]]/ containedin=ALL
syntax match bamlComma /,/ containedin=ALL
syntax match bamlColon /:/ containedin=ALL
syntax match bamlEqual /=/ containedin=ALL
syntax match bamlArrow /->/ containedin=ALL

" -----------------------------------------------------------------------
" Environment Variables
" -----------------------------------------------------------------------
syntax match bamlEnvVar /\venv\.\k\+/ containedin=ALL

" -----------------------------------------------------------------------
" Attributes & Decorators
" -----------------------------------------------------------------------
syntax match bamlAttribute /\v\@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL
syntax match bamlBlockAttribute /\v\@\@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL
syntax match bamlDecorator /\v\@\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
" Jinja variable/function names and operators
syntax match bamlJinjaVariableName /\v\<this\>/ contained
syntax match bamlJinjaFunction /\v<(contains|length)>/ contained

" Jinja logical operators and control keywords
syntax keyword bamlJinjaOperator or and not contained
syntax keyword bamlJinjaControl if else elif for endfor endif contained

syntax region bamlJinjaVariable start="{{" end="}}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl
syntax region bamlJinjaBlock start="{%" end="%}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl
syntax region bamlJinjaComment start="{#" end="#}" keepend contained

" Jinja delimiters individually
syntax match bamlJinjaDelim /{{/ contained
syntax match bamlJinjaDelim /}}/ contained
syntax match bamlJinjaDelim /{%/ contained
syntax match bamlJinjaDelim /%}/ contained
syntax match bamlJinjaDelim /{#/ contained
syntax match bamlJinjaDelim /#}/ contained

" -----------------------------------------------------------------------
" Context and Utility References
" -----------------------------------------------------------------------
syntax match bamlContext /\vctx\.output_format/ containedin=ALL
syntax match bamlUtility /\v\<ctx\>/ containedin=ALL
syntax match bamlUtility /\v\<_\>/ containedin=ALL
" Highlight `_.role` as a utility function call indicator
syntax match bamlUtilityFunction /\v_\.role/ containedin=ALL

" -----------------------------------------------------------------------
" Client/Provider Fields
" -----------------------------------------------------------------------
syntax keyword bamlClientField provider options model api_key containedin=ALL

" -----------------------------------------------------------------------
" Highlighting Links
" -----------------------------------------------------------------------
highlight link bamlKeyword Keyword
highlight link bamlPrimitiveTypes Type
highlight link bamlMultimodalTypes Type
highlight link bamlClassName Type
highlight link bamlFunctionName Function
highlight link bamlEnumName Type

highlight link bamlComment Comment
highlight link bamlDocstring SpecialComment
highlight link bamlString String
highlight link bamlMultilineString String
highlight link bamlNumber Number

highlight link bamlCurlyBrace Delimiter
highlight link bamlParen Delimiter
highlight link bamlBracket Delimiter
highlight link bamlComma Delimiter
highlight link bamlColon Operator
highlight link bamlEqual Operator
highlight link bamlArrow Operator

highlight link bamlEnvVar Constant

highlight link bamlAttribute PreProc
highlight link bamlBlockAttribute PreProc
highlight link bamlDecorator PreProc

highlight link bamlTypeAnnotation Type
highlight link bamlReturnTypeAnnotation Type
highlight link bamlTypeOptional Type
highlight link bamlTypeUnion Operator
highlight link bamlAngleBracket Delimiter

highlight link bamlJinjaVariable Special
highlight link bamlJinjaBlock Special
highlight link bamlJinjaComment Comment
highlight link bamlJinjaVariableName Identifier
highlight link bamlJinjaFunction Function
highlight link bamlJinjaOperator Operator
highlight link bamlJinjaControl Conditional
highlight link bamlJinjaDelim Special

highlight link bamlContext Identifier
highlight link bamlUtility Special
highlight link bamlUtilityFunction Function

highlight link bamlClientField Identifier

" -----------------------------------------------------------------------
" End of baml.vim
" -----------------------------------------------------------------------
