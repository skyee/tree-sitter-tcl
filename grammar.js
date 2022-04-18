module.exports = grammar({
  name: 'tcl',

  externals: _ => [sym('_concat')],

  rules: {
    source_file: $ => repeat(seq($.command, '\n')),

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

    command_substitution: $ => seq('[', $.command, ']'),

    word_content: _ => /[^$\s\[\]{}"]+/,
    _quoted_word_content: $ => alias(/[^$\[\]"]+/, $.word_content),
    variable_substitution: _ => token(seq('$', /[a-z]+/)),
  },
})
