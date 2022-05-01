const tclGrammar = require('../tcl/grammar')

module.exports = grammar(tclGrammar, {
  name: 'tclsh',
  rules: {
    _command_or_comment: $ => choice($.comment, $.command, $._builtin_command),

    _builtin_command: $ => choice($.if_command),

    if_command: $ => seq($.if_clause, optional($.else_clause)),

    if_clause: $ =>
      seq(
        'if',
        field('condition', $._word),
        optional('then'),
        field('body', $.braced_word),
      ),

    else_clause: $ => seq(optional('else'), field('body', $.braced_word)),
  },
})
