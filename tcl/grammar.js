const { interleavedSeq1, interleavedSeq2 } = require('../common/util')

module.exports = grammar({
  name: 'tcl',

  /** @param {RuleProxy<'_concat' | '_eof'>} $ */
  externals: $ => [$._concat, $._eof],

  inline: $ => [$._terminator],

  conflicts: $ => [[$.word]],

  rules: {
    source_file: $ => repeat(seq($._command_or_comment, $._terminator)),

    _command_or_comment: $ => choice($.comment, $.command),

    _terminator: $ => choice('\n', ';', $._eof),

    comment: _ => /#[^\n]+/,

    command: $ =>
      seq(field('name', $._word), optional(field('arguments', $.word_list))),

    word_list: $ => repeat1($._word),

    _word: $ =>
      choice(
        $.concatenation,
        $.word,
        $.quoted_word,
        $.braced_word,
        $.variable_substitution,
        $.command_substitution,
      ),

    concatenation: $ =>
      interleavedSeq2(choice($.word, $.variable_substitution), $._concat),

    word: $ =>
      interleavedSeq1(
        choice($._word_content, $.escape_sequence),
        prec.dynamic(1, $._concat),
      ),
    _word_content: _ => /[^$\s\\\[\]{};"]+/,

    escape_sequence: _ => /\\./,

    variable_substitution: _ => token(seq('$', /[a-z]+/)),

    quoted_word: $ =>
      seq(
        '"',
        repeat1(
          choice(
            $._quoted_word_content,
            $.variable_substitution,
            $.command_substitution,
            $.escape_sequence
          ),
        ),
        '"',
      ),
    _quoted_word_content: _ => /[^$\\\[\]"]+/,

    braced_word: $ => seq('{', repeat($._word), '}'),

    command_substitution: $ =>
      seq('[', interleavedSeq1($._command_or_comment, '\n'), ']'),
  },
})
