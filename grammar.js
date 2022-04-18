const WORD_CONTENT = /[^$\s\[\]{}"]+/
const QUOTED_WORD_CONTENT = /[^$\[\]"]+/
const BRACED_WORD_CONTENT = /[^{}]+/
const VARIABLE_SUBSTITUTION = seq('$', /[a-z]+/)

module.exports = grammar({
  name: 'tcl',


  rules: {
    source_file: $ => repeat(seq($.command, '\n')),

    command: $ =>
      seq(field('name', $._word), optional(field('arguments', $.word_list))),

    word_list: $ => repeat1($._word),

    _word: $ => choice($.word, $.quoted_word, $.braced_word),

    word: $ =>
      seq(
        choice($.word_content, $.variable_substitution, $.command_substitution),
        repeat(
          choice(
            alias(token.immediate(WORD_CONTENT), $.word_content),
            alias(
              token.immediate(VARIABLE_SUBSTITUTION),
              $.variable_substitution,
            ),
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
    _braced_word: $ =>
      seq('{', repeat(choice(BRACED_WORD_CONTENT, $._braced_word)), '}'),

    command_substitution: $ => seq('[', $.command, ']'),

    word_content: _ => WORD_CONTENT,
    _quoted_word_content: $ => alias(QUOTED_WORD_CONTENT, $.word_content),
    _braced_word_content: $ =>
      repeat1(choice(BRACED_WORD_CONTENT, $._braced_word_content)),
    variable_substitution: _ => token(VARIABLE_SUBSTITUTION),
  },
})
