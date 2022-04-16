declare function grammar<TRules extends string>(
  grammarDescription: GrammarDescription<TRules>,
): any

declare function alias(
  rule: Rule,
  value: string | Symbol | SymbolRule,
): AliasRule
declare function blank(): BlankRule
declare function field(name: string, rule: Rule): FieldRule
declare function choice(...rules: Rule[]): FieldRule
declare function optional(rule: Rule): OptionalRule
declare function prec(priority: number, rule: Rule): PrecedenceRule
declare namespace prec {
  function left(priority: number, rule: Rule): LeftPrecedenceRule
  function right(priority: number, rule: Rule): RightPrecedenceRule
  function dynamic(priority: number, rule: Rule): DynamicPrecedenceRule
}
declare function repeat(rule: Rule): RepeatRule
declare function repeat1(rule: Rule): Repeat1Rule
declare function seq(...rules: Rule[]): SequenceRule
declare function sym(name: string): SymbolRule
declare function token(rule: Rule): TokenRule
declare namespace token {
  function immediate(rule: Rule): ImmediateTokenRule
}

interface GrammarDescription<TRules extends string> {
  name: string
  conflicts?: (
    $: RuleProxy<TRules>,
    baseConflicts: SymbolRule[][],
  ) => SymbolRule[][]
  rules: RuleDefinitions<TRules>
}

type RuleDefinitions<TRules extends string> = Record<
  TRules,
  RuleDefinition<TRules>
>
type RuleDefinition<TRules extends string> = ($: RuleProxy<TRules>) => Rule
type RuleProxy<TRules extends string> = {
  readonly [TRule in TRules]: SymbolRule
}

type Rule = string | RegExp | RuleObject
type RuleObject =
  | AliasRule
  | BlankRule
  | FieldRule
  | ChoiceRule
  | OptionalRule
  | PrecedenceRule
  | LeftPrecedenceRule
  | RightPrecedenceRule
  | DynamicPrecedenceRule
  | RepeatRule
  | Repeat1Rule
  | SequenceRule
  | SymbolRule
  | TokenRule
  | ImmediateTokenRule

interface AliasRule {
  type: 'ALIAS'
  content: NormalizedRule
  named: boolean
  value: string
}

interface BlankRule {
  type: 'BLANK'
}

interface FieldRule {
  type: 'FIELD'
  name: string
  content: NormalizedRule
}

interface ChoiceRule {
  type: 'CHOICE'
  members: NormalizedRule[]
}

interface OptionalRule extends ChoiceRule {
  members: [NormalizedRule, BlankRule]
}

interface PrecedenceRule {
  type: 'PREC'
  value: number
  content: NormalizedRule
}

interface LeftPrecedenceRule {
  type: 'PREC_LEFT'
  value: number
  content: NormalizedRule
}

interface RightPrecedenceRule {
  type: 'PREC_RIGHT'
  value: number
  content: NormalizedRule
}

interface DynamicPrecedenceRule {
  type: 'PREC_DYNAMIC'
  value: number
  content: NormalizedRule
}

interface RepeatRule {
  type: 'REPEAT'
  content: NormalizedRule
}

interface Repeat1Rule {
  type: 'REPEAT1'
  content: NormalizedRule
}

interface SequenceRule {
  type: 'SEQ'
  members: NormalizedRule[]
}

interface SymbolRule {
  type: 'SYMBOL'
  name: string
}

interface TokenRule {
  type: 'TOKEN'
  name: NormalizedRule
}

interface ImmediateTokenRule {
  type: 'IMMEDIATE_TOKEN'
  name: NormalizedRule
}

type NormalizedRule = StringRule | PatternRule | RuleObject

interface StringRule {
  type: 'STRING'
  value: string
}

interface PatternRule {
  type: 'PATTERN'
  value: string
}
