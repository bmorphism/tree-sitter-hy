#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_shebang = 1,
  anon_sym_LPAREN = 2,
  anon_sym_DOT = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_POUND_LPAREN = 7,
  anon_sym_POUND_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LBRACE = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_TILDE_AT = 13,
  anon_sym_TILDE = 14,
  anon_sym_POUND_ = 15,
  anon_sym_POUND_STAR = 16,
  anon_sym_POUND_STAR_STAR = 17,
  anon_sym_POUND_CARET = 18,
  anon_sym_POUND = 19,
  sym_int = 20,
  sym_float = 21,
  sym_complex = 22,
  anon_sym_DOT2 = 23,
  sym_keyword = 24,
  sym_dot_symbol = 25,
  sym_symbol = 26,
  aux_sym__symbol_immediate_token1 = 27,
  sym_string = 28,
  sym_bracket_string = 29,
  sym_comment = 30,
  sym_source_file = 31,
  sym__element = 32,
  sym__form = 33,
  sym__sequence = 34,
  sym_dot_expression = 35,
  sym_expression = 36,
  sym_list = 37,
  sym_tuple = 38,
  sym_set = 39,
  sym_dict = 40,
  sym_quote = 41,
  sym_quasiquote = 42,
  sym_unquote_splice = 43,
  sym_unquote = 44,
  sym_discard = 45,
  sym_unpack = 46,
  sym_unpack_map = 47,
  sym_annotate = 48,
  sym_reader_macro = 49,
  sym__identifier = 50,
  sym__numeric_literal = 51,
  sym_dotted_identifier = 52,
  sym__symbol_immediate = 53,
  sym__string = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_dotted_identifier_repeat1 = 56,
  aux_sym_dotted_identifier_repeat2 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT] = ".",
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
  [anon_sym_POUND_STAR] = "#*",
  [anon_sym_POUND_STAR_STAR] = "#**",
  [anon_sym_POUND_CARET] = "#^",
  [anon_sym_POUND] = "#",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_complex] = "complex",
  [anon_sym_DOT2] = ".",
  [sym_keyword] = "keyword",
  [sym_dot_symbol] = "dot_symbol",
  [sym_symbol] = "symbol",
  [aux_sym__symbol_immediate_token1] = "symbol",
  [sym_string] = "string",
  [sym_bracket_string] = "bracket_string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym__form] = "_form",
  [sym__sequence] = "_sequence",
  [sym_dot_expression] = "dot_expression",
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
  [sym_unpack] = "unpack",
  [sym_unpack_map] = "unpack_map",
  [sym_annotate] = "annotate",
  [sym_reader_macro] = "reader_macro",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_POUND_STAR] = anon_sym_POUND_STAR,
  [anon_sym_POUND_STAR_STAR] = anon_sym_POUND_STAR_STAR,
  [anon_sym_POUND_CARET] = anon_sym_POUND_CARET,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_complex] = sym_complex,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_keyword] = sym_keyword,
  [sym_dot_symbol] = sym_dot_symbol,
  [sym_symbol] = sym_symbol,
  [aux_sym__symbol_immediate_token1] = sym_symbol,
  [sym_string] = sym_string,
  [sym_bracket_string] = sym_bracket_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym__form] = sym__form,
  [sym__sequence] = sym__sequence,
  [sym_dot_expression] = sym_dot_expression,
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
  [sym_unpack] = sym_unpack,
  [sym_unpack_map] = sym_unpack_map,
  [sym_annotate] = sym_annotate,
  [sym_reader_macro] = sym_reader_macro,
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
  [anon_sym_DOT] = {
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
  [anon_sym_POUND_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_symbol] = {
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
  [sym_bracket_string] = {
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
  [sym_dot_expression] = {
    .visible = true,
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
  [sym_unpack] = {
    .visible = true,
    .named = true,
  },
  [sym_unpack_map] = {
    .visible = true,
    .named = true,
  },
  [sym_annotate] = {
    .visible = true,
    .named = true,
  },
  [sym_reader_macro] = {
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 8,
  [16] = 6,
  [17] = 17,
  [18] = 14,
  [19] = 12,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 10,
  [25] = 9,
  [26] = 26,
  [27] = 26,
  [28] = 23,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 31,
  [43] = 39,
  [44] = 40,
  [45] = 38,
  [46] = 36,
  [47] = 34,
  [48] = 41,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 55,
  [61] = 49,
  [62] = 51,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 53,
  [76] = 54,
  [77] = 77,
  [78] = 50,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 56,
  [84] = 74,
  [85] = 82,
  [86] = 57,
  [87] = 63,
  [88] = 58,
  [89] = 80,
  [90] = 81,
  [91] = 65,
  [92] = 79,
  [93] = 66,
  [94] = 64,
  [95] = 77,
  [96] = 68,
  [97] = 72,
  [98] = 71,
  [99] = 70,
  [100] = 69,
  [101] = 73,
  [102] = 67,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 103,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 110,
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
  return (c < '['
    ? (c < '\''
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= ')' || (c < ';'
        ? c == '.'
        : c <= ';')))
    : (c <= '[' || (c < '{'
      ? (c < '`'
        ? c == ']'
        : c <= '`')
      : (c <= '{' || (c >= '}' && c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= ')' || (c < ']'
      ? (c < ';'
        ? c == '.'
        : c <= ';')
      : (c <= '`' || (c >= '}' && c <= '~')))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '.'
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

static inline bool aux_sym__symbol_immediate_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym__symbol_immediate_token1_character_set_3(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= ')' || (c < ']'
      ? (c < ';'
        ? c == '.'
        : c <= ';')
      : (c <= '`' || (c >= '}' && c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(73);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(7);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND_);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND_);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUND_STAR);
      if (lookahead == '*') ADVANCE(49);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND_STAR);
      if (lookahead == '*') ADVANCE(50);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND_STAR_STAR);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND_STAR_STAR);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND_CARET);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND_CARET);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '{') ADVANCE(38);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '^') ADVANCE(51);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '{') ADVANCE(38);
      if (!aux_sym__symbol_immediate_token1_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '^') ADVANCE(52);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == '{') ADVANCE(38);
      if (!aux_sym__symbol_immediate_token1_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(61);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_complex);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keyword);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_dot_symbol);
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(80);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'b' ||
          lookahead == 'r') ADVANCE(80);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(80);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(1);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(88);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(68);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(70);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(103);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(84);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(85);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(86);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(68);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(70);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(103);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(90);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(91);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(92);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(102);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(72);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(61);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(111);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'b' ||
          lookahead == 'r') ADVANCE(111);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(111);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '"') ADVANCE(1);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(113);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(115);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'N') ADVANCE(132);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'N') ADVANCE(134);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'N') ADVANCE(142);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'a') ADVANCE(119);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'a') ADVANCE(120);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'a') ADVANCE(121);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'f') ADVANCE(132);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'f') ADVANCE(134);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'f') ADVANCE(142);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'n') ADVANCE(125);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'n') ADVANCE(126);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'n') ADVANCE(127);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(146);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(143);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(144);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (!aux_sym__symbol_immediate_token1_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_bracket_string);
      if (lookahead == '\n' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 28},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 28},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_POUND_STAR] = ACTIONS(1),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(1),
    [anon_sym_POUND_CARET] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_complex] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_dot_symbol] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [aux_sym__symbol_immediate_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_bracket_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__element] = STATE(21),
    [sym__form] = STATE(21),
    [sym__sequence] = STATE(21),
    [sym_dot_expression] = STATE(21),
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
    [sym_unpack] = STATE(21),
    [sym_unpack_map] = STATE(21),
    [sym_annotate] = STATE(21),
    [sym_reader_macro] = STATE(21),
    [sym__identifier] = STATE(21),
    [sym__numeric_literal] = STATE(21),
    [sym_dotted_identifier] = STATE(21),
    [sym__string] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_complex] = ACTIONS(37),
    [sym_keyword] = ACTIONS(39),
    [sym_dot_symbol] = ACTIONS(37),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_bracket_string] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
  },
  [2] = {
    [sym__element] = STATE(12),
    [sym__form] = STATE(12),
    [sym__sequence] = STATE(12),
    [sym_dot_expression] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_set] = STATE(12),
    [sym_dict] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_unquote_splice] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_discard] = STATE(12),
    [sym_unpack] = STATE(12),
    [sym_unpack_map] = STATE(12),
    [sym_annotate] = STATE(12),
    [sym_reader_macro] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__numeric_literal] = STATE(12),
    [sym_dotted_identifier] = STATE(12),
    [sym__symbol_immediate] = STATE(51),
    [sym__string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_dotted_identifier_repeat1] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_complex] = ACTIONS(73),
    [anon_sym_DOT2] = ACTIONS(75),
    [sym_keyword] = ACTIONS(73),
    [sym_dot_symbol] = ACTIONS(73),
    [sym_symbol] = ACTIONS(77),
    [aux_sym__symbol_immediate_token1] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [sym_bracket_string] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
  },
  [3] = {
    [sym__element] = STATE(19),
    [sym__form] = STATE(19),
    [sym__sequence] = STATE(19),
    [sym_dot_expression] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_set] = STATE(19),
    [sym_dict] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_unquote_splice] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_discard] = STATE(19),
    [sym_unpack] = STATE(19),
    [sym_unpack_map] = STATE(19),
    [sym_annotate] = STATE(19),
    [sym_reader_macro] = STATE(19),
    [sym__identifier] = STATE(19),
    [sym__numeric_literal] = STATE(19),
    [sym_dotted_identifier] = STATE(19),
    [sym__symbol_immediate] = STATE(51),
    [sym__string] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_dotted_identifier_repeat1] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [sym_complex] = ACTIONS(83),
    [anon_sym_DOT2] = ACTIONS(75),
    [sym_keyword] = ACTIONS(83),
    [sym_dot_symbol] = ACTIONS(83),
    [sym_symbol] = ACTIONS(77),
    [aux_sym__symbol_immediate_token1] = ACTIONS(79),
    [sym_string] = ACTIONS(85),
    [sym_bracket_string] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
  },
  [4] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(98),
    [anon_sym_POUND_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(110),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_POUND_] = ACTIONS(119),
    [anon_sym_POUND_STAR] = ACTIONS(122),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(125),
    [anon_sym_POUND_CARET] = ACTIONS(128),
    [anon_sym_POUND] = ACTIONS(131),
    [sym_int] = ACTIONS(134),
    [sym_float] = ACTIONS(134),
    [sym_complex] = ACTIONS(134),
    [sym_keyword] = ACTIONS(137),
    [sym_dot_symbol] = ACTIONS(134),
    [sym_symbol] = ACTIONS(140),
    [sym_string] = ACTIONS(137),
    [sym_bracket_string] = ACTIONS(137),
    [sym_comment] = ACTIONS(137),
  },
  [5] = {
    [sym__element] = STATE(25),
    [sym__form] = STATE(25),
    [sym__sequence] = STATE(25),
    [sym_dot_expression] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_tuple] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_quote] = STATE(25),
    [sym_quasiquote] = STATE(25),
    [sym_unquote_splice] = STATE(25),
    [sym_unquote] = STATE(25),
    [sym_discard] = STATE(25),
    [sym_unpack] = STATE(25),
    [sym_unpack_map] = STATE(25),
    [sym_annotate] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym__identifier] = STATE(25),
    [sym__numeric_literal] = STATE(25),
    [sym_dotted_identifier] = STATE(25),
    [sym__string] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [sym_complex] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [sym_dot_symbol] = ACTIONS(145),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(147),
    [sym_bracket_string] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [6] = {
    [sym__element] = STATE(17),
    [sym__form] = STATE(17),
    [sym__sequence] = STATE(17),
    [sym_dot_expression] = STATE(17),
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
    [sym_unpack] = STATE(17),
    [sym_unpack_map] = STATE(17),
    [sym_annotate] = STATE(17),
    [sym_reader_macro] = STATE(17),
    [sym__identifier] = STATE(17),
    [sym__numeric_literal] = STATE(17),
    [sym_dotted_identifier] = STATE(17),
    [sym__string] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_complex] = ACTIONS(151),
    [sym_keyword] = ACTIONS(153),
    [sym_dot_symbol] = ACTIONS(151),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(153),
    [sym_bracket_string] = ACTIONS(153),
    [sym_comment] = ACTIONS(153),
  },
  [7] = {
    [sym__element] = STATE(9),
    [sym__form] = STATE(9),
    [sym__sequence] = STATE(9),
    [sym_dot_expression] = STATE(9),
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
    [sym_unpack] = STATE(9),
    [sym_unpack_map] = STATE(9),
    [sym_annotate] = STATE(9),
    [sym_reader_macro] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__numeric_literal] = STATE(9),
    [sym_dotted_identifier] = STATE(9),
    [sym__string] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [sym_complex] = ACTIONS(157),
    [sym_keyword] = ACTIONS(159),
    [sym_dot_symbol] = ACTIONS(157),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(159),
    [sym_bracket_string] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
  },
  [8] = {
    [sym__element] = STATE(10),
    [sym__form] = STATE(10),
    [sym__sequence] = STATE(10),
    [sym_dot_expression] = STATE(10),
    [sym_expression] = STATE(10),
    [sym_list] = STATE(10),
    [sym_tuple] = STATE(10),
    [sym_set] = STATE(10),
    [sym_dict] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_quasiquote] = STATE(10),
    [sym_unquote_splice] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_discard] = STATE(10),
    [sym_unpack] = STATE(10),
    [sym_unpack_map] = STATE(10),
    [sym_annotate] = STATE(10),
    [sym_reader_macro] = STATE(10),
    [sym__identifier] = STATE(10),
    [sym__numeric_literal] = STATE(10),
    [sym_dotted_identifier] = STATE(10),
    [sym__string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(163),
    [sym_float] = ACTIONS(163),
    [sym_complex] = ACTIONS(163),
    [sym_keyword] = ACTIONS(165),
    [sym_dot_symbol] = ACTIONS(163),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(165),
    [sym_bracket_string] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
  },
  [9] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [10] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [11] = {
    [sym__element] = STATE(22),
    [sym__form] = STATE(22),
    [sym__sequence] = STATE(22),
    [sym_dot_expression] = STATE(22),
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
    [sym_unpack] = STATE(22),
    [sym_unpack_map] = STATE(22),
    [sym_annotate] = STATE(22),
    [sym_reader_macro] = STATE(22),
    [sym__identifier] = STATE(22),
    [sym__numeric_literal] = STATE(22),
    [sym_dotted_identifier] = STATE(22),
    [sym__string] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [sym_complex] = ACTIONS(177),
    [sym_keyword] = ACTIONS(179),
    [sym_dot_symbol] = ACTIONS(177),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(179),
    [sym_bracket_string] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
  },
  [12] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [13] = {
    [sym__element] = STATE(13),
    [sym__form] = STATE(13),
    [sym__sequence] = STATE(13),
    [sym_dot_expression] = STATE(13),
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
    [sym_unpack] = STATE(13),
    [sym_unpack_map] = STATE(13),
    [sym_annotate] = STATE(13),
    [sym_reader_macro] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym__numeric_literal] = STATE(13),
    [sym_dotted_identifier] = STATE(13),
    [sym__string] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_POUND_LPAREN] = ACTIONS(192),
    [anon_sym_POUND_LBRACE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(204),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_POUND_] = ACTIONS(213),
    [anon_sym_POUND_STAR] = ACTIONS(216),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(219),
    [anon_sym_POUND_CARET] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(225),
    [sym_int] = ACTIONS(228),
    [sym_float] = ACTIONS(228),
    [sym_complex] = ACTIONS(228),
    [sym_keyword] = ACTIONS(231),
    [sym_dot_symbol] = ACTIONS(228),
    [sym_symbol] = ACTIONS(234),
    [sym_string] = ACTIONS(231),
    [sym_bracket_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(231),
  },
  [14] = {
    [sym__element] = STATE(26),
    [sym__form] = STATE(26),
    [sym__sequence] = STATE(26),
    [sym_dot_expression] = STATE(26),
    [sym_expression] = STATE(26),
    [sym_list] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym_set] = STATE(26),
    [sym_dict] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_quasiquote] = STATE(26),
    [sym_unquote_splice] = STATE(26),
    [sym_unquote] = STATE(26),
    [sym_discard] = STATE(26),
    [sym_unpack] = STATE(26),
    [sym_unpack_map] = STATE(26),
    [sym_annotate] = STATE(26),
    [sym_reader_macro] = STATE(26),
    [sym__identifier] = STATE(26),
    [sym__numeric_literal] = STATE(26),
    [sym_dotted_identifier] = STATE(26),
    [sym__string] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(239),
    [sym_float] = ACTIONS(239),
    [sym_complex] = ACTIONS(239),
    [sym_keyword] = ACTIONS(241),
    [sym_dot_symbol] = ACTIONS(239),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(241),
    [sym_bracket_string] = ACTIONS(241),
    [sym_comment] = ACTIONS(241),
  },
  [15] = {
    [sym__element] = STATE(24),
    [sym__form] = STATE(24),
    [sym__sequence] = STATE(24),
    [sym_dot_expression] = STATE(24),
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
    [sym_unpack] = STATE(24),
    [sym_unpack_map] = STATE(24),
    [sym_annotate] = STATE(24),
    [sym_reader_macro] = STATE(24),
    [sym__identifier] = STATE(24),
    [sym__numeric_literal] = STATE(24),
    [sym_dotted_identifier] = STATE(24),
    [sym__string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(245),
    [sym_float] = ACTIONS(245),
    [sym_complex] = ACTIONS(245),
    [sym_keyword] = ACTIONS(247),
    [sym_dot_symbol] = ACTIONS(245),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(247),
    [sym_bracket_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(247),
  },
  [16] = {
    [sym__element] = STATE(20),
    [sym__form] = STATE(20),
    [sym__sequence] = STATE(20),
    [sym_dot_expression] = STATE(20),
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
    [sym_unpack] = STATE(20),
    [sym_unpack_map] = STATE(20),
    [sym_annotate] = STATE(20),
    [sym_reader_macro] = STATE(20),
    [sym__identifier] = STATE(20),
    [sym__numeric_literal] = STATE(20),
    [sym_dotted_identifier] = STATE(20),
    [sym__string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(251),
    [sym_float] = ACTIONS(251),
    [sym_complex] = ACTIONS(251),
    [sym_keyword] = ACTIONS(253),
    [sym_dot_symbol] = ACTIONS(251),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(253),
    [sym_bracket_string] = ACTIONS(253),
    [sym_comment] = ACTIONS(253),
  },
  [17] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [18] = {
    [sym__element] = STATE(27),
    [sym__form] = STATE(27),
    [sym__sequence] = STATE(27),
    [sym_dot_expression] = STATE(27),
    [sym_expression] = STATE(27),
    [sym_list] = STATE(27),
    [sym_tuple] = STATE(27),
    [sym_set] = STATE(27),
    [sym_dict] = STATE(27),
    [sym_quote] = STATE(27),
    [sym_quasiquote] = STATE(27),
    [sym_unquote_splice] = STATE(27),
    [sym_unquote] = STATE(27),
    [sym_discard] = STATE(27),
    [sym_unpack] = STATE(27),
    [sym_unpack_map] = STATE(27),
    [sym_annotate] = STATE(27),
    [sym_reader_macro] = STATE(27),
    [sym__identifier] = STATE(27),
    [sym__numeric_literal] = STATE(27),
    [sym_dotted_identifier] = STATE(27),
    [sym__string] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(259),
    [sym_float] = ACTIONS(259),
    [sym_complex] = ACTIONS(259),
    [sym_keyword] = ACTIONS(261),
    [sym_dot_symbol] = ACTIONS(259),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(261),
    [sym_bracket_string] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
  },
  [19] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [20] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [21] = {
    [sym__element] = STATE(13),
    [sym__form] = STATE(13),
    [sym__sequence] = STATE(13),
    [sym_dot_expression] = STATE(13),
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
    [sym_unpack] = STATE(13),
    [sym_unpack_map] = STATE(13),
    [sym_annotate] = STATE(13),
    [sym_reader_macro] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym__numeric_literal] = STATE(13),
    [sym_dotted_identifier] = STATE(13),
    [sym__string] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(267),
    [sym_float] = ACTIONS(267),
    [sym_complex] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [sym_dot_symbol] = ACTIONS(267),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(269),
    [sym_bracket_string] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
  },
  [22] = {
    [sym__element] = STATE(13),
    [sym__form] = STATE(13),
    [sym__sequence] = STATE(13),
    [sym_dot_expression] = STATE(13),
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
    [sym_unpack] = STATE(13),
    [sym_unpack_map] = STATE(13),
    [sym_annotate] = STATE(13),
    [sym_reader_macro] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym__numeric_literal] = STATE(13),
    [sym_dotted_identifier] = STATE(13),
    [sym__string] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(267),
    [sym_float] = ACTIONS(267),
    [sym_complex] = ACTIONS(267),
    [sym_keyword] = ACTIONS(269),
    [sym_dot_symbol] = ACTIONS(267),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(269),
    [sym_bracket_string] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
  },
  [23] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [24] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [25] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [26] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [27] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [28] = {
    [sym__element] = STATE(4),
    [sym__form] = STATE(4),
    [sym__sequence] = STATE(4),
    [sym_dot_expression] = STATE(4),
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
    [sym_unpack] = STATE(4),
    [sym_unpack_map] = STATE(4),
    [sym_annotate] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym__identifier] = STATE(4),
    [sym__numeric_literal] = STATE(4),
    [sym_dotted_identifier] = STATE(4),
    [sym__string] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [sym_complex] = ACTIONS(169),
    [sym_keyword] = ACTIONS(171),
    [sym_dot_symbol] = ACTIONS(169),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(171),
    [sym_bracket_string] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
  },
  [29] = {
    [sym__element] = STATE(23),
    [sym__form] = STATE(23),
    [sym__sequence] = STATE(23),
    [sym_dot_expression] = STATE(23),
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
    [sym_unpack] = STATE(23),
    [sym_unpack_map] = STATE(23),
    [sym_annotate] = STATE(23),
    [sym_reader_macro] = STATE(23),
    [sym__identifier] = STATE(23),
    [sym__numeric_literal] = STATE(23),
    [sym_dotted_identifier] = STATE(23),
    [sym__string] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(287),
    [sym_float] = ACTIONS(287),
    [sym_complex] = ACTIONS(287),
    [sym_keyword] = ACTIONS(289),
    [sym_dot_symbol] = ACTIONS(287),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(289),
    [sym_bracket_string] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
  },
  [30] = {
    [sym__element] = STATE(28),
    [sym__form] = STATE(28),
    [sym__sequence] = STATE(28),
    [sym_dot_expression] = STATE(28),
    [sym_expression] = STATE(28),
    [sym_list] = STATE(28),
    [sym_tuple] = STATE(28),
    [sym_set] = STATE(28),
    [sym_dict] = STATE(28),
    [sym_quote] = STATE(28),
    [sym_quasiquote] = STATE(28),
    [sym_unquote_splice] = STATE(28),
    [sym_unquote] = STATE(28),
    [sym_discard] = STATE(28),
    [sym_unpack] = STATE(28),
    [sym_unpack_map] = STATE(28),
    [sym_annotate] = STATE(28),
    [sym_reader_macro] = STATE(28),
    [sym__identifier] = STATE(28),
    [sym__numeric_literal] = STATE(28),
    [sym_dotted_identifier] = STATE(28),
    [sym__string] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(293),
    [sym_float] = ACTIONS(293),
    [sym_complex] = ACTIONS(293),
    [sym_keyword] = ACTIONS(295),
    [sym_dot_symbol] = ACTIONS(293),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(295),
    [sym_bracket_string] = ACTIONS(295),
    [sym_comment] = ACTIONS(295),
  },
  [31] = {
    [sym__form] = STATE(89),
    [sym__sequence] = STATE(89),
    [sym_dot_expression] = STATE(89),
    [sym_expression] = STATE(89),
    [sym_list] = STATE(89),
    [sym_tuple] = STATE(89),
    [sym_set] = STATE(89),
    [sym_dict] = STATE(89),
    [sym_quote] = STATE(89),
    [sym_quasiquote] = STATE(89),
    [sym_unquote_splice] = STATE(89),
    [sym_unquote] = STATE(89),
    [sym_discard] = STATE(89),
    [sym_unpack] = STATE(89),
    [sym_unpack_map] = STATE(89),
    [sym_annotate] = STATE(89),
    [sym_reader_macro] = STATE(89),
    [sym__identifier] = STATE(89),
    [sym__numeric_literal] = STATE(89),
    [sym_dotted_identifier] = STATE(89),
    [sym__string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(297),
    [sym_float] = ACTIONS(297),
    [sym_complex] = ACTIONS(297),
    [sym_keyword] = ACTIONS(299),
    [sym_dot_symbol] = ACTIONS(297),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(299),
    [sym_bracket_string] = ACTIONS(299),
  },
  [32] = {
    [sym__form] = STATE(100),
    [sym__sequence] = STATE(100),
    [sym_dot_expression] = STATE(100),
    [sym_expression] = STATE(100),
    [sym_list] = STATE(100),
    [sym_tuple] = STATE(100),
    [sym_set] = STATE(100),
    [sym_dict] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_quasiquote] = STATE(100),
    [sym_unquote_splice] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_discard] = STATE(100),
    [sym_unpack] = STATE(100),
    [sym_unpack_map] = STATE(100),
    [sym_annotate] = STATE(100),
    [sym_reader_macro] = STATE(100),
    [sym__identifier] = STATE(100),
    [sym__numeric_literal] = STATE(100),
    [sym_dotted_identifier] = STATE(100),
    [sym__string] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(301),
    [sym_float] = ACTIONS(301),
    [sym_complex] = ACTIONS(301),
    [sym_keyword] = ACTIONS(303),
    [sym_dot_symbol] = ACTIONS(301),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(303),
    [sym_bracket_string] = ACTIONS(303),
  },
  [33] = {
    [sym__form] = STATE(98),
    [sym__sequence] = STATE(98),
    [sym_dot_expression] = STATE(98),
    [sym_expression] = STATE(98),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_set] = STATE(98),
    [sym_dict] = STATE(98),
    [sym_quote] = STATE(98),
    [sym_quasiquote] = STATE(98),
    [sym_unquote_splice] = STATE(98),
    [sym_unquote] = STATE(98),
    [sym_discard] = STATE(98),
    [sym_unpack] = STATE(98),
    [sym_unpack_map] = STATE(98),
    [sym_annotate] = STATE(98),
    [sym_reader_macro] = STATE(98),
    [sym__identifier] = STATE(98),
    [sym__numeric_literal] = STATE(98),
    [sym_dotted_identifier] = STATE(98),
    [sym__string] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(305),
    [sym_float] = ACTIONS(305),
    [sym_complex] = ACTIONS(305),
    [sym_keyword] = ACTIONS(307),
    [sym_dot_symbol] = ACTIONS(305),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(307),
    [sym_bracket_string] = ACTIONS(307),
  },
  [34] = {
    [sym__form] = STATE(72),
    [sym__sequence] = STATE(72),
    [sym_dot_expression] = STATE(72),
    [sym_expression] = STATE(72),
    [sym_list] = STATE(72),
    [sym_tuple] = STATE(72),
    [sym_set] = STATE(72),
    [sym_dict] = STATE(72),
    [sym_quote] = STATE(72),
    [sym_quasiquote] = STATE(72),
    [sym_unquote_splice] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_discard] = STATE(72),
    [sym_unpack] = STATE(72),
    [sym_unpack_map] = STATE(72),
    [sym_annotate] = STATE(72),
    [sym_reader_macro] = STATE(72),
    [sym__identifier] = STATE(72),
    [sym__numeric_literal] = STATE(72),
    [sym_dotted_identifier] = STATE(72),
    [sym__string] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(309),
    [sym_float] = ACTIONS(309),
    [sym_complex] = ACTIONS(309),
    [sym_keyword] = ACTIONS(311),
    [sym_dot_symbol] = ACTIONS(309),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(311),
    [sym_bracket_string] = ACTIONS(311),
  },
  [35] = {
    [sym__form] = STATE(71),
    [sym__sequence] = STATE(71),
    [sym_dot_expression] = STATE(71),
    [sym_expression] = STATE(71),
    [sym_list] = STATE(71),
    [sym_tuple] = STATE(71),
    [sym_set] = STATE(71),
    [sym_dict] = STATE(71),
    [sym_quote] = STATE(71),
    [sym_quasiquote] = STATE(71),
    [sym_unquote_splice] = STATE(71),
    [sym_unquote] = STATE(71),
    [sym_discard] = STATE(71),
    [sym_unpack] = STATE(71),
    [sym_unpack_map] = STATE(71),
    [sym_annotate] = STATE(71),
    [sym_reader_macro] = STATE(71),
    [sym__identifier] = STATE(71),
    [sym__numeric_literal] = STATE(71),
    [sym_dotted_identifier] = STATE(71),
    [sym__string] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(313),
    [sym_float] = ACTIONS(313),
    [sym_complex] = ACTIONS(313),
    [sym_keyword] = ACTIONS(315),
    [sym_dot_symbol] = ACTIONS(313),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(315),
    [sym_bracket_string] = ACTIONS(315),
  },
  [36] = {
    [sym__form] = STATE(70),
    [sym__sequence] = STATE(70),
    [sym_dot_expression] = STATE(70),
    [sym_expression] = STATE(70),
    [sym_list] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym_set] = STATE(70),
    [sym_dict] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_quasiquote] = STATE(70),
    [sym_unquote_splice] = STATE(70),
    [sym_unquote] = STATE(70),
    [sym_discard] = STATE(70),
    [sym_unpack] = STATE(70),
    [sym_unpack_map] = STATE(70),
    [sym_annotate] = STATE(70),
    [sym_reader_macro] = STATE(70),
    [sym__identifier] = STATE(70),
    [sym__numeric_literal] = STATE(70),
    [sym_dotted_identifier] = STATE(70),
    [sym__string] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(317),
    [sym_float] = ACTIONS(317),
    [sym_complex] = ACTIONS(317),
    [sym_keyword] = ACTIONS(319),
    [sym_dot_symbol] = ACTIONS(317),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(319),
    [sym_bracket_string] = ACTIONS(319),
  },
  [37] = {
    [sym__form] = STATE(69),
    [sym__sequence] = STATE(69),
    [sym_dot_expression] = STATE(69),
    [sym_expression] = STATE(69),
    [sym_list] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym_set] = STATE(69),
    [sym_dict] = STATE(69),
    [sym_quote] = STATE(69),
    [sym_quasiquote] = STATE(69),
    [sym_unquote_splice] = STATE(69),
    [sym_unquote] = STATE(69),
    [sym_discard] = STATE(69),
    [sym_unpack] = STATE(69),
    [sym_unpack_map] = STATE(69),
    [sym_annotate] = STATE(69),
    [sym_reader_macro] = STATE(69),
    [sym__identifier] = STATE(69),
    [sym__numeric_literal] = STATE(69),
    [sym_dotted_identifier] = STATE(69),
    [sym__string] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(321),
    [sym_float] = ACTIONS(321),
    [sym_complex] = ACTIONS(321),
    [sym_keyword] = ACTIONS(323),
    [sym_dot_symbol] = ACTIONS(321),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(323),
    [sym_bracket_string] = ACTIONS(323),
  },
  [38] = {
    [sym__form] = STATE(68),
    [sym__sequence] = STATE(68),
    [sym_dot_expression] = STATE(68),
    [sym_expression] = STATE(68),
    [sym_list] = STATE(68),
    [sym_tuple] = STATE(68),
    [sym_set] = STATE(68),
    [sym_dict] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_unquote_splice] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_discard] = STATE(68),
    [sym_unpack] = STATE(68),
    [sym_unpack_map] = STATE(68),
    [sym_annotate] = STATE(68),
    [sym_reader_macro] = STATE(68),
    [sym__identifier] = STATE(68),
    [sym__numeric_literal] = STATE(68),
    [sym_dotted_identifier] = STATE(68),
    [sym__string] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(325),
    [sym_float] = ACTIONS(325),
    [sym_complex] = ACTIONS(325),
    [sym_keyword] = ACTIONS(327),
    [sym_dot_symbol] = ACTIONS(325),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(327),
    [sym_bracket_string] = ACTIONS(327),
  },
  [39] = {
    [sym__form] = STATE(67),
    [sym__sequence] = STATE(67),
    [sym_dot_expression] = STATE(67),
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
    [sym_unpack] = STATE(67),
    [sym_unpack_map] = STATE(67),
    [sym_annotate] = STATE(67),
    [sym_reader_macro] = STATE(67),
    [sym__identifier] = STATE(67),
    [sym__numeric_literal] = STATE(67),
    [sym_dotted_identifier] = STATE(67),
    [sym__string] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(329),
    [sym_float] = ACTIONS(329),
    [sym_complex] = ACTIONS(329),
    [sym_keyword] = ACTIONS(331),
    [sym_dot_symbol] = ACTIONS(329),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(331),
    [sym_bracket_string] = ACTIONS(331),
  },
  [40] = {
    [sym__form] = STATE(84),
    [sym__sequence] = STATE(84),
    [sym_dot_expression] = STATE(84),
    [sym_expression] = STATE(84),
    [sym_list] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_set] = STATE(84),
    [sym_dict] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_quasiquote] = STATE(84),
    [sym_unquote_splice] = STATE(84),
    [sym_unquote] = STATE(84),
    [sym_discard] = STATE(84),
    [sym_unpack] = STATE(84),
    [sym_unpack_map] = STATE(84),
    [sym_annotate] = STATE(84),
    [sym_reader_macro] = STATE(84),
    [sym__identifier] = STATE(84),
    [sym__numeric_literal] = STATE(84),
    [sym_dotted_identifier] = STATE(84),
    [sym__string] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(333),
    [sym_float] = ACTIONS(333),
    [sym_complex] = ACTIONS(333),
    [sym_keyword] = ACTIONS(335),
    [sym_dot_symbol] = ACTIONS(333),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(335),
    [sym_bracket_string] = ACTIONS(335),
  },
  [41] = {
    [sym__form] = STATE(101),
    [sym__sequence] = STATE(101),
    [sym_dot_expression] = STATE(101),
    [sym_expression] = STATE(101),
    [sym_list] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym_set] = STATE(101),
    [sym_dict] = STATE(101),
    [sym_quote] = STATE(101),
    [sym_quasiquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_discard] = STATE(101),
    [sym_unpack] = STATE(101),
    [sym_unpack_map] = STATE(101),
    [sym_annotate] = STATE(101),
    [sym_reader_macro] = STATE(101),
    [sym__identifier] = STATE(101),
    [sym__numeric_literal] = STATE(101),
    [sym_dotted_identifier] = STATE(101),
    [sym__string] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(337),
    [sym_float] = ACTIONS(337),
    [sym_complex] = ACTIONS(337),
    [sym_keyword] = ACTIONS(339),
    [sym_dot_symbol] = ACTIONS(337),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(339),
    [sym_bracket_string] = ACTIONS(339),
  },
  [42] = {
    [sym__form] = STATE(80),
    [sym__sequence] = STATE(80),
    [sym_dot_expression] = STATE(80),
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
    [sym_unpack] = STATE(80),
    [sym_unpack_map] = STATE(80),
    [sym_annotate] = STATE(80),
    [sym_reader_macro] = STATE(80),
    [sym__identifier] = STATE(80),
    [sym__numeric_literal] = STATE(80),
    [sym_dotted_identifier] = STATE(80),
    [sym__string] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(341),
    [sym_float] = ACTIONS(341),
    [sym_complex] = ACTIONS(341),
    [sym_keyword] = ACTIONS(343),
    [sym_dot_symbol] = ACTIONS(341),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(343),
    [sym_bracket_string] = ACTIONS(343),
  },
  [43] = {
    [sym__form] = STATE(102),
    [sym__sequence] = STATE(102),
    [sym_dot_expression] = STATE(102),
    [sym_expression] = STATE(102),
    [sym_list] = STATE(102),
    [sym_tuple] = STATE(102),
    [sym_set] = STATE(102),
    [sym_dict] = STATE(102),
    [sym_quote] = STATE(102),
    [sym_quasiquote] = STATE(102),
    [sym_unquote_splice] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_discard] = STATE(102),
    [sym_unpack] = STATE(102),
    [sym_unpack_map] = STATE(102),
    [sym_annotate] = STATE(102),
    [sym_reader_macro] = STATE(102),
    [sym__identifier] = STATE(102),
    [sym__numeric_literal] = STATE(102),
    [sym_dotted_identifier] = STATE(102),
    [sym__string] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(345),
    [sym_float] = ACTIONS(345),
    [sym_complex] = ACTIONS(345),
    [sym_keyword] = ACTIONS(347),
    [sym_dot_symbol] = ACTIONS(345),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(347),
    [sym_bracket_string] = ACTIONS(347),
  },
  [44] = {
    [sym__form] = STATE(74),
    [sym__sequence] = STATE(74),
    [sym_dot_expression] = STATE(74),
    [sym_expression] = STATE(74),
    [sym_list] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym_set] = STATE(74),
    [sym_dict] = STATE(74),
    [sym_quote] = STATE(74),
    [sym_quasiquote] = STATE(74),
    [sym_unquote_splice] = STATE(74),
    [sym_unquote] = STATE(74),
    [sym_discard] = STATE(74),
    [sym_unpack] = STATE(74),
    [sym_unpack_map] = STATE(74),
    [sym_annotate] = STATE(74),
    [sym_reader_macro] = STATE(74),
    [sym__identifier] = STATE(74),
    [sym__numeric_literal] = STATE(74),
    [sym_dotted_identifier] = STATE(74),
    [sym__string] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(349),
    [sym_float] = ACTIONS(349),
    [sym_complex] = ACTIONS(349),
    [sym_keyword] = ACTIONS(351),
    [sym_dot_symbol] = ACTIONS(349),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(351),
    [sym_bracket_string] = ACTIONS(351),
  },
  [45] = {
    [sym__form] = STATE(96),
    [sym__sequence] = STATE(96),
    [sym_dot_expression] = STATE(96),
    [sym_expression] = STATE(96),
    [sym_list] = STATE(96),
    [sym_tuple] = STATE(96),
    [sym_set] = STATE(96),
    [sym_dict] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_unquote_splice] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_discard] = STATE(96),
    [sym_unpack] = STATE(96),
    [sym_unpack_map] = STATE(96),
    [sym_annotate] = STATE(96),
    [sym_reader_macro] = STATE(96),
    [sym__identifier] = STATE(96),
    [sym__numeric_literal] = STATE(96),
    [sym_dotted_identifier] = STATE(96),
    [sym__string] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(353),
    [sym_float] = ACTIONS(353),
    [sym_complex] = ACTIONS(353),
    [sym_keyword] = ACTIONS(355),
    [sym_dot_symbol] = ACTIONS(353),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(355),
    [sym_bracket_string] = ACTIONS(355),
  },
  [46] = {
    [sym__form] = STATE(99),
    [sym__sequence] = STATE(99),
    [sym_dot_expression] = STATE(99),
    [sym_expression] = STATE(99),
    [sym_list] = STATE(99),
    [sym_tuple] = STATE(99),
    [sym_set] = STATE(99),
    [sym_dict] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_unquote_splice] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_discard] = STATE(99),
    [sym_unpack] = STATE(99),
    [sym_unpack_map] = STATE(99),
    [sym_annotate] = STATE(99),
    [sym_reader_macro] = STATE(99),
    [sym__identifier] = STATE(99),
    [sym__numeric_literal] = STATE(99),
    [sym_dotted_identifier] = STATE(99),
    [sym__string] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(357),
    [sym_float] = ACTIONS(357),
    [sym_complex] = ACTIONS(357),
    [sym_keyword] = ACTIONS(359),
    [sym_dot_symbol] = ACTIONS(357),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(359),
    [sym_bracket_string] = ACTIONS(359),
  },
  [47] = {
    [sym__form] = STATE(97),
    [sym__sequence] = STATE(97),
    [sym_dot_expression] = STATE(97),
    [sym_expression] = STATE(97),
    [sym_list] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_set] = STATE(97),
    [sym_dict] = STATE(97),
    [sym_quote] = STATE(97),
    [sym_quasiquote] = STATE(97),
    [sym_unquote_splice] = STATE(97),
    [sym_unquote] = STATE(97),
    [sym_discard] = STATE(97),
    [sym_unpack] = STATE(97),
    [sym_unpack_map] = STATE(97),
    [sym_annotate] = STATE(97),
    [sym_reader_macro] = STATE(97),
    [sym__identifier] = STATE(97),
    [sym__numeric_literal] = STATE(97),
    [sym_dotted_identifier] = STATE(97),
    [sym__string] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_POUND_LPAREN] = ACTIONS(13),
    [anon_sym_POUND_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_TILDE_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_POUND_] = ACTIONS(27),
    [anon_sym_POUND_STAR] = ACTIONS(29),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(31),
    [anon_sym_POUND_CARET] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_int] = ACTIONS(361),
    [sym_float] = ACTIONS(361),
    [sym_complex] = ACTIONS(361),
    [sym_keyword] = ACTIONS(363),
    [sym_dot_symbol] = ACTIONS(361),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(363),
    [sym_bracket_string] = ACTIONS(363),
  },
  [48] = {
    [sym__form] = STATE(73),
    [sym__sequence] = STATE(73),
    [sym_dot_expression] = STATE(73),
    [sym_expression] = STATE(73),
    [sym_list] = STATE(73),
    [sym_tuple] = STATE(73),
    [sym_set] = STATE(73),
    [sym_dict] = STATE(73),
    [sym_quote] = STATE(73),
    [sym_quasiquote] = STATE(73),
    [sym_unquote_splice] = STATE(73),
    [sym_unquote] = STATE(73),
    [sym_discard] = STATE(73),
    [sym_unpack] = STATE(73),
    [sym_unpack_map] = STATE(73),
    [sym_annotate] = STATE(73),
    [sym_reader_macro] = STATE(73),
    [sym__identifier] = STATE(73),
    [sym__numeric_literal] = STATE(73),
    [sym_dotted_identifier] = STATE(73),
    [sym__string] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_POUND_LPAREN] = ACTIONS(49),
    [anon_sym_POUND_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_TILDE_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_POUND_STAR] = ACTIONS(65),
    [anon_sym_POUND_STAR_STAR] = ACTIONS(67),
    [anon_sym_POUND_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_int] = ACTIONS(365),
    [sym_float] = ACTIONS(365),
    [sym_complex] = ACTIONS(365),
    [sym_keyword] = ACTIONS(367),
    [sym_dot_symbol] = ACTIONS(365),
    [sym_symbol] = ACTIONS(77),
    [sym_string] = ACTIONS(367),
    [sym_bracket_string] = ACTIONS(367),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(373), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(371), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(369), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [38] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(52), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(378), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(376), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [76] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(54), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(384), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(382), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [114] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(388), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(386), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [152] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(384), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(382), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [190] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(49), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(378), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(376), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [228] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT2,
    STATE(53), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(392), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(390), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [266] = 2,
    ACTIONS(371), 13,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT2,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(369), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [299] = 2,
    ACTIONS(396), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(394), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [331] = 2,
    ACTIONS(400), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(398), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [363] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(61), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(388), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(386), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [399] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(75), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(392), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(390), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [435] = 4,
    ACTIONS(404), 1,
      anon_sym_DOT2,
    STATE(61), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(371), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(369), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [471] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(76), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(384), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(382), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [507] = 2,
    ACTIONS(409), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(407), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [539] = 2,
    ACTIONS(413), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(411), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [571] = 2,
    ACTIONS(417), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(415), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [603] = 2,
    ACTIONS(421), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(419), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [635] = 2,
    ACTIONS(425), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(423), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [667] = 2,
    ACTIONS(429), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(427), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [699] = 2,
    ACTIONS(433), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(431), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [731] = 2,
    ACTIONS(437), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(435), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [763] = 2,
    ACTIONS(441), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(439), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [795] = 2,
    ACTIONS(445), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(443), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [827] = 2,
    ACTIONS(449), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(447), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [859] = 2,
    ACTIONS(453), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(451), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [891] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(61), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(384), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(382), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [927] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(61), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(378), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(376), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [963] = 2,
    ACTIONS(457), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(455), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [995] = 4,
    ACTIONS(402), 1,
      anon_sym_DOT2,
    STATE(59), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(378), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(376), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1031] = 2,
    ACTIONS(461), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(459), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1063] = 2,
    ACTIONS(465), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(463), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1095] = 2,
    ACTIONS(469), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(467), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1127] = 2,
    ACTIONS(473), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(471), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1159] = 2,
    ACTIONS(369), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
    ACTIONS(371), 13,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT2,
      sym_dot_symbol,
      sym_symbol,
  [1190] = 2,
    ACTIONS(453), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(451), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1220] = 2,
    ACTIONS(473), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(471), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1250] = 2,
    ACTIONS(396), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(394), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1280] = 2,
    ACTIONS(409), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(407), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1310] = 2,
    ACTIONS(400), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(398), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1340] = 2,
    ACTIONS(465), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(463), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1370] = 2,
    ACTIONS(469), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(467), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1400] = 2,
    ACTIONS(417), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(415), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1430] = 2,
    ACTIONS(461), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(459), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1460] = 2,
    ACTIONS(421), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(419), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1490] = 2,
    ACTIONS(413), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(411), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1520] = 2,
    ACTIONS(457), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(455), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1550] = 2,
    ACTIONS(429), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(427), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1580] = 2,
    ACTIONS(445), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(443), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1610] = 2,
    ACTIONS(441), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(439), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1640] = 2,
    ACTIONS(437), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(435), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1670] = 2,
    ACTIONS(433), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(431), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1700] = 2,
    ACTIONS(449), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(447), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1730] = 2,
    ACTIONS(425), 12,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_POUND_,
      anon_sym_POUND_STAR,
      anon_sym_POUND_STAR_STAR,
      anon_sym_POUND_CARET,
      anon_sym_POUND,
      sym_int,
      sym_float,
      sym_complex,
      sym_dot_symbol,
      sym_symbol,
    ACTIONS(423), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      sym_keyword,
      sym_string,
      sym_bracket_string,
      sym_comment,
  [1760] = 4,
    ACTIONS(475), 1,
      anon_sym_DOT2,
    ACTIONS(477), 1,
      aux_sym__symbol_immediate_token1,
    STATE(50), 1,
      sym__symbol_immediate,
    STATE(107), 1,
      aux_sym_dotted_identifier_repeat1,
  [1773] = 4,
    ACTIONS(479), 1,
      anon_sym_DOT2,
    ACTIONS(481), 1,
      aux_sym__symbol_immediate_token1,
    STATE(51), 1,
      sym__symbol_immediate,
    STATE(103), 1,
      aux_sym_dotted_identifier_repeat1,
  [1786] = 4,
    ACTIONS(483), 1,
      anon_sym_DOT2,
    ACTIONS(485), 1,
      aux_sym__symbol_immediate_token1,
    STATE(62), 1,
      sym__symbol_immediate,
    STATE(106), 1,
      aux_sym_dotted_identifier_repeat1,
  [1799] = 4,
    ACTIONS(475), 1,
      anon_sym_DOT2,
    ACTIONS(487), 1,
      aux_sym__symbol_immediate_token1,
    STATE(78), 1,
      sym__symbol_immediate,
    STATE(107), 1,
      aux_sym_dotted_identifier_repeat1,
  [1812] = 3,
    ACTIONS(489), 1,
      anon_sym_DOT2,
    ACTIONS(492), 1,
      aux_sym__symbol_immediate_token1,
    STATE(107), 1,
      aux_sym_dotted_identifier_repeat1,
  [1822] = 2,
    ACTIONS(494), 1,
      aux_sym__symbol_immediate_token1,
    STATE(56), 1,
      sym__symbol_immediate,
  [1829] = 2,
    ACTIONS(496), 1,
      aux_sym__symbol_immediate_token1,
    STATE(83), 1,
      sym__symbol_immediate,
  [1836] = 1,
    ACTIONS(498), 1,
      sym_symbol,
  [1840] = 1,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
  [1844] = 1,
    ACTIONS(502), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 38,
  [SMALL_STATE(51)] = 76,
  [SMALL_STATE(52)] = 114,
  [SMALL_STATE(53)] = 152,
  [SMALL_STATE(54)] = 190,
  [SMALL_STATE(55)] = 228,
  [SMALL_STATE(56)] = 266,
  [SMALL_STATE(57)] = 299,
  [SMALL_STATE(58)] = 331,
  [SMALL_STATE(59)] = 363,
  [SMALL_STATE(60)] = 399,
  [SMALL_STATE(61)] = 435,
  [SMALL_STATE(62)] = 471,
  [SMALL_STATE(63)] = 507,
  [SMALL_STATE(64)] = 539,
  [SMALL_STATE(65)] = 571,
  [SMALL_STATE(66)] = 603,
  [SMALL_STATE(67)] = 635,
  [SMALL_STATE(68)] = 667,
  [SMALL_STATE(69)] = 699,
  [SMALL_STATE(70)] = 731,
  [SMALL_STATE(71)] = 763,
  [SMALL_STATE(72)] = 795,
  [SMALL_STATE(73)] = 827,
  [SMALL_STATE(74)] = 859,
  [SMALL_STATE(75)] = 891,
  [SMALL_STATE(76)] = 927,
  [SMALL_STATE(77)] = 963,
  [SMALL_STATE(78)] = 995,
  [SMALL_STATE(79)] = 1031,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1095,
  [SMALL_STATE(82)] = 1127,
  [SMALL_STATE(83)] = 1159,
  [SMALL_STATE(84)] = 1190,
  [SMALL_STATE(85)] = 1220,
  [SMALL_STATE(86)] = 1250,
  [SMALL_STATE(87)] = 1280,
  [SMALL_STATE(88)] = 1310,
  [SMALL_STATE(89)] = 1340,
  [SMALL_STATE(90)] = 1370,
  [SMALL_STATE(91)] = 1400,
  [SMALL_STATE(92)] = 1430,
  [SMALL_STATE(93)] = 1460,
  [SMALL_STATE(94)] = 1490,
  [SMALL_STATE(95)] = 1520,
  [SMALL_STATE(96)] = 1550,
  [SMALL_STATE(97)] = 1580,
  [SMALL_STATE(98)] = 1610,
  [SMALL_STATE(99)] = 1640,
  [SMALL_STATE(100)] = 1670,
  [SMALL_STATE(101)] = 1700,
  [SMALL_STATE(102)] = 1730,
  [SMALL_STATE(103)] = 1760,
  [SMALL_STATE(104)] = 1773,
  [SMALL_STATE(105)] = 1786,
  [SMALL_STATE(106)] = 1799,
  [SMALL_STATE(107)] = 1812,
  [SMALL_STATE(108)] = 1822,
  [SMALL_STATE(109)] = 1829,
  [SMALL_STATE(110)] = 1836,
  [SMALL_STATE(111)] = 1840,
  [SMALL_STATE(112)] = 1844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(108),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unpack, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unpack, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unpack_map, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unpack_map, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotate, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotate, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_expression, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_expression, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(107),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [500] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
