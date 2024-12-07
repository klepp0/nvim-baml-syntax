" -----------------------------------------------------------------------
" syntax/baml.vim - Refined Syntax Highlighting for BAML
" -----------------------------------------------------------------------
if exists("b:current_syntax")
  finish
endif
let b:current_syntax = "baml"

syntax clear

" Use very magic mode by default in patterns if needed
" We keep most patterns simple.

" -----------------------------------------------------------------------
" Comments & Docstrings
" -----------------------------------------------------------------------
" Priority: Comments & docstrings should override other syntax.
" Docstrings
syntax match bamlDocstring /^\/\/\/.*/ 
" Normal single-line comments
syntax match bamlComment /^\/\/[^/].*/

" No containedin=ALL here for comments. Once matched, no other highlighting inside them.

" -----------------------------------------------------------------------
" Keywords & Basic Types
" -----------------------------------------------------------------------
" Add class, enum, function, template_string, client as language keywords
syntax keyword bamlKeyword function class enum test generator retry_policy client prompt template_string map args functions

" Primitive & Multimodal Types
syntax keyword bamlPrimitiveTypes bool int float string null
syntax keyword bamlMultimodalTypes image audio model

" -----------------------------------------------------------------------
" Classes, Functions, Enums, Template Strings
" -----------------------------------------------------------------------
" Match class, function, enum, and template_string names:
syntax match bamlClassName /\vclass\s+\zs\k+/
syntax match bamlFunctionName /\vfunction\s+\zs\k+/
syntax match bamlEnumName /\venum\s+\zs\k+/
syntax match bamlTemplateStringName /\vtemplate_string\s+\zs\k+/

" User-defined types: Capitalized words
syntax match bamlUserType /\<[A-Z][A-Za-z0-9_]*\>/

" -----------------------------------------------------------------------
" Types & Return Types
" -----------------------------------------------------------------------
syntax match bamlTypeAnnotation /:\s*\k+(\[\])?/
syntax match bamlReturnTypeAnnotation /->\s*\k+(\[\])?/

syntax match bamlTypeOptional /\k+\?/
syntax match bamlTypeUnion /\|/
syntax match bamlAngleBracket /[<>]/

" -----------------------------------------------------------------------
" Strings (Normal & Multiline)
" -----------------------------------------------------------------------
" Normal strings - highlight everything between double quotes
syntax region bamlString start='"' skip='\\."' end='"'

" Multiline strings (#" ... "#)
syntax region bamlMultilineString start='#"' end='"#' contains=bamlJinjaVariable,bamlJinjaBlock,bamlJinjaComment,bamlString

" -----------------------------------------------------------------------
" Numbers
" -----------------------------------------------------------------------
syntax match bamlNumber /\v(^|\s)\d+(\.\d+)?(\s|$)/

" -----------------------------------------------------------------------
" Delimiters & Operators
" -----------------------------------------------------------------------
syntax match bamlCurlyBrace /[{}]/
syntax match bamlParen /[()]/
syntax match bamlBracket /[\[\]]/
syntax match bamlComma /,/
syntax match bamlColon /:/
syntax match bamlEqual /=/
syntax match bamlArrow /->/

" -----------------------------------------------------------------------
" Environment Variables
" -----------------------------------------------------------------------
syntax match bamlEnvVar /env\.\k\+/

" -----------------------------------------------------------------------
" Attributes & Decorators
" -----------------------------------------------------------------------
" @@ attributes
syntax match bamlBlockAttribute /@@\(alias\|description\|assert\|check\|dynamic\|skip\)\>/
" Single @ attributes
syntax match bamlAttribute /@(alias|description|assert|check|dynamic|skip)\>/
syntax match bamlDecorator /@\k+/

" -----------------------------------------------------------------------
" Jinja Syntax
" -----------------------------------------------------------------------
syntax match bamlJinjaVariableName /\<this\>/
syntax match bamlJinjaFunction /<(contains|length)>/

" Jinja operators and keywords
syntax keyword bamlJinjaOperator or and not in
syntax keyword bamlJinjaControl if else elif for endfor endif

" Jinja pipe for filters
syntax match bamlJinjaPipe /\|/

syntax region bamlJinjaVariable start='{{' end='}}' keepend contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaBlock start='{%' end='%}' keepend contains=bamlJinjaVariableName,bamlJinjaFunction,bamlJinjaOperator,bamlJinjaControl,bamlJinjaPipe,bamlString
syntax region bamlJinjaComment start='{#' end='#}' keepend

syntax match bamlJinjaDelim /{{/
syntax match bamlJinjaDelim /}}/
syntax match bamlJinjaDelim /{%/
syntax match bamlJinjaDelim /%}/
syntax match bamlJinjaDelim /{#/
syntax match bamlJinjaDelim /#}/

" -----------------------------------------------------------------------
" Context and Utility References
" -----------------------------------------------------------------------
syntax match bamlContext /ctx\.output_format/
syntax match bamlUtility /\<ctx\>/
syntax match bamlUtility /\<_\>/
syntax match bamlUtilityFunction /_\.role(/

" -----------------------------------------------------------------------
" Client Fields
" -----------------------------------------------------------------------
" If you only want these highlighted within a `client<llm>` block, you can define
" a region for client blocks. But if this caused issues, you might omit it.
" For now, highlight these globally as they might cause confusion otherwise.
syntax keyword bamlClientField provider options model api_key

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
