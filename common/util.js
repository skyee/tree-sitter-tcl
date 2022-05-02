/**
 *  A sequence of interleaved statements and terminators. It can end up with a
 *  final terminator.
 *
 *  This needs to be a variable and not a rule, because tree-sitter does not
 *  allow for rules that match empty string.
 *
 *  @type {SequenceRule}
 */
const statementSequence = seq(
  repeat(seq(sym('_statement'), sym('_terminator'))),
  optional(sym('_statement')),
)

/**
 *  Create a sequence where between every rule, an `insertedRule` is inserted.
 *
 *  @param {Rule} insertedRule
 *  @param {Rule} rule
 *  @returns {OptionalRule}
 */
const interleavedSeq = (rule, insertedRule) =>
  optional(seq(rule, repeat(seq(insertedRule, rule))))

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

module.exports = {
  statementSequence,
  interleavedSeq,
  interleavedSeq1,
  interleavedSeq2,
}
