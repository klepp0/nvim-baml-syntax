;; queries/baml/highlights.scm

;; Comments & Docstrings
(comment) @comment
(docstring) @comment @doc

;; Keywords
(function_declaration "function" @keyword.function)
(class_declaration "class" @keyword.type)
(enum_declaration "enum" @keyword.type)
(client_declaration "client" @keyword.namespace) ; Generic 'client' keyword
(client_declaration type: "<" @punctuation.bracket)
(client_declaration type: (identifier) @type.builtin) ; Capture identifier in <...>
(client_declaration type: ">" @punctuation.bracket)
(retry_policy_declaration "retry_policy" @keyword.namespace)
(template_string_declaration "template_string" @keyword.function)
(test_declaration "test" @keyword.test)
(generator_declaration "generator" @keyword.function)
(llm_client_block "client" @keyword.namespace) ; Client block within function
(prompt_block "prompt" @keyword)
(test_statement key: (test_keyword) @keyword.test) ; Highlight 'functions' and 'args'

;; Punctuation & Operators
[":" "?" "|" "="] @punctuation.delimiter
(parameter "?") @punctuation.delimiter ; Optional parameter marker
(class_field "?") @punctuation.delimiter ; Optional field marker
["->" "@" "@@"] @operator
(binary_expression operator: (_) @operator) ; Capture all binary operators
(ternary_expression "?" @operator)
(ternary_expression ":" @operator)
(member_expression "." @operator)
(array_type "[]" @operator) ; Array type indicator
["{" "}"] @punctuation.bracket @bracket
["(" ")"] @punctuation.bracket @bracket
["[" "]"] @punctuation.bracket @bracket
;; Jinja-like interpolation/statement/comment markers
["{{" "{%" "{#"] @punctuation.special @embedded
["}}" "%}" "#}"] @punctuation.special @embedded

;; Types
(primitive_type) @type.builtin
(type (identifier) @type)
(array_type element: (_) @type) ; Highlight the element type within array_type
(parameter type: (type) @type)
(class_field type: (type) @type)
(function_declaration return_type: (type) @type)
(union_type "|" @operator)

;; Names and Identifiers
(function_declaration name: (identifier) @function)
(class_declaration name: (identifier) @type)
(enum_declaration name: (identifier) @type)
(client_declaration name: (identifier) @namespace) ; Top-level client name
(retry_policy_declaration name: (identifier) @namespace)
(template_string_declaration name: (identifier) @function)
(generator_declaration name: (identifier) @function)
(test_declaration name: (identifier) @type)
(llm_client_block client_ref: (identifier) @variable) ; Client instance identifier in function
(parameter name: (identifier) @parameter)
(class_field name: (identifier) @property)
(enum_value name: (identifier) @constant)
(map_entry key: (identifier) @property)
(member_expression property: (identifier) @property)

;; Literals
(string) @string
(block_string) @string ; Highlights the entire block string, including delimiters
(number) @number
(boolean) @boolean
(map_entry key: (string) @string) ; String Keys in Maps
(llm_client_block client_ref: (string) @string) ; Client instance string ref in function

;; Environment Variables
(environment_variable "env." @variable.builtin)
(environment_variable name: (identifier) @variable.builtin) ; Highlight the variable name part

;; Attributes
(field_attribute "@" @operator)
(field_attribute name: (identifier) @function.macro)
(class_attribute "@@" @operator)
(class_attribute name: (identifier) @function.macro)
;; Attribute Arguments
(attribute_arguments "(" @punctuation.bracket)
(attribute_arguments ")" @punctuation.bracket)
(attribute_argument key: (identifier) @parameter) ;; Named args key
(attribute_argument "=" @operator)
;; Highlight attribute values based on their type
(attribute_argument (string) @string)
(attribute_argument (number) @number)
(attribute_argument (boolean) @boolean)
(attribute_argument (identifier) @variable) ;; Could be enum value, etc.

;; Interpolation Content
(interpolation (expression) @embedded)

;; Fallback Identifier (Use sparingly if needed, but generally prefer specific captures)
; (identifier) @variable
