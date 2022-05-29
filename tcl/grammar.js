const {
  interleavedSeq1,
  interleavedSeq2,
  statementSequence,
} = require('../common/util')

module.exports = grammar({
  name: 'tcl',

  /** @param {RuleProxy<'_concat'>} $ */
  externals: $ => [$._concat, '}', ']'],

  extras: _ => [' '],

  inline: $ => [$._terminator],

  conflicts: $ => [[$.word]],

  rules: {
    source_file: _ => statementSequence,

    _statement: $ => choice($.comment, $.command),

    _terminator: _ => choice('\n', ';'),

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

    variable_substitution: $ =>
      choice($._simple_variable_substitution, $._braced_variable_substitution),
    _simple_variable_substitution: _ => seq('$', /[a-z]+/),
    _braced_variable_substitution: _ => seq('${', /[^}]+/, '}'),

    quoted_word: $ =>
      seq(
        '"',
        repeat1(
          choice(
            $._quoted_word_content,
            $.variable_substitution,
            $.command_substitution,
            $.escape_sequence,
          ),
        ),
        '"',
      ),
    _quoted_word_content: _ => /[^$\\\[\]"]+/,

    braced_word: $ => seq('{', repeat(choice('\n', $._word)), '}'),

    command_substitution: _ => seq('[', statementSequence, ']'),
  },
})
