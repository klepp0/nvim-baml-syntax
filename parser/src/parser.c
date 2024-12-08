#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym__space = 1,
  sym__text = 2,
  sym__break = 3,
  sym_docstring = 4,
  sym_comment = 5,
  anon_sym_function = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_client = 12,
  anon_sym_prompt = 13,
  anon_sym_class = 14,
  anon_sym_enum = 15,
  anon_sym_test = 16,
  anon_sym_generator = 17,
  anon_sym_retry_policy = 18,
  anon_sym_template_string = 19,
  anon_sym_COMMA = 20,
  anon_sym_COLON = 21,
  anon_sym_PIPE = 22,
  anon_sym_bool = 23,
  anon_sym_int = 24,
  anon_sym_float = 25,
  anon_sym_string = 26,
  anon_sym_null = 27,
  anon_sym_image = 28,
  anon_sym_audio = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_POUND_DQUOTE = 32,
  anon_sym_DQUOTE_POUND = 33,
  sym_identifier = 34,
  sym_string = 35,
  anon_sym_env_DOT = 36,
  sym_number = 37,
  sym_source_file = 38,
  sym__statement = 39,
  sym_declaration = 40,
  sym_function_declaration = 41,
  sym__arrow = 42,
  sym_parameter_list = 43,
  sym_function_body = 44,
  sym__function_statement = 45,
  sym_llm = 46,
  sym_prompt = 47,
  sym_class_declaration = 48,
  sym_enum_declaration = 49,
  sym_test_declaration = 50,
  sym_generator_declaration = 51,
  sym_retry_policy_declaration = 52,
  sym_template_string_declaration = 53,
  sym_parameters = 54,
  sym_parameter = 55,
  sym_union_type = 56,
  sym_type = 57,
  sym_primitive_type = 58,
  sym_array_type = 59,
  sym_block_string = 60,
  sym_environment_variable = 61,
  sym_expression = 62,
  sym_block = 63,
  sym_array = 64,
  sym_array_elements = 65,
  sym_map_literal = 66,
  sym_map_entry = 67,
  sym_map_entries = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_function_body_repeat1 = 70,
  aux_sym_parameters_repeat1 = 71,
  aux_sym_array_elements_repeat1 = 72,
  aux_sym_map_literal_repeat1 = 73,
  aux_sym_map_entries_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__text] = "_text",
  [sym__break] = "_break",
  [sym_docstring] = "docstring",
  [sym_comment] = "comment",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_client] = "client",
  [anon_sym_prompt] = "prompt",
  [anon_sym_class] = "class",
  [anon_sym_enum] = "enum",
  [anon_sym_test] = "test",
  [anon_sym_generator] = "generator",
  [anon_sym_retry_policy] = "retry_policy",
  [anon_sym_template_string] = "template_string",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_null] = "null",
  [anon_sym_image] = "image",
  [anon_sym_audio] = "audio",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [anon_sym_DQUOTE_POUND] = "\"#",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [anon_sym_env_DOT] = "env.",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_declaration] = "declaration",
  [sym_function_declaration] = "function_declaration",
  [sym__arrow] = "_arrow",
  [sym_parameter_list] = "parameter_list",
  [sym_function_body] = "function_body",
  [sym__function_statement] = "_function_statement",
  [sym_llm] = "llm",
  [sym_prompt] = "prompt",
  [sym_class_declaration] = "class_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_test_declaration] = "test_declaration",
  [sym_generator_declaration] = "generator_declaration",
  [sym_retry_policy_declaration] = "retry_policy_declaration",
  [sym_template_string_declaration] = "template_string_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_union_type] = "union_type",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_block_string] = "block_string",
  [sym_environment_variable] = "environment_variable",
  [sym_expression] = "expression",
  [sym_block] = "block",
  [sym_array] = "array",
  [sym_array_elements] = "array_elements",
  [sym_map_literal] = "map_literal",
  [sym_map_entry] = "map_entry",
  [sym_map_entries] = "map_entries",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_array_elements_repeat1] = "array_elements_repeat1",
  [aux_sym_map_literal_repeat1] = "map_literal_repeat1",
  [aux_sym_map_entries_repeat1] = "map_entries_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym__text] = sym__text,
  [sym__break] = sym__break,
  [sym_docstring] = sym_docstring,
  [sym_comment] = sym_comment,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_client] = anon_sym_client,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_generator] = anon_sym_generator,
  [anon_sym_retry_policy] = anon_sym_retry_policy,
  [anon_sym_template_string] = anon_sym_template_string,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_audio] = anon_sym_audio,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_DQUOTE] = anon_sym_POUND_DQUOTE,
  [anon_sym_DQUOTE_POUND] = anon_sym_DQUOTE_POUND,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [anon_sym_env_DOT] = anon_sym_env_DOT,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_declaration] = sym_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym__arrow] = sym__arrow,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_body] = sym_function_body,
  [sym__function_statement] = sym__function_statement,
  [sym_llm] = sym_llm,
  [sym_prompt] = sym_prompt,
  [sym_class_declaration] = sym_class_declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_test_declaration] = sym_test_declaration,
  [sym_generator_declaration] = sym_generator_declaration,
  [sym_retry_policy_declaration] = sym_retry_policy_declaration,
  [sym_template_string_declaration] = sym_template_string_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_union_type] = sym_union_type,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_block_string] = sym_block_string,
  [sym_environment_variable] = sym_environment_variable,
  [sym_expression] = sym_expression,
  [sym_block] = sym_block,
  [sym_array] = sym_array,
  [sym_array_elements] = sym_array_elements,
  [sym_map_literal] = sym_map_literal,
  [sym_map_entry] = sym_map_entry,
  [sym_map_entries] = sym_map_entries,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_array_elements_repeat1] = aux_sym_array_elements_repeat1,
  [aux_sym_map_literal_repeat1] = aux_sym_map_literal_repeat1,
  [aux_sym_map_entries_repeat1] = aux_sym_map_entries_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__break] = {
    .visible = false,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__arrow] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym__function_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_llm] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_test_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_generator_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_policy_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block_string] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_elements] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entries] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_entries_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_body = 2,
  field_config = 3,
  field_content = 4,
  field_llm_spec = 5,
  field_name = 6,
  field_parameters = 7,
  field_return_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_body] = "body",
  [field_config] = "config",
  [field_content] = "content",
  [field_llm_spec] = "llm_spec",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 5},
  [7] = {.index = 16, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_config, 2},
    {field_name, 1},
  [5] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [8] =
    {field_content, 3},
    {field_name, 1},
    {field_parameters, 2},
  [11] =
    {field_arrow, 3},
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [16] =
    {field_llm_spec, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 11,
  [28] = 12,
  [29] = 29,
  [30] = 26,
  [31] = 18,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 17,
  [36] = 19,
  [37] = 23,
  [38] = 24,
  [39] = 25,
  [40] = 15,
  [41] = 9,
  [42] = 13,
  [43] = 34,
  [44] = 33,
  [45] = 32,
  [46] = 29,
  [47] = 47,
  [48] = 47,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 62,
  [66] = 63,
  [67] = 62,
  [68] = 68,
  [69] = 69,
  [70] = 13,
  [71] = 18,
  [72] = 72,
  [73] = 73,
  [74] = 13,
  [75] = 75,
  [76] = 76,
  [77] = 15,
  [78] = 78,
  [79] = 79,
  [80] = 9,
  [81] = 16,
  [82] = 17,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 20,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 107,
  [114] = 114,
  [115] = 111,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 103,
  [121] = 110,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 118,
  [127] = 114,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 129,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 129,
  [144] = 144,
  [145] = 132,
  [146] = 133,
  [147] = 133,
  [148] = 134,
  [149] = 136,
  [150] = 144,
  [151] = 142,
  [152] = 131,
  [153] = 132,
  [154] = 133,
  [155] = 155,
  [156] = 131,
  [157] = 131,
  [158] = 158,
  [159] = 128,
  [160] = 160,
  [161] = 158,
  [162] = 155,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 5,
        '#', 2,
        '(', 38,
        ')', 39,
        ',', 52,
        '-', 11,
        '/', 9,
        ':', 53,
        '[', 62,
        ']', 63,
        'a', 145,
        'b', 115,
        'c', 93,
        'e', 106,
        'f', 96,
        'g', 81,
        'i', 102,
        'n', 147,
        'p', 128,
        'r', 84,
        's', 139,
        't', 78,
        '{', 40,
        '|', 54,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == '}') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 4,
        '#', 2,
        ')', 39,
        ',', 52,
        '/', 9,
        '[', 62,
        ']', 63,
        'e', 109,
        '{', 40,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 's') ADVANCE(139);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == '}') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 4,
        '#', 2,
        '/', 9,
        '[', 62,
        'c', 98,
        'e', 106,
        'f', 148,
        'g', 81,
        'r', 84,
        't', 78,
        '{', 40,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(35);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(35);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__break);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_docstring);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_client);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_client);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_generator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_retry_policy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_template_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_image);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_audio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE_POUND);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_env_DOT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_docstring] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_client] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_retry_policy] = ACTIONS(1),
    [anon_sym_template_string] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_audio] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_POUND] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_env_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym__statement] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_function_declaration] = STATE(19),
    [sym_class_declaration] = STATE(19),
    [sym_enum_declaration] = STATE(19),
    [sym_test_declaration] = STATE(19),
    [sym_generator_declaration] = STATE(19),
    [sym_retry_policy_declaration] = STATE(19),
    [sym_template_string_declaration] = STATE(19),
    [sym_block_string] = STATE(16),
    [sym_environment_variable] = STATE(16),
    [sym_expression] = STATE(8),
    [sym_array] = STATE(16),
    [sym_map_literal] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_docstring] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(17),
    [anon_sym_generator] = ACTIONS(19),
    [anon_sym_retry_policy] = ACTIONS(21),
    [anon_sym_template_string] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_POUND_DQUOTE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [anon_sym_env_DOT] = ACTIONS(33),
    [sym_number] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_class,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_test,
    ACTIONS(47), 1,
      anon_sym_generator,
    ACTIONS(49), 1,
      anon_sym_retry_policy,
    ACTIONS(51), 1,
      anon_sym_template_string,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_env_DOT,
    ACTIONS(59), 2,
      sym_string,
      sym_number,
    STATE(7), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(36), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [71] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_class,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_test,
    ACTIONS(47), 1,
      anon_sym_generator,
    ACTIONS(49), 1,
      anon_sym_retry_policy,
    ACTIONS(51), 1,
      anon_sym_template_string,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_env_DOT,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      sym_string,
      sym_number,
    STATE(5), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(36), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [142] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_class,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_test,
    ACTIONS(47), 1,
      anon_sym_generator,
    ACTIONS(49), 1,
      anon_sym_retry_policy,
    ACTIONS(51), 1,
      anon_sym_template_string,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_env_DOT,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      sym_string,
      sym_number,
    STATE(3), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(36), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [213] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_class,
    ACTIONS(78), 1,
      anon_sym_enum,
    ACTIONS(81), 1,
      anon_sym_test,
    ACTIONS(84), 1,
      anon_sym_generator,
    ACTIONS(87), 1,
      anon_sym_retry_policy,
    ACTIONS(90), 1,
      anon_sym_template_string,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_env_DOT,
    ACTIONS(102), 2,
      sym_string,
      sym_number,
    STATE(5), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(36), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [284] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_function,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_class,
    ACTIONS(117), 1,
      anon_sym_enum,
    ACTIONS(120), 1,
      anon_sym_test,
    ACTIONS(123), 1,
      anon_sym_generator,
    ACTIONS(126), 1,
      anon_sym_retry_policy,
    ACTIONS(129), 1,
      anon_sym_template_string,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_env_DOT,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    STATE(6), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(19), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [355] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_class,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_test,
    ACTIONS(47), 1,
      anon_sym_generator,
    ACTIONS(49), 1,
      anon_sym_retry_policy,
    ACTIONS(51), 1,
      anon_sym_template_string,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_env_DOT,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      sym_string,
      sym_number,
    STATE(5), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(36), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [426] = 19,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_test,
    ACTIONS(19), 1,
      anon_sym_generator,
    ACTIONS(21), 1,
      anon_sym_retry_policy,
    ACTIONS(23), 1,
      anon_sym_template_string,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_env_DOT,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      sym_string,
      sym_number,
    STATE(6), 4,
      sym__statement,
      sym_declaration,
      sym_expression,
      aux_sym_source_file_repeat1,
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(19), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [497] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(151), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [523] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(157), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(155), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [549] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(161), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [575] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(165), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [601] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(169), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(167), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [627] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(155), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [653] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(173), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(171), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [679] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(177), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [705] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(181), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(179), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [731] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(185), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(183), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [757] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(189), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [783] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(193), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(191), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [809] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(191), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [835] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(175), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(177), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [861] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(195), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [887] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(199), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [913] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(203), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [939] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(209), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(207), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [965] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(161), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [991] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(163), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(165), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1017] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(211), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(207), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(183), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1095] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(217), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(215), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1121] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(219), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(223), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1173] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(179), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(189), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1225] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(195), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(199), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(203), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(171), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1329] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(151), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(167), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1381] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(223), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(219), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1433] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(215), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1459] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
    ACTIONS(211), 8,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
  [1485] = 12,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_env_DOT,
    STATE(100), 1,
      sym_expression,
    STATE(153), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(81), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1526] = 12,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_env_DOT,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_expression,
    STATE(132), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(81), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1567] = 12,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_env_DOT,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_expression,
    STATE(145), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(81), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1608] = 10,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_env_DOT,
    STATE(117), 1,
      sym_expression,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(81), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1643] = 10,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_env_DOT,
    STATE(92), 1,
      sym_expression,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(81), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1678] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primitive_type,
    STATE(96), 1,
      sym_type,
    STATE(78), 2,
      sym_union_type,
      sym_array_type,
    ACTIONS(245), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
  [1707] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primitive_type,
    STATE(95), 1,
      sym_type,
    STATE(78), 2,
      sym_union_type,
      sym_array_type,
    ACTIONS(245), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
  [1736] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primitive_type,
    STATE(102), 1,
      sym_type,
    STATE(78), 2,
      sym_union_type,
      sym_array_type,
    ACTIONS(245), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
  [1765] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(68), 1,
      sym_primitive_type,
    STATE(73), 1,
      sym_type,
    STATE(78), 2,
      sym_union_type,
      sym_array_type,
    ACTIONS(245), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
  [1794] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_client,
    ACTIONS(253), 1,
      anon_sym_prompt,
    STATE(60), 4,
      sym__function_statement,
      sym_llm,
      sym_prompt,
      aux_sym_function_body_repeat1,
  [1816] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_client,
    ACTIONS(253), 1,
      anon_sym_prompt,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(56), 4,
      sym__function_statement,
      sym_llm,
      sym_prompt,
      aux_sym_function_body_repeat1,
  [1838] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_client,
    ACTIONS(253), 1,
      anon_sym_prompt,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(60), 4,
      sym__function_statement,
      sym_llm,
      sym_prompt,
      aux_sym_function_body_repeat1,
  [1860] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_client,
    ACTIONS(253), 1,
      anon_sym_prompt,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(58), 4,
      sym__function_statement,
      sym_llm,
      sym_prompt,
      aux_sym_function_body_repeat1,
  [1882] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      anon_sym_client,
    ACTIONS(266), 1,
      anon_sym_prompt,
    STATE(60), 4,
      sym__function_statement,
      sym_llm,
      sym_prompt,
      aux_sym_function_body_repeat1,
  [1904] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(75), 1,
      sym_map_entry,
    STATE(61), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1924] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(75), 1,
      sym_map_entry,
    STATE(61), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1944] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_map_entry,
    STATE(62), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1964] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_map_entry,
    STATE(67), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1984] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_map_entry,
    STATE(61), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2004] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_map_entry,
    STATE(65), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2024] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_map_entry,
    STATE(61), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2044] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACK,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2087] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2100] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_map_entries_repeat1,
    ACTIONS(294), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2130] = 3,
    ACTIONS(169), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2143] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_map_entries_repeat1,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2160] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_map_entries_repeat1,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2203] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(91), 1,
      sym_parameter,
    STATE(137), 1,
      sym_parameters,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2235] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2248] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2261] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_POUND_DQUOTE,
    STATE(86), 1,
      sym_block_string,
    ACTIONS(313), 2,
      sym_identifier,
      sym_string,
  [2278] = 3,
    ACTIONS(315), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2291] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2304] = 3,
    ACTIONS(321), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2317] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2330] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_array_elements_repeat1,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_POUND_DQUOTE,
  [2358] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_parameters_repeat1,
  [2374] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_parameters_repeat1,
  [2390] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [2402] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_array_elements_repeat1,
  [2418] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_POUND_DQUOTE,
  [2430] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_function_body,
  [2446] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_function_body,
  [2462] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameters_repeat1,
  [2478] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2490] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2502] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_array_elements_repeat1,
  [2518] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [2530] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DASH_GT,
    STATE(52), 1,
      sym__arrow,
  [2570] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_parameter_list,
  [2583] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_DASH_GT,
    STATE(53), 1,
      sym__arrow,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [2609] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(375), 2,
      sym_identifier,
      sym_string,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameter_list,
  [2633] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [2646] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_parameter_list,
  [2659] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [2672] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [2685] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [2698] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_parameter_list,
  [2711] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameter_list,
  [2748] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    STATE(27), 1,
      sym_block_string,
  [2761] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [2787] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_POUND_DQUOTE,
    STATE(11), 1,
      sym_block_string,
  [2800] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(101), 1,
      sym_map_entry,
  [2813] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(125), 1,
      sym_parameter,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_parameter_list,
  [2850] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [2873] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
  [2893] = 2,
    ACTIONS(383), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [2901] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
  [2911] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE_POUND,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [2941] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [2981] = 2,
    ACTIONS(401), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [2989] = 2,
    ACTIONS(403), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE_POUND,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DQUOTE_POUND,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
  [3087] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [3097] = 2,
    ACTIONS(425), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_DQUOTE_POUND,
  [3125] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [3135] = 2,
    ACTIONS(433), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3143] = 2,
    ACTIONS(435), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3161] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3171] = 2,
    ACTIONS(441), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
  [3189] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 284,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 426,
  [SMALL_STATE(9)] = 497,
  [SMALL_STATE(10)] = 523,
  [SMALL_STATE(11)] = 549,
  [SMALL_STATE(12)] = 575,
  [SMALL_STATE(13)] = 601,
  [SMALL_STATE(14)] = 627,
  [SMALL_STATE(15)] = 653,
  [SMALL_STATE(16)] = 679,
  [SMALL_STATE(17)] = 705,
  [SMALL_STATE(18)] = 731,
  [SMALL_STATE(19)] = 757,
  [SMALL_STATE(20)] = 783,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 835,
  [SMALL_STATE(23)] = 861,
  [SMALL_STATE(24)] = 887,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 939,
  [SMALL_STATE(27)] = 965,
  [SMALL_STATE(28)] = 991,
  [SMALL_STATE(29)] = 1017,
  [SMALL_STATE(30)] = 1043,
  [SMALL_STATE(31)] = 1069,
  [SMALL_STATE(32)] = 1095,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1147,
  [SMALL_STATE(35)] = 1173,
  [SMALL_STATE(36)] = 1199,
  [SMALL_STATE(37)] = 1225,
  [SMALL_STATE(38)] = 1251,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1303,
  [SMALL_STATE(41)] = 1329,
  [SMALL_STATE(42)] = 1355,
  [SMALL_STATE(43)] = 1381,
  [SMALL_STATE(44)] = 1407,
  [SMALL_STATE(45)] = 1433,
  [SMALL_STATE(46)] = 1459,
  [SMALL_STATE(47)] = 1485,
  [SMALL_STATE(48)] = 1526,
  [SMALL_STATE(49)] = 1567,
  [SMALL_STATE(50)] = 1608,
  [SMALL_STATE(51)] = 1643,
  [SMALL_STATE(52)] = 1678,
  [SMALL_STATE(53)] = 1707,
  [SMALL_STATE(54)] = 1736,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1794,
  [SMALL_STATE(57)] = 1816,
  [SMALL_STATE(58)] = 1838,
  [SMALL_STATE(59)] = 1860,
  [SMALL_STATE(60)] = 1882,
  [SMALL_STATE(61)] = 1904,
  [SMALL_STATE(62)] = 1924,
  [SMALL_STATE(63)] = 1944,
  [SMALL_STATE(64)] = 1964,
  [SMALL_STATE(65)] = 1984,
  [SMALL_STATE(66)] = 2004,
  [SMALL_STATE(67)] = 2024,
  [SMALL_STATE(68)] = 2044,
  [SMALL_STATE(69)] = 2060,
  [SMALL_STATE(70)] = 2074,
  [SMALL_STATE(71)] = 2087,
  [SMALL_STATE(72)] = 2100,
  [SMALL_STATE(73)] = 2117,
  [SMALL_STATE(74)] = 2130,
  [SMALL_STATE(75)] = 2143,
  [SMALL_STATE(76)] = 2160,
  [SMALL_STATE(77)] = 2177,
  [SMALL_STATE(78)] = 2190,
  [SMALL_STATE(79)] = 2203,
  [SMALL_STATE(80)] = 2222,
  [SMALL_STATE(81)] = 2235,
  [SMALL_STATE(82)] = 2248,
  [SMALL_STATE(83)] = 2261,
  [SMALL_STATE(84)] = 2278,
  [SMALL_STATE(85)] = 2291,
  [SMALL_STATE(86)] = 2304,
  [SMALL_STATE(87)] = 2317,
  [SMALL_STATE(88)] = 2330,
  [SMALL_STATE(89)] = 2346,
  [SMALL_STATE(90)] = 2358,
  [SMALL_STATE(91)] = 2374,
  [SMALL_STATE(92)] = 2390,
  [SMALL_STATE(93)] = 2402,
  [SMALL_STATE(94)] = 2418,
  [SMALL_STATE(95)] = 2430,
  [SMALL_STATE(96)] = 2446,
  [SMALL_STATE(97)] = 2462,
  [SMALL_STATE(98)] = 2478,
  [SMALL_STATE(99)] = 2490,
  [SMALL_STATE(100)] = 2502,
  [SMALL_STATE(101)] = 2518,
  [SMALL_STATE(102)] = 2530,
  [SMALL_STATE(103)] = 2544,
  [SMALL_STATE(104)] = 2557,
  [SMALL_STATE(105)] = 2570,
  [SMALL_STATE(106)] = 2583,
  [SMALL_STATE(107)] = 2596,
  [SMALL_STATE(108)] = 2609,
  [SMALL_STATE(109)] = 2620,
  [SMALL_STATE(110)] = 2633,
  [SMALL_STATE(111)] = 2646,
  [SMALL_STATE(112)] = 2659,
  [SMALL_STATE(113)] = 2672,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2698,
  [SMALL_STATE(116)] = 2711,
  [SMALL_STATE(117)] = 2724,
  [SMALL_STATE(118)] = 2735,
  [SMALL_STATE(119)] = 2748,
  [SMALL_STATE(120)] = 2761,
  [SMALL_STATE(121)] = 2774,
  [SMALL_STATE(122)] = 2787,
  [SMALL_STATE(123)] = 2800,
  [SMALL_STATE(124)] = 2813,
  [SMALL_STATE(125)] = 2826,
  [SMALL_STATE(126)] = 2837,
  [SMALL_STATE(127)] = 2850,
  [SMALL_STATE(128)] = 2863,
  [SMALL_STATE(129)] = 2873,
  [SMALL_STATE(130)] = 2883,
  [SMALL_STATE(131)] = 2893,
  [SMALL_STATE(132)] = 2901,
  [SMALL_STATE(133)] = 2911,
  [SMALL_STATE(134)] = 2921,
  [SMALL_STATE(135)] = 2931,
  [SMALL_STATE(136)] = 2941,
  [SMALL_STATE(137)] = 2951,
  [SMALL_STATE(138)] = 2961,
  [SMALL_STATE(139)] = 2971,
  [SMALL_STATE(140)] = 2981,
  [SMALL_STATE(141)] = 2989,
  [SMALL_STATE(142)] = 2997,
  [SMALL_STATE(143)] = 3007,
  [SMALL_STATE(144)] = 3017,
  [SMALL_STATE(145)] = 3027,
  [SMALL_STATE(146)] = 3037,
  [SMALL_STATE(147)] = 3047,
  [SMALL_STATE(148)] = 3057,
  [SMALL_STATE(149)] = 3067,
  [SMALL_STATE(150)] = 3077,
  [SMALL_STATE(151)] = 3087,
  [SMALL_STATE(152)] = 3097,
  [SMALL_STATE(153)] = 3105,
  [SMALL_STATE(154)] = 3115,
  [SMALL_STATE(155)] = 3125,
  [SMALL_STATE(156)] = 3135,
  [SMALL_STATE(157)] = 3143,
  [SMALL_STATE(158)] = 3151,
  [SMALL_STATE(159)] = 3161,
  [SMALL_STATE(160)] = 3171,
  [SMALL_STATE(161)] = 3179,
  [SMALL_STATE(162)] = 3189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_policy_declaration, 3, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_policy_declaration, 3, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string_declaration, 4, 0, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string_declaration, 4, 0, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generator_declaration, 4, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generator_declaration, 4, 0, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_variable, 2, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_variable, 2, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 3, 0, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, 0, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_entries_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_entries_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entries, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entries, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_llm, 3, 0, 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 3, 0, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elements, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_elements_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_elements_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_llm, 4, 0, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elements, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_baml(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
