#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_function = 1,
  anon_sym_class = 2,
  anon_sym_enum = 3,
  anon_sym_test = 4,
  anon_sym_generator = 5,
  anon_sym_retry_policy = 6,
  anon_sym_template_string = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_template_string = 13,
  sym_identifier = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym__statement = 17,
  sym_declaration = 18,
  sym_function_declaration = 19,
  sym_class_declaration = 20,
  sym_enum_declaration = 21,
  sym_test_declaration = 22,
  sym_generator_declaration = 23,
  sym_retry_policy_declaration = 24,
  sym_template_string_declaration = 25,
  sym_parameter_list = 26,
  sym_parameters = 27,
  sym_block = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameters_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_class] = "class",
  [anon_sym_enum] = "enum",
  [anon_sym_test] = "test",
  [anon_sym_generator] = "generator",
  [anon_sym_retry_policy] = "retry_policy",
  [anon_sym_template_string] = "template_string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_template_string] = "template_string",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
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
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_generator] = anon_sym_generator,
  [anon_sym_retry_policy] = anon_sym_retry_policy,
  [anon_sym_template_string] = anon_sym_template_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_template_string] = sym_template_string,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
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
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_block] = {
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
};

enum ts_field_identifiers {
  field_body = 1,
  field_config = 2,
  field_content = 3,
  field_name = 4,
  field_parameters = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_config] = "config",
  [field_content] = "content",
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '#', 1,
        '(', 63,
        ')', 64,
        ',', 65,
        '/', 5,
        'c', 22,
        'e', 30,
        'f', 51,
        'g', 17,
        'r', 13,
        't', 14,
        '{', 66,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_generator);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_retry_policy);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_template_string);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_template_string);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_retry_policy] = ACTIONS(1),
    [anon_sym_template_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_template_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__statement] = STATE(4),
    [sym_declaration] = STATE(4),
    [sym_function_declaration] = STATE(13),
    [sym_class_declaration] = STATE(13),
    [sym_enum_declaration] = STATE(13),
    [sym_test_declaration] = STATE(13),
    [sym_generator_declaration] = STATE(13),
    [sym_retry_policy_declaration] = STATE(13),
    [sym_template_string_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(4),
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
  [2] = {
    [sym__statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_function_declaration] = STATE(13),
    [sym_class_declaration] = STATE(13),
    [sym_enum_declaration] = STATE(13),
    [sym_test_declaration] = STATE(13),
    [sym_generator_declaration] = STATE(13),
    [sym_retry_policy_declaration] = STATE(13),
    [sym_template_string_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_test] = ACTIONS(32),
    [anon_sym_generator] = ACTIONS(35),
    [anon_sym_retry_policy] = ACTIONS(38),
    [anon_sym_template_string] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_function_declaration] = STATE(13),
    [sym_class_declaration] = STATE(13),
    [sym_enum_declaration] = STATE(13),
    [sym_test_declaration] = STATE(13),
    [sym_generator_declaration] = STATE(13),
    [sym_retry_policy_declaration] = STATE(13),
    [sym_template_string_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_generator] = ACTIONS(15),
    [anon_sym_retry_policy] = ACTIONS(17),
    [anon_sym_template_string] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_function_declaration] = STATE(13),
    [sym_class_declaration] = STATE(13),
    [sym_enum_declaration] = STATE(13),
    [sym_test_declaration] = STATE(13),
    [sym_generator_declaration] = STATE(13),
    [sym_retry_policy_declaration] = STATE(13),
    [sym_template_string_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_generator] = ACTIONS(15),
    [anon_sym_retry_policy] = ACTIONS(17),
    [anon_sym_template_string] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_function_declaration] = STATE(13),
    [sym_class_declaration] = STATE(13),
    [sym_enum_declaration] = STATE(13),
    [sym_test_declaration] = STATE(13),
    [sym_generator_declaration] = STATE(13),
    [sym_retry_policy_declaration] = STATE(13),
    [sym_template_string_declaration] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_generator] = ACTIONS(15),
    [anon_sym_retry_policy] = ACTIONS(17),
    [anon_sym_template_string] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [15] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_class,
      anon_sym_enum,
      anon_sym_test,
      anon_sym_generator,
      anon_sym_retry_policy,
      anon_sym_template_string,
      anon_sym_RBRACE,
  [30] = 2,
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
  [45] = 2,
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
  [60] = 2,
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
  [75] = 2,
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
  [90] = 2,
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
  [105] = 2,
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
  [120] = 2,
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
  [135] = 2,
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
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(31), 1,
      sym_parameters,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_parameters_repeat1,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_parameters_repeat1,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
  [202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameter_list,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_parameter_list,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
  [297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
  [304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
  [318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
  [325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
  [339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_template_string,
  [353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_identifier,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 15,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 163,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 232,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 250,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 280,
  [SMALL_STATE(29)] = 290,
  [SMALL_STATE(30)] = 297,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 311,
  [SMALL_STATE(33)] = 318,
  [SMALL_STATE(34)] = 325,
  [SMALL_STATE(35)] = 332,
  [SMALL_STATE(36)] = 339,
  [SMALL_STATE(37)] = 346,
  [SMALL_STATE(38)] = 353,
  [SMALL_STATE(39)] = 360,
  [SMALL_STATE(40)] = 367,
  [SMALL_STATE(41)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generator_declaration, 4, 0, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string_declaration, 3, 0, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_policy_declaration, 3, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_declaration, 3, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
