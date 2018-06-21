function ignoreCase(str) {
  return new RegExp(
    str
    .split("")
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join("")
  );
}

/*
  Adapted from the language description given here https://github.com/ambs/Text-BibTeX/blob/master/btparse/doc/bt_language.pod

  - name is a catch-all token used for entry types, citation keys, field names, and macro names;
  - We will call it "identifier", given by [a-z0-9\!\$\&\*\+\-\.\/\:\;\<\>\?\[\]\^\_\`\|]+
  - NOTE: numbers are allowed in the first character. NOTE2: no they aren't.
  - () only string delimiters in @comment.
  - " inside of strings are ignored

  - in @comment,
    - if the outer delims are brace then only braces must balance.
    - If the open delim is '(', then all () must balance. Separately, all {} must also balance (and never have too many } at any point in time).
      - I don't think this can be done accurately, without any external code. So We'll only look to balance ()
        in this specific case.


  - In some cases, it might be preferable to be more lenient with the syntax, so the
    highlighting does not break when typing. However, for now we will see how it
    handles errors. If it does it well, we can stick to the more accurate syntax here.

  - Parser:  https://github.com/ambs/Text-BibTeX/blob/master/btparse/src/bibtex.g
*/

module.exports = grammar({
  name: "biber",

  extras: $ => [/[\s\n\t]/, $.comment],

  rules: {
    program: $ => repeat(choice($._command_or_entry, $.comment, $.junk)),

    comment: $ => token(seq('%', /.*/)),
    junk: $ => /[^%@\s\n\t][^%@]*/, // biber junk == bibtex comment

    _command_or_entry: $ => choice(
      $.comment_command,
      $.preamble_command,
      $.string_command,
      // $.alias_command, // the author seems to think these will eventually be a thing
      // $.modify_command,
      $.entry
    ),

    comment_command: $ => seq('@', ignoreCase("comment"), choice( // contents is considered a string
      seq('{', $._brace_balanced, '}'), // only {} need to be balanced
      seq('(', $._paren_balanced, ')') // () must be balanced, and tecnically {} too. But that's difficult / impossible to do, so we just make sure () is balanced
    )),

    string_command: $ => seq('@', ignoreCase("string"), choice(
      seq('{', $.identifier, '=', $.value, '}'),
      seq('(', $.identifier, '=', $.value, ')')
    )),

    preamble_command: $ => seq('@', ignoreCase("preamble"), choice(
      seq('{', $.value, '}'),
      seq('(', $.value, ')')
    )),

    // NOTE: The key is parsed by biber as a number if possible, but later converted to a name anyway when processed.
    // So the net effect is we can just look for a name as the key, and be done with it (but here we still call it key).
    // NOTE: @BOOK{me,} is bare minimum for an entry. It must have both a key and a comma. Two commas in a row is disallowed.
    // This grammar allows the comma to be omitted,
    entry: $ => seq('@', $.name, choice(
      seq('{', $.key, repeat(seq(',', $.field)), optional(','), '}'),
      seq('(', $.key, repeat(seq(',', $.field)), optional(','), ')')
    )),

    key:  $ => /[^\"\#%'\(\)\,\=\{\}@\\\~\s\t\n]+/, // empty keys throw errors (as opposed to bibtex). Also more restricted range.
    name: $ => /[^\"\#%'\(\)\,\=\{\}@\\\~\s\t\n]+/, // all of unicode seems to be supported (when using xelatex or equiv. unicode support)

    field: $ => seq($.identifier, '=', $.value),

    identifier: $ => { // name, but cannot start with digit
      const first = /[^0-9\"\#%'\(\)\,\=\{\}@\\\~\s\t\n]/;
      const later = /[^\"\#%'\(\)\,\=\{\}@\\\~\s\t\n]/;
      return token(seq(first, repeat(later)));
    },

    value: $ => seq($.token, repeat(seq('#', $.token))),

    token: $ => choice(
      $.string, // named as such by the source code
      $.nonnegative_integer,
      $.identifier // also known as NAME / basically same, just cannot start with digit
    ),

    nonnegative_integer: $ => /[0-9]+/,

    string: $ => choice(
      seq("{", repeat($._brace_balanced), '}'),
      seq('"', repeat($._quote_balanced), '"')
    ),

    _brace_balanced: $ => choice(
      seq('{', repeat($._brace_balanced), '}'),
      $._brace_text
    ),

    _quote_balanced: $ => choice(
      seq('{', repeat($._brace_balanced), '}'),
      $._quote_text
    ),

    _paren_balanced: $ => choice(
      seq('(', repeat($._paren_balanced), ')'),
      $._paren_text
    ),

    _brace_text: $ => /[^\{\}]+/,

    _quote_text: $ => /[^\"\{\}]+/,

    _paren_text: $ => /[^\(\)]+/
  }
});
