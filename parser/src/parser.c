#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_function = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_class = 3,
  anon_sym_enum = 4,
  anon_sym_test = 5,
  anon_sym_generator = 6,
  anon_sym_retry_policy = 7,
  anon_sym_template_string = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_COLON = 12,
  anon_sym_PIPE = 13,
  anon_sym_bool = 14,
  anon_sym_int = 15,
  anon_sym_float = 16,
  anon_sym_string = 17,
  anon_sym_null = 18,
  anon_sym_image = 19,
  anon_sym_audio = 20,
  anon_sym_model = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_LT = 24,
  anon_sym_GT = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_AT = 28,
  anon_sym_AT_AT = 29,
  anon_sym_QMARK = 30,
  aux_sym_template_string_token1 = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym_string = 34,
  anon_sym_prompt = 35,
  sym_number = 36,
  anon_sym_env = 37,
  anon_sym_DOT = 38,
  anon_sym_LBRACE_LBRACE = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_declaration = 42,
  sym_function_declaration = 43,
  sym_class_declaration = 44,
  sym_enum_declaration = 45,
  sym_test_declaration = 46,
  sym_generator_declaration = 47,
  sym_retry_policy_declaration = 48,
  sym_template_string_declaration = 49,
  sym_parameter_list = 50,
  sym_parameters = 51,
  sym_union_type = 52,
  sym_type = 53,
  sym_primitive_type = 54,
  sym_array_type = 55,
  sym_generic_type = 56,
  sym_block = 57,
  sym_optional_type = 58,
  sym_template_string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_parameters_repeat1 = 61,
  aux_sym_generic_type_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_class] = "class",
  [anon_sym_enum] = "enum",
  [anon_sym_test] = "test",
  [anon_sym_generator] = "generator",
  [anon_sym_retry_policy] = "retry_policy",
  [anon_sym_template_string] = "template_string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_model] = "model",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_QMARK] = "\?",
  [aux_sym_template_string_token1] = "template_string_token1",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [anon_sym_prompt] = "prompt",
  [sym_number] = "number",
  [anon_sym_env] = "env",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_declaration] = "declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_test_declaration] = "test_declaration",
  [sym_generator_declaration] = "generator_declaration",
  [sym_retry_policy_declaration] = "retry_policy_declaration",
  [sym_template_string_declaration] = "template_string_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameters] = "parameters",
  [sym_union_type] = "union_type",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_generic_type] = "generic_type",
  [sym_block] = "block",
  [sym_optional_type] = "optional_type",
  [sym_template_string] = "template_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_generic_type_repeat1] = "generic_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_generator] = anon_sym_generator,
  [anon_sym_retry_policy] = anon_sym_retry_policy,
  [anon_sym_template_string] = anon_sym_template_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_model] = anon_sym_model,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_template_string_token1] = aux_sym_template_string_token1,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [anon_sym_prompt] = anon_sym_prompt,
  [sym_number] = sym_number,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_declaration] = sym_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_test_declaration] = sym_test_declaration,
  [sym_generator_declaration] = sym_generator_declaration,
  [sym_retry_policy_declaration] = sym_retry_policy_declaration,
  [sym_template_string_declaration] = sym_template_string_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameters] = sym_parameters,
  [sym_union_type] = sym_union_type,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_generic_type] = sym_generic_type,
  [sym_block] = sym_block,
  [sym_optional_type] = sym_optional_type,
  [sym_template_string] = sym_template_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_generic_type_repeat1] = aux_sym_generic_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_model] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_template_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
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
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_config = 2,
  field_content = 3,
  field_name = 4,
  field_parameters = 5,
  field_return_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_config] = "config",
  [field_content] = "content",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_config, 2},
    {field_name, 1},
  [4] =
    {field_content, 2},
    {field_name, 1},
  [6] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [9] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      ADVANCE_MAP(
        '"', 1,
        '#', 2,
        '(', 100,
        ')', 101,
        ',', 102,
        '-', 8,
        '.', 166,
        '/', 7,
        ':', 103,
        '<', 123,
        '>', 124,
        '?', 130,
        '@', 128,
        '[', 121,
        ']', 122,
        'a', 84,
        'b', 56,
        'c', 35,
        'e', 47,
        'f', 40,
        'g', 23,
        'i', 45,
        'm', 54,
        'n', 86,
        'p', 68,
        'r', 26,
        's', 78,
        't', 20,
        '{', 126,
        '|', 104,
        '}', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ',', 102,
        '-', 8,
        '/', 7,
        '>', 124,
        '?', 130,
        '[', 121,
        'a', 158,
        'b', 152,
        'f', 145,
        'i', 147,
        'm', 150,
        'n', 159,
        's', 155,
        '{', 125,
        '|', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(161);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_generator);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_retry_policy);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_template_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_image);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_audio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_model);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(167);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_template_string_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_retry_policy] = ACTIONS(1),
    [anon_sym_template_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_template_string_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym__statement] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_function_declaration] = STATE(12),
    [sym_class_declaration] = STATE(12),
    [sym_enum_declaration] = STATE(12),
    [sym_test_declaration] = STATE(12),
    [sym_generator_declaration] = STATE(12),
    [sym_retry_policy_declaration] = STATE(12),
    [sym_template_string_declaration] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_generator] = ACTIONS(15),
    [anon_sym_retry_policy] = ACTIONS(17),
    [anon_sym_template_string] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(26), 1,
      anon_sym_class,
    ACTIONS(29), 1,
      anon_sym_enum,
    ACTIONS(32), 1,
      anon_sym_test,
    ACTIONS(35), 1,
      anon_sym_generator,
    ACTIONS(38), 1,
      anon_sym_retry_policy,
    ACTIONS(41), 1,
      anon_sym_template_string,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym__statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(12), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [43] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_generator,
    ACTIONS(17), 1,
      anon_sym_retry_policy,
    ACTIONS(19), 1,
      anon_sym_template_string,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym__statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(12), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [85] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_generator,
    ACTIONS(17), 1,
      anon_sym_retry_policy,
    ACTIONS(19), 1,
      anon_sym_template_string,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym__statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(12), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [127] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_generator,
    ACTIONS(17), 1,
      anon_sym_retry_policy,
    ACTIONS(19), 1,
      anon_sym_template_string,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym__statement,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(12), 7,
      sym_function_declaration,
      sym_class_declaration,
      sym_enum_declaration,
      sym_test_declaration,
      sym_generator_declaration,
      sym_retry_policy_declaration,
      sym_template_string_declaration,
  [169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(21), 1,
      sym_primitive_type,
    STATE(26), 1,
      sym_type,
    STATE(24), 4,
      sym_union_type,
      sym_array_type,
      sym_generic_type,
      sym_optional_type,
    ACTIONS(50), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
      anon_sym_model,
  [198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(21), 1,
      sym_primitive_type,
    STATE(37), 1,
      sym_type,
    STATE(24), 4,
      sym_union_type,
      sym_array_type,
      sym_generic_type,
      sym_optional_type,
    ACTIONS(50), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
      anon_sym_model,
  [227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(21), 1,
      sym_primitive_type,
    STATE(33), 1,
      sym_type,
    STATE(24), 4,
      sym_union_type,
      sym_array_type,
      sym_generic_type,
      sym_optional_type,
    ACTIONS(50), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
      anon_sym_model,
  [256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(21), 1,
      sym_primitive_type,
    STATE(27), 1,
      sym_type,
    STATE(24), 4,
      sym_union_type,
      sym_array_type,
      sym_generic_type,
      sym_optional_type,
    ACTIONS(50), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_null,
      anon_sym_image,
      anon_sym_audio,
      anon_sym_model,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_QMARK,
    ACTIONS(76), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_QMARK,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(92), 1,
      anon_sym_GT,
    STATE(34), 1,
      aux_sym_generic_type_repeat1,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LBRACE,
  [554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_parameters_repeat1,
  [567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameters_repeat1,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_GT,
    STATE(32), 1,
      aux_sym_generic_type_repeat1,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_GT,
    STATE(32), 1,
      aux_sym_generic_type_repeat1,
  [617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_parameters_repeat1,
  [630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(50), 1,
      sym_parameters,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_template_string_token1,
    STATE(20), 1,
      sym_template_string,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_parameter_list,
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_parameter_list,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_identifier,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_identifier,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_DASH_GT,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
  [844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 345,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 375,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 478,
  [SMALL_STATE(24)] = 488,
  [SMALL_STATE(25)] = 498,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 524,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 544,
  [SMALL_STATE(30)] = 554,
  [SMALL_STATE(31)] = 567,
  [SMALL_STATE(32)] = 580,
  [SMALL_STATE(33)] = 593,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 643,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 676,
  [SMALL_STATE(41)] = 684,
  [SMALL_STATE(42)] = 694,
  [SMALL_STATE(43)] = 702,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 722,
  [SMALL_STATE(46)] = 732,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 750,
  [SMALL_STATE(49)] = 760,
  [SMALL_STATE(50)] = 767,
  [SMALL_STATE(51)] = 774,
  [SMALL_STATE(52)] = 781,
  [SMALL_STATE(53)] = 788,
  [SMALL_STATE(54)] = 795,
  [SMALL_STATE(55)] = 802,
  [SMALL_STATE(56)] = 809,
  [SMALL_STATE(57)] = 816,
  [SMALL_STATE(58)] = 823,
  [SMALL_STATE(59)] = 830,
  [SMALL_STATE(60)] = 837,
  [SMALL_STATE(61)] = 844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generator_declaration, 4, 0, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 3, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_policy_declaration, 3, 0, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string_declaration, 3, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
