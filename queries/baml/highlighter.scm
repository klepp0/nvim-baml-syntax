;; queries/baml/highlighter.scm

;; Highlight comments
(comment) @comment
(doc_comment) @comment.documentation

;; Highlight keywords
(function_declaration) @keyword
(class_declaration) @keyword
(enum_declaration) @keyword
(test_declaration) @keyword
(generator_declaration) @keyword
(retry_policy_declaration) @keyword
(template_string_declaration) @keyword

;; Highlight identifiers
(identifier) @identifier

;; Highlight strings
(string) @string

;; Highlight annotations
(single_annotation) @annotation
(double_annotation) @annotation

;; Highlight types
(type) @type

;; Highlight numbers
(number) @number
