;; queries/baml/highlights.scm

;; =============================================================================
;; BAML Syntax Highlighting Definitions
;; =============================================================================

;; ---------------------------
;; Comments
;; ---------------------------
(comment) @comment
(docstring) @comment

;; ---------------------------
;; Keywords (Declaration tokens only)
;; ---------------------------
(function_declaration "function" @keyword)
(class_declaration "class" @keyword)
(enum_declaration "enum" @keyword)
(test_declaration "test" @keyword)
(client_declaration "client<llm>" @keyword)
(retry_policy_declaration "retry_policy" @keyword)
(template_string_declaration "template_string" @keyword)

;; ---------------------------
;; Function and Type Names
;; ---------------------------
(function_declaration name: (identifier) @function)

(class_declaration name: (identifier) @type)
(enum_declaration name: (identifier) @type)
(test_declaration name: (identifier) @type)
(client_declaration name: (identifier) @type)
(retry_policy_declaration name: (identifier) @type)
(template_string_declaration name: (identifier) @type)

;; ---------------------------
;; Parameters and Types
;; ---------------------------
(parameter (identifier) @variable.parameter)
(parameter (type) @type)

(type) @type
(union_type) @type
(primitive_type) @type
(array_type) @type

;; ---------------------------
;; Strings and Numbers
;; ---------------------------
(string) @string
(block_string) @string

(number) @number

;; ---------------------------
;; Operators
;; ---------------------------
"->" @operator

;; ---------------------------
;; Environment Variables
;; ---------------------------
(environment_variable "env." @variable.builtin)
(environment_variable name: (identifier) @variable.builtin)

;; ---------------------------
;; Map Properties
;; ---------------------------
(map_entry (identifier) @property)

;; =============================================================================
;; End of BAML Syntax Highlighting Definitions
;; =============================================================================
