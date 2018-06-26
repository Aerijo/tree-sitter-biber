#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 92
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
  aux_sym_comment_command_repeat1 = 37,
  aux_sym_comment_command_repeat2 = 38,
  aux_sym_entry_repeat1 = 39,
  aux_sym_value_repeat1 = 40,
  aux_sym_string_repeat1 = 41,
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
  [aux_sym_comment_command_repeat1] = "comment_command_repeat1",
  [aux_sym_comment_command_repeat2] = "comment_command_repeat2",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [aux_sym_comment_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_command_repeat2] = {
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
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
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
        ADVANCE(71);
      END_STATE();
    case 71:
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
        ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
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
        ADVANCE(71);
      END_STATE();
    case 73:
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
        SKIP(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
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
        ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_nonnegative_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
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
        SKIP(82);
      END_STATE();
    case 83:
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
        SKIP(83);
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
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 66},
  [23] = {.lex_state = 66},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 83},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 77},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 78},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 73},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 83},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 70},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 83},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 77},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 78},
  [67] = {.lex_state = 77},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 83},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 78},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 70},
  [83] = {.lex_state = 73},
  [84] = {.lex_state = 70},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 82},
  [87] = {.lex_state = 83},
  [88] = {.lex_state = 82},
  [89] = {.lex_state = 83},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 83},
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
    [sym__brace_balanced] = STATE(21),
    [aux_sym_comment_command_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym__brace_text] = ACTIONS(69),
  },
  [12] = {
    [sym__paren_balanced] = STATE(23),
    [aux_sym_comment_command_repeat2] = STATE(23),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym__paren_text] = ACTIONS(73),
  },
  [13] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
  },
  [14] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_identifier] = ACTIONS(79),
  },
  [15] = {
    [sym_value] = STATE(30),
    [sym_token] = STATE(31),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [16] = {
    [sym_value] = STATE(32),
    [sym_token] = STATE(33),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [17] = {
    [sym_key] = STATE(35),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(87),
  },
  [18] = {
    [sym_key] = STATE(36),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(87),
  },
  [19] = {
    [sym__brace_balanced] = STATE(38),
    [aux_sym_comment_command_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(89),
    [sym__brace_text] = ACTIONS(91),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(93),
    [sym_junk] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
  },
  [21] = {
    [sym__brace_balanced] = STATE(40),
    [aux_sym_comment_command_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(95),
    [sym__brace_text] = ACTIONS(97),
  },
  [22] = {
    [sym__paren_balanced] = STATE(42),
    [aux_sym_comment_command_repeat2] = STATE(42),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym__paren_text] = ACTIONS(101),
  },
  [23] = {
    [sym__paren_balanced] = STATE(43),
    [aux_sym_comment_command_repeat2] = STATE(43),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym__paren_text] = ACTIONS(103),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(105),
    [sym_junk] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
  },
  [25] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(107),
  },
  [26] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(109),
  },
  [27] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_comment_command_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym__brace_text] = ACTIONS(113),
  },
  [28] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(115),
  },
  [29] = {
    [sym__quote_balanced] = STATE(49),
    [aux_sym_string_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym__quote_text] = ACTIONS(119),
  },
  [30] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [31] = {
    [aux_sym_value_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [32] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [33] = {
    [aux_sym_value_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [34] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
  },
  [35] = {
    [aux_sym_entry_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(131),
  },
  [36] = {
    [aux_sym_entry_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(133),
  },
  [37] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym__brace_text] = ACTIONS(135),
  },
  [38] = {
    [sym__brace_balanced] = STATE(40),
    [aux_sym_comment_command_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym__brace_text] = ACTIONS(97),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(139),
    [sym_junk] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
  },
  [40] = {
    [sym__brace_balanced] = STATE(40),
    [aux_sym_comment_command_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym__brace_text] = ACTIONS(146),
  },
  [41] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [sym__paren_text] = ACTIONS(149),
  },
  [42] = {
    [sym__paren_balanced] = STATE(43),
    [aux_sym_comment_command_repeat2] = STATE(43),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(151),
    [sym__paren_text] = ACTIONS(103),
  },
  [43] = {
    [sym__paren_balanced] = STATE(43),
    [aux_sym_comment_command_repeat2] = STATE(43),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(156),
    [sym__paren_text] = ACTIONS(158),
  },
  [44] = {
    [sym_value] = STATE(61),
    [sym_token] = STATE(31),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [45] = {
    [sym_value] = STATE(62),
    [sym_token] = STATE(33),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [46] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
  },
  [47] = {
    [sym__brace_balanced] = STATE(40),
    [aux_sym_comment_command_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym__brace_text] = ACTIONS(97),
  },
  [48] = {
    [sym__brace_balanced] = STATE(65),
    [aux_sym_comment_command_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym__brace_text] = ACTIONS(167),
  },
  [49] = {
    [sym__quote_balanced] = STATE(66),
    [aux_sym_string_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__quote_text] = ACTIONS(169),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
    [sym_junk] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
  },
  [51] = {
    [sym_token] = STATE(67),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [52] = {
    [aux_sym_value_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [53] = {
    [aux_sym_value_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [sym_junk] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
  },
  [55] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
  },
  [56] = {
    [aux_sym_entry_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(181),
  },
  [57] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(177),
    [sym_identifier] = ACTIONS(183),
  },
  [58] = {
    [aux_sym_entry_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(185),
  },
  [59] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym__brace_text] = ACTIONS(187),
  },
  [60] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym__paren_text] = ACTIONS(189),
  },
  [61] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
  [62] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(191),
  },
  [63] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(193),
  },
  [64] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym__quote_text] = ACTIONS(195),
  },
  [65] = {
    [sym__brace_balanced] = STATE(40),
    [aux_sym_comment_command_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym__brace_text] = ACTIONS(97),
  },
  [66] = {
    [sym__quote_balanced] = STATE(66),
    [aux_sym_string_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym__quote_text] = ACTIONS(204),
  },
  [67] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(207),
  },
  [68] = {
    [aux_sym_value_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(209),
  },
  [69] = {
    [aux_sym_value_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(209),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_comment] = ACTIONS(212),
    [sym_junk] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
  },
  [71] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(214),
  },
  [72] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
  },
  [73] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(218),
    [sym_identifier] = ACTIONS(179),
  },
  [74] = {
    [aux_sym_entry_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(220),
  },
  [75] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(223),
  },
  [76] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(218),
    [sym_identifier] = ACTIONS(183),
  },
  [77] = {
    [aux_sym_entry_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(225),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_comment] = ACTIONS(228),
    [sym_junk] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
  },
  [79] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [sym__quote_text] = ACTIONS(230),
  },
  [80] = {
    [sym_value] = STATE(85),
    [sym_token] = STATE(86),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
    [sym_junk] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
  },
  [82] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(179),
  },
  [83] = {
    [sym_value] = STATE(85),
    [sym_token] = STATE(87),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_nonnegative_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [84] = {
    [sym_field] = STATE(72),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(183),
  },
  [85] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
  },
  [86] = {
    [aux_sym_value_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [87] = {
    [aux_sym_value_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [88] = {
    [aux_sym_value_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [89] = {
    [aux_sym_value_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [90] = {
    [aux_sym_value_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(209),
  },
  [91] = {
    [aux_sym_value_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(209),
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
  [73] = {.count = 1, .reusable = false}, SHIFT(23),
  [75] = {.count = 1, .reusable = true}, SHIFT(24),
  [77] = {.count = 1, .reusable = true}, SHIFT(25),
  [79] = {.count = 1, .reusable = true}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, SHIFT(27),
  [83] = {.count = 1, .reusable = true}, SHIFT(28),
  [85] = {.count = 1, .reusable = true}, SHIFT(29),
  [87] = {.count = 1, .reusable = true}, SHIFT(34),
  [89] = {.count = 1, .reusable = false}, SHIFT(37),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 4),
  [95] = {.count = 1, .reusable = false}, SHIFT(39),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 1, .reusable = false}, SHIFT(41),
  [101] = {.count = 1, .reusable = false}, SHIFT(42),
  [103] = {.count = 1, .reusable = false}, SHIFT(43),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 4),
  [107] = {.count = 1, .reusable = true}, SHIFT(44),
  [109] = {.count = 1, .reusable = true}, SHIFT(45),
  [111] = {.count = 1, .reusable = false}, SHIFT(46),
  [113] = {.count = 1, .reusable = false}, SHIFT(47),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(48),
  [119] = {.count = 1, .reusable = false}, SHIFT(49),
  [121] = {.count = 1, .reusable = true}, SHIFT(50),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(51),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(54),
  [131] = {.count = 1, .reusable = true}, SHIFT(55),
  [133] = {.count = 1, .reusable = true}, SHIFT(57),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [137] = {.count = 1, .reusable = false}, SHIFT(59),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(19),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(40),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [151] = {.count = 1, .reusable = false}, SHIFT(60),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(22),
  [156] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(43),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [163] = {.count = 1, .reusable = false}, SHIFT(63),
  [165] = {.count = 1, .reusable = false}, SHIFT(64),
  [167] = {.count = 1, .reusable = false}, SHIFT(65),
  [169] = {.count = 1, .reusable = false}, SHIFT(66),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [177] = {.count = 1, .reusable = true}, SHIFT(70),
  [179] = {.count = 1, .reusable = true}, SHIFT(71),
  [181] = {.count = 1, .reusable = true}, SHIFT(73),
  [183] = {.count = 1, .reusable = true}, SHIFT(75),
  [185] = {.count = 1, .reusable = true}, SHIFT(76),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [191] = {.count = 1, .reusable = true}, SHIFT(78),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [197] = {.count = 1, .reusable = false}, SHIFT(79),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [202] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(51),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [214] = {.count = 1, .reusable = true}, SHIFT(80),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [218] = {.count = 1, .reusable = true}, SHIFT(81),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(82),
  [223] = {.count = 1, .reusable = true}, SHIFT(83),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(84),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
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
