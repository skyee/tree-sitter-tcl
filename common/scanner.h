#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    CONCAT,
    EOF,
};

static bool is_end_of_file_ahead(TSLexer *lexer) {
    return lexer->lookahead == 0;
}

static bool is_whitespace_ahead(TSLexer *lexer) {
    return iswspace(lexer->lookahead);
}

static bool is_closing_brace_ahead(TSLexer *lexer) {
    return lexer->lookahead == '}';
}

static bool is_closing_bracket_ahead(TSLexer *lexer) {
    return lexer->lookahead == ']';
}

static bool is_concat_valid(TSLexer *lexer) {
    return !(
        is_end_of_file_ahead(lexer)
        || is_whitespace_ahead(lexer)
        || is_closing_brace_ahead(lexer)
        || is_closing_bracket_ahead(lexer)
    );
}

static inline bool external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[CONCAT] && is_concat_valid(lexer)) {
        lexer->result_symbol = CONCAT;
        return true;
    }

    if (valid_symbols[EOF] && is_end_of_file_ahead(lexer)) {
        lexer->result_symbol = EOF;
        return true;
    }

    return false;
}
