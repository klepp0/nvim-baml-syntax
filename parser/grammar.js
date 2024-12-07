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

    // Blocks
    block: ($) => seq("{", repeat($._statement), "}"),

    // Template Strings (simple multiline strings)
    template_string: ($) => /#\"([^"#\\]|\\.)*\"#/, // Matches #"...#"

    // Identifiers
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Comments (single-line)
    comment: ($) => /\/\/[^\n]*/,
  },
});

// Helper function to create separated lists
function sepBy(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}
