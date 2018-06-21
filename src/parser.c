#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 98
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH = 13,
  sym_identifier = 14,
  anon_sym_POUND = 15,
  sym_nonnegative_integer = 16,
  anon_sym_DQUOTE = 17,
  sym__brace_text = 18,
  sym__quote_text = 19,
  sym__paren_text = 20,
  sym_program = 21,
  sym__command_or_entry = 22,
  sym_comment_command = 23,
  sym_string_command = 24,
  sym_preamble_command = 25,
  sym_entry = 26,
  sym_key = 27,
  sym_name = 28,
  sym_field = 29,
  sym_value = 30,
  sym_token = 31,
  sym_string = 32,
  sym__brace_balanced = 33,
  sym__quote_balanced = 34,
  sym__paren_balanced = 35,
  aux_sym_program_repeat1 = 36,
  aux_sym_entry_repeat1 = 37,
  aux_sym_value_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
  aux_sym_string_repeat2 = 40,
  aux_sym__paren_balanced_repeat1 = 41,
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
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = "/[^\\\"\\#%'\\(\\)\\,\\=\\{\\}@\\\\\\~\\s\\t\\n]+/",
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
  [sym_key] = "key",
  [sym_name] = "name",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_token] = "token",
  [sym_string] = "string",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym__paren_balanced] = "_paren_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym__paren_balanced_repeat1] = "_paren_balanced_repeat1",
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
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = {
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
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym__paren_balanced_repeat1] = {
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
        ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if ((lookahead < '\'' || lookahead > ')') &&
          lookahead != '\\' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 36:
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
        SKIP(36);
      ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
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
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(64);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '%')
        ADVANCE(67);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(68);
      if (lookahead == '(' ||
          lookahead == ')')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(68);
      END_STATE();
    case 70:
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
        SKIP(70);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nonnegative_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(35);
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
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          (lookahead < '0' || lookahead > '9') &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(72);
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
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          (lookahead < '\'' || lookahead > ')') &&
          lookahead != ',' &&
          (lookahead < '0' || lookahead > '9') &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 74},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 75},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 66},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 70},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 75},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 83},
  [56] = {.lex_state = 75},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 66},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 75},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 78},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 78},
  [71] = {.lex_state = 77},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 75},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 66},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 78},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 70},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 77},
  [92] = {.lex_state = 74},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 74},
  [95] = {.lex_state = 75},
  [96] = {.lex_state = 74},
  [97] = {.lex_state = 75},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_nonnegative_integer] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_junk] = ACTIONS(10),
    [anon_sym_AT] = ACTIONS(12),
  },
  [2] = {
    [sym_name] = STATE(9),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(16),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(18),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(22),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [sym__command_or_entry] = STATE(10),
    [sym_comment_command] = STATE(10),
    [sym_string_command] = STATE(10),
    [sym_preamble_command] = STATE(10),
    [sym_entry] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
    [sym_junk] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(12),
  },
  [5] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
  },
  [6] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
  },
  [7] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [8] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [9] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
  },
  [10] = {
    [sym__command_or_entry] = STATE(10),
    [sym_comment_command] = STATE(10),
    [sym_string_command] = STATE(10),
    [sym_preamble_command] = STATE(10),
    [sym_entry] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_junk] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(60),
  },
  [11] = {
    [sym__brace_balanced] = STATE(20),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym__brace_text] = ACTIONS(67),
  },
  [12] = {
    [sym__paren_balanced] = STATE(22),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym__paren_text] = ACTIONS(71),
  },
  [13] = {
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(73),
  },
  [14] = {
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(75),
  },
  [15] = {
    [sym_value] = STATE(28),
    [sym_token] = STATE(29),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [16] = {
    [sym_value] = STATE(30),
    [sym_token] = STATE(31),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [17] = {
    [sym_key] = STATE(33),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(83),
  },
  [18] = {
    [sym_key] = STATE(34),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(83),
  },
  [19] = {
    [sym__brace_balanced] = STATE(37),
    [aux_sym_string_repeat1] = STATE(37),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym__brace_text] = ACTIONS(89),
  },
  [20] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [21] = {
    [sym__paren_balanced] = STATE(41),
    [aux_sym__paren_balanced_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym__paren_text] = ACTIONS(97),
  },
  [22] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(91),
  },
  [23] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(99),
  },
  [24] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(101),
  },
  [25] = {
    [sym__brace_balanced] = STATE(45),
    [aux_sym_string_repeat1] = STATE(45),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym__brace_text] = ACTIONS(105),
  },
  [26] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(107),
  },
  [27] = {
    [sym__quote_balanced] = STATE(47),
    [aux_sym_string_repeat2] = STATE(47),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym__quote_text] = ACTIONS(111),
  },
  [28] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(113),
  },
  [29] = {
    [aux_sym_value_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [30] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [31] = {
    [aux_sym_value_repeat1] = STATE(51),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [32] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
  },
  [33] = {
    [aux_sym_entry_repeat1] = STATE(54),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(123),
  },
  [34] = {
    [aux_sym_entry_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(125),
  },
  [35] = {
    [sym__brace_balanced] = STATE(58),
    [aux_sym_string_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym__brace_text] = ACTIONS(129),
  },
  [36] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [37] = {
    [sym__brace_balanced] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__brace_text] = ACTIONS(135),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(137),
    [sym_junk] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
  },
  [39] = {
    [sym__paren_balanced] = STATE(62),
    [aux_sym__paren_balanced_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym__paren_text] = ACTIONS(141),
  },
  [40] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [41] = {
    [sym__paren_balanced] = STATE(64),
    [aux_sym__paren_balanced_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym__paren_text] = ACTIONS(147),
  },
  [42] = {
    [sym_value] = STATE(65),
    [sym_token] = STATE(29),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [43] = {
    [sym_value] = STATE(66),
    [sym_token] = STATE(31),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [44] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
  },
  [45] = {
    [sym__brace_balanced] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym__brace_text] = ACTIONS(135),
  },
  [46] = {
    [sym__brace_balanced] = STATE(69),
    [aux_sym_string_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym__brace_text] = ACTIONS(155),
  },
  [47] = {
    [sym__quote_balanced] = STATE(70),
    [aux_sym_string_repeat2] = STATE(70),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [sym__quote_text] = ACTIONS(157),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [sym_junk] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
  },
  [49] = {
    [sym_token] = STATE(71),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [50] = {
    [aux_sym_value_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [51] = {
    [aux_sym_value_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [sym_junk] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
  },
  [53] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
  },
  [54] = {
    [aux_sym_entry_repeat1] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [55] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(165),
    [sym_identifier] = ACTIONS(171),
  },
  [56] = {
    [aux_sym_entry_repeat1] = STATE(81),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(173),
  },
  [57] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [sym__brace_text] = ACTIONS(175),
  },
  [58] = {
    [sym__brace_balanced] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym__brace_text] = ACTIONS(135),
  },
  [59] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(179),
  },
  [60] = {
    [sym__brace_balanced] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(184),
    [sym__brace_text] = ACTIONS(186),
  },
  [61] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym__paren_text] = ACTIONS(189),
  },
  [62] = {
    [sym__paren_balanced] = STATE(64),
    [aux_sym__paren_balanced_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym__paren_text] = ACTIONS(147),
  },
  [63] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(193),
  },
  [64] = {
    [sym__paren_balanced] = STATE(64),
    [aux_sym__paren_balanced_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym__paren_text] = ACTIONS(200),
  },
  [65] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(203),
  },
  [66] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [67] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(205),
  },
  [68] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym__quote_text] = ACTIONS(207),
  },
  [69] = {
    [sym__brace_balanced] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym__brace_text] = ACTIONS(135),
  },
  [70] = {
    [sym__quote_balanced] = STATE(70),
    [aux_sym_string_repeat2] = STATE(70),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym__quote_text] = ACTIONS(216),
  },
  [71] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(219),
  },
  [72] = {
    [aux_sym_value_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [73] = {
    [aux_sym_value_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_comment] = ACTIONS(224),
    [sym_junk] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
  },
  [75] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(226),
  },
  [76] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
  },
  [77] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_identifier] = ACTIONS(167),
  },
  [78] = {
    [aux_sym_entry_repeat1] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(232),
  },
  [79] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(235),
  },
  [80] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_identifier] = ACTIONS(171),
  },
  [81] = {
    [aux_sym_entry_repeat1] = STATE(81),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(237),
  },
  [82] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym__brace_text] = ACTIONS(240),
  },
  [83] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [sym__paren_text] = ACTIONS(242),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_comment] = ACTIONS(244),
    [sym_junk] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
  },
  [85] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [sym__quote_text] = ACTIONS(246),
  },
  [86] = {
    [sym_value] = STATE(91),
    [sym_token] = STATE(92),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_comment] = ACTIONS(248),
    [sym_junk] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(248),
  },
  [88] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(167),
  },
  [89] = {
    [sym_value] = STATE(91),
    [sym_token] = STATE(93),
    [sym_string] = STATE(26),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_nonnegative_integer] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [90] = {
    [sym_field] = STATE(76),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(171),
  },
  [91] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
  },
  [92] = {
    [aux_sym_value_repeat1] = STATE(94),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [93] = {
    [aux_sym_value_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [94] = {
    [aux_sym_value_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [95] = {
    [aux_sym_value_repeat1] = STATE(97),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [96] = {
    [aux_sym_value_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [97] = {
    [aux_sym_value_repeat1] = STATE(97),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_POUND] = ACTIONS(221),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 2, .reusable = true}, SHIFT(4), SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = true}, SHIFT(4),
  [12] = {.count = 1, .reusable = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = false}, SHIFT(7),
  [22] = {.count = 1, .reusable = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [28] = {.count = 2, .reusable = true}, SHIFT(10), SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, SHIFT(10),
  [33] = {.count = 1, .reusable = true}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = true}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(17),
  [49] = {.count = 1, .reusable = true}, SHIFT(18),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [53] = {.count = 3, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10), SHIFT_EXTRA(),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [65] = {.count = 1, .reusable = false}, SHIFT(19),
  [67] = {.count = 1, .reusable = false}, SHIFT(20),
  [69] = {.count = 1, .reusable = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = false}, SHIFT(22),
  [73] = {.count = 1, .reusable = true}, SHIFT(23),
  [75] = {.count = 1, .reusable = true}, SHIFT(24),
  [77] = {.count = 1, .reusable = true}, SHIFT(25),
  [79] = {.count = 1, .reusable = true}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = true}, SHIFT(32),
  [85] = {.count = 1, .reusable = false}, SHIFT(35),
  [87] = {.count = 1, .reusable = false}, SHIFT(36),
  [89] = {.count = 1, .reusable = false}, SHIFT(37),
  [91] = {.count = 1, .reusable = true}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(39),
  [95] = {.count = 1, .reusable = false}, SHIFT(40),
  [97] = {.count = 1, .reusable = false}, SHIFT(41),
  [99] = {.count = 1, .reusable = true}, SHIFT(42),
  [101] = {.count = 1, .reusable = true}, SHIFT(43),
  [103] = {.count = 1, .reusable = false}, SHIFT(44),
  [105] = {.count = 1, .reusable = false}, SHIFT(45),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(46),
  [111] = {.count = 1, .reusable = false}, SHIFT(47),
  [113] = {.count = 1, .reusable = true}, SHIFT(48),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(49),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(52),
  [123] = {.count = 1, .reusable = true}, SHIFT(53),
  [125] = {.count = 1, .reusable = true}, SHIFT(55),
  [127] = {.count = 1, .reusable = false}, SHIFT(57),
  [129] = {.count = 1, .reusable = false}, SHIFT(58),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__brace_balanced, 2),
  [133] = {.count = 1, .reusable = false}, SHIFT(59),
  [135] = {.count = 1, .reusable = false}, SHIFT(60),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5),
  [139] = {.count = 1, .reusable = false}, SHIFT(61),
  [141] = {.count = 1, .reusable = false}, SHIFT(62),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__paren_balanced, 2),
  [145] = {.count = 1, .reusable = false}, SHIFT(63),
  [147] = {.count = 1, .reusable = false}, SHIFT(64),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [151] = {.count = 1, .reusable = false}, SHIFT(67),
  [153] = {.count = 1, .reusable = false}, SHIFT(68),
  [155] = {.count = 1, .reusable = false}, SHIFT(69),
  [157] = {.count = 1, .reusable = false}, SHIFT(70),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [165] = {.count = 1, .reusable = true}, SHIFT(74),
  [167] = {.count = 1, .reusable = true}, SHIFT(75),
  [169] = {.count = 1, .reusable = true}, SHIFT(77),
  [171] = {.count = 1, .reusable = true}, SHIFT(79),
  [173] = {.count = 1, .reusable = true}, SHIFT(80),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [177] = {.count = 1, .reusable = false}, SHIFT(82),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__brace_balanced, 3),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [184] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [191] = {.count = 1, .reusable = false}, SHIFT(83),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__paren_balanced, 3),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paren_balanced_repeat1, 2), SHIFT_REPEAT(39),
  [198] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paren_balanced_repeat1, 2),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paren_balanced_repeat1, 2), SHIFT_REPEAT(64),
  [203] = {.count = 1, .reusable = true}, SHIFT(84),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [209] = {.count = 1, .reusable = false}, SHIFT(85),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(46),
  [214] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(70),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(49),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [226] = {.count = 1, .reusable = true}, SHIFT(86),
  [228] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [230] = {.count = 1, .reusable = true}, SHIFT(87),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(88),
  [235] = {.count = 1, .reusable = true}, SHIFT(89),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(90),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_biber() {
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
