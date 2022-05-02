/**
 *  Create a sequence where between every rule, an `insertedRule` is inserted.
 *  `rule` needs to appear in the sequence at least once.
 *
 *  @param {Rule} insertedRule
 *  @param {Rule} rule
 *  @returns {SequenceRule}
 */
const interleavedSeq1 = (rule, insertedRule) =>
  seq(rule, repeat(seq(insertedRule, rule)))

/**
 *  Create a sequence where between every rule, an `insertedRule` is inserted.
 *  `rule` needs to appear in the sequence at least two times.
 *
 *  @param {Rule} insertedRule
 *  @param {Rule} rule
 *  @returns {SequenceRule}
 */
const interleavedSeq2 = (rule, insertedRule) =>
  seq(rule, repeat1(seq(insertedRule, rule)))

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
    word: _ => /[^$\s\[\]{}"]+/,
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
    _quoted_word_content: _ => /[^$\[\]"]+/,

    braced_word: $ => seq('{', repeat($._word), '}'),

    command_substitution: $ =>
      seq('[', interleavedSeq1($._command_or_comment, '\n'), ']'),
  },
})
