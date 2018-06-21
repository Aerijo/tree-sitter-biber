function ignoreCase(str) {
  return new RegExp(
    str
    .split("")
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join("")
  );
}

/*
  Adapted from the PEG grammar given here https://github.com/aclements/biblib

  whitespace is ignored by default (tree-sitter-cli)
    - it will be recognised if the `extras` property is added though
*/

module.exports = grammar({
  name: "bibtex",

  extras: $ => [/[\s\n\t]/, $.comment],

  rules: {
    program: $ => repeat(choice($._command_or_entry, $.comment, $.junk)),

    comment: $ => token(seq('%', /.*/)),
    junk: $ => /[^%@\s\n\t][^%@]*/,

    _command_or_entry: $ => choice(
      $.comment_command,
      $.preamble_command,
      $.string_command,
      $.entry
    ),

    comment_command: $ => seq('@', ignoreCase("comment"), choice(
      seq('{', $._balanced, '}'),
      seq('(', $._paren_balanced, ')')
    )),

    string_command: $ => seq('@', ignoreCase("string"), choice(
      seq('{', $.identifier, '=', $.value, '}'),
      seq('(', $.identifier, '=', $.value, ')')
    )),

    preamble_command: $ => seq('@', ignoreCase("preamble"), choice(
      seq('{', $.value, '}'),
      seq('(', $.value, ')')
    )),

    entry: $ => seq('@', $.identifier, choice(
      seq('{', $.key_b, repeat(seq(',', $.field)), optional(','), '}'),
      seq('(', $.key_p, repeat(seq(',', $.field)), optional(','), ')')
    )),

    key_b: $ => /[^,\s\t\n\}%]*/, // "braces key" / can be empty (will not throw error) but cannot be referenced this way
    key_p: $ => /[^,\s\t\n%]*/, // "parentheses key" // the ) is actually allowed

    field: $ => seq($.identifier, '=', $.value),

    identifier: $ => { // `scan_identifier` [2210]
      const first = /[\!\$\&\*\+\-\.\/\:\;<>\?\@\[\]\\\^\_\`\|\~a-zA-Z]/; // https://regex101.com/r/fAkBEf/1
      const later = /[\!\$\&\*\+\-\.\/\:\;<>\?\@\[\]\\\^\_\`\|\~a-zA-Z0-9]/; // basically all visible ASCII except: "#%'(),={}
      return token(seq(first, repeat(later)));
    },

    value: $ => seq($.token, repeat(seq('#', $.token))),

    token: $ => choice(
      $.string, // named as such by the source code
      $.nonnegative_integer,
      $.identifier // also known as "macro name"
    ),

    nonnegative_integer: $ => /[0-9]+/,

    string: $ => choice(
      seq("{", repeat($._balanced), '}'),
      seq('"', repeat($._quote_balanced), '"')
    ),

    _balanced: $ => choice(
      seq('{', repeat($._balanced), '}'),
      $._brace_text
    ),

    _quote_balanced: $ => choice(
      seq('{', repeat($._balanced), '}'),
      $._quote_text
    ),

    _paren_balanced: $ => choice(
      seq('{', repeat($._balanced), '}'),
      $._paren_text
    ),

    _brace_text: $ => /[^\{\}]+/,

    _quote_text: $ => /[^\"\{\}]+/,

    _paren_text: $ => /[^\(\)\{\}]+/ // } will throw "too many }"
  }
});
