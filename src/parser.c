#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  aux_sym_command_substitution_repeat1 = 29,
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
  [aux_sym_command_substitution_repeat1] = "command_substitution_repeat1",
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
  [aux_sym_command_substitution_repeat1] = aux_sym_command_substitution_repeat1,
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
  [aux_sym_command_substitution_repeat1] = {
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
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 2:
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
    case 3:
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(18);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
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
    [sym_source_file] = STATE(42),
    [sym__command_or_comment] = STATE(43),
    [sym_command] = STATE(43),
    [sym__word] = STATE(4),
    [sym_word] = STATE(4),
    [sym_quoted_word] = STATE(4),
    [sym_braced_word] = STATE(4),
    [sym__braced_word] = STATE(22),
    [sym_command_substitution] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_word_content] = ACTIONS(13),
    [sym_variable_substitution] = ACTIONS(15),
  },
  [2] = {
    [sym__command_or_comment] = STATE(43),
    [sym_command] = STATE(43),
    [sym__word] = STATE(4),
    [sym_word] = STATE(4),
    [sym_quoted_word] = STATE(4),
    [sym_braced_word] = STATE(4),
    [sym__braced_word] = STATE(22),
    [sym_command_substitution] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(28),
    [sym_word_content] = ACTIONS(31),
    [sym_variable_substitution] = ACTIONS(34),
  },
  [3] = {
    [sym__command_or_comment] = STATE(43),
    [sym_command] = STATE(43),
    [sym__word] = STATE(4),
    [sym_word] = STATE(4),
    [sym_quoted_word] = STATE(4),
    [sym_braced_word] = STATE(4),
    [sym__braced_word] = STATE(22),
    [sym_command_substitution] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_word_content] = ACTIONS(13),
    [sym_variable_substitution] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    STATE(40), 1,
      sym_word_list,
    ACTIONS(13), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(9), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [36] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_word_content,
    ACTIONS(15), 1,
      sym_variable_substitution,
    ACTIONS(49), 1,
      sym_comment,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    STATE(37), 2,
      sym__command_or_comment,
      sym_command,
    STATE(4), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [71] = 9,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    ACTIONS(64), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [104] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_word_content,
    ACTIONS(15), 1,
      sym_variable_substitution,
    ACTIONS(67), 1,
      sym_comment,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    STATE(35), 2,
      sym__command_or_comment,
      sym_command,
    STATE(4), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [139] = 10,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_word_content,
    ACTIONS(15), 1,
      sym_variable_substitution,
    ACTIONS(69), 1,
      sym_comment,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    STATE(39), 2,
      sym__command_or_comment,
      sym_command,
    STATE(4), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [174] = 9,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_command_substitution,
    STATE(22), 1,
      sym__braced_word,
    ACTIONS(13), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [207] = 4,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      sym__concat,
    STATE(12), 1,
      aux_sym_word_repeat1,
    ACTIONS(77), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [225] = 4,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym__concat,
    STATE(11), 1,
      aux_sym_word_repeat1,
    ACTIONS(83), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [243] = 4,
    ACTIONS(79), 1,
      sym__concat,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_word_repeat1,
    ACTIONS(90), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [261] = 2,
    ACTIONS(81), 2,
      sym__concat,
      anon_sym_LF,
    ACTIONS(83), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [274] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(94), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [286] = 2,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [298] = 5,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(102), 1,
      sym_variable_substitution,
    STATE(19), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [316] = 2,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(106), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [328] = 2,
    ACTIONS(108), 1,
      sym_word_content,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [340] = 5,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(118), 1,
      sym_variable_substitution,
    STATE(19), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [358] = 2,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [370] = 2,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(127), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [382] = 2,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [394] = 2,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(135), 6,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word_content,
      sym_variable_substitution,
  [406] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(139), 1,
      sym_variable_substitution,
    STATE(16), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [421] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      aux_sym__braced_word_token1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [435] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      aux_sym__braced_word_token1,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [449] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      aux_sym__braced_word_token1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [463] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      aux_sym__braced_word_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [477] = 4,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      aux_sym__braced_word_token1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym__braced_word,
      aux_sym__braced_word_repeat1,
  [491] = 2,
    ACTIONS(133), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(135), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [500] = 2,
    ACTIONS(125), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(127), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [509] = 2,
    ACTIONS(121), 1,
      aux_sym__braced_word_token1,
    ACTIONS(123), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [517] = 3,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_command_substitution_repeat1,
  [527] = 2,
    ACTIONS(104), 1,
      aux_sym__braced_word_token1,
    ACTIONS(106), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [535] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_command_substitution_repeat1,
  [545] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_command_substitution_repeat1,
  [555] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_command_substitution_repeat1,
  [565] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_command_substitution_repeat1,
  [575] = 2,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(180), 1,
      anon_sym_LF,
  [582] = 2,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [589] = 1,
    ACTIONS(186), 2,
      sym_word_content,
      sym_variable_substitution,
  [594] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [598] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 449,
  [SMALL_STATE(28)] = 463,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 500,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 517,
  [SMALL_STATE(34)] = 527,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 555,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 575,
  [SMALL_STATE(40)] = 582,
  [SMALL_STATE(41)] = 589,
  [SMALL_STATE(42)] = 594,
  [SMALL_STATE(43)] = 598,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(26),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_list, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(5),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(19),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_word, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(28),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braced_word_repeat1, 2), SHIFT_REPEAT(29),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braced_word_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_substitution_repeat1, 2), SHIFT_REPEAT(8),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_substitution_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_substitution_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
