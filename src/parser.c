#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_word_content = 1,
  sym_substitution = 2,
  aux_sym__word_content_immediate_token1 = 3,
  aux_sym__substitution_immediate_token1 = 4,
  sym_source_file = 5,
  sym_word = 6,
  sym__word_content_immediate = 7,
  sym__substitution_immediate = 8,
  aux_sym_source_file_repeat1 = 9,
  aux_sym_word_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word_content] = "word_content",
  [sym_substitution] = "substitution",
  [aux_sym__word_content_immediate_token1] = "word_content",
  [aux_sym__substitution_immediate_token1] = "substitution",
  [sym_source_file] = "source_file",
  [sym_word] = "word",
  [sym__word_content_immediate] = "_word_content_immediate",
  [sym__substitution_immediate] = "_substitution_immediate",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word_content] = sym_word_content,
  [sym_substitution] = sym_substitution,
  [aux_sym__word_content_immediate_token1] = sym_word_content,
  [aux_sym__substitution_immediate_token1] = sym_substitution,
  [sym_source_file] = sym_source_file,
  [sym_word] = sym_word,
  [sym__word_content_immediate] = sym__word_content_immediate,
  [sym__substitution_immediate] = sym__substitution_immediate,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word_content] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__word_content_immediate_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__substitution_immediate_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__word_content_immediate] = {
    .visible = false,
    .named = true,
  },
  [sym__substitution_immediate] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 1:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_word_content);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_substitution);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__word_content_immediate_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__substitution_immediate_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word_content] = ACTIONS(1),
    [sym_substitution] = ACTIONS(1),
    [aux_sym__word_content_immediate_token1] = ACTIONS(1),
    [aux_sym__substitution_immediate_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_word] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_word_content] = ACTIONS(5),
    [sym_substitution] = ACTIONS(5),
  },
  [2] = {
    [sym__word_content_immediate] = STATE(3),
    [sym__substitution_immediate] = STATE(3),
    [aux_sym_word_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_word_content] = ACTIONS(9),
    [sym_substitution] = ACTIONS(9),
    [aux_sym__word_content_immediate_token1] = ACTIONS(11),
    [aux_sym__substitution_immediate_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__word_content_immediate] = STATE(4),
    [sym__substitution_immediate] = STATE(4),
    [aux_sym_word_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_word_content] = ACTIONS(15),
    [sym_substitution] = ACTIONS(15),
    [aux_sym__word_content_immediate_token1] = ACTIONS(17),
    [aux_sym__substitution_immediate_token1] = ACTIONS(17),
  },
  [4] = {
    [sym__word_content_immediate] = STATE(4),
    [sym__substitution_immediate] = STATE(4),
    [aux_sym_word_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_word_content] = ACTIONS(21),
    [sym_substitution] = ACTIONS(21),
    [aux_sym__word_content_immediate_token1] = ACTIONS(23),
    [aux_sym__substitution_immediate_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_word_content,
      sym_substitution,
    STATE(6), 2,
      sym_word,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 2,
      sym_word_content,
      sym_substitution,
    STATE(6), 2,
      sym_word,
      aux_sym_source_file_repeat1,
  [24] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 24,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
