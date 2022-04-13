const wordContentGrammar = /[^$\s]+/
const substitutionGrammar = seq('$', /[a-z]+/)

module.exports = grammar({
  name: 'tcl',

  rules: {
    source_file: $ => repeat(choice($.word)),

    word: $ =>
      seq(
        choice($.word_content, $.substitution),
        repeat(choice($._word_content_immediate, $._substitution_immediate)),
      ),

    word_content: _ => wordContentGrammar,
    substitution: _ => token(substitutionGrammar),
    _word_content_immediate: $ =>
      alias(token.immediate(wordContentGrammar), $.word_content),
    _substitution_immediate: $ =>
      alias(token.immediate(substitutionGrammar), $.substitution),
  },
})
