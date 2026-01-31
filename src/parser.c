#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 37
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_shebang = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_POUND_LPAREN = 6,
  anon_sym_POUND_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LBRACE = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_BQUOTE = 11,
  anon_sym_TILDE_AT = 12,
  anon_sym_TILDE = 13,
  anon_sym_POUND_ = 14,
  sym_int = 15,
  sym_float = 16,
  sym_complex = 17,
  anon_sym_DOT = 18,
  anon_sym_DOT2 = 19,
  sym_keyword = 20,
  sym_symbol = 21,
  aux_sym__symbol_immediate_token1 = 22,
  sym_string = 23,
  sym_comment = 24,
  sym_source_file = 25,
  sym__element = 26,
  sym__form = 27,
  sym__sequence = 28,
  sym_expression = 29,
  sym_list = 30,
  sym_tuple = 31,
  sym_set = 32,
  sym_dict = 33,
  sym_quote = 34,
  sym_quasiquote = 35,
  sym_unquote_splice = 36,
  sym_unquote = 37,
  sym_discard = 38,
  sym__identifier = 39,
  sym__numeric_literal = 40,
  sym_dotted_identifier = 41,
  sym__symbol_immediate = 42,
  sym__string = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_dotted_identifier_repeat1 = 45,
  aux_sym_dotted_identifier_repeat2 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_TILDE_AT] = "~@",
  [anon_sym_TILDE] = "~",
  [anon_sym_POUND_] = "#_",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_complex] = "complex",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT2] = ".",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [aux_sym__symbol_immediate_token1] = "symbol",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym__form] = "_form",
  [sym__sequence] = "_sequence",
  [sym_expression] = "expression",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_set] = "set",
  [sym_dict] = "dict",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_discard] = "discard",
  [sym__identifier] = "_identifier",
  [sym__numeric_literal] = "_numeric_literal",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym__symbol_immediate] = "_symbol_immediate",
  [sym__string] = "_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_dotted_identifier_repeat2] = "dotted_identifier_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_TILDE_AT] = anon_sym_TILDE_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_POUND_] = anon_sym_POUND_,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_complex] = sym_complex,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [aux_sym__symbol_immediate_token1] = sym_symbol,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym__form] = sym__form,
  [sym__sequence] = sym__sequence,
  [sym_expression] = sym_expression,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_set] = sym_set,
  [sym_dict] = sym_dict,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
  [sym_discard] = sym_discard,
  [sym__identifier] = sym__identifier,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym__symbol_immediate] = sym__symbol_immediate,
  [sym__string] = sym__string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_dotted_identifier_repeat2] = aux_sym_dotted_identifier_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_complex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__symbol_immediate_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym__sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol_immediate] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat2] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 5,
  [12] = 7,
  [13] = 13,
  [14] = 6,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 20,
  [24] = 4,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 31,
  [33] = 27,
  [34] = 34,
  [35] = 29,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 43,
  [47] = 40,
  [48] = 39,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 37,
  [59] = 42,
  [60] = 38,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 44,
  [67] = 54,
  [68] = 49,
  [69] = 50,
  [70] = 51,
  [71] = 65,
  [72] = 64,
  [73] = 63,
  [74] = 62,
  [75] = 61,
  [76] = 52,
  [77] = 53,
  [78] = 57,
  [79] = 56,
  [80] = 55,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '.'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '.' || (c < '`'
      ? (c < '['
        ? c == ';'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '.'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= ')')))
    : (c <= '.' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '`'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '.'
        ? (c >= '(' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '.' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '`'
        : c <= '~')))));
}

