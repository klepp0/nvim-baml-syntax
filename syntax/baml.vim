" -----------------------------------------------------------------------
" syntax/baml.vim - Revised Syntax File for BAML
" -----------------------------------------------------------------------
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

syntax clear

" Very magic mode
" -----------------------------------------------------------------------
" Keywords
" Add `class` and `client` to bamlKeyword for consistent keyword highlighting.
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt template_string map args functions

syntax keyword bamlPrimitiveTypes bool int float string null
syntax keyword bamlMultimodalTypes image audio model

" -----------------------------------------------------------------------
" Comments & Docstrings
" -----------------------------------------------------------------------
" Docstring: start with `///`
syntax match bamlDocstring /^\/\/\/.*/ 
" Normal comment: `//`
syntax match bamlComment '^//.*'

" No containedin=ALL here, so these matches take precedence over others inside the line.

" -----------------------------------------------------------------------
" Classes, Functions, Enums, Template Strings
" -----------------------------------------------------------------------
" Match class names
syntax match bamlClassName /\vclass\s+\zs\k+/ containedin=ALL

" Match function names
syntax match bamlFunctionName /\vfunction\s+\zs\k+/ containedin=ALL

" Match enum names
syntax match bamlEnumName /\venum\s+\zs\k+/ containedin=ALL

" Match template_string names
syntax match bamlTemplateStringName /\vtemplate_string\s+\zs\k+/ containedin=ALL

" Highlight user-defined types (like Person) as Type: capitalized words
syntax match bamlUserType /\v\<[A-Z][A-Za-z0-9_]*\>/ containedin=ALL

" -----------------------------------------------------------------------
" Types & Return Types
" -----------------------------------------------------------------------
syntax match bamlTypeAnnotation /\v:\s*\k+(\[\])?/ containedin=ALL
syntax match bamlReturnTypeAnnotation /\v->\s*\k+(\[\])?/ containedin=ALL
syntax match bamlTypeOptional /\v\k+\?/ containedin=ALL
syntax match bamlTypeUnion /\v\|/ containedin=ALL
syntax match bamlAngleBracket /[<>]/ containedin=ALL

" -----------------------------------------------------------------------
" Strings (Normal & Multiline)
" -----------------------------------------------------------------------
" Normal strings
syntax region bamlString start=+"+ skip=+\\\\\|\\\"+ end=+"+ containedin=ALL

" Multiline strings (#" ... "#)
syntax region bamlMultilineString start=+#"+ end=+"#"+ contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString containedin=ALL

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
" Escape the dot to match literally.
syntax match bamlEnvVar /\venv\.\k\+/ containedin=ALL

" -----------------------------------------------------------------------
" Attributes & Decorators
" -----------------------------------------------------------------------
" @@ attributes
syntax match bamlBlockAttribute /@@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL

" Single @ attributes
syntax match bamlAttribute /\v\@(alias|description|assert|check|dynamic|skip)\>/ containedin=ALL
syntax match bamlDecorator /\v\@\k+/ containedin=ALL

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
syntax match bamlJinjaVariableName /\v\<this\>/ contained
syntax match bamlJinjaFunction /\v<(contains|length)>/ contained

" Jinja operators and keywords
syntax keyword bamlJinjaOperator or and not in contained
syntax keyword bamlJinjaControl if else elif for endfor endif contained

" Highlight pipe `|` in Jinja filters
syntax match bamlJinjaPipe /\v\|/ contained

syntax region bamlJinjaVariable start='{{' end='}}' keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaBlock start='{%' end='%}' keepend contained contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaComment start='{#' end='#}' keepend contained

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
syntax match bamlUtilityFunction /\v_\.role\(/ containedin=ALL

" -----------------------------------------------------------------------
" Client/Provider Fields
" -----------------------------------------------------------------------
" We'll define a region for client<llm> blocks to limit bamlClientField to that context.
syntax region bamlClientSpec start='client<llm>' end='{'me=s-1 containedin=ALL contained keepend contains=bamlClientField
syntax region bamlClientBody start='{' end='}' containedin=bamlClientSpec,bamlClientBody contains=bamlClientField
" Now client fields highlight only inside client specs.
syntax keyword bamlClientField provider options model api_key contained

" -----------------------------------------------------------------------
" Highlighting Links
" -----------------------------------------------------------------------
highlight link bamlKeyword Keyword
highlight link bamlPrimitiveTypes Type
highlight link bamlMultimodalTypes Type
highlight link bamlClassName Keyword
highlight link bamlFunctionName Keyword
highlight link bamlEnumName Keyword
highlight link bamlTemplateStringName Type
highlight link bamlUserType Type

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
highlight link bamlJinjaPipe Operator
highlight link bamlJinjaDelim Special

highlight link bamlContext Identifier
highlight link bamlUtility Special
highlight link bamlUtilityFunction Function

highlight link bamlClientField Identifier

" -----------------------------------------------------------------------
" End of baml.vim
" -----------------------------------------------------------------------
