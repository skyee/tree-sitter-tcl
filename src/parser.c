#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_LBRACE = 4,
  aux_sym__braced_word_token1 = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_word_content = 9,
  aux_sym__quoted_word_content_token1 = 10,
  sym_variable_substitution = 11,
  sym__concat = 12,
  sym_source_file = 13,
  sym__command_or_comment = 14,
  sym_command = 15,
  sym_word_list = 16,
  sym__word = 17,
  sym_word = 18,
  sym_quoted_word = 19,
  sym_braced_word = 20,
  sym__braced_word = 21,
  sym_command_substitution = 22,
  sym__quoted_word_content = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_word_list_repeat1 = 25,
  aux_sym_word_repeat1 = 26,
  aux_sym_quoted_word_repeat1 = 27,
  aux_sym__braced_word_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
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
  [sym__command_or_comment] = "_command_or_comment",
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
  [sym_comment] = sym_comment,
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
  [sym__command_or_comment] = sym__command_or_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym__command_or_comment] = {
    .visible = false,
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

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || c == '"'))
    : (c <= '$' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

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
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 5:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__braced_word_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__braced_word_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_word_content);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_word_content);
      if (!sym_word_content_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_variable_substitution);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
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
    [sym_comment] = ACTIONS(1),
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
    [sym__command_or_comment] = STATE(51),
    [sym_command] = STATE(51),
    [sym__word] = STATE(7),
    [sym_word] = STATE(7),
    [sym_quoted_word] = STATE(7),
    [sym_braced_word] = STATE(7),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_word_content] = ACTIONS(13),
    [sym_variable_substitution] = ACTIONS(15),
  },
  [2] = {
    [sym__command_or_comment] = STATE(51),
    [sym_command] = STATE(51),
    [sym__word] = STATE(7),
    [sym_word] = STATE(7),
    [sym_quoted_word] = STATE(7),
    [sym_braced_word] = STATE(7),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_word_content] = ACTIONS(13),
    [sym_variable_substitution] = ACTIONS(15),
  },
  [3] = {
    [sym__command_or_comment] = STATE(51),
    [sym_command] = STATE(51),
    [sym__word] = STATE(7),
    [sym_word] = STATE(7),
    [sym_quoted_word] = STATE(7),
    [sym_braced_word] = STATE(7),
    [sym__braced_word] = STATE(37),
    [sym_command_substitution] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(30),
    [sym_word_content] = ACTIONS(33),
    [sym_variable_substitution] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_word_content,
    ACTIONS(49), 1,
      sym_variable_substitution,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(56), 2,
      sym__command_or_comment,
      sym_command,
    STATE(8), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [35] = 10,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_word_content,
    ACTIONS(49), 1,
      sym_variable_substitution,
    ACTIONS(51), 1,
      sym_comment,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(55), 2,
      sym__command_or_comment,
      sym_command,
    STATE(8), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [70] = 10,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_word_content,
    ACTIONS(49), 1,
      sym_variable_substitution,
    ACTIONS(53), 1,
      sym_comment,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(57), 2,
      sym__command_or_comment,
      sym_command,
    STATE(8), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [105] = 9,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_command_substitution,
    STATE(37), 1,
      sym__braced_word,
    STATE(54), 1,
      sym_word_list,
    ACTIONS(13), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(12), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [138] = 9,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    STATE(53), 1,
      sym_word_list,
    ACTIONS(49), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(11), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [171] = 8,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_command_substitution,
    STATE(37), 1,
      sym__braced_word,
    ACTIONS(74), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(9), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [201] = 8,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    ACTIONS(86), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(10), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [231] = 8,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__braced_word,
    STATE(33), 1,
      sym_command_substitution,
    ACTIONS(49), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(10), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [261] = 8,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_command_substitution,
    STATE(37), 1,
      sym__braced_word,
    ACTIONS(13), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(9), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [291] = 3,
    ACTIONS(93), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(91), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [306] = 3,
    ACTIONS(98), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(96), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [321] = 4,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_word_repeat1,
    ACTIONS(102), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [338] = 3,
    ACTIONS(98), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_word_repeat1,
    ACTIONS(100), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [353] = 4,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(106), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [370] = 4,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(108), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [387] = 1,
    ACTIONS(91), 7,
      sym__concat,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [397] = 5,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(119), 1,
      sym_variable_substitution,
    STATE(24), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [415] = 5,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(119), 1,
      sym_variable_substitution,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(24), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [433] = 2,
    ACTIONS(123), 1,
      sym_word_content,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [445] = 2,
    ACTIONS(91), 2,
      sym__concat,
      anon_sym_LF,
    ACTIONS(108), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [457] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(133), 1,
      sym_variable_substitution,
    STATE(24), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [475] = 1,
    ACTIONS(136), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [484] = 2,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [495] = 2,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(142), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [506] = 2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [517] = 2,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [528] = 2,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [539] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(154), 1,
      sym_variable_substitution,
    STATE(20), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [554] = 1,
    ACTIONS(156), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [563] = 1,
    ACTIONS(100), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [572] = 1,
    ACTIONS(144), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [581] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(160), 1,
      sym_variable_substitution,
    STATE(21), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [596] = 1,
    ACTIONS(138), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [605] = 2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(162), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [616] = 1,
    ACTIONS(148), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [625] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      aux_sym__braced_word_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [639] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      aux_sym__braced_word_token1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [653] = 4,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      aux_sym__braced_word_token1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [667] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      aux_sym__braced_word_token1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [681] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      aux_sym__braced_word_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [695] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      aux_sym__braced_word_token1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [709] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      aux_sym__braced_word_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [723] = 2,
    ACTIONS(136), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(142), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [732] = 2,
    ACTIONS(144), 1,
      aux_sym__braced_word_token1,
    ACTIONS(146), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [740] = 2,
    ACTIONS(138), 1,
      aux_sym__braced_word_token1,
    ACTIONS(140), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [748] = 1,
    ACTIONS(194), 2,
      sym_word_content,
      sym_variable_substitution,
  [753] = 1,
    ACTIONS(196), 2,
      sym_word_content,
      sym_variable_substitution,
  [758] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [762] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [766] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
  [770] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [774] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
  [778] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [782] = 1,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 353,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 445,
  [SMALL_STATE(24)] = 457,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 484,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 506,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 554,
  [SMALL_STATE(33)] = 563,
  [SMALL_STATE(34)] = 572,
  [SMALL_STATE(35)] = 581,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 616,
  [SMALL_STATE(39)] = 625,
  [SMALL_STATE(40)] = 639,
  [SMALL_STATE(41)] = 653,
  [SMALL_STATE(42)] = 667,
  [SMALL_STATE(43)] = 681,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 723,
  [SMALL_STATE(47)] = 732,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 748,
  [SMALL_STATE(50)] = 753,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 762,
  [SMALL_STATE(53)] = 766,
  [SMALL_STATE(54)] = 770,
  [SMALL_STATE(55)] = 774,
  [SMALL_STATE(56)] = 778,
  [SMALL_STATE(57)] = 782,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(31),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(45),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(35),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(43),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(4),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(50),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(5),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(24),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(39),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(41),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
