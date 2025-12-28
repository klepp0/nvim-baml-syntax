// nvim-baml-syntax/grammar.js - Re-attempting Precedence in Type Rule
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function sepBy1(rule, separator) { return seq(rule, repeat(seq(separator, rule))); }
function sepBy(rule, separator) { return optional(sepBy1(rule, separator)); }

module.exports = grammar({
  name: 'baml',
  extras: $ => [ $.docstring, $.comment, /\s+/ ], // Use regex for whitespace extra
  word: $ => $.identifier,
  precedences: $ => [
    // Original precedences
    [$.ternary_expression, $.binary_expression],
    [$.function_call_expression, $.member_expression],
    [$.union_type, $.type], // Ensure union has lower precedence than base types within type choice
    [$.boolean, $.number, $.string, $.identifier],
  ],
  conflicts: $ => [ // Restore original conflicts
    [$.type, $.expression],
    [$.expression, $.map_entry],
    [$._expression_atom, $.type],
    [$.binary_expression, $.expression],
    [$.function_call_expression, $.expression],
    [$.member_expression, $.expression],
    [$.class_field, $.expression],
    [$.identifier, $.primitive_type], // Restored conflict
    [$.environment_variable, $.expression]
  ],
  rules: {
    source_file: $ => repeat($._top_level_statement),
    _top_level_statement: $ => choice( $.declaration, $.expression, prec(2, $.environment_variable) ),
    docstring: $ => token(seq('///', /[^\n]*/)),
    comment: $ => token(seq('//', /[^\n]*/)),

    // --- Simple Identifier Rule ---
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    declaration: $ => choice( $.function_declaration, $.class_declaration, $.enum_declaration, $.client_declaration, $.retry_policy_declaration, $.template_string_declaration, $.test_declaration, $.generator_declaration ),

    // --- *** Type Rule: Re-apply Precedence for primitive_type *** ---
    type: $ => choice(
       prec(1, $.primitive_type), // Give primitive_type higher precedence than identifier
       $.array_type,
       $.identifier,             // identifier has lower implicit precedence (0)
       $.union_type
    ),
    // Use literals for primitive types
    primitive_type: $ => choice( 'bool', 'int', 'float', 'string', 'null', 'image', 'audio', 'model' ),
    union_type: $ => prec.left(1, seq($.type, '|', $.type)),
    // Use $.type which includes the prioritized primitive_type choice
    array_type: $ => seq(field('element', $.type), '[]'),

    // Function rules (reverted body)
    function_declaration: $ => seq( 'function', field('name', $.identifier), field('parameters', $.parameter_list), optional(seq($._arrow, field('return_type', $.type))), field('body', $.function_body) ),
    _arrow: $ => token('->'),
    parameter_list: $ => seq('(', sepBy($.parameter, ','), ')'),
    parameter: $ => seq(field('name', $.identifier), token(':'), field('type', $.type), optional('?')),
    function_body: $ => seq( '{', repeat(choice($.llm_client_block, $.prompt_block)), '}' ), // Reverted

    llm_client_block: $ => seq('client', field('client_ref', choice($.identifier, $.string)), optional(field('config', $.map_literal))),
    prompt_block: $ => seq('prompt', field('content', $.block_string)),

    // Class rules (reverted body)
    class_declaration: $ => seq('class', field('name', $.identifier), field('body', $.class_body)),
    class_body: $ => seq( '{', repeat(choice($.class_field, $.class_attribute)), '}' ), // Reverted
    class_field: $ => seq( field('name', $.identifier), field('type', $.type), optional('?'), repeat($.field_attribute) ),

    // Enum rules
    enum_declaration: $ => seq('enum', field('name', $.identifier), field('body', $.enum_body)),
    enum_body: $ => seq('{', repeat(choice($.enum_value, $.class_attribute)), '}'),
    enum_value: $ => field('name', $.identifier),

    // Other declarations
    client_declaration: $ => seq('client', field('type', seq('<', $.identifier, '>')), field('name', $.identifier), field('body', $.map_literal)),
    retry_policy_declaration: $ => seq('retry_policy', field('name', $.identifier), field('body', $.map_literal)),
    template_string_declaration: $ => seq('template_string', field('name', $.identifier), field('parameters', $.parameter_list), field('content', $.block_string)),
    test_declaration: $ => seq("test", field("name", $.identifier), field("body", $.test_body)),
    test_body: $ => seq("{", repeat($.test_statement), "}"),
    test_statement: $ => seq( field("key", alias(choice("functions", "args"), $.test_keyword)), token(':'), field("value", $.expression) ),
    generator_declaration: $ => seq("generator", field("name", $.identifier), field("body", $.map_literal)),

    // Attributes
    field_attribute: $ => prec(1, seq('@', field('name', $.identifier), optional($.attribute_arguments))),
    class_attribute: $ => seq('@@', field('name', $.identifier), optional($.attribute_arguments)),
    attribute_arguments: $ => seq('(', sepBy($.attribute_argument, ','), ')'),
    attribute_argument: $ => choice( $.string, $.number, $.identifier, $.boolean, seq(field('key', $.identifier), '=', field('value', choice($.string, $.number, $.identifier, $.boolean))) ),

    // Expressions
    expression: $ => choice( $.function_call_expression, $.member_expression, $._expression_atom, $.binary_expression, $.ternary_expression ),
     _expression_atom: $ => choice( prec(3, $.block_string), prec(2, $.map_literal), prec(2, $.array_literal), prec(1, $.environment_variable), $.identifier, $.number, $.string, $.boolean, seq('(', $.expression, ')') ),
    member_expression: $ => prec(6, seq(field('object', $.expression), token('.'), field('property', $.identifier))),
    function_call_expression: $ => prec(7, seq(field('function', $.expression), field('arguments', $.argument_list))),
    argument_list: $ => seq('(', sepBy($.expression, ','), ')'),
    binary_expression: $ => choice(
      prec.left(5, seq(field('left', $.expression), field('operator', alias(choice('*', '/'), $.binary_operator)), field('right', $.expression))),
      prec.left(4, seq(field('left', $.expression), field('operator', alias(choice('+', '-'), $.binary_operator)), field('right', $.expression))),
      prec.left(3, seq(field('left', $.expression), field('operator', alias(choice('<', '<=', '>', '>=', '==', '!='), $.binary_operator)), field('right', $.expression))),
      prec.left(2, seq(field('left', $.expression), field('operator', alias('and', $.binary_operator)), field('right', $.expression))),
      prec.left(1, seq(field('left', $.expression), field('operator', alias('or', $.binary_operator)), field('right', $.expression)))
    ),
    ternary_expression: $ => prec.right(0, seq( field('condition', $.expression), '?', field('consequence', $.expression), ':', field('alternative', $.expression) )),
    environment_variable: $ => seq('env.', field('name', $.identifier)),

    // Literals & Block String (keeping block string fix)
    string: $ => token(seq('"', /([^"\\]|\\.)*/, '"')),
    block_string: $ => seq( '#"', repeat(choice( prec(1, $.interpolation), prec(1, $.jinja_statement), prec(1, $.jinja_comment), $._block_string_content )), token('"#') ),
    _block_string_content: $ => token(prec(-1, /./)), // Keep this fix for function body test
    interpolation: $ => seq('{{', $.expression, '}}'),
    jinja_statement: $ => seq('{%', repeat(/[^%]+|%/), '%}'),
    jinja_comment: $ => seq('{#', repeat(/[^#]+|#/), '#}'),
    number: $ => /\d+(\.\d+)?/,
    boolean: $ => choice('true', 'false'), // Reverted to literals

    array_literal: $ => seq('[', sepBy($.expression, ','), ']'),
    map_literal: $ => seq('{', repeat(seq($.map_entry, optional(','))), '}'),
    map_entry: $ => seq(field('key', choice($.identifier, $.string)), token(':'), field('value', $.expression)),
  }
});
