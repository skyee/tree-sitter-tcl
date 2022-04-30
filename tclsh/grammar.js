const tclGrammar = require('../tcl/grammar')

module.exports = grammar(tclGrammar, {
  name: 'tclsh',
  rules: {
    _command_or_comment: $ => choice($.comment, $.command, $._builtin_command),

    _builtin_command: $ => choice($.if_command),

    if_command: $ =>
      seq(
        'if',
        field('condition', $._word),
        optional('then'),
        field('body', $.braced_word),
        optional('else'),
        optional(field('else_body', $.braced_word)),
      ),
  },
})
