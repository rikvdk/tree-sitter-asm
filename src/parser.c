#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_SEMI = 2,
  sym_destination = 3,
  sym_equals = 4,
  anon_sym_0 = 5,
  anon_sym_1 = 6,
  anon_sym_DASH1 = 7,
  anon_sym_D = 8,
  anon_sym_A = 9,
  anon_sym_M = 10,
  anon_sym_BANGD = 11,
  anon_sym_BANGA = 12,
  anon_sym_BANGM = 13,
  anon_sym_DASHD = 14,
  anon_sym_DASHA = 15,
  anon_sym_DASHM = 16,
  anon_sym_D_PLUS1 = 17,
  anon_sym_A_PLUS1 = 18,
  anon_sym_M_PLUS1 = 19,
  anon_sym_D_DASH1 = 20,
  anon_sym_A_DASH1 = 21,
  anon_sym_M_DASH1 = 22,
  anon_sym_D_PLUSA = 23,
  anon_sym_D_PLUSM = 24,
  anon_sym_D_DASHA = 25,
  anon_sym_D_DASHM = 26,
  anon_sym_A_DASHD = 27,
  anon_sym_M_DASHD = 28,
  anon_sym_D_AMPA = 29,
  anon_sym_D_AMPM = 30,
  anon_sym_D_PIPEA = 31,
  anon_sym_D_PIPEM = 32,
  anon_sym_JGT = 33,
  anon_sym_JEQ = 34,
  anon_sym_JGE = 35,
  anon_sym_JLT = 36,
  anon_sym_JNE = 37,
  anon_sym_JLE = 38,
  anon_sym_JMP = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  sym_constant = 42,
  sym_symbol = 43,
  sym__comment = 44,
  sym_source_file = 45,
  sym__statement = 46,
  sym_a_instruction = 47,
  sym_c_instruction = 48,
  sym_compute = 49,
  sym_jump = 50,
  sym_label = 51,
  aux_sym_source_file_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_SEMI] = ";",
  [sym_destination] = "destination",
  [sym_equals] = "equals",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_DASH1] = "-1",
  [anon_sym_D] = "D",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_BANGD] = "!D",
  [anon_sym_BANGA] = "!A",
  [anon_sym_BANGM] = "!M",
  [anon_sym_DASHD] = "-D",
  [anon_sym_DASHA] = "-A",
  [anon_sym_DASHM] = "-M",
  [anon_sym_D_PLUS1] = "D+1",
  [anon_sym_A_PLUS1] = "A+1",
  [anon_sym_M_PLUS1] = "M+1",
  [anon_sym_D_DASH1] = "D-1",
  [anon_sym_A_DASH1] = "A-1",
  [anon_sym_M_DASH1] = "M-1",
  [anon_sym_D_PLUSA] = "D+A",
  [anon_sym_D_PLUSM] = "D+M",
  [anon_sym_D_DASHA] = "D-A",
  [anon_sym_D_DASHM] = "D-M",
  [anon_sym_A_DASHD] = "A-D",
  [anon_sym_M_DASHD] = "M-D",
  [anon_sym_D_AMPA] = "D&A",
  [anon_sym_D_AMPM] = "D&M",
  [anon_sym_D_PIPEA] = "D|A",
  [anon_sym_D_PIPEM] = "D|M",
  [anon_sym_JGT] = "JGT",
  [anon_sym_JEQ] = "JEQ",
  [anon_sym_JGE] = "JGE",
  [anon_sym_JLT] = "JLT",
  [anon_sym_JNE] = "JNE",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JMP] = "JMP",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_constant] = "constant",
  [sym_symbol] = "symbol",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_a_instruction] = "a_instruction",
  [sym_c_instruction] = "c_instruction",
  [sym_compute] = "compute",
  [sym_jump] = "jump",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_destination] = sym_destination,
  [sym_equals] = sym_equals,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH1] = anon_sym_DASH1,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_BANGD] = anon_sym_BANGD,
  [anon_sym_BANGA] = anon_sym_BANGA,
  [anon_sym_BANGM] = anon_sym_BANGM,
  [anon_sym_DASHD] = anon_sym_DASHD,
  [anon_sym_DASHA] = anon_sym_DASHA,
  [anon_sym_DASHM] = anon_sym_DASHM,
  [anon_sym_D_PLUS1] = anon_sym_D_PLUS1,
  [anon_sym_A_PLUS1] = anon_sym_A_PLUS1,
  [anon_sym_M_PLUS1] = anon_sym_M_PLUS1,
  [anon_sym_D_DASH1] = anon_sym_D_DASH1,
  [anon_sym_A_DASH1] = anon_sym_A_DASH1,
  [anon_sym_M_DASH1] = anon_sym_M_DASH1,
  [anon_sym_D_PLUSA] = anon_sym_D_PLUSA,
  [anon_sym_D_PLUSM] = anon_sym_D_PLUSM,
  [anon_sym_D_DASHA] = anon_sym_D_DASHA,
  [anon_sym_D_DASHM] = anon_sym_D_DASHM,
  [anon_sym_A_DASHD] = anon_sym_A_DASHD,
  [anon_sym_M_DASHD] = anon_sym_M_DASHD,
  [anon_sym_D_AMPA] = anon_sym_D_AMPA,
  [anon_sym_D_AMPM] = anon_sym_D_AMPM,
  [anon_sym_D_PIPEA] = anon_sym_D_PIPEA,
  [anon_sym_D_PIPEM] = anon_sym_D_PIPEM,
  [anon_sym_JGT] = anon_sym_JGT,
  [anon_sym_JEQ] = anon_sym_JEQ,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_JLT] = anon_sym_JLT,
  [anon_sym_JNE] = anon_sym_JNE,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_constant] = sym_constant,
  [sym_symbol] = sym_symbol,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_a_instruction] = sym_a_instruction,
  [sym_c_instruction] = sym_c_instruction,
  [sym_compute] = sym_compute,
  [sym_jump] = sym_jump,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_destination] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_a_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_c_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_compute] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'J') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == '\\') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '\\') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'D' ||
          lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(23);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'Q') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(80);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_destination);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'D' ||
          lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'D' ||
          lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'D' ||
          lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANGD);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANGA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANGM);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASHD);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASHA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASHM);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_D_PLUS1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_A_PLUS1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_M_PLUS1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_D_DASH1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_A_DASH1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_M_DASH1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_D_PLUSA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_D_PLUSM);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_D_DASHA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_D_DASHM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_A_DASHD);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_M_DASHD);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_D_AMPA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_D_AMPM);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_D_PIPEA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_D_PIPEM);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_JGT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_JEQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_JLT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_JNE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_destination] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH1] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_BANGD] = ACTIONS(1),
    [anon_sym_BANGA] = ACTIONS(1),
    [anon_sym_BANGM] = ACTIONS(1),
    [anon_sym_DASHD] = ACTIONS(1),
    [anon_sym_DASHA] = ACTIONS(1),
    [anon_sym_DASHM] = ACTIONS(1),
    [anon_sym_D_PLUS1] = ACTIONS(1),
    [anon_sym_A_PLUS1] = ACTIONS(1),
    [anon_sym_M_PLUS1] = ACTIONS(1),
    [anon_sym_D_DASH1] = ACTIONS(1),
    [anon_sym_A_DASH1] = ACTIONS(1),
    [anon_sym_M_DASH1] = ACTIONS(1),
    [anon_sym_D_PLUSA] = ACTIONS(1),
    [anon_sym_D_PLUSM] = ACTIONS(1),
    [anon_sym_D_DASHA] = ACTIONS(1),
    [anon_sym_D_DASHM] = ACTIONS(1),
    [anon_sym_A_DASHD] = ACTIONS(1),
    [anon_sym_M_DASHD] = ACTIONS(1),
    [anon_sym_D_AMPA] = ACTIONS(1),
    [anon_sym_D_AMPM] = ACTIONS(1),
    [anon_sym_D_PIPEA] = ACTIONS(1),
    [anon_sym_D_PIPEM] = ACTIONS(1),
    [anon_sym_JGT] = ACTIONS(1),
    [anon_sym_JEQ] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_JLT] = ACTIONS(1),
    [anon_sym_JNE] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__statement] = STATE(2),
    [sym_a_instruction] = STATE(2),
    [sym_c_instruction] = STATE(2),
    [sym_compute] = STATE(5),
    [sym_label] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_destination] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_1] = ACTIONS(11),
    [anon_sym_DASH1] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(13),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_M] = ACTIONS(13),
    [anon_sym_BANGD] = ACTIONS(11),
    [anon_sym_BANGA] = ACTIONS(11),
    [anon_sym_BANGM] = ACTIONS(11),
    [anon_sym_DASHD] = ACTIONS(11),
    [anon_sym_DASHA] = ACTIONS(11),
    [anon_sym_DASHM] = ACTIONS(11),
    [anon_sym_D_PLUS1] = ACTIONS(11),
    [anon_sym_A_PLUS1] = ACTIONS(11),
    [anon_sym_M_PLUS1] = ACTIONS(11),
    [anon_sym_D_DASH1] = ACTIONS(11),
    [anon_sym_A_DASH1] = ACTIONS(11),
    [anon_sym_M_DASH1] = ACTIONS(11),
    [anon_sym_D_PLUSA] = ACTIONS(11),
    [anon_sym_D_PLUSM] = ACTIONS(11),
    [anon_sym_D_DASHA] = ACTIONS(11),
    [anon_sym_D_DASHM] = ACTIONS(11),
    [anon_sym_A_DASHD] = ACTIONS(11),
    [anon_sym_M_DASHD] = ACTIONS(11),
    [anon_sym_D_AMPA] = ACTIONS(11),
    [anon_sym_D_AMPM] = ACTIONS(11),
    [anon_sym_D_PIPEA] = ACTIONS(11),
    [anon_sym_D_PIPEM] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_a_instruction] = STATE(3),
    [sym_c_instruction] = STATE(3),
    [sym_compute] = STATE(5),
    [sym_label] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(7),
    [sym_destination] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_1] = ACTIONS(11),
    [anon_sym_DASH1] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(13),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_M] = ACTIONS(13),
    [anon_sym_BANGD] = ACTIONS(11),
    [anon_sym_BANGA] = ACTIONS(11),
    [anon_sym_BANGM] = ACTIONS(11),
    [anon_sym_DASHD] = ACTIONS(11),
    [anon_sym_DASHA] = ACTIONS(11),
    [anon_sym_DASHM] = ACTIONS(11),
    [anon_sym_D_PLUS1] = ACTIONS(11),
    [anon_sym_A_PLUS1] = ACTIONS(11),
    [anon_sym_M_PLUS1] = ACTIONS(11),
    [anon_sym_D_DASH1] = ACTIONS(11),
    [anon_sym_A_DASH1] = ACTIONS(11),
    [anon_sym_M_DASH1] = ACTIONS(11),
    [anon_sym_D_PLUSA] = ACTIONS(11),
    [anon_sym_D_PLUSM] = ACTIONS(11),
    [anon_sym_D_DASHA] = ACTIONS(11),
    [anon_sym_D_DASHM] = ACTIONS(11),
    [anon_sym_A_DASHD] = ACTIONS(11),
    [anon_sym_M_DASHD] = ACTIONS(11),
    [anon_sym_D_AMPA] = ACTIONS(11),
    [anon_sym_D_AMPM] = ACTIONS(11),
    [anon_sym_D_PIPEA] = ACTIONS(11),
    [anon_sym_D_PIPEM] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_a_instruction] = STATE(3),
    [sym_c_instruction] = STATE(3),
    [sym_compute] = STATE(5),
    [sym_label] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [sym_destination] = ACTIONS(24),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_DASH1] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(30),
    [anon_sym_A] = ACTIONS(30),
    [anon_sym_M] = ACTIONS(30),
    [anon_sym_BANGD] = ACTIONS(27),
    [anon_sym_BANGA] = ACTIONS(27),
    [anon_sym_BANGM] = ACTIONS(27),
    [anon_sym_DASHD] = ACTIONS(27),
    [anon_sym_DASHA] = ACTIONS(27),
    [anon_sym_DASHM] = ACTIONS(27),
    [anon_sym_D_PLUS1] = ACTIONS(27),
    [anon_sym_A_PLUS1] = ACTIONS(27),
    [anon_sym_M_PLUS1] = ACTIONS(27),
    [anon_sym_D_DASH1] = ACTIONS(27),
    [anon_sym_A_DASH1] = ACTIONS(27),
    [anon_sym_M_DASH1] = ACTIONS(27),
    [anon_sym_D_PLUSA] = ACTIONS(27),
    [anon_sym_D_PLUSM] = ACTIONS(27),
    [anon_sym_D_DASHA] = ACTIONS(27),
    [anon_sym_D_DASHM] = ACTIONS(27),
    [anon_sym_A_DASHD] = ACTIONS(27),
    [anon_sym_M_DASHD] = ACTIONS(27),
    [anon_sym_D_AMPA] = ACTIONS(27),
    [anon_sym_D_AMPM] = ACTIONS(27),
    [anon_sym_D_PIPEA] = ACTIONS(27),
    [anon_sym_D_PIPEM] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_destination] = ACTIONS(36),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_DASH1] = ACTIONS(36),
    [anon_sym_D] = ACTIONS(38),
    [anon_sym_A] = ACTIONS(38),
    [anon_sym_M] = ACTIONS(38),
    [anon_sym_BANGD] = ACTIONS(36),
    [anon_sym_BANGA] = ACTIONS(36),
    [anon_sym_BANGM] = ACTIONS(36),
    [anon_sym_DASHD] = ACTIONS(36),
    [anon_sym_DASHA] = ACTIONS(36),
    [anon_sym_DASHM] = ACTIONS(36),
    [anon_sym_D_PLUS1] = ACTIONS(36),
    [anon_sym_A_PLUS1] = ACTIONS(36),
    [anon_sym_M_PLUS1] = ACTIONS(36),
    [anon_sym_D_DASH1] = ACTIONS(36),
    [anon_sym_A_DASH1] = ACTIONS(36),
    [anon_sym_M_DASH1] = ACTIONS(36),
    [anon_sym_D_PLUSA] = ACTIONS(36),
    [anon_sym_D_PLUSM] = ACTIONS(36),
    [anon_sym_D_DASHA] = ACTIONS(36),
    [anon_sym_D_DASHM] = ACTIONS(36),
    [anon_sym_A_DASHD] = ACTIONS(36),
    [anon_sym_M_DASHD] = ACTIONS(36),
    [anon_sym_D_AMPA] = ACTIONS(36),
    [anon_sym_D_AMPM] = ACTIONS(36),
    [anon_sym_D_PIPEA] = ACTIONS(36),
    [anon_sym_D_PIPEM] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_destination] = ACTIONS(40),
    [anon_sym_0] = ACTIONS(40),
    [anon_sym_1] = ACTIONS(40),
    [anon_sym_DASH1] = ACTIONS(40),
    [anon_sym_D] = ACTIONS(44),
    [anon_sym_A] = ACTIONS(44),
    [anon_sym_M] = ACTIONS(44),
    [anon_sym_BANGD] = ACTIONS(40),
    [anon_sym_BANGA] = ACTIONS(40),
    [anon_sym_BANGM] = ACTIONS(40),
    [anon_sym_DASHD] = ACTIONS(40),
    [anon_sym_DASHA] = ACTIONS(40),
    [anon_sym_DASHM] = ACTIONS(40),
    [anon_sym_D_PLUS1] = ACTIONS(40),
    [anon_sym_A_PLUS1] = ACTIONS(40),
    [anon_sym_M_PLUS1] = ACTIONS(40),
    [anon_sym_D_DASH1] = ACTIONS(40),
    [anon_sym_A_DASH1] = ACTIONS(40),
    [anon_sym_M_DASH1] = ACTIONS(40),
    [anon_sym_D_PLUSA] = ACTIONS(40),
    [anon_sym_D_PLUSM] = ACTIONS(40),
    [anon_sym_D_DASHA] = ACTIONS(40),
    [anon_sym_D_DASHM] = ACTIONS(40),
    [anon_sym_A_DASHD] = ACTIONS(40),
    [anon_sym_M_DASHD] = ACTIONS(40),
    [anon_sym_D_AMPA] = ACTIONS(40),
    [anon_sym_D_AMPM] = ACTIONS(40),
    [anon_sym_D_PIPEA] = ACTIONS(40),
    [anon_sym_D_PIPEM] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_AT] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_destination] = ACTIONS(46),
    [anon_sym_0] = ACTIONS(46),
    [anon_sym_1] = ACTIONS(46),
    [anon_sym_DASH1] = ACTIONS(46),
    [anon_sym_D] = ACTIONS(50),
    [anon_sym_A] = ACTIONS(50),
    [anon_sym_M] = ACTIONS(50),
    [anon_sym_BANGD] = ACTIONS(46),
    [anon_sym_BANGA] = ACTIONS(46),
    [anon_sym_BANGM] = ACTIONS(46),
    [anon_sym_DASHD] = ACTIONS(46),
    [anon_sym_DASHA] = ACTIONS(46),
    [anon_sym_DASHM] = ACTIONS(46),
    [anon_sym_D_PLUS1] = ACTIONS(46),
    [anon_sym_A_PLUS1] = ACTIONS(46),
    [anon_sym_M_PLUS1] = ACTIONS(46),
    [anon_sym_D_DASH1] = ACTIONS(46),
    [anon_sym_A_DASH1] = ACTIONS(46),
    [anon_sym_M_DASH1] = ACTIONS(46),
    [anon_sym_D_PLUSA] = ACTIONS(46),
    [anon_sym_D_PLUSM] = ACTIONS(46),
    [anon_sym_D_DASHA] = ACTIONS(46),
    [anon_sym_D_DASHM] = ACTIONS(46),
    [anon_sym_A_DASHD] = ACTIONS(46),
    [anon_sym_M_DASHD] = ACTIONS(46),
    [anon_sym_D_AMPA] = ACTIONS(46),
    [anon_sym_D_AMPM] = ACTIONS(46),
    [anon_sym_D_PIPEA] = ACTIONS(46),
    [anon_sym_D_PIPEM] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(46),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [sym_destination] = ACTIONS(52),
    [anon_sym_0] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_DASH1] = ACTIONS(52),
    [anon_sym_D] = ACTIONS(54),
    [anon_sym_A] = ACTIONS(54),
    [anon_sym_M] = ACTIONS(54),
    [anon_sym_BANGD] = ACTIONS(52),
    [anon_sym_BANGA] = ACTIONS(52),
    [anon_sym_BANGM] = ACTIONS(52),
    [anon_sym_DASHD] = ACTIONS(52),
    [anon_sym_DASHA] = ACTIONS(52),
    [anon_sym_DASHM] = ACTIONS(52),
    [anon_sym_D_PLUS1] = ACTIONS(52),
    [anon_sym_A_PLUS1] = ACTIONS(52),
    [anon_sym_M_PLUS1] = ACTIONS(52),
    [anon_sym_D_DASH1] = ACTIONS(52),
    [anon_sym_A_DASH1] = ACTIONS(52),
    [anon_sym_M_DASH1] = ACTIONS(52),
    [anon_sym_D_PLUSA] = ACTIONS(52),
    [anon_sym_D_PLUSM] = ACTIONS(52),
    [anon_sym_D_DASHA] = ACTIONS(52),
    [anon_sym_D_DASHM] = ACTIONS(52),
    [anon_sym_A_DASHD] = ACTIONS(52),
    [anon_sym_M_DASHD] = ACTIONS(52),
    [anon_sym_D_AMPA] = ACTIONS(52),
    [anon_sym_D_AMPM] = ACTIONS(52),
    [anon_sym_D_PIPEA] = ACTIONS(52),
    [anon_sym_D_PIPEM] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(52),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(56),
    [sym_destination] = ACTIONS(56),
    [anon_sym_0] = ACTIONS(56),
    [anon_sym_1] = ACTIONS(56),
    [anon_sym_DASH1] = ACTIONS(56),
    [anon_sym_D] = ACTIONS(58),
    [anon_sym_A] = ACTIONS(58),
    [anon_sym_M] = ACTIONS(58),
    [anon_sym_BANGD] = ACTIONS(56),
    [anon_sym_BANGA] = ACTIONS(56),
    [anon_sym_BANGM] = ACTIONS(56),
    [anon_sym_DASHD] = ACTIONS(56),
    [anon_sym_DASHA] = ACTIONS(56),
    [anon_sym_DASHM] = ACTIONS(56),
    [anon_sym_D_PLUS1] = ACTIONS(56),
    [anon_sym_A_PLUS1] = ACTIONS(56),
    [anon_sym_M_PLUS1] = ACTIONS(56),
    [anon_sym_D_DASH1] = ACTIONS(56),
    [anon_sym_A_DASH1] = ACTIONS(56),
    [anon_sym_M_DASH1] = ACTIONS(56),
    [anon_sym_D_PLUSA] = ACTIONS(56),
    [anon_sym_D_PLUSM] = ACTIONS(56),
    [anon_sym_D_DASHA] = ACTIONS(56),
    [anon_sym_D_DASHM] = ACTIONS(56),
    [anon_sym_A_DASHD] = ACTIONS(56),
    [anon_sym_M_DASHD] = ACTIONS(56),
    [anon_sym_D_AMPA] = ACTIONS(56),
    [anon_sym_D_AMPM] = ACTIONS(56),
    [anon_sym_D_PIPEA] = ACTIONS(56),
    [anon_sym_D_PIPEM] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [sym_destination] = ACTIONS(60),
    [anon_sym_0] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_DASH1] = ACTIONS(60),
    [anon_sym_D] = ACTIONS(62),
    [anon_sym_A] = ACTIONS(62),
    [anon_sym_M] = ACTIONS(62),
    [anon_sym_BANGD] = ACTIONS(60),
    [anon_sym_BANGA] = ACTIONS(60),
    [anon_sym_BANGM] = ACTIONS(60),
    [anon_sym_DASHD] = ACTIONS(60),
    [anon_sym_DASHA] = ACTIONS(60),
    [anon_sym_DASHM] = ACTIONS(60),
    [anon_sym_D_PLUS1] = ACTIONS(60),
    [anon_sym_A_PLUS1] = ACTIONS(60),
    [anon_sym_M_PLUS1] = ACTIONS(60),
    [anon_sym_D_DASH1] = ACTIONS(60),
    [anon_sym_A_DASH1] = ACTIONS(60),
    [anon_sym_M_DASH1] = ACTIONS(60),
    [anon_sym_D_PLUSA] = ACTIONS(60),
    [anon_sym_D_PLUSM] = ACTIONS(60),
    [anon_sym_D_DASHA] = ACTIONS(60),
    [anon_sym_D_DASHM] = ACTIONS(60),
    [anon_sym_A_DASHD] = ACTIONS(60),
    [anon_sym_M_DASHD] = ACTIONS(60),
    [anon_sym_D_AMPA] = ACTIONS(60),
    [anon_sym_D_AMPM] = ACTIONS(60),
    [anon_sym_D_PIPEA] = ACTIONS(60),
    [anon_sym_D_PIPEM] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [sym_destination] = ACTIONS(64),
    [anon_sym_0] = ACTIONS(64),
    [anon_sym_1] = ACTIONS(64),
    [anon_sym_DASH1] = ACTIONS(64),
    [anon_sym_D] = ACTIONS(66),
    [anon_sym_A] = ACTIONS(66),
    [anon_sym_M] = ACTIONS(66),
    [anon_sym_BANGD] = ACTIONS(64),
    [anon_sym_BANGA] = ACTIONS(64),
    [anon_sym_BANGM] = ACTIONS(64),
    [anon_sym_DASHD] = ACTIONS(64),
    [anon_sym_DASHA] = ACTIONS(64),
    [anon_sym_DASHM] = ACTIONS(64),
    [anon_sym_D_PLUS1] = ACTIONS(64),
    [anon_sym_A_PLUS1] = ACTIONS(64),
    [anon_sym_M_PLUS1] = ACTIONS(64),
    [anon_sym_D_DASH1] = ACTIONS(64),
    [anon_sym_A_DASH1] = ACTIONS(64),
    [anon_sym_M_DASH1] = ACTIONS(64),
    [anon_sym_D_PLUSA] = ACTIONS(64),
    [anon_sym_D_PLUSM] = ACTIONS(64),
    [anon_sym_D_DASHA] = ACTIONS(64),
    [anon_sym_D_DASHM] = ACTIONS(64),
    [anon_sym_A_DASHD] = ACTIONS(64),
    [anon_sym_M_DASHD] = ACTIONS(64),
    [anon_sym_D_AMPA] = ACTIONS(64),
    [anon_sym_D_AMPM] = ACTIONS(64),
    [anon_sym_D_PIPEA] = ACTIONS(64),
    [anon_sym_D_PIPEM] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [sym_destination] = ACTIONS(68),
    [anon_sym_0] = ACTIONS(68),
    [anon_sym_1] = ACTIONS(68),
    [anon_sym_DASH1] = ACTIONS(68),
    [anon_sym_D] = ACTIONS(70),
    [anon_sym_A] = ACTIONS(70),
    [anon_sym_M] = ACTIONS(70),
    [anon_sym_BANGD] = ACTIONS(68),
    [anon_sym_BANGA] = ACTIONS(68),
    [anon_sym_BANGM] = ACTIONS(68),
    [anon_sym_DASHD] = ACTIONS(68),
    [anon_sym_DASHA] = ACTIONS(68),
    [anon_sym_DASHM] = ACTIONS(68),
    [anon_sym_D_PLUS1] = ACTIONS(68),
    [anon_sym_A_PLUS1] = ACTIONS(68),
    [anon_sym_M_PLUS1] = ACTIONS(68),
    [anon_sym_D_DASH1] = ACTIONS(68),
    [anon_sym_A_DASH1] = ACTIONS(68),
    [anon_sym_M_DASH1] = ACTIONS(68),
    [anon_sym_D_PLUSA] = ACTIONS(68),
    [anon_sym_D_PLUSM] = ACTIONS(68),
    [anon_sym_D_DASHA] = ACTIONS(68),
    [anon_sym_D_DASHM] = ACTIONS(68),
    [anon_sym_A_DASHD] = ACTIONS(68),
    [anon_sym_M_DASHD] = ACTIONS(68),
    [anon_sym_D_AMPA] = ACTIONS(68),
    [anon_sym_D_AMPM] = ACTIONS(68),
    [anon_sym_D_PIPEA] = ACTIONS(68),
    [anon_sym_D_PIPEM] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_compute] = STATE(6),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_1] = ACTIONS(11),
    [anon_sym_DASH1] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(13),
    [anon_sym_A] = ACTIONS(13),
    [anon_sym_M] = ACTIONS(13),
    [anon_sym_BANGD] = ACTIONS(11),
    [anon_sym_BANGA] = ACTIONS(11),
    [anon_sym_BANGM] = ACTIONS(11),
    [anon_sym_DASHD] = ACTIONS(11),
    [anon_sym_DASHA] = ACTIONS(11),
    [anon_sym_DASHM] = ACTIONS(11),
    [anon_sym_D_PLUS1] = ACTIONS(11),
    [anon_sym_A_PLUS1] = ACTIONS(11),
    [anon_sym_M_PLUS1] = ACTIONS(11),
    [anon_sym_D_DASH1] = ACTIONS(11),
    [anon_sym_A_DASH1] = ACTIONS(11),
    [anon_sym_M_DASH1] = ACTIONS(11),
    [anon_sym_D_PLUSA] = ACTIONS(11),
    [anon_sym_D_PLUSM] = ACTIONS(11),
    [anon_sym_D_DASHA] = ACTIONS(11),
    [anon_sym_D_DASHM] = ACTIONS(11),
    [anon_sym_A_DASHD] = ACTIONS(11),
    [anon_sym_M_DASHD] = ACTIONS(11),
    [anon_sym_D_AMPA] = ACTIONS(11),
    [anon_sym_D_AMPM] = ACTIONS(11),
    [anon_sym_D_PIPEA] = ACTIONS(11),
    [anon_sym_D_PIPEM] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__comment,
    STATE(10), 1,
      sym_jump,
    ACTIONS(72), 7,
      anon_sym_JGT,
      anon_sym_JEQ,
      anon_sym_JGE,
      anon_sym_JLT,
      anon_sym_JNE,
      anon_sym_JLE,
      anon_sym_JMP,
  [16] = 3,
    ACTIONS(3), 1,
      sym__comment,
    STATE(11), 1,
      sym_jump,
    ACTIONS(72), 7,
      anon_sym_JGT,
      anon_sym_JEQ,
      anon_sym_JGE,
      anon_sym_JLT,
      anon_sym_JNE,
      anon_sym_JLE,
      anon_sym_JMP,
  [32] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(74), 2,
      sym_constant,
      sym_symbol,
  [40] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(76), 1,
      sym_symbol,
  [47] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [54] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 16,
  [SMALL_STATE(15)] = 32,
  [SMALL_STATE(16)] = 40,
  [SMALL_STATE(17)] = 47,
  [SMALL_STATE(18)] = 54,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_a_instruction, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_a_instruction, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_instruction, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_instruction, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
