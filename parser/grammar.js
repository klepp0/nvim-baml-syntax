/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// grammar.js
module.exports = grammar({
  name: "baml",

  // Define extra tokens to ignore (whitespace and comments)
  extras: ($) => [/\s/, $.comment, $.doc_comment],

  // Define the root node
  rules: {
    source_file: ($) => repeat($._statement),

    // Generic statement can be a declaration or expression
    _statement: ($) => choice($.declaration, $.expression_statement),

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
        $.client_declaration,
        $.map_declaration,
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

    // Client Declaration
    client_declaration: ($) =>
      seq(
        "client",
        field("generic", $.generic_type),
        field("name", $.identifier),
        field("body", $.client_block),
      ),

    // Map Declaration (Standalone)
    map_declaration: ($) =>
      seq(
        "map",
        "<",
        field("key_type", $.type),
        ",",
        field("value_type", $.type),
        ">",
      ),

    // Expression Statement (e.g., env.MY_SECRET_KEY)
    expression_statement: ($) => seq($.expression, ";"),

    // Expressions
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
      ),

    // Environment Variable (e.g., env.MY_SECRET_KEY)
    environment_variable: ($) => seq("env.", $.identifier),

    // Parameter List
    parameter_list: ($) => seq("(", optional($.parameters), ")"),

    parameters: ($) => sepBy(",", $.parameter),

    parameter: ($) => seq($.identifier, ":", $.type),

    // Type Definitions
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

    optional_type: ($) => seq($.primitive_type, "?"),

    array_type: ($) => seq($.primitive_type, "[", "]"),

    generic_type: ($) =>
      seq($.identifier, "<", $.type, repeat(seq(",", $.type)), ">"),

    union_type: ($) => sepBy("|", $.type),

    // Blocks
    block: ($) => seq("{", repeat($._statement), "}"),

    client_block: ($) => seq("{", repeat($.client_setting), "}"),

    client_setting: ($) => choice($.key_value, $.block_key_value),

    key_value: ($) => seq($.identifier, $.string),

    block_key_value: ($) => seq($.identifier, "{", repeat($.key_value), "}"),

    // Objects and Arrays
    object: ($) => seq("{", repeat($.object_entry), "}"),

    object_entry: ($) => seq($.identifier, $.value),

    array: ($) => seq("[", optional($.array_elements), "]"),

    array_elements: ($) => sepBy(",", $.expression),

    map_literal: ($) => seq("{", repeat($.map_entry), "}"),

    map_entry: ($) => seq($.identifier, "{", repeat($.map_entry), "}"),

    // Prompts with Jinja
    prompt: ($) => seq("prompt", $.jinja_string),

    // Template Strings
    template_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Simple regex for demonstration

    // Jinja Strings
    jinja_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Reusing the same pattern

    // Key-value pairs
    key_value_pair: ($) => seq($.identifier, $.string),

    // Comments
    comment: ($) => /\/\/[^\n]*/,
    doc_comment: ($) => /\/\/\/[^\n]*/,

    // Identifiers
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Number Literals
    number: ($) => /\d+/,

    // String Literals
    string: ($) => /"([^"\\]|\\.)*"/,
  },
});

// Helper function to create separated lists
function sepBy(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
