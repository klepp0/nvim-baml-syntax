// grammar.js
module.exports = grammar({
  name: "baml",

  // Define extra tokens to ignore (whitespace and comments)
  extras: ($) => [/\s/, $.comment],

  // Define the root node
  rules: {
    source_file: ($) => repeat($._statement),

    // Generic statement can be a declaration
    _statement: ($) => choice($.declaration),

    // Declarations
    declaration: ($) =>
      choice(
        $.function_declaration,
        $.class_declaration,
        $.enum_declaration,
        $.test_declaration,
        $.generator_declaration,
        $.retry_policy_declaration,
        $.template_string_declaration,
      ),

    // Function Declaration
    function_declaration: ($) =>
      seq(
        "function",
        field("name", $.identifier),
        field("parameters", $.parameter_list),
        "->",
        field("return_type", $.type),
        field("body", $.block),
      ),

    // Class Declaration
    class_declaration: ($) =>
      seq("class", field("name", $.identifier), field("body", $.block)),

    // Enum Declaration
    enum_declaration: ($) =>
      seq("enum", field("name", $.identifier), field("body", $.block)),

    // Test Declaration
    test_declaration: ($) =>
      seq("test", field("name", $.identifier), field("body", $.block)),

    // Generator Declaration
    generator_declaration: ($) =>
      seq(
        "generator",
        field("name", $.identifier),
        field("parameters", $.parameter_list),
        field("body", $.block),
      ),

    // Retry Policy Declaration
    retry_policy_declaration: ($) =>
      seq(
        "retry_policy",
        field("name", $.identifier),
        field("config", $.block),
      ),

    // Template String Declaration
    template_string_declaration: ($) =>
      seq(
        "template_string",
        field("name", $.identifier),
        field("content", $.template_string),
      ),

    // Parameter List (simple, no types)
    parameter_list: ($) => seq("(", optional($.parameters), ")"),

    parameters: ($) => sepBy(",", $.identifier),

    parameter: ($) => seq($.identifier, ":", $.type),

    // Add this line to define union_type with higher precedence
    union_type: ($) => prec.left(10, seq($.type, "|", $.type)),

    // Modify the existing type rule to include union_type
    type: ($) =>
      choice(
        $.primitive_type,
        $.optional_type,
        $.array_type,
        $.generic_type,
        $.union_type,
      ),

    primitive_type: ($) =>
      choice(
        "bool",
        "int",
        "float",
        "string",
        "null",
        "image",
        "audio",
        "model",
      ),

    array_type: ($) => seq($.primitive_type, "[", "]"),

    generic_type: ($) =>
      seq($.identifier, "<", $.type, repeat(seq(",", $.type)), ">"),

    // Blocks
    block: ($) => seq("{", repeat(choice($.class_field, $.declaration)), "}"),

    // Class Fields
    class_field: ($) => seq($.identifier, $.type, repeat($.annotation)),

    // Annotations
    annotation: ($) => choice($.single_annotation, $.double_annotation),

    single_annotation: ($) =>
      seq("@", $.identifier, optional(seq("(", $.annotation_arguments, ")"))),

    double_annotation: ($) =>
      seq("@@", $.identifier, optional(seq("(", $.annotation_arguments, ")"))),

    annotation_arguments: ($) => choice($.string, $.expression),

    array_type: ($) => seq($.primitive_type, "[", "]"),

    optional_type: ($) => seq($.primitive_type, "?"),

    // Blocks
    block: ($) => seq("{", repeat($._statement), "}"),

    // Template Strings (simple multiline strings)
    template_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Matches #"...#"

    // Identifiers
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Comments (single-line)
    comment: ($) => /\/\/[^\n]*/,

    // String Literals
    string: ($) => /"([^"\\]|\\.)*"/,

    // Expressions (Placeholder)
    expression: ($) =>
      choice(
        $.environment_variable,
        $.identifier,
        $.number,
        $.string,
        $.object,
        $.array,
        $.map_literal,
        $.prompt,
        $.template_string,
        $.curly_expression,
      ),
    // Objects and Maps (Placeholder)
    object: ($) => seq("{", repeat($.object_entry), "}"),

    object_entry: ($) => seq($.identifier, ":", $.expression),

    array: ($) => seq("[", optional($.array_elements), "]"),

    array_elements: ($) => sepBy(",", $.expression),

    map_literal: ($) => seq("{", repeat($.map_entry), "}"),

    map_entry: ($) => seq($.identifier, ":", $.expression),

    // Prompts with Jinja (Placeholder)
    prompt: ($) => seq("prompt", $.jinja_string),

    // Template Strings
    template_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Matches #"...#"

    // Jinja Strings (Placeholder)
    jinja_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Reusing the same pattern

    // Number Literals
    number: ($) => /\d+/,

    // Environment Variable (Placeholder)
    environment_variable: ($) => seq("env.", $.identifier),

    curly_expression: ($) => seq("{{", $.expression, "}}"),
  },
});

// Helper function to create separated lists
function sepBy(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
