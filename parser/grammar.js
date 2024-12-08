// grammar.js
module.exports = grammar({
  name: "baml",

  // Define extra tokens to ignore (whitespace and comments)
  extras: ($) => [/\s/, $.docstring, $.comment],

  // Define the root node
  rules: {
    source_file: ($) => repeat($._statement),

    // Generic statement can be a declaration
    _statement: ($) => choice($.declaration, $.expression),

    // Defining helper rules
    _space: ($) => /\s+/,
    _text: ($) => /[^{}]+/,
    _break: ($) => /\n/,

    // Comments
    docstring: ($) => /\/\/\/[^\n]*/,
    comment: ($) => /\/\/[^\n]*/,

    // Declarations
    declaration: ($) =>
      choice(
        $.function_declaration,
        $.class_declaration,
        $.enum_declaration,
        $.test_declaration,
        $.client_declaration,
        $.retry_policy_declaration,
        $.template_string_declaration,
      ),

    // Function Declaration
    function_declaration: ($) =>
      seq(
        "function",
        field("name", $.identifier),
        field("parameters", $.parameter_list),
        field("arrow", $._arrow),
        field("return_type", $.type),
        field("body", $.function_body),
      ),
    _arrow: ($) => token("->"),

    parameter_list: ($) => seq("(", optional(sepBy1($.parameter, ",")), ")"),

    function_body: ($) => seq("{", repeat($._function_statement), "}"),
    _function_statement: ($) => choice($.prompt, $.llm),

    llm: ($) =>
      seq(
        "client",
        $._space,
        field("llm_spec", choice($.identifier, $.string)),
        optional($._break),
      ),

    prompt: ($) =>
      seq(
        "prompt",
        $._space,
        field("llm_spec", choice($.identifier, $.string, $.block_string)),
        optional($._break),
      ),

    // Class Declaration
    class_declaration: ($) =>
      seq("class", field("name", $.identifier), field("body", $.block)),

    // Enum Declaration
    enum_declaration: ($) =>
      seq("enum", field("name", $.identifier), field("body", $.block)),

    // Client Declaration
    client_declaration: ($) =>
      seq("client<llm>", field("name", $.identifier), field("body", $.block)),

    // Test Declaration
    test_declaration: ($) =>
      seq("test", field("name", $.identifier), field("body", $.block)),

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
        field("parameters", $.parameter_list),
        field("content", $.block_string),
      ),

    // Parameter List (simple, no types)
    parameter_list: ($) => seq("(", optional($.parameters), ")"),

    parameters: ($) => sepBy(",", $.parameter),

    parameter: ($) => seq($.identifier, ":", $.type),

    // Add this line to define union_type with higher precedence
    union_type: ($) => prec.left(10, seq($.type, "|", $.type)),

    // Modify the existing type rule to include union_type
    type: ($) =>
      choice($.primitive_type, $.array_type, $.identifier, $.union_type),

    primitive_type: ($) =>
      choice("bool", "int", "float", "string", "null", "image", "audio"),

    array_type: ($) => seq(choice($.primitive_type, $.identifier), "[", "]"),

    // Multiline string
    block_string: ($) => seq('#"', $._text, '"#'),

    // Identifiers
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // String Literals
    string: ($) => /"([^"\\]|\\.)*"/,

    // Environment Variable (Placeholder)
    environment_variable: ($) => seq("env.", field("name", $.identifier)),

    // Expressions (Placeholder)
    expression: ($) =>
      choice(
        $.environment_variable,
        $.identifier,
        $.number,
        $.string,
        $.array,
        $.map_literal,
        $.block_string,
      ),

    block: ($) => seq("{", repeat($._statement), "}"),

    array: ($) => seq("[", optional($.array_elements), "]"),

    array_elements: ($) => sepBy(",", $.expression),

    map_literal: ($) => seq("{", repeat($.map_entries), "}"),

    map_entry: ($) => seq($.identifier, $._space, $.expression),

    map_entries: ($) => sepBy(",", $.map_entry),

    // Template Strings
    template_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Matches #"...#"

    // Jinja Strings (Placeholder)
    jinja_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Reusing the same pattern

    // Number Literals
    number: ($) => /\d+/,

    curly_expression: ($) => seq("{{", $.expression, "}}"),
  },
});

// Helper function to create separated lists
function sepBy(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
