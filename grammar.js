const regexp = {
  signPrefix: /([+-][,_]*)/,
  intUnsigned:
    /(\d[,_\d]*|0[,_]*([xX][,_0-9A-Fa-f]+|[bB][,_01]+|[oO][,_0-7]+))/,
  floatUnsigned:
    /(NaN|Inf|(\d[,_\d]*(\.[,_\d]*)?|\.[,_]*\d[,_\d]*)([eE][,_]*[+-]?[,_]*\d[\d,_]*)?)/,
  symbolChar: /[^()\[\]{};"'`~\s.]/,
};

module.exports = grammar({
  name: "hy",
  rules: {
    source_file: ($) => seq(optional($.shebang), repeat($._element)),
    shebang: () => /#!.*/,

    _element: ($) => choice($.comment, $._form),

    _form: ($) =>
      choice(
        $._identifier,
        $._sequence,
        $._string,
        $.quote,
        $.quasiquote,
        $.unquote,
        $.unquote_splice,
        $.discard,
        $.reader_macro,
        $.unpack,
        $.unpack_map,
        $.annotate,
      ),
    _sequence: ($) =>
      choice($.dot_expression, $.expression, $.list, $.tuple, $.set, $.dict),

    dot_expression: ($) => seq("(", ".", repeat1($._element), ")"),
    expression: ($) => seq("(", repeat1($._element), ")"),
    list: ($) => seq("[", repeat($._element), "]"),
    tuple: ($) => seq("#(", repeat($._element), ")"),
    set: ($) => seq("#{", repeat($._element), "}"),
    dict: ($) => seq("{", repeat($._element), "}"),

    quote: ($) => seq("'", $._form),
    quasiquote: ($) => seq("`", $._form),
    unquote_splice: ($) => seq("~@", $._form),
    unquote: ($) => seq("~", $._form),
    discard: ($) => seq("#_", $._form),
    unpack: ($) => seq("#*", $._form),
    unpack_map: ($) => seq("#**", $._form),
    annotate: ($) => seq("#^", $._form),
    reader_macro: ($) => seq("#", $.symbol, $._form),

    _identifier: ($) =>
      choice(
        $._numeric_literal,
        $.dotted_identifier,
        $.keyword,
        $.dot_symbol,
        $.symbol,
      ),

    _numeric_literal: ($) => choice($.int, $.complex, $.float),
    int: () => token(seq(optional(regexp.signPrefix), regexp.intUnsigned)),
    float: () => token(seq(optional(regexp.signPrefix), regexp.floatUnsigned)),
    complex: () =>
      token(
        seq(
          optional(
            seq(
              optional(regexp.signPrefix),
              regexp.floatUnsigned,
              regexp.signPrefix,
            ),
          ),
          regexp.floatUnsigned,
          /[jJ]/,
        ),
      ),

    dotted_identifier: ($) =>
      choice(
        seq(
          token("."),
          repeat(token.immediate(".")),
          $._symbol_immediate,
          repeat(seq(token.immediate("."), $._symbol_immediate)),
        ),
        seq($.symbol, repeat1(seq(token.immediate("."), $._symbol_immediate))),
      ),

    keyword: () => token(seq(":", repeat(regexp.symbolChar))),
    dot_symbol: () => token(seq(".", repeat(token.immediate(".")))),
    symbol: () => token(repeat1(regexp.symbolChar)),
    _symbol_immediate: ($) =>
      alias(token.immediate(repeat1(regexp.symbolChar)), $.symbol),

    _string: ($) => choice($.string),
    string: () =>
      token(
        seq(
          optional(
            choice("r", "b", "f", "fr", "rf", "br", "rb", "fb", "bf"),
          ),
          /"([^"\\]|\\.)*"/,
        ),
      ),

    comment: () => /;.*/,
  },
});
