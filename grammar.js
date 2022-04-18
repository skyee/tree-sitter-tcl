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
        seq(
          choice($.word_content, $.variable_substitution),
          repeat1(
            seq($._concat, choice($.word_content, $.variable_substitution)),
          ),
        ),
      ),

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

    braced_word: $ => $._braced_word,
    _braced_word: $ => seq('{', repeat(choice(/[^{}]+/, $._braced_word)), '}'),

    command_substitution: $ =>
      seq(
        '[',
        seq($._command_or_comment, repeat(seq('\n', $._command_or_comment))),
        ']',
      ),

    word_content: _ => /[^$\s\[\]{}"]+/,
    _quoted_word_content: $ => alias(/[^$\[\]"]+/, $.word_content),
    variable_substitution: _ => token(seq('$', /[a-z]+/)),
  },
})
