#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  aux_sym_word_token1 = 2,
  aux_sym_word_token2 = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_word_content = 9,
  aux_sym__quoted_word_content_token1 = 10,
  aux_sym__braced_word_content_token1 = 11,
  sym_variable_substitution = 12,
  sym_source_file = 13,
  sym_command = 14,
  sym_word_list = 15,
  sym__word = 16,
  sym_word = 17,
  sym_quoted_word = 18,
  sym_braced_word = 19,
  sym_command_substitution = 20,
  sym__quoted_word_content = 21,
  sym__braced_word_content = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_word_list_repeat1 = 24,
  aux_sym_word_repeat1 = 25,
  aux_sym_quoted_word_repeat1 = 26,
  aux_sym__braced_word_content_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_word_token1] = "word_content",
  [aux_sym_word_token2] = "variable_substitution",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_word_content] = "word_content",
  [aux_sym__quoted_word_content_token1] = "word_content",
  [aux_sym__braced_word_content_token1] = "_braced_word_content_token1",
  [sym_variable_substitution] = "variable_substitution",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_word_list] = "word_list",
  [sym__word] = "_word",
  [sym_word] = "word",
  [sym_quoted_word] = "quoted_word",
  [sym_braced_word] = "braced_word",
  [sym_command_substitution] = "command_substitution",
  [sym__quoted_word_content] = "_quoted_word_content",
  [sym__braced_word_content] = "_braced_word_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_list_repeat1] = "word_list_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
  [aux_sym_quoted_word_repeat1] = "quoted_word_repeat1",
  [aux_sym__braced_word_content_repeat1] = "_braced_word_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_word_token1] = sym_word_content,
  [aux_sym_word_token2] = sym_variable_substitution,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_word_content] = sym_word_content,
  [aux_sym__quoted_word_content_token1] = sym_word_content,
  [aux_sym__braced_word_content_token1] = aux_sym__braced_word_content_token1,
  [sym_variable_substitution] = sym_variable_substitution,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_word_list] = sym_word_list,
  [sym__word] = sym__word,
  [sym_word] = sym_word,
  [sym_quoted_word] = sym_quoted_word,
  [sym_braced_word] = sym_braced_word,
  [sym_command_substitution] = sym_command_substitution,
  [sym__quoted_word_content] = sym__quoted_word_content,
  [sym__braced_word_content] = sym__braced_word_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_list_repeat1] = aux_sym_word_list_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
  [aux_sym_quoted_word_repeat1] = aux_sym_quoted_word_repeat1,
  [aux_sym__braced_word_content_repeat1] = aux_sym__braced_word_content_repeat1,
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
  [aux_sym_word_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token2] = {
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
  [aux_sym__braced_word_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable_substitution] = {
    .visible = true,
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
  [sym_command_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_word_content] = {
    .visible = false,
    .named = true,
  },
  [sym__braced_word_content] = {
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
  [aux_sym__braced_word_content_repeat1] = {
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
  [3] = {.index = 1, .length = 2},
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
  [2] = {
    [0] = sym_word_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__braced_word_content_repeat1, 2,
    aux_sym__braced_word_content_repeat1,
    sym_word_content,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(26);
      END_STATE();
    case 7:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 8:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word_content);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__quoted_word_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__braced_word_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__braced_word_content_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_variable_substitution);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_variable_substitution] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym_command] = STATE(42),
    [sym__word] = STATE(3),
    [sym_word] = STATE(3),
    [sym_quoted_word] = STATE(3),
    [sym_braced_word] = STATE(3),
    [sym_command_substitution] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_word_content] = ACTIONS(11),
    [sym_variable_substitution] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(20), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym_word_content,
    ACTIONS(29), 1,
      sym_variable_substitution,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      sym_command_substitution,
    STATE(42), 1,
      sym_command,
    STATE(3), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [34] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LF,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_command_substitution,
    STATE(43), 1,
      sym_word_list,
    ACTIONS(11), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(7), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [64] = 10,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_word_content,
    ACTIONS(13), 1,
      sym_variable_substitution,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      sym_command_substitution,
    STATE(42), 1,
      sym_command,
    STATE(3), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [98] = 9,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_word_content,
    ACTIONS(48), 1,
      sym_variable_substitution,
    STATE(17), 1,
      sym_command_substitution,
    STATE(39), 1,
      sym_word_list,
    STATE(9), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [130] = 7,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_command_substitution,
    ACTIONS(61), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [157] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_command_substitution,
    ACTIONS(11), 2,
      sym_word_content,
      sym_variable_substitution,
    STATE(6), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [184] = 8,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      sym_word_content,
    ACTIONS(78), 1,
      sym_variable_substitution,
    STATE(17), 1,
      sym_command_substitution,
    STATE(8), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [213] = 8,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_word_content,
    ACTIONS(48), 1,
      sym_variable_substitution,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      sym_command_substitution,
    STATE(8), 5,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
      aux_sym_word_list_repeat1,
  [242] = 8,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_word_content,
    ACTIONS(48), 1,
      sym_variable_substitution,
    STATE(17), 1,
      sym_command_substitution,
    STATE(41), 1,
      sym_command,
    STATE(5), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [270] = 8,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_word_content,
    ACTIONS(48), 1,
      sym_variable_substitution,
    STATE(17), 1,
      sym_command_substitution,
    STATE(40), 1,
      sym_command,
    STATE(5), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [298] = 8,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_word_content,
    ACTIONS(48), 1,
      sym_variable_substitution,
    STATE(17), 1,
      sym_command_substitution,
    STATE(45), 1,
      sym_command,
    STATE(5), 4,
      sym__word,
      sym_word,
      sym_quoted_word,
      sym_braced_word,
  [326] = 5,
    ACTIONS(81), 1,
      aux_sym_word_token1,
    ACTIONS(84), 1,
      aux_sym_word_token2,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(87), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(89), 3,
      anon_sym_LBRACE,
      sym_word_content,
      sym_variable_substitution,
  [346] = 5,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      aux_sym_word_token1,
    ACTIONS(95), 1,
      aux_sym_word_token2,
    STATE(15), 1,
      aux_sym_word_repeat1,
    ACTIONS(97), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [366] = 5,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      aux_sym_word_token1,
    ACTIONS(103), 1,
      aux_sym_word_token2,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(105), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [386] = 5,
    ACTIONS(107), 1,
      aux_sym_word_token1,
    ACTIONS(109), 1,
      aux_sym_word_token2,
    STATE(13), 1,
      aux_sym_word_repeat1,
    ACTIONS(99), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(105), 3,
      anon_sym_LBRACE,
      sym_word_content,
      sym_variable_substitution,
  [406] = 5,
    ACTIONS(111), 1,
      aux_sym_word_token1,
    ACTIONS(113), 1,
      aux_sym_word_token2,
    STATE(16), 1,
      aux_sym_word_repeat1,
    ACTIONS(91), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(97), 3,
      anon_sym_LBRACE,
      sym_word_content,
      sym_variable_substitution,
  [426] = 5,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      aux_sym_word_token1,
    ACTIONS(118), 1,
      aux_sym_word_token2,
    STATE(18), 1,
      aux_sym_word_repeat1,
    ACTIONS(89), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [446] = 2,
    ACTIONS(121), 2,
      anon_sym_LF,
      aux_sym_word_token2,
    ACTIONS(123), 6,
      aux_sym_word_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [459] = 2,
    ACTIONS(121), 4,
      aux_sym_word_token2,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(123), 4,
      aux_sym_word_token1,
      anon_sym_LBRACE,
      sym_word_content,
      sym_variable_substitution,
  [472] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(131), 1,
      sym_variable_substitution,
    STATE(22), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [490] = 5,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(141), 1,
      sym_variable_substitution,
    STATE(22), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [508] = 5,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(131), 1,
      sym_variable_substitution,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(22), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [526] = 2,
    ACTIONS(148), 2,
      anon_sym_LBRACE,
      sym_word_content,
    ACTIONS(146), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_variable_substitution,
  [537] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(152), 1,
      sym_variable_substitution,
    STATE(23), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [552] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(148), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [563] = 2,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(156), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_word_content,
      sym_variable_substitution,
  [574] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(160), 1,
      sym_variable_substitution,
    STATE(21), 3,
      sym_command_substitution,
      sym__quoted_word_content,
      aux_sym_quoted_word_repeat1,
  [589] = 2,
    ACTIONS(162), 2,
      anon_sym_LBRACE,
      sym_word_content,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [600] = 2,
    ACTIONS(156), 2,
      anon_sym_LBRACE,
      sym_word_content,
    ACTIONS(154), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_variable_substitution,
  [611] = 4,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      aux_sym__braced_word_content_token1,
    STATE(31), 1,
      aux_sym__braced_word_content_repeat1,
    STATE(37), 1,
      sym__braced_word_content,
  [624] = 2,
    ACTIONS(121), 1,
      aux_sym__quoted_word_content_token1,
    ACTIONS(123), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_variable_substitution,
  [633] = 4,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      aux_sym__braced_word_content_token1,
    STATE(31), 1,
      aux_sym__braced_word_content_repeat1,
    STATE(37), 1,
      sym__braced_word_content,
  [646] = 3,
    ACTIONS(176), 1,
      aux_sym__braced_word_content_token1,
    STATE(33), 1,
      aux_sym__braced_word_content_repeat1,
    STATE(36), 1,
      sym__braced_word_content,
  [656] = 3,
    ACTIONS(176), 1,
      aux_sym__braced_word_content_token1,
    STATE(33), 1,
      aux_sym__braced_word_content_repeat1,
    STATE(38), 1,
      sym__braced_word_content,
  [666] = 2,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      aux_sym__braced_word_content_token1,
  [673] = 2,
    ACTIONS(180), 1,
      aux_sym__braced_word_content_token1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
  [680] = 2,
    ACTIONS(180), 1,
      aux_sym__braced_word_content_token1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
  [687] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
  [691] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
  [695] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
  [699] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
  [703] = 1,
    ACTIONS(186), 1,
      anon_sym_LF,
  [707] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [711] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 406,
  [SMALL_STATE(18)] = 426,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 472,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 526,
  [SMALL_STATE(25)] = 537,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 563,
  [SMALL_STATE(28)] = 574,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 600,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 624,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 646,
  [SMALL_STATE(35)] = 656,
  [SMALL_STATE(36)] = 666,
  [SMALL_STATE(37)] = 673,
  [SMALL_STATE(38)] = 680,
  [SMALL_STATE(39)] = 687,
  [SMALL_STATE(40)] = 691,
  [SMALL_STATE(41)] = 695,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 703,
  [SMALL_STATE(44)] = 707,
  [SMALL_STATE(45)] = 711,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(28),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_list, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(25),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(35),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_list_repeat1, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(18),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(22),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_word, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_word, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_word, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__braced_word_content, 1, .production_id = 2), REDUCE(aux_sym__braced_word_content_repeat1, 2),
  [167] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__braced_word_content, 1, .production_id = 2), REDUCE(aux_sym__braced_word_content_repeat1, 2), SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_word_content, 1, .production_id = 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__braced_word_content, 1, .production_id = 2), SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__braced_word_content_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braced_word_content_repeat1, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
