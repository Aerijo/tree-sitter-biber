#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 96
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  aux_sym_junk_token1 = 2,
  aux_sym_junk_token2 = 3,
  aux_sym_junk_token3 = 4,
  anon_sym_AT = 5,
  aux_sym_comment_command_token1 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_string_command_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_preamble_command_token1 = 13,
  anon_sym_COMMA = 14,
  aux_sym_key_token1 = 15,
  sym_identifier = 16,
  anon_sym_POUND = 17,
  sym_integer = 18,
  anon_sym_DQUOTE = 19,
  anon_sym_SQUOTE = 20,
  sym__brace_text = 21,
  sym__quote_text = 22,
  sym__paren_text = 23,
  sym_program = 24,
  sym_junk = 25,
  sym__command_or_entry = 26,
  sym_comment_command = 27,
  sym_string_command = 28,
  sym_preamble_command = 29,
  sym_entry = 30,
  sym_key = 31,
  sym_name = 32,
  sym_field = 33,
  sym_value = 34,
  sym__token = 35,
  sym_string = 36,
  sym_text_brace_balanced = 37,
  sym_text_quote_balanced = 38,
  sym_text_paren_balanced = 39,
  sym__brace_balanced = 40,
  sym__quote_balanced = 41,
  sym__paren_balanced = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym_junk_repeat1 = 44,
  aux_sym_entry_repeat1 = 45,
  aux_sym_value_repeat1 = 46,
  aux_sym_text_brace_balanced_repeat1 = 47,
  aux_sym_text_quote_balanced_repeat1 = 48,
  aux_sym_text_paren_balanced_repeat1 = 49,
  alias_sym_text = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_junk_token1] = "junk_token1",
  [aux_sym_junk_token2] = "junk_token2",
  [aux_sym_junk_token3] = "junk_token3",
  [anon_sym_AT] = "@",
  [aux_sym_comment_command_token1] = "name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_string_command_token1] = "name",
  [anon_sym_EQ] = "=",
  [aux_sym_preamble_command_token1] = "name",
  [anon_sym_COMMA] = ",",
  [aux_sym_key_token1] = "key_token1",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym__brace_text] = "_brace_text",
  [sym__quote_text] = "_quote_text",
  [sym__paren_text] = "_paren_text",
  [sym_program] = "program",
  [sym_junk] = "junk",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_comment_command] = "comment_command",
  [sym_string_command] = "string_command",
  [sym_preamble_command] = "preamble_command",
  [sym_entry] = "entry",
  [sym_key] = "key",
  [sym_name] = "name",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym__token] = "_token",
  [sym_string] = "string",
  [sym_text_brace_balanced] = "text_brace_balanced",
  [sym_text_quote_balanced] = "text",
  [sym_text_paren_balanced] = "comment",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym__paren_balanced] = "_paren_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_junk_repeat1] = "junk_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_text_brace_balanced_repeat1] = "text_brace_balanced_repeat1",
  [aux_sym_text_quote_balanced_repeat1] = "text_quote_balanced_repeat1",
  [aux_sym_text_paren_balanced_repeat1] = "text_paren_balanced_repeat1",
  [alias_sym_text] = "text",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_junk_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_string_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preamble_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__brace_text] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_text] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_text] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_command] = {
    .visible = true,
    .named = true,
  },
  [sym_string_command] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_command] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text_brace_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym_text_quote_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym_text_paren_balanced] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_balanced] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_junk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_brace_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_quote_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_paren_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = sym_comment,
  },
  [2] = {
    [1] = alias_sym_text,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(29);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '"' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_junk_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_junk_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_junk_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(31);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_junk_token3);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(31);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_junk_token3);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_command_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_command_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_command_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_command_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_preamble_command_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_preamble_command_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_comment_command_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_string_command_token1] = ACTIONS(1),
    [aux_sym_preamble_command_token1] = ACTIONS(1),
    [aux_sym_junk_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_program_repeat1] = STATE(4),
    [sym_comment_command] = STATE(4),
    [sym_string_command] = STATE(4),
    [sym_program] = STATE(5),
    [sym_preamble_command] = STATE(4),
    [sym_entry] = STATE(4),
    [sym_junk] = STATE(4),
    [sym__command_or_entry] = STATE(4),
    [anon_sym_AT] = ACTIONS(5),
    [aux_sym_junk_token1] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_name] = STATE(10),
    [aux_sym_preamble_command_token1] = ACTIONS(13),
    [aux_sym_key_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [aux_sym_comment_command_token1] = ACTIONS(17),
    [aux_sym_string_command_token1] = ACTIONS(19),
  },
  [3] = {
    [aux_sym_junk_repeat1] = STATE(12),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_junk_token1] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_junk_token3] = ACTIONS(25),
    [sym_comment] = ACTIONS(21),
    [aux_sym_junk_token2] = ACTIONS(27),
  },
  [4] = {
    [sym_entry] = STATE(13),
    [sym_comment_command] = STATE(13),
    [sym_string_command] = STATE(13),
    [sym_junk] = STATE(13),
    [sym__command_or_entry] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_preamble_command] = STATE(13),
    [anon_sym_AT] = ACTIONS(5),
    [aux_sym_junk_token1] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
  [8] = {
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
  },
  [9] = {
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
  },
  [10] = {
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(51),
  },
  [11] = {
    [anon_sym_AT] = ACTIONS(53),
    [aux_sym_junk_token1] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
  },
  [12] = {
    [aux_sym_junk_repeat1] = STATE(23),
    [anon_sym_AT] = ACTIONS(55),
    [aux_sym_junk_token1] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_junk_token3] = ACTIONS(57),
    [sym_comment] = ACTIONS(55),
    [aux_sym_junk_token2] = ACTIONS(59),
  },
  [13] = {
    [sym_entry] = STATE(13),
    [sym_comment_command] = STATE(13),
    [sym_string_command] = STATE(13),
    [sym_junk] = STATE(13),
    [sym__command_or_entry] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_preamble_command] = STATE(13),
    [anon_sym_AT] = ACTIONS(61),
    [aux_sym_junk_token1] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(69),
  },
  [14] = {
    [sym_value] = STATE(27),
    [sym__token] = STATE(28),
    [sym_string] = STATE(28),
    [sym_integer] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_identifier] = ACTIONS(72),
  },
  [15] = {
    [sym_value] = STATE(29),
    [sym__token] = STATE(28),
    [sym_string] = STATE(28),
    [sym_integer] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_identifier] = ACTIONS(72),
  },
  [16] = {
    [sym__paren_balanced] = STATE(33),
    [sym_text_paren_balanced] = STATE(32),
    [aux_sym_text_paren_balanced_repeat1] = STATE(33),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym__paren_text] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
  },
  [17] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(35),
    [sym__brace_balanced] = STATE(35),
    [sym_text_brace_balanced] = STATE(36),
    [sym__brace_text] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(80),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(96),
  },
  [20] = {
    [sym_key] = STATE(41),
    [sym_comment] = ACTIONS(3),
    [aux_sym_key_token1] = ACTIONS(98),
  },
  [21] = {
    [sym_key] = STATE(42),
    [sym_comment] = ACTIONS(3),
    [aux_sym_key_token1] = ACTIONS(98),
  },
  [22] = {
    [anon_sym_AT] = ACTIONS(100),
    [aux_sym_junk_token1] = ACTIONS(100),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(100),
  },
  [23] = {
    [aux_sym_junk_repeat1] = STATE(23),
    [anon_sym_AT] = ACTIONS(102),
    [aux_sym_junk_token1] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_junk_token3] = ACTIONS(102),
    [sym_comment] = ACTIONS(102),
    [aux_sym_junk_token2] = ACTIONS(106),
  },
  [24] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(35),
    [sym__brace_balanced] = STATE(35),
    [sym_text_brace_balanced] = STATE(44),
    [sym__brace_text] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [25] = {
    [sym_text_quote_balanced] = STATE(46),
    [sym__quote_balanced] = STATE(47),
    [aux_sym_text_quote_balanced_repeat1] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(113),
  },
  [26] = {
    [sym_text_quote_balanced] = STATE(48),
    [sym__quote_balanced] = STATE(90),
    [aux_sym_text_quote_balanced_repeat1] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(109),
  },
  [27] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(119),
  },
  [28] = {
    [aux_sym_value_repeat1] = STATE(51),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(119),
  },
  [30] = {
    [sym__paren_balanced] = STATE(53),
    [aux_sym_text_paren_balanced_repeat1] = STATE(53),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym__paren_text] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
  },
  [31] = {
    [anon_sym_AT] = ACTIONS(129),
    [aux_sym_junk_token1] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
  },
  [32] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [33] = {
    [sym__paren_balanced] = STATE(55),
    [aux_sym_text_paren_balanced_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym__paren_text] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
  },
  [34] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(57),
    [sym__brace_balanced] = STATE(57),
    [sym__brace_text] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(139),
  },
  [35] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(58),
    [sym__brace_balanced] = STATE(58),
    [sym__brace_text] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(143),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(145),
  },
  [37] = {
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_junk_token1] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [38] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(149),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(151),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [41] = {
    [aux_sym_entry_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(157),
  },
  [42] = {
    [aux_sym_entry_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(163),
  },
  [45] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(69),
    [sym__brace_balanced] = STATE(69),
    [sym__brace_text] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(167),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(169),
  },
  [47] = {
    [aux_sym_text_quote_balanced_repeat1] = STATE(71),
    [sym__quote_balanced] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(173),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(169),
  },
  [49] = {
    [anon_sym_AT] = ACTIONS(175),
    [aux_sym_junk_token1] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
  },
  [50] = {
    [sym__token] = STATE(72),
    [sym_string] = STATE(72),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(177),
    [sym_integer] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(78),
  },
  [51] = {
    [aux_sym_value_repeat1] = STATE(73),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(181),
    [sym__paren_text] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [sym_comment] = ACTIONS(86),
  },
  [53] = {
    [sym__paren_balanced] = STATE(55),
    [aux_sym_text_paren_balanced_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(183),
    [sym__paren_text] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
  },
  [54] = {
    [anon_sym_AT] = ACTIONS(185),
    [aux_sym_junk_token1] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(185),
  },
  [55] = {
    [sym__paren_balanced] = STATE(55),
    [aux_sym_text_paren_balanced_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym__paren_text] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(192),
    [sym_comment] = ACTIONS(86),
  },
  [56] = {
    [sym__brace_text] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [57] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(58),
    [sym__brace_balanced] = STATE(58),
    [sym__brace_text] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(197),
  },
  [58] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(58),
    [sym__brace_balanced] = STATE(58),
    [sym__brace_text] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(202),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(205),
  },
  [59] = {
    [anon_sym_AT] = ACTIONS(207),
    [aux_sym_junk_token1] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
  },
  [60] = {
    [sym_value] = STATE(76),
    [sym__token] = STATE(28),
    [sym_string] = STATE(28),
    [sym_integer] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_identifier] = ACTIONS(72),
  },
  [61] = {
    [sym_value] = STATE(77),
    [sym__token] = STATE(28),
    [sym_string] = STATE(28),
    [sym_integer] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_identifier] = ACTIONS(72),
  },
  [62] = {
    [sym_field] = STATE(80),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
  },
  [63] = {
    [anon_sym_AT] = ACTIONS(213),
    [aux_sym_junk_token1] = ACTIONS(213),
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(213),
  },
  [64] = {
    [aux_sym_entry_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(209),
  },
  [65] = {
    [sym_field] = STATE(80),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [66] = {
    [aux_sym_entry_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
  },
  [68] = {
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(221),
  },
  [69] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(58),
    [sym__brace_balanced] = STATE(58),
    [sym__brace_text] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(223),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
  },
  [71] = {
    [aux_sym_text_quote_balanced_repeat1] = STATE(71),
    [sym__quote_balanced] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(232),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [73] = {
    [aux_sym_value_repeat1] = STATE(73),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(240),
    [sym__paren_text] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [sym_comment] = ACTIONS(86),
  },
  [75] = {
    [sym__brace_text] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(242),
  },
  [76] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(244),
  },
  [77] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(244),
  },
  [78] = {
    [anon_sym_AT] = ACTIONS(246),
    [aux_sym_junk_token1] = ACTIONS(246),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_comment] = ACTIONS(246),
  },
  [79] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(248),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
  },
  [81] = {
    [sym_field] = STATE(80),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_identifier] = ACTIONS(211),
  },
  [82] = {
    [aux_sym_entry_repeat1] = STATE(82),
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(250),
  },
  [83] = {
    [sym_field] = STATE(80),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(252),
  },
  [84] = {
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(257),
  },
  [85] = {
    [anon_sym_AT] = ACTIONS(259),
    [aux_sym_junk_token1] = ACTIONS(259),
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(259),
  },
  [86] = {
    [sym__token] = STATE(28),
    [sym_string] = STATE(28),
    [sym_value] = STATE(89),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(72),
    [sym_integer] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(78),
  },
  [87] = {
    [anon_sym_AT] = ACTIONS(261),
    [aux_sym_junk_token1] = ACTIONS(261),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
  },
  [88] = {
    [sym_field] = STATE(80),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(211),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
  },
  [90] = {
    [aux_sym_text_quote_balanced_repeat1] = STATE(92),
    [sym__quote_balanced] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(171),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
  },
  [92] = {
    [aux_sym_text_quote_balanced_repeat1] = STATE(92),
    [sym__quote_balanced] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(267),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(230),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(257),
    [sym_comment] = ACTIONS(86),
    [sym__quote_text] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [94] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(95),
    [sym__brace_balanced] = STATE(95),
    [sym__brace_text] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(275),
  },
  [95] = {
    [aux_sym_text_brace_balanced_repeat1] = STATE(58),
    [sym__brace_balanced] = STATE(58),
    [sym__brace_text] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(277),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_junk, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_junk, 2),
  [57] = {.count = 1, .reusable = false}, SHIFT(22),
  [59] = {.count = 1, .reusable = false}, SHIFT(23),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [72] = {.count = 1, .reusable = true}, SHIFT(28),
  [74] = {.count = 1, .reusable = true}, SHIFT(24),
  [76] = {.count = 1, .reusable = true}, SHIFT(25),
  [78] = {.count = 1, .reusable = true}, SHIFT(26),
  [80] = {.count = 1, .reusable = false}, SHIFT(31),
  [82] = {.count = 1, .reusable = false}, SHIFT(33),
  [84] = {.count = 1, .reusable = false}, SHIFT(30),
  [86] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [88] = {.count = 1, .reusable = false}, SHIFT(35),
  [90] = {.count = 1, .reusable = false}, SHIFT(34),
  [92] = {.count = 1, .reusable = true}, SHIFT(37),
  [94] = {.count = 1, .reusable = true}, SHIFT(38),
  [96] = {.count = 1, .reusable = true}, SHIFT(39),
  [98] = {.count = 1, .reusable = true}, SHIFT(40),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(aux_sym_junk_repeat1, 2),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_junk_repeat1, 2),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_junk_repeat1, 2), SHIFT_REPEAT(23),
  [109] = {.count = 1, .reusable = false}, SHIFT(43),
  [111] = {.count = 1, .reusable = false}, SHIFT(45),
  [113] = {.count = 1, .reusable = false}, SHIFT(47),
  [115] = {.count = 1, .reusable = false}, SHIFT(94),
  [117] = {.count = 1, .reusable = false}, SHIFT(90),
  [119] = {.count = 1, .reusable = true}, SHIFT(49),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(50),
  [125] = {.count = 1, .reusable = false}, SHIFT(52),
  [127] = {.count = 1, .reusable = false}, SHIFT(53),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 4),
  [131] = {.count = 1, .reusable = true}, SHIFT(54),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_text_paren_balanced, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(55),
  [137] = {.count = 1, .reusable = false}, SHIFT(57),
  [139] = {.count = 1, .reusable = false}, SHIFT(56),
  [141] = {.count = 1, .reusable = false}, SHIFT(58),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_text_brace_balanced, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(59),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 4),
  [149] = {.count = 1, .reusable = true}, SHIFT(60),
  [151] = {.count = 1, .reusable = true}, SHIFT(61),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(62),
  [157] = {.count = 1, .reusable = true}, SHIFT(63),
  [159] = {.count = 1, .reusable = true}, SHIFT(65),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(67),
  [165] = {.count = 1, .reusable = false}, SHIFT(69),
  [167] = {.count = 1, .reusable = false}, SHIFT(68),
  [169] = {.count = 1, .reusable = true}, SHIFT(70),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_text_quote_balanced, 1),
  [173] = {.count = 1, .reusable = false}, SHIFT(71),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [177] = {.count = 1, .reusable = true}, SHIFT(72),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(74),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5),
  [187] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(55),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(30),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [197] = {.count = 1, .reusable = false}, SHIFT(75),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(58),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(34),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5, .production_id = 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(78),
  [211] = {.count = 1, .reusable = true}, SHIFT(79),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [215] = {.count = 1, .reusable = true}, SHIFT(81),
  [217] = {.count = 1, .reusable = true}, SHIFT(83),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3, .production_id = 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [223] = {.count = 1, .reusable = false}, SHIFT(84),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(45),
  [230] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(71),
  [235] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(50),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [244] = {.count = 1, .reusable = true}, SHIFT(85),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [248] = {.count = 1, .reusable = true}, SHIFT(86),
  [250] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(87),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(88),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
  [265] = {.count = 1, .reusable = false}, SHIFT(92),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(94),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(92),
  [273] = {.count = 1, .reusable = false}, SHIFT(95),
  [275] = {.count = 1, .reusable = false}, SHIFT(91),
  [277] = {.count = 1, .reusable = false}, SHIFT(93),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_biber(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
