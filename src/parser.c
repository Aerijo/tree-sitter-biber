#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 99
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  sym_integer = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_SQUOTE = 18,
  sym__brace_text = 19,
  sym__quote_text = 20,
  sym__paren_text = 21,
  sym_program = 22,
  sym__command_or_entry = 23,
  sym_comment_command = 24,
  sym_string_command = 25,
  sym_preamble_command = 26,
  sym_entry = 27,
  sym_key = 28,
  sym_name = 29,
  sym_field = 30,
  sym_value = 31,
  sym_token = 32,
  sym_string = 33,
  sym__brace_balanced = 34,
  sym__quote_balanced = 35,
  sym__paren_balanced = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_comment_command_repeat1 = 38,
  aux_sym_comment_command_repeat2 = 39,
  aux_sym_entry_repeat1 = 40,
  aux_sym_value_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  alias_sym_name = 43,
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
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
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
  [alias_sym_name] = "name",
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
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_name,
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
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(13);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(21);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (lookahead != '\\' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(20);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
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
        ADVANCE(20);
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
        ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(19);
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
        ADVANCE(20);
      END_STATE();
    case 19:
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
        ADVANCE(20);
      END_STATE();
    case 20:
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
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
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
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
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
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'B' ||
          lookahead == 'b')
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
        ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
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
        ADVANCE(20);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
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
        ADVANCE(20);
      END_STATE();
    case 28:
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
        ADVANCE(20);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
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
        ADVANCE(20);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
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
        ADVANCE(20);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
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
        ADVANCE(20);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
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
        ADVANCE(20);
      END_STATE();
    case 34:
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
        ADVANCE(20);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
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
        ADVANCE(36);
      END_STATE();
    case 36:
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
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(40);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
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
        ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
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
        ADVANCE(36);
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
        ADVANCE(36);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(36);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(36);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(36);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(46);
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
        ADVANCE(36);
      END_STATE();
    case 46:
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
        ADVANCE(36);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
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
        ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
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
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(36);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'B' ||
          lookahead == 'b')
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
        ADVANCE(36);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
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
        ADVANCE(36);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(54);
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
        ADVANCE(36);
      END_STATE();
    case 54:
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
        ADVANCE(36);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
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
        ADVANCE(36);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
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
        ADVANCE(36);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
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
        ADVANCE(36);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(60);
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
        ADVANCE(36);
      END_STATE();
    case 60:
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
        ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '%')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(65);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '%')
        ADVANCE(68);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0)
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(69);
      if (lookahead == '(' ||
          lookahead == ')')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
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
      if (lookahead == ')')
        ADVANCE(7);
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
          (lookahead < '0' || lookahead > '9') &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
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
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
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
        ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(81);
      if (lookahead == '\"' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '\'')
        ADVANCE(84);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(80);
      if (lookahead == '\'')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 87:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 78},
  [29] = {.lex_state = 79},
  [30] = {.lex_state = 83},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 78},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 63},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 79},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 83},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 86},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 71},
  [59] = {.lex_state = 86},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 78},
  [67] = {.lex_state = 79},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 79},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 63},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 78},
  [74] = {.lex_state = 86},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 77},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 86},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 73},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 79},
  [86] = {.lex_state = 83},
  [87] = {.lex_state = 74},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 71},
  [90] = {.lex_state = 74},
  [91] = {.lex_state = 71},
  [92] = {.lex_state = 78},
  [93] = {.lex_state = 86},
  [94] = {.lex_state = 87},
  [95] = {.lex_state = 86},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 86},
  [98] = {.lex_state = 87},
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
    [sym_integer] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_value] = STATE(31),
    [sym_token] = STATE(32),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [16] = {
    [sym_value] = STATE(33),
    [sym_token] = STATE(34),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [17] = {
    [sym_key] = STATE(36),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(89),
  },
  [18] = {
    [sym_key] = STATE(37),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(89),
  },
  [19] = {
    [sym__brace_balanced] = STATE(39),
    [aux_sym_comment_command_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym__brace_text] = ACTIONS(93),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(95),
    [sym_junk] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
  },
  [21] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__brace_text] = ACTIONS(99),
  },
  [22] = {
    [sym__paren_balanced] = STATE(43),
    [aux_sym_comment_command_repeat2] = STATE(43),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym__paren_text] = ACTIONS(103),
  },
  [23] = {
    [sym__paren_balanced] = STATE(44),
    [aux_sym_comment_command_repeat2] = STATE(44),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym__paren_text] = ACTIONS(105),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
    [sym_junk] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
  },
  [25] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(109),
  },
  [26] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(111),
  },
  [27] = {
    [sym__brace_balanced] = STATE(48),
    [aux_sym_comment_command_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym__brace_text] = ACTIONS(115),
  },
  [28] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(117),
  },
  [29] = {
    [sym__quote_balanced] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym__quote_text] = ACTIONS(121),
  },
  [30] = {
    [sym__quote_balanced] = STATE(52),
    [aux_sym_string_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [sym__quote_text] = ACTIONS(125),
  },
  [31] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(127),
  },
  [32] = {
    [aux_sym_value_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [33] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(127),
  },
  [34] = {
    [aux_sym_value_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [35] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
  },
  [36] = {
    [aux_sym_entry_repeat1] = STATE(59),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(137),
  },
  [37] = {
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [38] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym__brace_text] = ACTIONS(141),
  },
  [39] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym__brace_text] = ACTIONS(99),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_comment] = ACTIONS(145),
    [sym_junk] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
  },
  [41] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym__brace_text] = ACTIONS(152),
  },
  [42] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [sym__paren_text] = ACTIONS(155),
  },
  [43] = {
    [sym__paren_balanced] = STATE(44),
    [aux_sym_comment_command_repeat2] = STATE(44),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(157),
    [sym__paren_text] = ACTIONS(105),
  },
  [44] = {
    [sym__paren_balanced] = STATE(44),
    [aux_sym_comment_command_repeat2] = STATE(44),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym__paren_text] = ACTIONS(164),
  },
  [45] = {
    [sym_value] = STATE(64),
    [sym_token] = STATE(32),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [46] = {
    [sym_value] = STATE(65),
    [sym_token] = STATE(34),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [47] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [48] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym__brace_text] = ACTIONS(99),
  },
  [49] = {
    [sym__brace_balanced] = STATE(68),
    [aux_sym_comment_command_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(171),
    [sym__brace_text] = ACTIONS(173),
  },
  [50] = {
    [sym__quote_balanced] = STATE(69),
    [aux_sym_string_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__quote_text] = ACTIONS(175),
  },
  [51] = {
    [sym__brace_balanced] = STATE(71),
    [aux_sym_comment_command_repeat1] = STATE(71),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym__brace_text] = ACTIONS(179),
  },
  [52] = {
    [sym__quote_balanced] = STATE(72),
    [aux_sym_string_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym__quote_text] = ACTIONS(181),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [sym_junk] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
  },
  [54] = {
    [sym_token] = STATE(73),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [55] = {
    [aux_sym_value_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [56] = {
    [aux_sym_value_repeat1] = STATE(75),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(187),
    [sym_junk] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
  },
  [58] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
  },
  [59] = {
    [aux_sym_entry_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(193),
  },
  [60] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym_identifier] = ACTIONS(195),
  },
  [61] = {
    [aux_sym_entry_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(197),
  },
  [62] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym__brace_text] = ACTIONS(199),
  },
  [63] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [sym__paren_text] = ACTIONS(201),
  },
  [64] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(203),
  },
  [65] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [66] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(205),
  },
  [67] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym__quote_text] = ACTIONS(207),
  },
  [68] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym__brace_text] = ACTIONS(99),
  },
  [69] = {
    [sym__quote_balanced] = STATE(69),
    [aux_sym_string_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym__quote_text] = ACTIONS(216),
  },
  [70] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym__quote_text] = ACTIONS(207),
  },
  [71] = {
    [sym__brace_balanced] = STATE(41),
    [aux_sym_comment_command_repeat1] = STATE(41),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym__brace_text] = ACTIONS(99),
  },
  [72] = {
    [sym__quote_balanced] = STATE(72),
    [aux_sym_string_repeat1] = STATE(72),
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [sym__quote_text] = ACTIONS(224),
  },
  [73] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [74] = {
    [aux_sym_value_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
  },
  [75] = {
    [aux_sym_value_repeat1] = STATE(75),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
    [sym_junk] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
  },
  [77] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(234),
  },
  [78] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(236),
  },
  [79] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym_identifier] = ACTIONS(191),
  },
  [80] = {
    [aux_sym_entry_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(240),
  },
  [81] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(243),
  },
  [82] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(238),
    [sym_identifier] = ACTIONS(195),
  },
  [83] = {
    [aux_sym_entry_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(245),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_comment] = ACTIONS(248),
    [sym_junk] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(248),
  },
  [85] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [sym__quote_text] = ACTIONS(250),
  },
  [86] = {
    [sym_comment] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym__quote_text] = ACTIONS(250),
  },
  [87] = {
    [sym_value] = STATE(92),
    [sym_token] = STATE(93),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_comment] = ACTIONS(252),
    [sym_junk] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(252),
  },
  [89] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(191),
  },
  [90] = {
    [sym_value] = STATE(92),
    [sym_token] = STATE(94),
    [sym_string] = STATE(28),
    [sym_comment] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [91] = {
    [sym_field] = STATE(78),
    [sym_comment] = ACTIONS(14),
    [sym_identifier] = ACTIONS(195),
  },
  [92] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
  },
  [93] = {
    [aux_sym_value_repeat1] = STATE(95),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [94] = {
    [aux_sym_value_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [95] = {
    [aux_sym_value_repeat1] = STATE(97),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [96] = {
    [aux_sym_value_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(131),
  },
  [97] = {
    [aux_sym_value_repeat1] = STATE(97),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
  },
  [98] = {
    [aux_sym_value_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(229),
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
  [87] = {.count = 1, .reusable = true}, SHIFT(30),
  [89] = {.count = 1, .reusable = true}, SHIFT(35),
  [91] = {.count = 1, .reusable = false}, SHIFT(38),
  [93] = {.count = 1, .reusable = false}, SHIFT(39),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 4, .alias_sequence_id = 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(40),
  [99] = {.count = 1, .reusable = false}, SHIFT(41),
  [101] = {.count = 1, .reusable = false}, SHIFT(42),
  [103] = {.count = 1, .reusable = false}, SHIFT(43),
  [105] = {.count = 1, .reusable = false}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 4, .alias_sequence_id = 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(45),
  [111] = {.count = 1, .reusable = true}, SHIFT(46),
  [113] = {.count = 1, .reusable = false}, SHIFT(47),
  [115] = {.count = 1, .reusable = false}, SHIFT(48),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(49),
  [121] = {.count = 1, .reusable = false}, SHIFT(50),
  [123] = {.count = 1, .reusable = false}, SHIFT(51),
  [125] = {.count = 1, .reusable = false}, SHIFT(52),
  [127] = {.count = 1, .reusable = true}, SHIFT(53),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(54),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(57),
  [137] = {.count = 1, .reusable = true}, SHIFT(58),
  [139] = {.count = 1, .reusable = true}, SHIFT(60),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(62),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5, .alias_sequence_id = 1),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(19),
  [150] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(41),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [157] = {.count = 1, .reusable = false}, SHIFT(63),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(22),
  [162] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(44),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [169] = {.count = 1, .reusable = false}, SHIFT(66),
  [171] = {.count = 1, .reusable = false}, SHIFT(67),
  [173] = {.count = 1, .reusable = false}, SHIFT(68),
  [175] = {.count = 1, .reusable = false}, SHIFT(69),
  [177] = {.count = 1, .reusable = false}, SHIFT(70),
  [179] = {.count = 1, .reusable = false}, SHIFT(71),
  [181] = {.count = 1, .reusable = false}, SHIFT(72),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5, .alias_sequence_id = 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [189] = {.count = 1, .reusable = true}, SHIFT(76),
  [191] = {.count = 1, .reusable = true}, SHIFT(77),
  [193] = {.count = 1, .reusable = true}, SHIFT(79),
  [195] = {.count = 1, .reusable = true}, SHIFT(81),
  [197] = {.count = 1, .reusable = true}, SHIFT(82),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [203] = {.count = 1, .reusable = true}, SHIFT(84),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [209] = {.count = 1, .reusable = false}, SHIFT(85),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(49),
  [214] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [219] = {.count = 1, .reusable = false}, SHIFT(86),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(72),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(54),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [234] = {.count = 1, .reusable = true}, SHIFT(87),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(88),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(89),
  [243] = {.count = 1, .reusable = true}, SHIFT(90),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(91),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7, .alias_sequence_id = 1),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
