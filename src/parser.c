#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_DOTprogram = 2,
  anon_sym_DOTdefine = 3,
  anon_sym_DOTorigin = 4,
  anon_sym_DOTside_set = 5,
  anon_sym_opt = 6,
  anon_sym_pindirs = 7,
  sym_wrap_target_directive = 8,
  sym_wrap_directive = 9,
  anon_sym_DOTword = 10,
  anon_sym_DOTlang_opt = 11,
  anon_sym_EQ = 12,
  anon_sym_nop = 13,
  anon_sym_jmp = 14,
  anon_sym_COMMA = 15,
  anon_sym_wait = 16,
  anon_sym_in = 17,
  anon_sym_out = 18,
  anon_sym_push = 19,
  anon_sym_iffull = 20,
  anon_sym_pull = 21,
  anon_sym_ifempty = 22,
  anon_sym_mov = 23,
  anon_sym_irq = 24,
  anon_sym_rel = 25,
  anon_sym_set = 26,
  anon_sym_block = 27,
  anon_sym_noblock = 28,
  anon_sym_x = 29,
  anon_sym_DASH_DASH = 30,
  anon_sym_y = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_pin = 33,
  anon_sym_osre = 34,
  anon_sym_gpio = 35,
  anon_sym_pins = 36,
  anon_sym_null = 37,
  anon_sym_isr = 38,
  anon_sym_osr = 39,
  anon_sym_status = 40,
  anon_sym_pc = 41,
  anon_sym_exec = 42,
  anon_sym_COLON_COLON = 43,
  anon_sym_clear = 44,
  anon_sym_nowait = 45,
  anon_sym_side = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_public = 49,
  anon_sym_STAR = 50,
  anon_sym_LPAREN = 51,
  anon_sym_RPAREN = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_SLASH = 55,
  anon_sym_PIPE = 56,
  anon_sym_AMP = 57,
  anon_sym_CARET = 58,
  anon_sym_COLON = 59,
  sym_code_block = 60,
  sym_identifier = 61,
  sym_integer = 62,
  sym_non_ws = 63,
  sym_string = 64,
  sym_not = 65,
  sym_block_comment = 66,
  sym_line_comment = 67,
  sym_source_file = 68,
  sym__lines = 69,
  sym__line = 70,
  sym__directive = 71,
  sym_program_directive = 72,
  sym_define_directive = 73,
  sym_origin_directive = 74,
  sym_side_set_directive = 75,
  sym_word_directive = 76,
  sym_lang_opt_directive = 77,
  sym_instruction = 78,
  sym__base_instruction = 79,
  sym__blocking = 80,
  sym__condition = 81,
  sym_wait_source = 82,
  sym_in_source = 83,
  sym_out_target = 84,
  sym_mov_target = 85,
  sym_mov_source = 86,
  sym_mov_op = 87,
  sym_irq_modifiers = 88,
  sym_set_target = 89,
  sym_sideset = 90,
  sym_delay = 91,
  sym_symbol_def = 92,
  sym_value = 93,
  sym_expression = 94,
  sym_label_decl = 95,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_DOTprogram] = ".program",
  [anon_sym_DOTdefine] = ".define",
  [anon_sym_DOTorigin] = ".origin",
  [anon_sym_DOTside_set] = ".side_set",
  [anon_sym_opt] = "opt",
  [anon_sym_pindirs] = "pindirs",
  [sym_wrap_target_directive] = "wrap_target_directive",
  [sym_wrap_directive] = "wrap_directive",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTlang_opt] = ".lang_opt",
  [anon_sym_EQ] = "=",
  [anon_sym_nop] = "nop",
  [anon_sym_jmp] = "jmp",
  [anon_sym_COMMA] = ",",
  [anon_sym_wait] = "wait",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_push] = "push",
  [anon_sym_iffull] = "iffull",
  [anon_sym_pull] = "pull",
  [anon_sym_ifempty] = "ifempty",
  [anon_sym_mov] = "mov",
  [anon_sym_irq] = "irq",
  [anon_sym_rel] = "rel",
  [anon_sym_set] = "set",
  [anon_sym_block] = "block",
  [anon_sym_noblock] = "noblock",
  [anon_sym_x] = "x",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_y] = "y",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_pin] = "pin",
  [anon_sym_osre] = "osre",
  [anon_sym_gpio] = "gpio",
  [anon_sym_pins] = "pins",
  [anon_sym_null] = "null",
  [anon_sym_isr] = "isr",
  [anon_sym_osr] = "osr",
  [anon_sym_status] = "status",
  [anon_sym_pc] = "pc",
  [anon_sym_exec] = "exec",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_clear] = "clear",
  [anon_sym_nowait] = "nowait",
  [anon_sym_side] = "side",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_public] = "public",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_COLON] = ":",
  [sym_code_block] = "code_block",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_non_ws] = "non_ws",
  [sym_string] = "string",
  [sym_not] = "not",
  [sym_block_comment] = "block_comment",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__lines] = "_lines",
  [sym__line] = "_line",
  [sym__directive] = "_directive",
  [sym_program_directive] = "program_directive",
  [sym_define_directive] = "define_directive",
  [sym_origin_directive] = "origin_directive",
  [sym_side_set_directive] = "side_set_directive",
  [sym_word_directive] = "word_directive",
  [sym_lang_opt_directive] = "lang_opt_directive",
  [sym_instruction] = "instruction",
  [sym__base_instruction] = "_base_instruction",
  [sym__blocking] = "_blocking",
  [sym__condition] = "_condition",
  [sym_wait_source] = "wait_source",
  [sym_in_source] = "in_source",
  [sym_out_target] = "out_target",
  [sym_mov_target] = "mov_target",
  [sym_mov_source] = "mov_source",
  [sym_mov_op] = "mov_op",
  [sym_irq_modifiers] = "irq_modifiers",
  [sym_set_target] = "set_target",
  [sym_sideset] = "sideset",
  [sym_delay] = "delay",
  [sym_symbol_def] = "symbol_def",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_label_decl] = "label_decl",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DOTprogram] = anon_sym_DOTprogram,
  [anon_sym_DOTdefine] = anon_sym_DOTdefine,
  [anon_sym_DOTorigin] = anon_sym_DOTorigin,
  [anon_sym_DOTside_set] = anon_sym_DOTside_set,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_pindirs] = anon_sym_pindirs,
  [sym_wrap_target_directive] = sym_wrap_target_directive,
  [sym_wrap_directive] = sym_wrap_directive,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTlang_opt] = anon_sym_DOTlang_opt,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_iffull] = anon_sym_iffull,
  [anon_sym_pull] = anon_sym_pull,
  [anon_sym_ifempty] = anon_sym_ifempty,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_irq] = anon_sym_irq,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_noblock] = anon_sym_noblock,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_pin] = anon_sym_pin,
  [anon_sym_osre] = anon_sym_osre,
  [anon_sym_gpio] = anon_sym_gpio,
  [anon_sym_pins] = anon_sym_pins,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_isr] = anon_sym_isr,
  [anon_sym_osr] = anon_sym_osr,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_pc] = anon_sym_pc,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_nowait] = anon_sym_nowait,
  [anon_sym_side] = anon_sym_side,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_code_block] = sym_code_block,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_non_ws] = sym_non_ws,
  [sym_string] = sym_string,
  [sym_not] = sym_not,
  [sym_block_comment] = sym_block_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__lines] = sym__lines,
  [sym__line] = sym__line,
  [sym__directive] = sym__directive,
  [sym_program_directive] = sym_program_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_origin_directive] = sym_origin_directive,
  [sym_side_set_directive] = sym_side_set_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_lang_opt_directive] = sym_lang_opt_directive,
  [sym_instruction] = sym_instruction,
  [sym__base_instruction] = sym__base_instruction,
  [sym__blocking] = sym__blocking,
  [sym__condition] = sym__condition,
  [sym_wait_source] = sym_wait_source,
  [sym_in_source] = sym_in_source,
  [sym_out_target] = sym_out_target,
  [sym_mov_target] = sym_mov_target,
  [sym_mov_source] = sym_mov_source,
  [sym_mov_op] = sym_mov_op,
  [sym_irq_modifiers] = sym_irq_modifiers,
  [sym_set_target] = sym_set_target,
  [sym_sideset] = sym_sideset,
  [sym_delay] = sym_delay,
  [sym_symbol_def] = sym_symbol_def,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_label_decl] = sym_label_decl,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTside_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pindirs] = {
    .visible = true,
    .named = false,
  },
  [sym_wrap_target_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_wrap_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlang_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iffull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_osre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gpio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pins] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_osr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nowait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_side] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_non_ws] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__lines] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_program_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_origin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_side_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_opt_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__base_instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__blocking] = {
    .visible = false,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_wait_source] = {
    .visible = true,
    .named = true,
  },
  [sym_in_source] = {
    .visible = true,
    .named = true,
  },
  [sym_out_target] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_target] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_source] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_op] = {
    .visible = true,
    .named = true,
  },
  [sym_irq_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_set_target] = {
    .visible = true,
    .named = true,
  },
  [sym_sideset] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_label_decl] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(308);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'Z') ADVANCE(17);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(196);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '~') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '%') ADVANCE(146);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '0') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == 'Z') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(196);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(235);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(279);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'q') ADVANCE(186);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 142:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 146:
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '}') ADVANCE(150);
      if (lookahead == '%') ADVANCE(146);
      if (lookahead == '}') ADVANCE(233);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(304);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(149);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(150);
      if (lookahead == '%') ADVANCE(146);
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == ';') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'j') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(152)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(308);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(196);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(153)
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(301);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTprogram);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTdefine);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTorigin);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTside_set);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_pindirs);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_wrap_target_directive);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_wrap_directive);
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTword);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTlang_opt);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_push);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_iffull);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_pull);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_pull);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ifempty);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_mov);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_irq);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_irq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_noblock);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_pin);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_pin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_osre);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_gpio);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_gpio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_pins);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_isr);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_osr);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_pc);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_nowait);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_nowait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_side);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(149);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_code_block);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(150);
      if (lookahead == '%') ADVANCE(146);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'x') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '=') ADVANCE(151);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '=') ADVANCE(151);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '=') ADVANCE(151);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_non_ws);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(151);
      if (lookahead == '*') ADVANCE(148);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 153},
  [4] = {.lex_state = 153},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 153},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 153},
  [20] = {.lex_state = 153},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 153},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 153},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 153},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 153},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 153},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 153},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 153},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 153},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 153},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 152},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 152},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 152},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_DOTprogram] = ACTIONS(1),
    [anon_sym_DOTdefine] = ACTIONS(1),
    [anon_sym_DOTorigin] = ACTIONS(1),
    [anon_sym_DOTside_set] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [sym_wrap_target_directive] = ACTIONS(1),
    [sym_wrap_directive] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTlang_opt] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_iffull] = ACTIONS(1),
    [anon_sym_pull] = ACTIONS(1),
    [anon_sym_ifempty] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_irq] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_noblock] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_pin] = ACTIONS(1),
    [anon_sym_gpio] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_isr] = ACTIONS(1),
    [anon_sym_osr] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_pc] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_nowait] = ACTIONS(1),
    [anon_sym_side] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym__lines] = STATE(110),
    [sym__line] = STATE(110),
    [sym__directive] = STATE(97),
    [sym_program_directive] = STATE(97),
    [sym_define_directive] = STATE(97),
    [sym_origin_directive] = STATE(97),
    [sym_side_set_directive] = STATE(97),
    [sym_word_directive] = STATE(97),
    [sym_lang_opt_directive] = STATE(97),
    [sym_instruction] = STATE(97),
    [sym__base_instruction] = STATE(43),
    [sym_symbol_def] = STATE(115),
    [sym_label_decl] = STATE(5),
    [anon_sym_DOTprogram] = ACTIONS(5),
    [anon_sym_DOTdefine] = ACTIONS(7),
    [anon_sym_DOTorigin] = ACTIONS(9),
    [anon_sym_DOTside_set] = ACTIONS(11),
    [sym_wrap_target_directive] = ACTIONS(13),
    [sym_wrap_directive] = ACTIONS(15),
    [anon_sym_DOTword] = ACTIONS(17),
    [anon_sym_DOTlang_opt] = ACTIONS(19),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_jmp] = ACTIONS(23),
    [anon_sym_wait] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(29),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pull] = ACTIONS(33),
    [anon_sym_mov] = ACTIONS(35),
    [anon_sym_irq] = ACTIONS(37),
    [anon_sym_set] = ACTIONS(39),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(43),
    [sym_code_block] = ACTIONS(13),
    [sym_identifier] = ACTIONS(45),
    [sym_block_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(47),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(5), 1,
      anon_sym_DOTprogram,
    ACTIONS(7), 1,
      anon_sym_DOTdefine,
    ACTIONS(9), 1,
      anon_sym_DOTorigin,
    ACTIONS(11), 1,
      anon_sym_DOTside_set,
    ACTIONS(15), 1,
      sym_wrap_directive,
    ACTIONS(17), 1,
      anon_sym_DOTword,
    ACTIONS(19), 1,
      anon_sym_DOTlang_opt,
    ACTIONS(21), 1,
      anon_sym_nop,
    ACTIONS(23), 1,
      anon_sym_jmp,
    ACTIONS(25), 1,
      anon_sym_wait,
    ACTIONS(27), 1,
      anon_sym_in,
    ACTIONS(29), 1,
      anon_sym_out,
    ACTIONS(31), 1,
      anon_sym_push,
    ACTIONS(33), 1,
      anon_sym_pull,
    ACTIONS(35), 1,
      anon_sym_mov,
    ACTIONS(37), 1,
      anon_sym_irq,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(41), 1,
      anon_sym_public,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_line_comment,
    STATE(5), 1,
      sym_label_decl,
    STATE(43), 1,
      sym__base_instruction,
    STATE(112), 1,
      sym__line,
    STATE(115), 1,
      sym_symbol_def,
    ACTIONS(13), 2,
      sym_wrap_target_directive,
      sym_code_block,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(97), 8,
      sym__directive,
      sym_program_directive,
      sym_define_directive,
      sym_origin_directive,
      sym_side_set_directive,
      sym_word_directive,
      sym_lang_opt_directive,
      sym_instruction,
  [97] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(55), 2,
      anon_sym_SLASH,
      sym_line_comment,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_opt,
      anon_sym_pindirs,
      anon_sym_rel,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [120] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      sym_line_comment,
    ACTIONS(57), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_opt,
      anon_sym_pindirs,
      anon_sym_rel,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [143] = 15,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_nop,
    ACTIONS(65), 1,
      anon_sym_jmp,
    ACTIONS(67), 1,
      anon_sym_wait,
    ACTIONS(69), 1,
      anon_sym_in,
    ACTIONS(71), 1,
      anon_sym_out,
    ACTIONS(73), 1,
      anon_sym_push,
    ACTIONS(75), 1,
      anon_sym_pull,
    ACTIONS(77), 1,
      anon_sym_mov,
    ACTIONS(79), 1,
      anon_sym_irq,
    ACTIONS(81), 1,
      anon_sym_set,
    ACTIONS(83), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__base_instruction,
    STATE(102), 1,
      sym_instruction,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [190] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(53), 12,
      anon_sym_COMMA,
      anon_sym_irq,
      anon_sym_pin,
      anon_sym_gpio,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [211] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(57), 12,
      anon_sym_COMMA,
      anon_sym_irq,
      anon_sym_pin,
      anon_sym_gpio,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [232] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_x,
    ACTIONS(89), 1,
      anon_sym_y,
    ACTIONS(91), 1,
      anon_sym_pin,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_not,
    STATE(11), 1,
      sym_expression,
    STATE(13), 1,
      sym_value,
    STATE(38), 1,
      sym__condition,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
    ACTIONS(97), 2,
      sym_identifier,
      sym_integer,
  [271] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_nop,
      anon_sym_jmp,
      anon_sym_wait,
      anon_sym_in,
      anon_sym_out,
      anon_sym_push,
      anon_sym_pull,
      anon_sym_mov,
      anon_sym_irq,
      anon_sym_set,
  [292] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      sym_line_comment,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [316] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [344] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [372] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(127), 2,
      anon_sym_SLASH,
      sym_line_comment,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [392] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [418] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(111), 2,
      anon_sym_SLASH,
      sym_line_comment,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [438] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      sym_mov_op,
    STATE(74), 1,
      sym_mov_source,
    ACTIONS(133), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(131), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [464] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 2,
      anon_sym_SLASH,
      sym_line_comment,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [484] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [512] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_mov_op,
    STATE(65), 1,
      sym_mov_source,
    ACTIONS(133), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(131), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [535] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 10,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
      anon_sym_COLON_COLON,
      sym_not,
  [551] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SLASH,
    ACTIONS(147), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [577] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(135), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [594] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(125), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [611] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [632] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_value,
    STATE(94), 1,
      sym_irq_modifiers,
    ACTIONS(97), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(155), 4,
      anon_sym_wait,
      anon_sym_set,
      anon_sym_clear,
      anon_sym_nowait,
  [655] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      anon_sym_ifempty,
    ACTIONS(163), 1,
      sym_line_comment,
    STATE(67), 1,
      sym__blocking,
    ACTIONS(161), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [678] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      anon_sym_iffull,
    ACTIONS(163), 1,
      sym_line_comment,
    STATE(67), 1,
      sym__blocking,
    ACTIONS(161), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [701] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_out_target,
    ACTIONS(165), 8,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_pc,
      anon_sym_exec,
  [718] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(105), 8,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [735] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(105), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [754] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_in_source,
    ACTIONS(167), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [770] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [792] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [814] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(70), 1,
      sym_mov_source,
    ACTIONS(131), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [830] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(171), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [852] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(65), 1,
      sym_mov_source,
    ACTIONS(131), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [868] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      sym_line_comment,
    STATE(74), 1,
      sym__blocking,
    ACTIONS(177), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [888] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(18), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [914] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_mov_target,
    ACTIONS(183), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_pc,
      anon_sym_exec,
  [930] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym_irq,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_wait_source,
    STATE(79), 1,
      sym_value,
    ACTIONS(187), 2,
      anon_sym_pin,
      anon_sym_gpio,
    ACTIONS(191), 2,
      sym_identifier,
      sym_integer,
  [954] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(29), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [977] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(18), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1000] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_side,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_delay,
    STATE(68), 1,
      sym_sideset,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1023] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(24), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1046] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    STATE(23), 1,
      sym_value,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(205), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [1082] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(30), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1105] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(33), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1128] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(21), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1151] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(17), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1174] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(14), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1197] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(32), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1220] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(23), 1,
      sym_value,
    STATE(35), 1,
      sym_expression,
    ACTIONS(193), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1243] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    STATE(13), 1,
      sym_value,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1266] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    STATE(13), 1,
      sym_value,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1289] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(13), 1,
      sym_value,
    STATE(15), 1,
      sym_expression,
    ACTIONS(93), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      sym_integer,
    ACTIONS(207), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1326] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(213), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(211), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1340] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_rel,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(217), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(215), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(221), 1,
      sym_integer,
    ACTIONS(219), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1384] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(225), 1,
      anon_sym_rel,
    ACTIONS(227), 1,
      sym_line_comment,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1400] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(231), 1,
      anon_sym_rel,
    ACTIONS(233), 1,
      sym_line_comment,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1416] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      anon_sym_rel,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1432] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1445] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_side,
    ACTIONS(239), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_sideset,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1462] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1475] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_delay,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1492] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_opt,
    ACTIONS(245), 1,
      anon_sym_pindirs,
    ACTIONS(247), 1,
      sym_line_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      sym_line_comment,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1535] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym_value,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(227), 1,
      sym_line_comment,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1567] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      sym_line_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1580] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      sym_line_comment,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      sym_line_comment,
    ACTIONS(259), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
      anon_sym_LBRACK,
  [1606] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_value,
  [1625] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_value,
  [1644] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_irq,
    STATE(74), 1,
      sym_wait_source,
    ACTIONS(269), 2,
      anon_sym_pin,
      anon_sym_gpio,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_set_target,
    ACTIONS(271), 4,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
  [1674] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_line_comment,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      sym_integer,
    ACTIONS(277), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1698] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      anon_sym_pindirs,
    ACTIONS(285), 1,
      sym_line_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1712] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_public,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(49), 1,
      sym_symbol_def,
  [1728] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(63), 1,
      sym_value,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      sym_line_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_side,
  [1756] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(75), 1,
      sym_value,
  [1772] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(107), 1,
      sym_value,
  [1788] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(69), 1,
      sym_value,
  [1804] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(65), 1,
      sym_value,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(293), 1,
      sym_integer,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      sym_integer,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1844] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(106), 1,
      sym_value,
  [1860] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(64), 1,
      sym_value,
  [1876] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(81), 1,
      sym_value,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(301), 1,
      sym_line_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      sym_line_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1914] = 3,
    ACTIONS(305), 1,
      sym_string,
    ACTIONS(307), 1,
      sym_block_comment,
    ACTIONS(303), 2,
      sym_integer,
      sym_non_ws,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      sym_line_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(311), 1,
      sym_integer,
    ACTIONS(309), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_line_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(319), 1,
      sym_line_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 3,
      anon_sym_x,
      anon_sym_y,
      anon_sym_osre,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      sym_line_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1989] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(329), 1,
      sym_line_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2000] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      sym_line_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      sym_line_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH,
    ACTIONS(341), 1,
      anon_sym_BANG_EQ,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_LF,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2058] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH,
  [2073] = 2,
    ACTIONS(307), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      sym_non_ws,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      anon_sym_y,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      sym_identifier,
  [2108] = 2,
    ACTIONS(307), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      sym_non_ws,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 372,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 438,
  [SMALL_STATE(17)] = 464,
  [SMALL_STATE(18)] = 484,
  [SMALL_STATE(19)] = 512,
  [SMALL_STATE(20)] = 535,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 577,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 611,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 655,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 701,
  [SMALL_STATE(29)] = 718,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 754,
  [SMALL_STATE(32)] = 770,
  [SMALL_STATE(33)] = 792,
  [SMALL_STATE(34)] = 814,
  [SMALL_STATE(35)] = 830,
  [SMALL_STATE(36)] = 852,
  [SMALL_STATE(37)] = 868,
  [SMALL_STATE(38)] = 888,
  [SMALL_STATE(39)] = 914,
  [SMALL_STATE(40)] = 930,
  [SMALL_STATE(41)] = 954,
  [SMALL_STATE(42)] = 977,
  [SMALL_STATE(43)] = 1000,
  [SMALL_STATE(44)] = 1023,
  [SMALL_STATE(45)] = 1046,
  [SMALL_STATE(46)] = 1069,
  [SMALL_STATE(47)] = 1082,
  [SMALL_STATE(48)] = 1105,
  [SMALL_STATE(49)] = 1128,
  [SMALL_STATE(50)] = 1151,
  [SMALL_STATE(51)] = 1174,
  [SMALL_STATE(52)] = 1197,
  [SMALL_STATE(53)] = 1220,
  [SMALL_STATE(54)] = 1243,
  [SMALL_STATE(55)] = 1266,
  [SMALL_STATE(56)] = 1289,
  [SMALL_STATE(57)] = 1312,
  [SMALL_STATE(58)] = 1326,
  [SMALL_STATE(59)] = 1340,
  [SMALL_STATE(60)] = 1356,
  [SMALL_STATE(61)] = 1370,
  [SMALL_STATE(62)] = 1384,
  [SMALL_STATE(63)] = 1400,
  [SMALL_STATE(64)] = 1416,
  [SMALL_STATE(65)] = 1432,
  [SMALL_STATE(66)] = 1445,
  [SMALL_STATE(67)] = 1462,
  [SMALL_STATE(68)] = 1475,
  [SMALL_STATE(69)] = 1492,
  [SMALL_STATE(70)] = 1509,
  [SMALL_STATE(71)] = 1522,
  [SMALL_STATE(72)] = 1535,
  [SMALL_STATE(73)] = 1554,
  [SMALL_STATE(74)] = 1567,
  [SMALL_STATE(75)] = 1580,
  [SMALL_STATE(76)] = 1593,
  [SMALL_STATE(77)] = 1606,
  [SMALL_STATE(78)] = 1625,
  [SMALL_STATE(79)] = 1644,
  [SMALL_STATE(80)] = 1661,
  [SMALL_STATE(81)] = 1674,
  [SMALL_STATE(82)] = 1686,
  [SMALL_STATE(83)] = 1698,
  [SMALL_STATE(84)] = 1712,
  [SMALL_STATE(85)] = 1728,
  [SMALL_STATE(86)] = 1744,
  [SMALL_STATE(87)] = 1756,
  [SMALL_STATE(88)] = 1772,
  [SMALL_STATE(89)] = 1788,
  [SMALL_STATE(90)] = 1804,
  [SMALL_STATE(91)] = 1820,
  [SMALL_STATE(92)] = 1832,
  [SMALL_STATE(93)] = 1844,
  [SMALL_STATE(94)] = 1860,
  [SMALL_STATE(95)] = 1876,
  [SMALL_STATE(96)] = 1892,
  [SMALL_STATE(97)] = 1903,
  [SMALL_STATE(98)] = 1914,
  [SMALL_STATE(99)] = 1925,
  [SMALL_STATE(100)] = 1936,
  [SMALL_STATE(101)] = 1947,
  [SMALL_STATE(102)] = 1958,
  [SMALL_STATE(103)] = 1969,
  [SMALL_STATE(104)] = 1978,
  [SMALL_STATE(105)] = 1989,
  [SMALL_STATE(106)] = 2000,
  [SMALL_STATE(107)] = 2011,
  [SMALL_STATE(108)] = 2022,
  [SMALL_STATE(109)] = 2030,
  [SMALL_STATE(110)] = 2040,
  [SMALL_STATE(111)] = 2050,
  [SMALL_STATE(112)] = 2058,
  [SMALL_STATE(113)] = 2066,
  [SMALL_STATE(114)] = 2073,
  [SMALL_STATE(115)] = 2080,
  [SMALL_STATE(116)] = 2087,
  [SMALL_STATE(117)] = 2094,
  [SMALL_STATE(118)] = 2101,
  [SMALL_STATE(119)] = 2108,
  [SMALL_STATE(120)] = 2115,
  [SMALL_STATE(121)] = 2122,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_decl, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_decl, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_target, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_directive, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_op, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_side_set_directive, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_side_set_directive, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_source, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_source, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sideset, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sideset, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_target, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_target, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_side_set_directive, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_side_set_directive, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delay, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_source, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_source, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_target, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_target, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_side_set_directive, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_side_set_directive, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_irq_modifiers, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_irq_modifiers, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_directive, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_program_directive, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_opt_directive, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_opt_directive, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_directive, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_origin_directive, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pioasm(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
