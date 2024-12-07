" -----------------------------------------------------------------------
" syntax/baml.vim - Enhanced Syntax File for BAML
" -----------------------------------------------------------------------
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

" Clear existing syntax definitions
syntax clear

" Use very magic mode for regex
" We'll use `\v` for simpler patterns.
" -----------------------------------------------------------------------
" Keywords & Basic Types
" -----------------------------------------------------------------------
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

" Angle brackets for generics
syntax match bamlAngleBracket /[<>]/ containedin=ALL

" -----------------------------------------------------------------------
" Comments & Docstrings
" -----------------------------------------------------------------------
" Docstrings: ///... 
syntax match bamlDocstring /\v\/\/\/.*/ containedin=ALL

" Normal comments: // but not ///
syntax match bamlComment /\v\/\/[^/].*/ containedin=ALL

" -----------------------------------------------------------------------
" Strings (Normal & Multiline)
" -----------------------------------------------------------------------
syntax region bamlString start=+"+ skip=+\\."+ end=+"+ contained
syntax region bamlMultilineString start=+#"+ end=+"#"+ contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString contained

" -----------------------------------------------------------------------
" Numbers
" -----------------------------------------------------------------------
syntax match bamlNumber /\v(^|\s)\d+(\.\d+)?(\s|$)/ containedin=ALL

" -----------------------------------------------------------------------
" Delimiters
" -----------------------------------------------------------------------
syntax match bamlCurlyBrace /[{}]/ containedin=ALL

" -----------------------------------------------------------------------
" Environment Variables
" -----------------------------------------------------------------------
syntax match bamlEnvVar /\venv\.\k\+/ containedin=ALL

" -----------------------------------------------------------------------
" Attributes & Decorators
" -----------------------------------------------------------------------
syntax match bamlAttribute /\v\@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL
syntax match bamlBlockAttribute /\v\@\@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL

" General decorators
syntax match bamlDecorator /\v\@\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
syntax match bamlJinjaVariableName /\v\<this\>/ contained
syntax match bamlJinjaFunction /\v<(contains|length)>/ contained

syntax region bamlJinjaVariable start="{{" end="}}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaBlock start="{%" end="%}" keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction
syntax region bamlJinjaComment start="{#" end="#}" keepend contained

" Jinja delimiters defined individually to avoid complex escaping issues
syntax match bamlJinjaDelim /\v\{\{/ contained
syntax match bamlJinjaDelim /\v\}\}/ contained
syntax match bamlJinjaDelim /\v\{\%/ contained
syntax match bamlJinjaDelim /\v\%\}/ contained
syntax match bamlJinjaDelim /\v\{\#/ contained
syntax match bamlJinjaDelim /\v\#\}/ contained

" -----------------------------------------------------------------------
" Context and Utility References
" -----------------------------------------------------------------------
syntax match bamlContext /\v\<ctx\.output_format\>/ containedin=ALL
syntax match bamlUtility /\v\<ctx\>/ containedin=ALL
syntax match bamlUtility /\v\<_\>/ containedin=ALL

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
highlight link bamlJinjaDelim Special

highlight link bamlContext Identifier
highlight link bamlUtility Special

highlight link bamlClientField Identifier

" -----------------------------------------------------------------------
" End of baml.vim
" -----------------------------------------------------------------------
