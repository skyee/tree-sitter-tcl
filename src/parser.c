#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_LBRACE = 3,
  aux_sym__braced_word_token1 = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym_word_content = 8,
  aux_sym__quoted_word_content_token1 = 9,
  sym_variable_substitution = 10,
  sym__concat = 11,
  sym_source_file = 12,
  sym_command = 13,
  sym_word_list = 14,
  sym__word = 15,
  sym_word = 16,
  sym_quoted_word = 17,
  sym_braced_word = 18,
  sym__braced_word = 19,
  sym_command_substitution = 20,
  sym__quoted_word_content = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_word_list_repeat1 = 23,
  aux_sym_word_repeat1 = 24,
  aux_sym_quoted_word_repeat1 = 25,
  aux_sym__braced_word_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [aux_sym__braced_word_token1] = "_braced_word_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_word_content] = "word_content",
  [aux_sym__quoted_word_content_token1] = "word_content",
  [sym_variable_substitution] = "variable_substitution",
  [sym__concat] = "_concat",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_word_list] = "word_list",
  [sym__word] = "_word",
  [sym_word] = "word",
  [sym_quoted_word] = "quoted_word",
  [sym_braced_word] = "braced_word",
  [sym__braced_word] = "_braced_word",
  [sym_command_substitution] = "command_substitution",
  [sym__quoted_word_content] = "_quoted_word_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_list_repeat1] = "word_list_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
  [aux_sym_quoted_word_repeat1] = "quoted_word_repeat1",
  [aux_sym__braced_word_repeat1] = "_braced_word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__braced_word_token1] = aux_sym__braced_word_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_word_content] = sym_word_content,
  [aux_sym__quoted_word_content_token1] = sym_word_content,
  [sym_variable_substitution] = sym_variable_substitution,
  [sym__concat] = sym__concat,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_word_list] = sym_word_list,
  [sym__word] = sym__word,
  [sym_word] = sym_word,
  [sym_quoted_word] = sym_quoted_word,
  [sym_braced_word] = sym_braced_word,
  [sym__braced_word] = sym__braced_word,
  [sym_command_substitution] = sym_command_substitution,
  [sym__quoted_word_content] = sym__quoted_word_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_list_repeat1] = aux_sym_word_list_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
  [aux_sym_quoted_word_repeat1] = aux_sym_quoted_word_repeat1,
  [aux_sym__braced_word_repeat1] = aux_sym__braced_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__braced_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_word_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_word_content_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__concat] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_word_list] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_word] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_word] = {
    .visible = true,
    .named = true,
  },
  [sym__braced_word] = {
    .visible = false,
    .named = true,
  },
  [sym_command_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_word_content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__braced_word_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_word_content_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '$' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 4:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__braced_word_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__braced_word_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_word_content);
      if (!sym_word_content_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_variable_substitution);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

