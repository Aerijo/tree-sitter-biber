#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 91
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  sym_junk = 2,
  anon_sym_AT = 3,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH = 9,
  anon_sym_EQ = 10,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  anon_sym_COMMA = 12,
  sym_key_b = 13,
  sym_key_p = 14,
  sym_identifier = 15,
  anon_sym_POUND = 16,
  sym_nonnegative_integer = 17,
  anon_sym_DQUOTE = 18,
  sym__brace_text = 19,
  sym__quote_text = 20,
  sym__paren_text = 21,
  sym_program = 22,
  sym__command_or_entry = 23,
  sym_comment_command = 24,
  sym_string_command = 25,
  sym_preamble_command = 26,
  sym_entry = 27,
  sym_field = 28,
  sym_value = 29,
  sym_token = 30,
  sym_string = 31,
  sym__balanced = 32,
  sym__quote_balanced = 33,
  sym__paren_balanced = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym_entry_repeat1 = 36,
  aux_sym_value_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
  aux_sym_string_repeat2 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [sym_junk] = "junk",
  [anon_sym_AT] = "@",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[cC][oO][mM][mM][eE][nN][tT]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = "/[sS][tT][rR][iI][nN][gG]/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][rR][eE][aA][mM][bB][lL][eE]/",
  [anon_sym_COMMA] = ",",
  [sym_key_b] = "key_b",
  [sym_key_p] = "key_p",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [sym_nonnegative_integer] = "nonnegative_integer",
  [anon_sym_DQUOTE] = "\"",
  [sym__brace_text] = "_brace_text",
  [sym__quote_text] = "_quote_text",
  [sym__paren_text] = "_paren_text",
  [sym_program] = "program",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_comment_command] = "comment_command",
  [sym_string_command] = "string_command",
  [sym_preamble_command] = "preamble_command",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_token] = "token",
  [sym_string] = "string",
  [sym__balanced] = "_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym__paren_balanced] = "_paren_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
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
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
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
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_key_b] = {
    .visible = true,
    .named = true,
  },
  [sym_key_p] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_nonnegative_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
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
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__balanced] = {
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
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(12);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(19);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_nonnegative_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(63);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '%')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '}')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(67);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '|') ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_key_p);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (lookahead != 0 &&
          lookahead != ',')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_key_p);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != ',')
        ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(79);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(80);
      if (lookahead == '\"' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(44);
      END_STATE();
    case 83:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 78},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 74},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 74},
  [52] = {.lex_state = 83},
  [53] = {.lex_state = 75},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 75},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 75},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 77},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 75},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 69},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 69},
  [82] = {.lex_state = 69},
  [83] = {.lex_state = 69},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 74},
  [86] = {.lex_state = 75},
  [87] = {.lex_state = 74},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 74},
  [90] = {.lex_state = 75},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_nonnegative_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym__command_or_entry] = STATE(4),
    [sym_comment_command] = STATE(4),
    [sym_string_command] = STATE(4),
    [sym_preamble_command] = STATE(4),
    [sym_entry] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_junk] = ACTIONS(8),
    [anon_sym_AT] = ACTIONS(10),
  },
  [2] = {
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(18),
    [sym_identifier] = ACTIONS(20),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(12),
  },
  [4] = {
    [sym__command_or_entry] = STATE(9),
    [sym_comment_command] = STATE(9),
    [sym_string_command] = STATE(9),
    [sym_preamble_command] = STATE(9),
    [sym_entry] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [sym_junk] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(10),
  },
  [5] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
  },
  [6] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
  },
  [7] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [8] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [9] = {
    [sym__command_or_entry] = STATE(9),
    [sym_comment_command] = STATE(9),
    [sym_string_command] = STATE(9),
    [sym_preamble_command] = STATE(9),
    [sym_entry] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [sym_junk] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(56),
  },
  [10] = {
    [sym__balanced] = STATE(19),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym__brace_text] = ACTIONS(63),
  },
  [11] = {
    [sym__paren_balanced] = STATE(21),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym__paren_text] = ACTIONS(67),
  },
  [12] = {
    [sym_comment] = ACTIONS(12),
    [sym_identifier] = ACTIONS(69),
  },
  [13] = {
    [sym_comment] = ACTIONS(12),
    [sym_identifier] = ACTIONS(71),
  },
  [14] = {
    [sym_value] = STATE(27),
    [sym_token] = STATE(28),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [15] = {
    [sym_value] = STATE(29),
    [sym_token] = STATE(30),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [16] = {
    [sym_comment] = ACTIONS(12),
    [sym_key_b] = ACTIONS(79),
  },
  [17] = {
    [sym_comment] = ACTIONS(12),
    [sym_key_p] = ACTIONS(81),
  },
  [18] = {
    [sym__balanced] = STATE(35),
    [aux_sym_string_repeat1] = STATE(35),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym__brace_text] = ACTIONS(87),
  },
  [19] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(89),
  },
  [20] = {
    [sym__balanced] = STATE(38),
    [aux_sym_string_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym__brace_text] = ACTIONS(93),
  },
  [21] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [22] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(95),
  },
  [23] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(97),
  },
  [24] = {
    [sym__balanced] = STATE(42),
    [aux_sym_string_repeat1] = STATE(42),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym__brace_text] = ACTIONS(101),
  },
  [25] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
  },
  [26] = {
    [sym__quote_balanced] = STATE(44),
    [aux_sym_string_repeat2] = STATE(44),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [sym__quote_text] = ACTIONS(107),
  },
  [27] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [28] = {
    [aux_sym_value_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [29] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(109),
  },
  [30] = {
    [aux_sym_value_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [31] = {
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(117),
  },
  [32] = {
    [aux_sym_entry_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(119),
  },
  [33] = {
    [sym__balanced] = STATE(55),
    [aux_sym_string_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym__brace_text] = ACTIONS(123),
  },
  [34] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [35] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym__brace_text] = ACTIONS(129),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [sym_junk] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
  },
  [37] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(133),
  },
  [38] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym__brace_text] = ACTIONS(129),
  },
  [39] = {
    [sym_value] = STATE(59),
    [sym_token] = STATE(28),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [40] = {
    [sym_value] = STATE(60),
    [sym_token] = STATE(30),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [41] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_POUND] = ACTIONS(137),
  },
  [42] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym__brace_text] = ACTIONS(129),
  },
  [43] = {
    [sym__balanced] = STATE(63),
    [aux_sym_string_repeat1] = STATE(63),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym__brace_text] = ACTIONS(143),
  },
  [44] = {
    [sym__quote_balanced] = STATE(64),
    [aux_sym_string_repeat2] = STATE(64),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym__quote_text] = ACTIONS(145),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [sym_junk] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
  },
  [46] = {
    [sym_token] = STATE(65),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [47] = {
    [aux_sym_value_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [48] = {
    [aux_sym_value_repeat1] = STATE(67),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(151),
    [sym_junk] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
  },
  [50] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
  },
  [51] = {
    [aux_sym_entry_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(157),
  },
  [52] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym_identifier] = ACTIONS(159),
  },
  [53] = {
    [aux_sym_entry_repeat1] = STATE(75),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(161),
  },
  [54] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym__brace_text] = ACTIONS(163),
  },
  [55] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym__brace_text] = ACTIONS(129),
  },
  [56] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(167),
  },
  [57] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(172),
    [sym__brace_text] = ACTIONS(174),
  },
  [58] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [59] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(179),
  },
  [60] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(179),
  },
  [61] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
  },
  [62] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym__quote_text] = ACTIONS(183),
  },
  [63] = {
    [sym__balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(185),
    [sym__brace_text] = ACTIONS(129),
  },
  [64] = {
    [sym__quote_balanced] = STATE(64),
    [aux_sym_string_repeat2] = STATE(64),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [sym__quote_text] = ACTIONS(192),
  },
  [65] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(195),
  },
  [66] = {
    [aux_sym_value_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
  },
  [67] = {
    [aux_sym_value_repeat1] = STATE(67),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_comment] = ACTIONS(200),
    [sym_junk] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(200),
  },
  [69] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(202),
  },
  [70] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
  },
  [71] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(206),
    [sym_identifier] = ACTIONS(155),
  },
  [72] = {
    [aux_sym_entry_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(208),
  },
  [73] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(211),
  },
  [74] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(206),
    [sym_identifier] = ACTIONS(159),
  },
  [75] = {
    [aux_sym_entry_repeat1] = STATE(75),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(213),
  },
  [76] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym__brace_text] = ACTIONS(216),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_comment] = ACTIONS(218),
    [sym_junk] = ACTIONS(218),
    [anon_sym_AT] = ACTIONS(218),
  },
  [78] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym__quote_text] = ACTIONS(220),
  },
  [79] = {
    [sym_value] = STATE(84),
    [sym_token] = STATE(85),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_comment] = ACTIONS(222),
    [sym_junk] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
  },
  [81] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [sym_identifier] = ACTIONS(155),
  },
  [82] = {
    [sym_value] = STATE(84),
    [sym_token] = STATE(86),
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_nonnegative_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [83] = {
    [sym_field] = STATE(70),
    [sym_comment] = ACTIONS(12),
    [sym_identifier] = ACTIONS(159),
  },
  [84] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
  },
  [85] = {
    [aux_sym_value_repeat1] = STATE(87),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [86] = {
    [aux_sym_value_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [87] = {
    [aux_sym_value_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [88] = {
    [aux_sym_value_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(113),
  },
  [89] = {
    [aux_sym_value_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
  },
  [90] = {
    [aux_sym_value_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 2, .reusable = true}, SHIFT(4), SHIFT_EXTRA(),
  [8] = {.count = 1, .reusable = true}, SHIFT(4),
  [10] = {.count = 1, .reusable = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [14] = {.count = 1, .reusable = false}, SHIFT(5),
  [16] = {.count = 1, .reusable = false}, SHIFT(6),
  [18] = {.count = 1, .reusable = false}, SHIFT(7),
  [20] = {.count = 1, .reusable = false}, SHIFT(8),
  [22] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [26] = {.count = 2, .reusable = true}, SHIFT(9), SHIFT_EXTRA(),
  [29] = {.count = 1, .reusable = true}, SHIFT(9),
  [31] = {.count = 1, .reusable = true}, SHIFT(10),
  [33] = {.count = 1, .reusable = true}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [49] = {.count = 3, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9), SHIFT_EXTRA(),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = false}, SHIFT(18),
  [63] = {.count = 1, .reusable = false}, SHIFT(19),
  [65] = {.count = 1, .reusable = false}, SHIFT(20),
  [67] = {.count = 1, .reusable = false}, SHIFT(21),
  [69] = {.count = 1, .reusable = true}, SHIFT(22),
  [71] = {.count = 1, .reusable = true}, SHIFT(23),
  [73] = {.count = 1, .reusable = true}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, SHIFT(25),
  [77] = {.count = 1, .reusable = true}, SHIFT(26),
  [79] = {.count = 1, .reusable = true}, SHIFT(31),
  [81] = {.count = 1, .reusable = true}, SHIFT(32),
  [83] = {.count = 1, .reusable = false}, SHIFT(33),
  [85] = {.count = 1, .reusable = false}, SHIFT(34),
  [87] = {.count = 1, .reusable = false}, SHIFT(35),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 1, .reusable = false}, SHIFT(37),
  [93] = {.count = 1, .reusable = false}, SHIFT(38),
  [95] = {.count = 1, .reusable = true}, SHIFT(39),
  [97] = {.count = 1, .reusable = true}, SHIFT(40),
  [99] = {.count = 1, .reusable = false}, SHIFT(41),
  [101] = {.count = 1, .reusable = false}, SHIFT(42),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(43),
  [107] = {.count = 1, .reusable = false}, SHIFT(44),
  [109] = {.count = 1, .reusable = true}, SHIFT(45),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(46),
  [115] = {.count = 1, .reusable = true}, SHIFT(49),
  [117] = {.count = 1, .reusable = true}, SHIFT(50),
  [119] = {.count = 1, .reusable = true}, SHIFT(52),
  [121] = {.count = 1, .reusable = false}, SHIFT(54),
  [123] = {.count = 1, .reusable = false}, SHIFT(55),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(56),
  [129] = {.count = 1, .reusable = false}, SHIFT(57),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__paren_balanced, 2),
  [135] = {.count = 1, .reusable = false}, SHIFT(58),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [139] = {.count = 1, .reusable = false}, SHIFT(61),
  [141] = {.count = 1, .reusable = false}, SHIFT(62),
  [143] = {.count = 1, .reusable = false}, SHIFT(63),
  [145] = {.count = 1, .reusable = false}, SHIFT(64),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [153] = {.count = 1, .reusable = true}, SHIFT(68),
  [155] = {.count = 1, .reusable = true}, SHIFT(69),
  [157] = {.count = 1, .reusable = true}, SHIFT(71),
  [159] = {.count = 1, .reusable = true}, SHIFT(73),
  [161] = {.count = 1, .reusable = true}, SHIFT(74),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 2),
  [165] = {.count = 1, .reusable = false}, SHIFT(76),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 3),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__paren_balanced, 3),
  [179] = {.count = 1, .reusable = true}, SHIFT(77),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [185] = {.count = 1, .reusable = false}, SHIFT(78),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(43),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(64),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(46),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [202] = {.count = 1, .reusable = true}, SHIFT(79),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [206] = {.count = 1, .reusable = true}, SHIFT(80),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(81),
  [211] = {.count = 1, .reusable = true}, SHIFT(82),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(83),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bibtex() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
