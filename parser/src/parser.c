#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_client_LTllm_GT = 16,
  anon_sym_test = 17,
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
  sym_client_declaration = 50,
  sym_test_declaration = 51,
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
  [anon_sym_client_LTllm_GT] = "client<llm>",
  [anon_sym_test] = "test",
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
  [sym_client_declaration] = "client_declaration",
  [sym_test_declaration] = "test_declaration",
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
  [anon_sym_client_LTllm_GT] = anon_sym_client_LTllm_GT,
  [anon_sym_test] = anon_sym_test,
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
  [sym_client_declaration] = sym_client_declaration,
  [sym_test_declaration] = sym_test_declaration,
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
  [anon_sym_client_LTllm_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
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
  [sym_client_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_test_declaration] = {
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
  [5] = {.index = 8, .length = 5},
  [6] = {.index = 13, .length = 1},
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
    {field_content, 3},
    {field_name, 1},
    {field_parameters, 2},
  [8] =
    {field_arrow, 3},
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [13] =
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 17,
  [30] = 16,
  [31] = 14,
  [32] = 19,
  [33] = 18,
  [34] = 20,
  [35] = 13,
  [36] = 22,
  [37] = 23,
  [38] = 24,
  [39] = 11,
  [40] = 9,
  [41] = 12,
  [42] = 25,
  [43] = 10,
  [44] = 28,
  [45] = 27,
  [46] = 26,
  [47] = 47,
  [48] = 47,
  [49] = 47,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 61,
  [67] = 63,
  [68] = 61,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 13,
  [75] = 14,
  [76] = 15,
  [77] = 9,
  [78] = 16,
  [79] = 79,
  [80] = 11,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 11,
  [85] = 12,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 92,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 101,
  [110] = 110,
  [111] = 111,
  [112] = 103,
  [113] = 113,
  [114] = 104,
  [115] = 108,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 111,
  [120] = 120,
  [121] = 102,
  [122] = 120,
  [123] = 105,
  [124] = 106,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 129,
  [133] = 128,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 126,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 126,
  [144] = 129,
  [145] = 145,
  [146] = 128,
  [147] = 134,
  [148] = 130,
  [149] = 137,
  [150] = 150,
  [151] = 135,
  [152] = 138,
  [153] = 153,
  [154] = 154,
  [155] = 138,
  [156] = 138,
  [157] = 136,
  [158] = 128,
  [159] = 150,
  [160] = 154,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 5,
        '#', 2,
        '(', 42,
        ')', 43,
        ',', 56,
        '-', 11,
        '/', 9,
        ':', 57,
        '[', 66,
        ']', 67,
        'a', 145,
        'b', 118,
        'c', 96,
        'e', 109,
        'f', 99,
        'i', 105,
        'n', 147,
        'p', 129,
        'r', 86,
        's', 140,
        't', 82,
        '{', 44,
        '|', 58,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 4,
        '#', 2,
        ')', 43,
        ',', 56,
        '/', 9,
        '[', 66,
        ']', 67,
        'e', 112,
        '{', 44,
        '}', 45,
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
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 's') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '"', 4,
        '#', 2,
        '/', 9,
        '[', 66,
        'c', 104,
        'e', 109,
        'f', 148,
        'r', 86,
        't', 82,
        '{', 44,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(37);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(39);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__break);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_docstring);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_client);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_client);
      if (lookahead == '<') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_client_LTllm_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_retry_policy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_template_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_image);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_audio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(50);
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
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
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
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(54);
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
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
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
    [anon_sym_client_LTllm_GT] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
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
    [sym_source_file] = STATE(127),
    [sym__statement] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_function_declaration] = STATE(19),
    [sym_class_declaration] = STATE(19),
    [sym_enum_declaration] = STATE(19),
    [sym_client_declaration] = STATE(19),
    [sym_test_declaration] = STATE(19),
    [sym_retry_policy_declaration] = STATE(19),
    [sym_template_string_declaration] = STATE(19),
    [sym_block_string] = STATE(30),
    [sym_environment_variable] = STATE(30),
    [sym_expression] = STATE(8),
    [sym_array] = STATE(30),
    [sym_map_literal] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_docstring] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_client_LTllm_GT] = ACTIONS(17),
    [anon_sym_test] = ACTIONS(19),
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
      anon_sym_client_LTllm_GT,
    ACTIONS(47), 1,
      anon_sym_test,
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
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(32), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(47), 1,
      anon_sym_test,
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
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(32), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(47), 1,
      anon_sym_test,
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
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(32), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(84), 1,
      anon_sym_test,
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
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(32), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(123), 1,
      anon_sym_test,
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
    STATE(30), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(19), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(47), 1,
      anon_sym_test,
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
    STATE(16), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(32), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
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
      anon_sym_client_LTllm_GT,
    ACTIONS(19), 1,
      anon_sym_test,
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
    STATE(30), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
    STATE(19), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_client_declaration,
      sym_test_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [497] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(151), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(153), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [523] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(155), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(157), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [549] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(161), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [575] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(163), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(165), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [601] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(169), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [627] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(171), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(173), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [653] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(175), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(177), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [679] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(179), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(181), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [705] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(185), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [731] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(189), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [757] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(193), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [783] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(197), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [809] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(175), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [835] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(201), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [861] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(205), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [887] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(209), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [913] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(213), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [939] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(217), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [965] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(221), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [991] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(225), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1017] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(179), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(171), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1095] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(193), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(191), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1121] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1173] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1225] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(151), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1329] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(163), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1381] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(155), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1433] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
  [1459] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_retry_policy,
      anon_sym_template_string,
      sym_identifier,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_client_LTllm_GT,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
      sym_string,
      anon_sym_env_DOT,
      sym_number,
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
    STATE(91), 1,
      sym_expression,
    STATE(132), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(78), 4,
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
    STATE(91), 1,
      sym_expression,
    STATE(144), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(78), 4,
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
    STATE(91), 1,
      sym_expression,
    STATE(129), 1,
      sym_array_elements,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(78), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1608] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primitive_type,
    STATE(100), 1,
      sym_type,
    STATE(79), 2,
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
  [1637] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primitive_type,
    STATE(92), 1,
      sym_type,
    STATE(79), 2,
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
  [1666] = 10,
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
    STATE(116), 1,
      sym_expression,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(78), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1701] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primitive_type,
    STATE(99), 1,
      sym_type,
    STATE(79), 2,
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
  [1730] = 10,
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
    STATE(88), 1,
      sym_expression,
    ACTIONS(237), 2,
      sym_string,
      sym_number,
    STATE(78), 4,
      sym_block_string,
      sym_environment_variable,
      sym_array,
      sym_map_literal,
  [1765] = 7,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(64), 1,
      sym_primitive_type,
    STATE(86), 1,
      sym_type,
    STATE(79), 2,
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
    STATE(58), 4,
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
    STATE(60), 4,
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
    STATE(57), 4,
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
    STATE(70), 1,
      sym_map_entry,
    STATE(62), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1924] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(70), 1,
      sym_map_entry,
    STATE(62), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1944] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_map_entry,
    STATE(66), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [1964] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [1980] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_map_entry,
    STATE(68), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2000] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_map_entry,
    STATE(62), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2020] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_map_entry,
    STATE(61), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
  [2040] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_map_entry,
    STATE(62), 2,
      sym_map_entries,
      aux_sym_map_literal_repeat1,
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
  [2074] = 5,
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
  [2091] = 3,
    ACTIONS(298), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2104] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_map_entries_repeat1,
    ACTIONS(302), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2121] = 6,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(90), 1,
      sym_parameter,
    STATE(140), 1,
      sym_parameters,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2153] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2166] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2179] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2205] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2218] = 3,
    ACTIONS(161), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2231] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2244] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_map_entries_repeat1,
    ACTIONS(310), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2261] = 3,
    ACTIONS(315), 1,
      sym__break,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2300] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [2313] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_POUND_DQUOTE,
    STATE(71), 1,
      sym_block_string,
    ACTIONS(323), 2,
      sym_identifier,
      sym_string,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [2354] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_parameters_repeat1,
  [2370] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_array_elements_repeat1,
  [2386] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      sym_function_body,
  [2402] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_RBRACE,
      anon_sym_client,
      anon_sym_prompt,
  [2426] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_array_elements_repeat1,
  [2442] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_parameters_repeat1,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_parameters_repeat1,
  [2474] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_array_elements_repeat1,
  [2490] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2504] = 5,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_function_body,
  [2520] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [2546] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_parameter_list,
  [2559] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DASH_GT,
    STATE(51), 1,
      sym__arrow,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(89), 1,
      sym_map_entry,
  [2611] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_parameter_list,
  [2624] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym_identifier,
      sym_string,
  [2648] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_POUND_DQUOTE,
    STATE(37), 1,
      sym_block_string,
  [2661] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_parameter_list,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_DASH_GT,
      anon_sym_POUND_DQUOTE,
  [2685] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
    STATE(50), 1,
      sym__arrow,
  [2698] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_parameter_list,
  [2711] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_DASH_GT,
      anon_sym_POUND_DQUOTE,
  [2733] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(125), 1,
      sym_parameter,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_POUND_DQUOTE,
    STATE(23), 1,
      sym_block_string,
  [2759] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [2824] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2835] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [2845] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DQUOTE_POUND,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [2885] = 2,
    ACTIONS(387), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DQUOTE_POUND,
  [2913] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [2943] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [2953] = 2,
    ACTIONS(401), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
  [3021] = 2,
    ACTIONS(415), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DQUOTE_POUND,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [3049] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [3089] = 2,
    ACTIONS(429), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3097] = 2,
    ACTIONS(431), 1,
      sym__space,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
  [3115] = 2,
    ACTIONS(435), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3123] = 2,
    ACTIONS(437), 1,
      sym__text,
    ACTIONS(5), 2,
      sym_docstring,
      sym_comment,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3141] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE_POUND,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_docstring,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
  [3161] = 3,
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
  [SMALL_STATE(51)] = 1637,
  [SMALL_STATE(52)] = 1666,
  [SMALL_STATE(53)] = 1701,
  [SMALL_STATE(54)] = 1730,
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
  [SMALL_STATE(65)] = 1980,
  [SMALL_STATE(66)] = 2000,
  [SMALL_STATE(67)] = 2020,
  [SMALL_STATE(68)] = 2040,
  [SMALL_STATE(69)] = 2060,
  [SMALL_STATE(70)] = 2074,
  [SMALL_STATE(71)] = 2091,
  [SMALL_STATE(72)] = 2104,
  [SMALL_STATE(73)] = 2121,
  [SMALL_STATE(74)] = 2140,
  [SMALL_STATE(75)] = 2153,
  [SMALL_STATE(76)] = 2166,
  [SMALL_STATE(77)] = 2179,
  [SMALL_STATE(78)] = 2192,
  [SMALL_STATE(79)] = 2205,
  [SMALL_STATE(80)] = 2218,
  [SMALL_STATE(81)] = 2231,
  [SMALL_STATE(82)] = 2244,
  [SMALL_STATE(83)] = 2261,
  [SMALL_STATE(84)] = 2274,
  [SMALL_STATE(85)] = 2287,
  [SMALL_STATE(86)] = 2300,
  [SMALL_STATE(87)] = 2313,
  [SMALL_STATE(88)] = 2330,
  [SMALL_STATE(89)] = 2342,
  [SMALL_STATE(90)] = 2354,
  [SMALL_STATE(91)] = 2370,
  [SMALL_STATE(92)] = 2386,
  [SMALL_STATE(93)] = 2402,
  [SMALL_STATE(94)] = 2414,
  [SMALL_STATE(95)] = 2426,
  [SMALL_STATE(96)] = 2442,
  [SMALL_STATE(97)] = 2458,
  [SMALL_STATE(98)] = 2474,
  [SMALL_STATE(99)] = 2490,
  [SMALL_STATE(100)] = 2504,
  [SMALL_STATE(101)] = 2520,
  [SMALL_STATE(102)] = 2533,
  [SMALL_STATE(103)] = 2546,
  [SMALL_STATE(104)] = 2559,
  [SMALL_STATE(105)] = 2572,
  [SMALL_STATE(106)] = 2585,
  [SMALL_STATE(107)] = 2598,
  [SMALL_STATE(108)] = 2611,
  [SMALL_STATE(109)] = 2624,
  [SMALL_STATE(110)] = 2637,
  [SMALL_STATE(111)] = 2648,
  [SMALL_STATE(112)] = 2661,
  [SMALL_STATE(113)] = 2674,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2698,
  [SMALL_STATE(116)] = 2711,
  [SMALL_STATE(117)] = 2722,
  [SMALL_STATE(118)] = 2733,
  [SMALL_STATE(119)] = 2746,
  [SMALL_STATE(120)] = 2759,
  [SMALL_STATE(121)] = 2772,
  [SMALL_STATE(122)] = 2785,
  [SMALL_STATE(123)] = 2798,
  [SMALL_STATE(124)] = 2811,
  [SMALL_STATE(125)] = 2824,
  [SMALL_STATE(126)] = 2835,
  [SMALL_STATE(127)] = 2845,
  [SMALL_STATE(128)] = 2855,
  [SMALL_STATE(129)] = 2865,
  [SMALL_STATE(130)] = 2875,
  [SMALL_STATE(131)] = 2885,
  [SMALL_STATE(132)] = 2893,
  [SMALL_STATE(133)] = 2903,
  [SMALL_STATE(134)] = 2913,
  [SMALL_STATE(135)] = 2923,
  [SMALL_STATE(136)] = 2933,
  [SMALL_STATE(137)] = 2943,
  [SMALL_STATE(138)] = 2953,
  [SMALL_STATE(139)] = 2961,
  [SMALL_STATE(140)] = 2971,
  [SMALL_STATE(141)] = 2981,
  [SMALL_STATE(142)] = 2991,
  [SMALL_STATE(143)] = 3001,
  [SMALL_STATE(144)] = 3011,
  [SMALL_STATE(145)] = 3021,
  [SMALL_STATE(146)] = 3029,
  [SMALL_STATE(147)] = 3039,
  [SMALL_STATE(148)] = 3049,
  [SMALL_STATE(149)] = 3059,
  [SMALL_STATE(150)] = 3069,
  [SMALL_STATE(151)] = 3079,
  [SMALL_STATE(152)] = 3089,
  [SMALL_STATE(153)] = 3097,
  [SMALL_STATE(154)] = 3105,
  [SMALL_STATE(155)] = 3115,
  [SMALL_STATE(156)] = 3123,
  [SMALL_STATE(157)] = 3131,
  [SMALL_STATE(158)] = 3141,
  [SMALL_STATE(159)] = 3151,
  [SMALL_STATE(160)] = 3161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_variable, 2, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_variable, 2, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_literal, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string_declaration, 4, 0, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string_declaration, 4, 0, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_policy_declaration, 3, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_policy_declaration, 3, 0, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_declaration, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 3, 0, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client_declaration, 3, 0, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client_declaration, 3, 0, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entries, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prompt, 3, 0, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entries, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_entries_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_entries_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_llm, 3, 0, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elements, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_llm, 4, 0, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 6),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_elements_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_elements_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elements, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