enum {
  ts_external_token__concat = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__concat] = sym__concat,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__concat] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_word_content] = ACTIONS(1),
    [sym_variable_substitution] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym_command] = STATE(51),
    [sym__word] = STATE(2),
    [sym_word] = STATE(2),
    [sym_quoted_word] = STATE(2),
    [sym_braced_word] = STATE(2),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_word_content] = ACTIONS(11),
    [sym_variable_substitution] = ACTIONS(11),
  },
  [2] = {
    [sym_word_list] = STATE(54),
    [sym__word] = STATE(9),
    [sym_word] = STATE(9),
    [sym_quoted_word] = STATE(9),
    [sym_braced_word] = STATE(9),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(29),
    [aux_sym_word_list_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_word_content] = ACTIONS(21),
    [sym_variable_substitution] = ACTIONS(21),
  },
  [3] = {
    [sym_word_list] = STATE(53),
    [sym__word] = STATE(8),
    [sym_word] = STATE(8),
    [sym_quoted_word] = STATE(8),
    [sym_braced_word] = STATE(8),
    [sym__braced_word] = STATE(32),
    [sym_command_substitution] = STATE(33),
    [aux_sym_word_list_repeat1] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_word_content] = ACTIONS(29),
    [sym_variable_substitution] = ACTIONS(29),
  },
  [4] = {
    [sym_command] = STATE(51),
    [sym__word] = STATE(2),
    [sym_word] = STATE(2),
    [sym_quoted_word] = STATE(2),
    [sym_braced_word] = STATE(2),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_word_content] = ACTIONS(11),
    [sym_variable_substitution] = ACTIONS(11),
  },
  [5] = {
    [sym_command] = STATE(51),
    [sym__word] = STATE(2),
    [sym_word] = STATE(2),
    [sym_quoted_word] = STATE(2),
    [sym_braced_word] = STATE(2),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_word_content] = ACTIONS(44),
    [sym_variable_substitution] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_command_substitution,
    STATE(37), 1,
      sym__braced_word,
    ACTIONS(58), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [30] = 8,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    ACTIONS(70), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(7), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [60] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    ACTIONS(29), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(7), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [90] = 8,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_command_substitution,
    STATE(37), 1,
      sym__braced_word,
    ACTIONS(21), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [120] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(56), 1,
      sym_command,
    ACTIONS(29), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(3), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [149] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(55), 1,
      sym_command,
    ACTIONS(29), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(3), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [178] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(57), 1,
      sym_command,
    ACTIONS(29), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(3), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [207] = 3,
    ACTIONS(77), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(75), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [222] = 3,
    ACTIONS(82), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(80), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [237] = 4,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_word_repeat1,
    ACTIONS(86), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [254] = 3,
    ACTIONS(82), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_word_repeat1,
    ACTIONS(84), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [269] = 4,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(90), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [286] = 4,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(94), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(92), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [303] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(105), 1,
      sym_variable_substitution,
    STATE(19), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [321] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(114), 1,
      sym_variable_substitution,
    STATE(19), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [339] = 5,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(114), 1,
      sym_variable_substitution,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(19), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [357] = 2,
    ACTIONS(75), 2,
      sym__concat,
      anon_sym_LF,
    ACTIONS(92), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [369] = 1,
    ACTIONS(75), 7,
      sym__concat,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [379] = 1,
    ACTIONS(118), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [388] = 2,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [399] = 2,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [410] = 2,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(128), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [421] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [432] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(86), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [443] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [452] = 4,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(136), 1,
      sym_variable_substitution,
    STATE(20), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [467] = 1,
    ACTIONS(138), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [476] = 1,
    ACTIONS(84), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [485] = 1,
    ACTIONS(120), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [494] = 4,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(142), 1,
      sym_variable_substitution,
    STATE(21), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [509] = 1,
    ACTIONS(124), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [518] = 2,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(144), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [529] = 1,
    ACTIONS(130), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [538] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      aux_sym__braced_word_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [552] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      aux_sym__braced_word_token1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [566] = 4,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      aux_sym__braced_word_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [580] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      aux_sym__braced_word_token1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [594] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym__braced_word_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [608] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      aux_sym__braced_word_token1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [622] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      aux_sym__braced_word_token1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [636] = 2,
    ACTIONS(118), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(128), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [645] = 2,
    ACTIONS(120), 1,
      aux_sym__braced_word_token1,
    ACTIONS(122), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [653] = 2,
    ACTIONS(124), 1,
      aux_sym__braced_word_token1,
    ACTIONS(126), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [661] = 1,
    ACTIONS(176), 2,
      sym_word_content,
      sym_variable_substitution,
  [666] = 1,
    ACTIONS(178), 2,
      sym_word_content,
      sym_variable_substitution,
  [671] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [675] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [679] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [683] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [687] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
  [691] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
  [695] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 388,
  [SMALL_STATE(26)] = 399,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 443,
  [SMALL_STATE(31)] = 452,
  [SMALL_STATE(32)] = 467,
  [SMALL_STATE(33)] = 476,
  [SMALL_STATE(34)] = 485,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 518,
  [SMALL_STATE(38)] = 529,
  [SMALL_STATE(39)] = 538,
  [SMALL_STATE(40)] = 552,
  [SMALL_STATE(41)] = 566,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 594,
  [SMALL_STATE(44)] = 608,
  [SMALL_STATE(45)] = 622,
  [SMALL_STATE(46)] = 636,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 653,
  [SMALL_STATE(49)] = 661,
  [SMALL_STATE(50)] = 666,
  [SMALL_STATE(51)] = 671,
  [SMALL_STATE(52)] = 675,
  [SMALL_STATE(53)] = 679,
  [SMALL_STATE(54)] = 683,
  [SMALL_STATE(55)] = 687,
  [SMALL_STATE(56)] = 691,
  [SMALL_STATE(57)] = 695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(31),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(35),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(43),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(11),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(19),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(19),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(39),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(41),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_tcl_external_scanner_create(void);
void tree_sitter_tcl_external_scanner_destroy(void *);
bool tree_sitter_tcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_tcl_external_scanner_serialize(void *, char *);
void tree_sitter_tcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tcl(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_tcl_external_scanner_create,
      tree_sitter_tcl_external_scanner_destroy,
      tree_sitter_tcl_external_scanner_scan,
      tree_sitter_tcl_external_scanner_serialize,
      tree_sitter_tcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