static inline bool aux_sym__symbol_immediate_token1_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(62);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(7);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(97);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(48);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(49);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_complex);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '{') ADVANCE(36);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(69);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'b' ||
          lookahead == 'r') ADVANCE(69);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(69);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == '{') ADVANCE(36);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(71);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(52);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(54);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(93);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(74);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(75);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(76);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(52);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(54);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(93);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(80);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(81);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(82);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(60);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(48);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(49);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_POUND_] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_complex] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym__element] = STATE(16),
    [sym__form] = STATE(16),
    [sym__sequence] = STATE(16),
    [sym_expression] = STATE(16),
    [sym_list] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym_set] = STATE(16),
    [sym_dict] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_unquote_splice] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_discard] = STATE(16),
    [sym__identifier] = STATE(16),
    [sym__numeric_literal] = STATE(16),
    [sym_dotted_identifier] = STATE(16),
    [sym__string] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_complex] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_POUND_LPAREN] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(55),
    [anon_sym_TILDE_AT] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(64),
    [sym_int] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_complex] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(70),
    [sym_keyword] = ACTIONS(73),
    [sym_symbol] = ACTIONS(76),
    [sym_string] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym__form] = STATE(3),
    [sym__sequence] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dict] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_quasiquote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_discard] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__numeric_literal] = STATE(3),
    [sym_dotted_identifier] = STATE(3),
    [sym__string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_POUND_LPAREN] = ACTIONS(85),
    [anon_sym_POUND_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_TILDE_AT] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_POUND_] = ACTIONS(106),
    [sym_int] = ACTIONS(109),
    [sym_float] = ACTIONS(109),
    [sym_complex] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(112),
    [sym_keyword] = ACTIONS(115),
    [sym_symbol] = ACTIONS(118),
    [sym_string] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
  },
  [4] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [5] = {
    [sym__element] = STATE(22),
    [sym__form] = STATE(22),
    [sym__sequence] = STATE(22),
    [sym_expression] = STATE(22),
    [sym_list] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_set] = STATE(22),
    [sym_dict] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_unquote_splice] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_discard] = STATE(22),
    [sym__identifier] = STATE(22),
    [sym__numeric_literal] = STATE(22),
    [sym_dotted_identifier] = STATE(22),
    [sym__string] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [sym_complex] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(155),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
  },
  [6] = {
    [sym__element] = STATE(24),
    [sym__form] = STATE(24),
    [sym__sequence] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_quote] = STATE(24),
    [sym_quasiquote] = STATE(24),
    [sym_unquote_splice] = STATE(24),
    [sym_unquote] = STATE(24),
    [sym_discard] = STATE(24),
    [sym__identifier] = STATE(24),
    [sym__numeric_literal] = STATE(24),
    [sym_dotted_identifier] = STATE(24),
    [sym__string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_complex] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(161),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(161),
    [sym_comment] = ACTIONS(161),
  },
  [7] = {
    [sym__element] = STATE(9),
    [sym__form] = STATE(9),
    [sym__sequence] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_list] = STATE(9),
    [sym_tuple] = STATE(9),
    [sym_set] = STATE(9),
    [sym_dict] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_unquote_splice] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_discard] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__numeric_literal] = STATE(9),
    [sym_dotted_identifier] = STATE(9),
    [sym__string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [sym_complex] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(167),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
  },
  [8] = {
    [sym__element] = STATE(17),
    [sym__form] = STATE(17),
    [sym__sequence] = STATE(17),
    [sym_expression] = STATE(17),
    [sym_list] = STATE(17),
    [sym_tuple] = STATE(17),
    [sym_set] = STATE(17),
    [sym_dict] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_unquote_splice] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_discard] = STATE(17),
    [sym__identifier] = STATE(17),
    [sym__numeric_literal] = STATE(17),
    [sym_dotted_identifier] = STATE(17),
    [sym__string] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(171),
    [sym_float] = ACTIONS(171),
    [sym_complex] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(173),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
  },
  [9] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [10] = {
    [sym__element] = STATE(23),
    [sym__form] = STATE(23),
    [sym__sequence] = STATE(23),
    [sym_expression] = STATE(23),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_set] = STATE(23),
    [sym_dict] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_quasiquote] = STATE(23),
    [sym_unquote_splice] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_discard] = STATE(23),
    [sym__identifier] = STATE(23),
    [sym__numeric_literal] = STATE(23),
    [sym_dotted_identifier] = STATE(23),
    [sym__string] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(179),
    [sym_float] = ACTIONS(179),
    [sym_complex] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(181),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
  },
  [11] = {
    [sym__element] = STATE(21),
    [sym__form] = STATE(21),
    [sym__sequence] = STATE(21),
    [sym_expression] = STATE(21),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_set] = STATE(21),
    [sym_dict] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_quasiquote] = STATE(21),
    [sym_unquote_splice] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_discard] = STATE(21),
    [sym__identifier] = STATE(21),
    [sym__numeric_literal] = STATE(21),
    [sym_dotted_identifier] = STATE(21),
    [sym__string] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(185),
    [sym_float] = ACTIONS(185),
    [sym_complex] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(187),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
  },
  [12] = {
    [sym__element] = STATE(15),
    [sym__form] = STATE(15),
    [sym__sequence] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_set] = STATE(15),
    [sym_dict] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_quasiquote] = STATE(15),
    [sym_unquote_splice] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_discard] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym__numeric_literal] = STATE(15),
    [sym_dotted_identifier] = STATE(15),
    [sym__string] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(191),
    [sym_float] = ACTIONS(191),
    [sym_complex] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(193),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
  },
  [13] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [14] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_list] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_set] = STATE(4),
    [sym_dict] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_quasiquote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_discard] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(199),
    [sym_float] = ACTIONS(199),
    [sym_complex] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(201),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(201),
    [sym_comment] = ACTIONS(201),
  },
  [15] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [16] = {
    [sym__element] = STATE(3),
    [sym__form] = STATE(3),
    [sym__sequence] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dict] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_quasiquote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_discard] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__numeric_literal] = STATE(3),
    [sym_dotted_identifier] = STATE(3),
    [sym__string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(205),
    [sym_float] = ACTIONS(205),
    [sym_complex] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(207),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
  },
  [17] = {
    [sym__element] = STATE(3),
    [sym__form] = STATE(3),
    [sym__sequence] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dict] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_quasiquote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_discard] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__numeric_literal] = STATE(3),
    [sym_dotted_identifier] = STATE(3),
    [sym__string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(205),
    [sym_float] = ACTIONS(205),
    [sym_complex] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(207),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
  },
  [18] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [19] = {
    [sym__element] = STATE(20),
    [sym__form] = STATE(20),
    [sym__sequence] = STATE(20),
    [sym_expression] = STATE(20),
    [sym_list] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_set] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_unquote_splice] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_discard] = STATE(20),
    [sym__identifier] = STATE(20),
    [sym__numeric_literal] = STATE(20),
    [sym_dotted_identifier] = STATE(20),
    [sym__string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(215),
    [sym_float] = ACTIONS(215),
    [sym_complex] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(217),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(217),
    [sym_comment] = ACTIONS(217),
  },
  [20] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [21] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [22] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [23] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [24] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_set] = STATE(2),
    [sym_dict] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splice] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_discard] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [sym_float] = ACTIONS(143),
    [sym_complex] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [25] = {
    [sym__element] = STATE(13),
    [sym__form] = STATE(13),
    [sym__sequence] = STATE(13),
    [sym_expression] = STATE(13),
    [sym_list] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_set] = STATE(13),
    [sym_dict] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_quasiquote] = STATE(13),
    [sym_unquote_splice] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_discard] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym__numeric_literal] = STATE(13),
    [sym_dotted_identifier] = STATE(13),
    [sym__string] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(229),
    [sym_float] = ACTIONS(229),
    [sym_complex] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(231),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(231),
  },
  [26] = {
    [sym__element] = STATE(18),
    [sym__form] = STATE(18),
    [sym__sequence] = STATE(18),
    [sym_expression] = STATE(18),
    [sym_list] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_set] = STATE(18),
    [sym_dict] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_discard] = STATE(18),
    [sym__identifier] = STATE(18),
    [sym__numeric_literal] = STATE(18),
    [sym_dotted_identifier] = STATE(18),
    [sym__string] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(233),
    [sym_float] = ACTIONS(233),
    [sym_complex] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(235),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(235),
    [sym_comment] = ACTIONS(235),
  },
  [27] = {
    [sym__form] = STATE(53),
    [sym__sequence] = STATE(53),
    [sym_expression] = STATE(53),
    [sym_list] = STATE(53),
    [sym_tuple] = STATE(53),
    [sym_set] = STATE(53),
    [sym_dict] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_quasiquote] = STATE(53),
    [sym_unquote_splice] = STATE(53),
    [sym_unquote] = STATE(53),
    [sym_discard] = STATE(53),
    [sym__identifier] = STATE(53),
    [sym__numeric_literal] = STATE(53),
    [sym_dotted_identifier] = STATE(53),
    [sym__string] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(237),
    [sym_float] = ACTIONS(237),
    [sym_complex] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(239),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(239),
  },
  [28] = {
    [sym__form] = STATE(80),
    [sym__sequence] = STATE(80),
    [sym_expression] = STATE(80),
    [sym_list] = STATE(80),
    [sym_tuple] = STATE(80),
    [sym_set] = STATE(80),
    [sym_dict] = STATE(80),
    [sym_quote] = STATE(80),
    [sym_quasiquote] = STATE(80),
    [sym_unquote_splice] = STATE(80),
    [sym_unquote] = STATE(80),
    [sym_discard] = STATE(80),
    [sym__identifier] = STATE(80),
    [sym__numeric_literal] = STATE(80),
    [sym_dotted_identifier] = STATE(80),
    [sym__string] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(241),
    [sym_float] = ACTIONS(241),
    [sym_complex] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(243),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(243),
  },
  [29] = {
    [sym__form] = STATE(56),
    [sym__sequence] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_list] = STATE(56),
    [sym_tuple] = STATE(56),
    [sym_set] = STATE(56),
    [sym_dict] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_quasiquote] = STATE(56),
    [sym_unquote_splice] = STATE(56),
    [sym_unquote] = STATE(56),
    [sym_discard] = STATE(56),
    [sym__identifier] = STATE(56),
    [sym__numeric_literal] = STATE(56),
    [sym_dotted_identifier] = STATE(56),
    [sym__string] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [sym_complex] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(247),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(247),
  },
  [30] = {
    [sym__form] = STATE(55),
    [sym__sequence] = STATE(55),
    [sym_expression] = STATE(55),
    [sym_list] = STATE(55),
    [sym_tuple] = STATE(55),
    [sym_set] = STATE(55),
    [sym_dict] = STATE(55),
    [sym_quote] = STATE(55),
    [sym_quasiquote] = STATE(55),
    [sym_unquote_splice] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_discard] = STATE(55),
    [sym__identifier] = STATE(55),
    [sym__numeric_literal] = STATE(55),
    [sym_dotted_identifier] = STATE(55),
    [sym__string] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(249),
    [sym_float] = ACTIONS(249),
    [sym_complex] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(251),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(251),
  },
  [31] = {
    [sym__form] = STATE(54),
    [sym__sequence] = STATE(54),
    [sym_expression] = STATE(54),
    [sym_list] = STATE(54),
    [sym_tuple] = STATE(54),
    [sym_set] = STATE(54),
    [sym_dict] = STATE(54),
    [sym_quote] = STATE(54),
    [sym_quasiquote] = STATE(54),
    [sym_unquote_splice] = STATE(54),
    [sym_unquote] = STATE(54),
    [sym_discard] = STATE(54),
    [sym__identifier] = STATE(54),
    [sym__numeric_literal] = STATE(54),
    [sym_dotted_identifier] = STATE(54),
    [sym__string] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(253),
    [sym_float] = ACTIONS(253),
    [sym_complex] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(255),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(255),
  },
  [32] = {
    [sym__form] = STATE(67),
    [sym__sequence] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_list] = STATE(67),
    [sym_tuple] = STATE(67),
    [sym_set] = STATE(67),
    [sym_dict] = STATE(67),
    [sym_quote] = STATE(67),
    [sym_quasiquote] = STATE(67),
    [sym_unquote_splice] = STATE(67),
    [sym_unquote] = STATE(67),
    [sym_discard] = STATE(67),
    [sym__identifier] = STATE(67),
    [sym__numeric_literal] = STATE(67),
    [sym_dotted_identifier] = STATE(67),
    [sym__string] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(257),
    [sym_float] = ACTIONS(257),
    [sym_complex] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(259),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(259),
  },
  [33] = {
    [sym__form] = STATE(77),
    [sym__sequence] = STATE(77),
    [sym_expression] = STATE(77),
    [sym_list] = STATE(77),
    [sym_tuple] = STATE(77),
    [sym_set] = STATE(77),
    [sym_dict] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_quasiquote] = STATE(77),
    [sym_unquote_splice] = STATE(77),
    [sym_unquote] = STATE(77),
    [sym_discard] = STATE(77),
    [sym__identifier] = STATE(77),
    [sym__numeric_literal] = STATE(77),
    [sym_dotted_identifier] = STATE(77),
    [sym__string] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(261),
    [sym_float] = ACTIONS(261),
    [sym_complex] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(263),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(263),
  },
  [34] = {
    [sym__form] = STATE(78),
    [sym__sequence] = STATE(78),
    [sym_expression] = STATE(78),
    [sym_list] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_set] = STATE(78),
    [sym_dict] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_quasiquote] = STATE(78),
    [sym_unquote_splice] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_discard] = STATE(78),
    [sym__identifier] = STATE(78),
    [sym__numeric_literal] = STATE(78),
    [sym_dotted_identifier] = STATE(78),
    [sym__string] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(265),
    [sym_float] = ACTIONS(265),
    [sym_complex] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(267),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(267),
  },
  [35] = {
    [sym__form] = STATE(79),
    [sym__sequence] = STATE(79),
    [sym_expression] = STATE(79),
    [sym_list] = STATE(79),
    [sym_tuple] = STATE(79),
    [sym_set] = STATE(79),
    [sym_dict] = STATE(79),
    [sym_quote] = STATE(79),
    [sym_quasiquote] = STATE(79),
    [sym_unquote_splice] = STATE(79),
    [sym_unquote] = STATE(79),
    [sym_discard] = STATE(79),
    [sym__identifier] = STATE(79),
    [sym__numeric_literal] = STATE(79),
    [sym_dotted_identifier] = STATE(79),
    [sym__string] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_POUND_LPAREN] = ACTIONS(11),
    [anon_sym_POUND_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_TILDE_AT] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_POUND_] = ACTIONS(25),
    [sym_int] = ACTIONS(269),
    [sym_float] = ACTIONS(269),
    [sym_complex] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(29),
    [sym_keyword] = ACTIONS(271),
    [sym_symbol] = ACTIONS(33),
    [sym_string] = ACTIONS(271),
  },
  [36] = {
    [sym__form] = STATE(57),
    [sym__sequence] = STATE(57),
    [sym_expression] = STATE(57),
    [sym_list] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_set] = STATE(57),
    [sym_dict] = STATE(57),
    [sym_quote] = STATE(57),
    [sym_quasiquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_discard] = STATE(57),
    [sym__identifier] = STATE(57),
    [sym__numeric_literal] = STATE(57),
    [sym_dotted_identifier] = STATE(57),
    [sym__string] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_POUND_LPAREN] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_TILDE_AT] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_POUND_] = ACTIONS(141),
    [sym_int] = ACTIONS(273),
    [sym_float] = ACTIONS(273),
    [sym_complex] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(145),
    [sym_keyword] = ACTIONS(275),
    [sym_symbol] = ACTIONS(149),
    [sym_string] = ACTIONS(275),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(277), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [32] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(285), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(283), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [64] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(285), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(283), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [96] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(289), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(287), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [128] = 4,
    ACTIONS(295), 1,
      anon_sym_DOT2,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(293), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(291), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [160] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(38), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(300), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(298), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [192] = 4,
    ACTIONS(281), 1,
      anon_sym_DOT2,
    STATE(40), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(277), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [224] = 2,
    ACTIONS(293), 9,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(291), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [251] = 4,
    ACTIONS(302), 1,
      anon_sym_DOT2,
    STATE(45), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(293), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [281] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(47), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(277), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [311] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(45), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(289), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(287), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [341] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(58), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(285), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(283), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [371] = 2,
    ACTIONS(309), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(307), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [397] = 2,
    ACTIONS(313), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(311), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [423] = 2,
    ACTIONS(317), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(315), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [449] = 2,
    ACTIONS(321), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(319), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [475] = 2,
    ACTIONS(325), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(323), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [501] = 2,
    ACTIONS(329), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(327), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [527] = 2,
    ACTIONS(333), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(331), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [553] = 2,
    ACTIONS(337), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(335), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [579] = 2,
    ACTIONS(341), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(339), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [605] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(45), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(277), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [635] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(60), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(300), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(298), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [665] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT2,
    STATE(45), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(285), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(283), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [695] = 2,
    ACTIONS(345), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(343), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [721] = 2,
    ACTIONS(349), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(347), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [747] = 2,
    ACTIONS(353), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(351), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [773] = 2,
    ACTIONS(357), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(355), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [799] = 2,
    ACTIONS(361), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(359), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [825] = 2,
    ACTIONS(293), 9,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [850] = 2,
    ACTIONS(329), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(327), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [874] = 2,
    ACTIONS(309), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(307), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [898] = 2,
    ACTIONS(313), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(311), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [922] = 2,
    ACTIONS(317), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(315), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [946] = 2,
    ACTIONS(361), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(359), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [970] = 2,
    ACTIONS(357), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(355), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [994] = 2,
    ACTIONS(353), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(351), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1018] = 2,
    ACTIONS(349), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(347), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1042] = 2,
    ACTIONS(345), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(343), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1066] = 2,
    ACTIONS(321), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(319), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1090] = 2,
    ACTIONS(325), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1114] = 2,
    ACTIONS(341), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(339), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1138] = 2,
    ACTIONS(337), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(335), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1162] = 2,
    ACTIONS(333), 8,
      anon_sym_SQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND_,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(331), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_comment,
  [1186] = 4,
    ACTIONS(363), 1,
      anon_sym_DOT2,
    ACTIONS(365), 1,
      aux_sym__symbol_immediate_token1,
    STATE(46), 1,
      sym__symbol_immediate,
    STATE(85), 1,
      aux_sym_dotted_identifier_repeat1,
  [1199] = 4,
    ACTIONS(367), 1,
      anon_sym_DOT2,
    ACTIONS(369), 1,
      aux_sym__symbol_immediate_token1,
    STATE(39), 1,
      sym__symbol_immediate,
    STATE(83), 1,
      aux_sym_dotted_identifier_repeat1,
  [1212] = 4,
    ACTIONS(363), 1,
      anon_sym_DOT2,
    ACTIONS(371), 1,
      aux_sym__symbol_immediate_token1,
    STATE(43), 1,
      sym__symbol_immediate,
    STATE(85), 1,
      aux_sym_dotted_identifier_repeat1,
  [1225] = 4,
    ACTIONS(373), 1,
      anon_sym_DOT2,
    ACTIONS(375), 1,
      aux_sym__symbol_immediate_token1,
    STATE(48), 1,
      sym__symbol_immediate,
    STATE(81), 1,
      aux_sym_dotted_identifier_repeat1,
  [1238] = 3,
    ACTIONS(377), 1,
      anon_sym_DOT2,
    ACTIONS(380), 1,
      aux_sym__symbol_immediate_token1,
    STATE(85), 1,
      aux_sym_dotted_identifier_repeat1,
  [1248] = 2,
    ACTIONS(382), 1,
      aux_sym__symbol_immediate_token1,
    STATE(44), 1,
      sym__symbol_immediate,
  [1255] = 2,
    ACTIONS(384), 1,
      aux_sym__symbol_immediate_token1,
    STATE(66), 1,
      sym__symbol_immediate,
  [1262] = 1,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(37)] = 0,
  [SMALL_STATE(38)] = 32,
  [SMALL_STATE(39)] = 64,
  [SMALL_STATE(40)] = 96,
  [SMALL_STATE(41)] = 128,
  [SMALL_STATE(42)] = 160,
  [SMALL_STATE(43)] = 192,
  [SMALL_STATE(44)] = 224,
  [SMALL_STATE(45)] = 251,
  [SMALL_STATE(46)] = 281,
  [SMALL_STATE(47)] = 311,
  [SMALL_STATE(48)] = 341,
  [SMALL_STATE(49)] = 371,
  [SMALL_STATE(50)] = 397,
  [SMALL_STATE(51)] = 423,
  [SMALL_STATE(52)] = 449,
  [SMALL_STATE(53)] = 475,
  [SMALL_STATE(54)] = 501,
  [SMALL_STATE(55)] = 527,
  [SMALL_STATE(56)] = 553,
  [SMALL_STATE(57)] = 579,
  [SMALL_STATE(58)] = 605,
  [SMALL_STATE(59)] = 635,
  [SMALL_STATE(60)] = 665,
  [SMALL_STATE(61)] = 695,
  [SMALL_STATE(62)] = 721,
  [SMALL_STATE(63)] = 747,
  [SMALL_STATE(64)] = 773,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 825,
  [SMALL_STATE(67)] = 850,
  [SMALL_STATE(68)] = 874,
  [SMALL_STATE(69)] = 898,
  [SMALL_STATE(70)] = 922,
  [SMALL_STATE(71)] = 946,
  [SMALL_STATE(72)] = 970,
  [SMALL_STATE(73)] = 994,
  [SMALL_STATE(74)] = 1018,
  [SMALL_STATE(75)] = 1042,
  [SMALL_STATE(76)] = 1066,
  [SMALL_STATE(77)] = 1090,
  [SMALL_STATE(78)] = 1114,
  [SMALL_STATE(79)] = 1138,
  [SMALL_STATE(80)] = 1162,
  [SMALL_STATE(81)] = 1186,
  [SMALL_STATE(82)] = 1199,
  [SMALL_STATE(83)] = 1212,
  [SMALL_STATE(84)] = 1225,
  [SMALL_STATE(85)] = 1238,
  [SMALL_STATE(86)] = 1248,
  [SMALL_STATE(87)] = 1255,
  [SMALL_STATE(88)] = 1262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(86),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(87),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(85),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [386] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hy(void) {
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
