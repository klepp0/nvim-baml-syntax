;; queries/baml/highlighter.scm

;; =============================================================================
;; BAML Syntax Highlighting Definitions
;; =============================================================================

;; ---------------------------
;; Comments
;; ---------------------------
(comment) @comment
(docstring) @comment

;; ---------------------------
;; Keywords (Declarations)
;; ---------------------------
(function_declaration) @keyword
(class_declaration) @keyword
(enum_declaration) @keyword
(test_declaration) @keyword
(generator_declaration) @keyword
(retry_policy_declaration) @keyword
(template_string_declaration) @keyword

;; ---------------------------
;; Function and Type Names
;; ---------------------------
(function_declaration name: (identifier)) @function

(class_declaration name: (identifier)) @type
(enum_declaration name: (identifier)) @type
(test_declaration name: (identifier)) @type
(generator_declaration name: (identifier)) @type
(retry_policy_declaration name: (identifier)) @type
(template_string_declaration name: (identifier)) @type

;; ---------------------------
;; Parameters and Types
;; ---------------------------
(parameter) @parameter

(type) @type

;; ---------------------------
;; Strings and Numbers
;; ---------------------------
(string) @string
(block_string) @string

(number) @number

;; ---------------------------
;; Operators
;; ---------------------------
(_arrow) @operator

;; ---------------------------
;; Environment Variables and Identifiers
;; ---------------------------
(environment_variable name: (identifier)) @variable.builtin

(identifier) @identifier

;; ---------------------------
;; Expressions and Structures
;; ---------------------------
(function_body) @function
(union_type) @type
(primitive_type) @type
(array_type) @type
(map_literal) @structure
(map_entry) @structure

;; ---------------------------
;; Additional Highlighting
;; ---------------------------
(map_entry name: (identifier)) @property
(block) @block

;; =============================================================================
;; End of BAML Syntax Highlighting Definitions
;; =============================================================================

