const tclGrammar = require('../tcl/grammar')
const { caseInsensitiveToken, statementSequence } = require('../common/util')

module.exports = grammar(tclGrammar, {
  name: 'tclsh',
  rules: {
    _statement: $ => choice($.comment, $.command, $._builtin_command),
    _builtin_command: $ => choice($.if_command, $.set_command),

    // A special kind of braced_word that contains a list of commands
    block: _ => seq('{', statementSequence, '}'),

    _word: ($, baseRule) => {
      baseRule = /** @type {ChoiceRule} */ (baseRule)

      return choice($.boolean_word, $.number_word, ...baseRule.members)
    },

    boolean_word: _ =>
      choice(
        ...['yes', 'on', 'true', 'no', 'off', 'false'].map(
          caseInsensitiveToken,
        ),
      ),

    number_word: _ =>
      token(
        prec(
          1,
          choice(/-?\d+(\.\d+)?([Ee]-?\d+)?/, /-?0x[0-9A-Fa-f]+/, /-?0b[01]+/),
        ),
      ),

    if_command: $ =>
      seq($.if_clause, repeat($.elseif_clause), optional($.else_clause)),

    if_clause: $ =>
      seq(
        'if',
        field('condition', $._word),
        optional('then'),
        field('body', $.block),
      ),
    elseif_clause: $ =>
      seq('elseif', field('condition', $._word), field('body', $.block)),
    else_clause: $ => seq(optional('else'), field('body', $.block)),

    set_command: $ =>
      seq('set', field('name', $._word), optional(field('value', $._word))),
  },
})
