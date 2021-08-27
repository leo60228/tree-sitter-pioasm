module.exports = grammar({
  name: 'pioasm',

  rules: {
    source_file: $ => $._lines,

    _lines: $ => prec.left(choice($._line, seq($._lines, '\n', optional($._line)))),

    _line: $ => choice(
      $.line_comment,
      seq(
        choice(
          $._directive,
          $.instruction,
          seq($.label_decl, $.instruction),
          $.label_decl,
          $.code_block
        ),
        optional($.line_comment)
      )
    ),

    _directive: $ => choice(
      $.program_directive,
      $.define_directive,
      $.origin_directive,
      $.side_set_directive,
      $.wrap_target_directive,
      $.wrap_directive,
      $.word_directive,
      $.lang_opt_directive,
    ),
    program_directive: $ => seq('.program', $.identifier),
    define_directive: $ => seq('.define', $.symbol_def, $.expression),
    origin_directive: $ => seq('.origin', $.value),
    side_set_directive: $ => seq('.side_set', $.value, optional('opt'), optional('pindirs')),
    wrap_target_directive: $ => '.wrap_target',
    wrap_directive: $ => '.wrap',
    word_directive: $ => seq('.word', $.value),
    lang_opt_directive: $ => seq('.lang_opt', $.non_ws, $.non_ws, '=', choice($.integer, $.string, $.non_ws)),

    instruction: $ => choice(
      seq($._base_instruction, $.sideset, $.delay),
      seq($._base_instruction, $.delay, $.sideset),
      seq($._base_instruction, $.sideset),
      seq($._base_instruction, $.delay),
      seq($._base_instruction),
    ),

    _base_instruction: $ => choice(
      'nop',
      seq('jmp', optional($._condition), optional(','), $.expression),
      seq('wait', optional($.value), $.wait_source),
      seq('wait', $.value, ',', $.value),
      seq('in', $.in_source, optional(','), $.value),
      seq('out', $.out_target, optional(','), $.value),
      seq('push', optional('iffull'), optional($._blocking)),
      seq('pull', optional('ifempty'), optional($._blocking)),
      seq('mov', $.mov_target, optional(','), optional($.mov_op), $.mov_source),
      seq('irq', optional($.irq_modifiers), $.value, optional('rel')),
      seq('set', $.set_target, optional(','), $.value)
    ),

    _blocking: $ => choice('block', 'noblock'),

    _condition: $ => choice(
      seq($.not, 'x'),
      seq('x', '--'),
      seq($.not, 'y'),
      seq('y', '--'),
      seq('x', '!=', 'y'),
      'pin',
      seq($.not, 'osre'),
    ),

    wait_source: $ => choice(
      seq('irq', optional(','), $.value, optional('rel')),
      seq('gpio', optional(','), $.value),
      seq('pin', optional(','), $.value),
    ),

    in_source: $ => choice(
      'pins',
      'x',
      'y',
      'null',
      'isr',
      'osr',
      'status'
    ),

    out_target: $ => choice(
      'pins',
      'x',
      'y',
      'null',
      'pindirs',
      'isr',
      'pc',
      'exec'
    ),

    mov_target: $ => choice(
      'pins',
      'x',
      'y',
      'exec',
      'pc',
      'isr',
      'osr'
    ),

    mov_source: $ => choice(
      'pins',
      'x',
      'y',
      'null',
      'status',
      'isr',
      'osr'
    ),

    mov_op: $ => choice(
      $.not,
      '::'
    ),

    irq_modifiers: $ => choice(
      'clear',
      'wait',
      'nowait',
      'set',
    ),

    set_target: $ => choice(
      'pins',
      'x',
      'y',
      'pindirs'
    ),

    sideset: $ => seq('side', $.value),
    delay: $ => seq('[', $.expression, ']'),

    symbol_def: $ => choice(
      $.identifier,
      seq('public', $.identifier),
      seq('*', $.identifier)
    ),

    value: $ => choice(
      $.integer,
      $.identifier,
      seq('(', $.expression, ')')
    ),

    expression: $ => choice(
      $.value,
      prec.left(3, seq($.expression, '+', $.expression)),
      prec.left(3, seq($.expression, '-', $.expression)),
      prec.left(4, seq($.expression, '*', $.expression)),
      prec.left(4, seq($.expression, '/', $.expression)),
      prec.left(2, seq($.expression, '|', $.expression)),
      prec.left(2, seq($.expression, '&', $.expression)),
      prec.left(2, seq($.expression, '^', $.expression)),
      prec.left(5, seq('-', $.expression)),
      prec.left(5, seq('::', $.expression))
    ),

    label_decl: $ => seq($.symbol_def, ':'),
    code_block: $ => /% *[^%\n]+ *{(.|\n)*%}/,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: $ => /0x[0-9a-fA-F]+|0b[01]+|[0-9]+|ONE|ZERO/,
    non_ws: $ => /[^ \t\n"=]+/,
    string: $ => /"[^\n]*"/,

    not: $ => /[~!]/,

    block_comment: $ => /\/\/*(.|\n)*\*\//,
    line_comment: $ => /(?:\/\/|;).*/
  },

  extras: $ => [/[ \t]+/, $.block_comment]
});
