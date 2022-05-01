const { interleavedSeq1, interleavedSeq2 } = require('../common/util')

module.exports = grammar({
  name: 'tcl',

  /** @param {RuleProxy<'_concat'>} _ */
  externals: _ => [sym('_concat')],

  rules: {
    source_file: $ => repeat(seq($._command_or_comment, '\n')),

    _command_or_comment: $ => choice($.comment, $.command),

    comment: _ => /#[^\n]+/,

    command: $ =>
      seq(field('name', $._word), optional(field('arguments', $.word_list))),

    word_list: $ => repeat1($._word),

    _word: $ => choice($.word, $.quoted_word, $.braced_word),

    word: $ =>
      choice(
        choice($.word_content, $.variable_substitution, $.command_substitution),
        interleavedSeq2(
          choice($.word_content, $.variable_substitution),
          $._concat,
        ),
      ),
    word_content: _ => /[^$\s\[\]{}"]+/,
    variable_substitution: _ => token(seq('$', /[a-z]+/)),

    quoted_word: $ =>
      seq(
        '"',
        repeat1(
          choice(
            $._quoted_word_content,
            $.variable_substitution,
            $.command_substitution,
          ),
        ),
        '"',
      ),
    _quoted_word_content: $ => alias(/[^$\[\]"]+/, $.word_content),

    braced_word: $ => $._braced_word,
    _braced_word: $ => seq('{', repeat(choice(/[^{}]+/, $._braced_word)), '}'),

    command_substitution: $ =>
      seq('[', interleavedSeq1($._command_or_comment, '\n'), ']'),
  },
})
