#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 104
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH = 2,
  aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH = 3,
  aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH = 4,
  anon_sym_AT = 5,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH = 11,
  anon_sym_EQ = 12,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 13,
  anon_sym_COMMA = 14,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH = 15,
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
  sym_token = 35,
  sym_string = 36,
  sym__brace_balanced = 37,
  sym__quote_balanced = 38,
  sym__paren_balanced = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_junk_repeat1 = 41,
  aux_sym_comment_command_repeat1 = 42,
  aux_sym_comment_command_repeat2 = 43,
  aux_sym_entry_repeat1 = 44,
  aux_sym_value_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  alias_sym_name = 47,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = "/[^%@\\s\\n\\t\\r]/",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = "/[^%@\\n]+\\n/",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = "/[^%@\\n]+/",
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
  [sym_token] = "token",
  [sym_string] = "string",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym__paren_balanced] = "_paren_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_junk_repeat1] = "junk_repeat1",
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
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
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
  [aux_sym_junk_repeat1] = {
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      ADVANCE(13);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 14:
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
        SKIP(14);
      ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(15);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '@')
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
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
        ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
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
        ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(28);
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
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
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
        ADVANCE(28);
      END_STATE();
    case 27:
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
        ADVANCE(28);
      END_STATE();
    case 28:
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
        ADVANCE(28);
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
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
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
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'B' ||
          lookahead == 'b')
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
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
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
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
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
        ADVANCE(28);
      END_STATE();
    case 36:
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
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(38);
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
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(39);
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
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'I' ||
          lookahead == 'i')
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
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == 'G' ||
          lookahead == 'g')
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
        ADVANCE(28);
      END_STATE();
    case 42:
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
        ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
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
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '%')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(47);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '%')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '%')
        ADVANCE(50);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(51);
      if (lookahead == '(' ||
          lookahead == ')')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__paren_text);
      if (lookahead == '%')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
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
        ADVANCE(54);
      END_STATE();
    case 54:
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
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
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
        ADVANCE(54);
      END_STATE();
    case 56:
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
        SKIP(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
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
        ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
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
        ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
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
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(63);
      if (lookahead == '\"' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(63);
      END_STATE();
    case 68:
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
        SKIP(68);
      END_STATE();
    case 69:
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
        SKIP(69);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 68},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 60},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 68},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 68},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 60},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 60},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 69},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 60},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 69},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 61},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 56},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 56},
  [96] = {.lex_state = 53},
  [97] = {.lex_state = 60},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 69},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 69},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 69},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym_junk] = STATE(5),
    [sym__command_or_entry] = STATE(5),
    [sym_comment_command] = STATE(5),
    [sym_string_command] = STATE(5),
    [sym_preamble_command] = STATE(5),
    [sym_entry] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(10),
    [anon_sym_AT] = ACTIONS(12),
  },
  [2] = {
    [aux_sym_junk_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(19),
  },
  [3] = {
    [sym_name] = STATE(12),
    [sym_comment] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(25),
  },
  [5] = {
    [sym_junk] = STATE(13),
    [sym__command_or_entry] = STATE(13),
    [sym_comment_command] = STATE(13),
    [sym_string_command] = STATE(13),
    [sym_preamble_command] = STATE(13),
    [sym_entry] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(10),
    [anon_sym_AT] = ACTIONS(12),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_comment] = ACTIONS(42),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(42),
    [anon_sym_AT] = ACTIONS(42),
  },
  [7] = {
    [aux_sym_junk_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(47),
  },
  [8] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
  },
  [9] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
  },
  [10] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
  },
  [11] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
  },
  [12] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(69),
  },
  [13] = {
    [sym_junk] = STATE(13),
    [sym__command_or_entry] = STATE(13),
    [sym_comment_command] = STATE(13),
    [sym_string_command] = STATE(13),
    [sym_preamble_command] = STATE(13),
    [sym_entry] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(80),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(83),
  },
  [15] = {
    [aux_sym_junk_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
  },
  [16] = {
    [sym__brace_balanced] = STATE(26),
    [aux_sym_comment_command_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym__brace_text] = ACTIONS(101),
  },
  [17] = {
    [sym__paren_balanced] = STATE(28),
    [aux_sym_comment_command_repeat2] = STATE(28),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym__paren_text] = ACTIONS(105),
  },
  [18] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
  },
  [19] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(107),
    [sym_identifier] = ACTIONS(111),
  },
  [20] = {
    [sym_value] = STATE(36),
    [sym_token] = STATE(37),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [21] = {
    [sym_value] = STATE(38),
    [sym_token] = STATE(39),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [22] = {
    [sym_key] = STATE(41),
    [sym_comment] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(121),
  },
  [23] = {
    [sym_key] = STATE(42),
    [sym_comment] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_AT_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(121),
  },
  [24] = {
    [sym__brace_balanced] = STATE(44),
    [aux_sym_comment_command_repeat1] = STATE(44),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym__brace_text] = ACTIONS(125),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
  },
  [26] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym__brace_text] = ACTIONS(131),
  },
  [27] = {
    [sym__paren_balanced] = STATE(48),
    [aux_sym_comment_command_repeat2] = STATE(48),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym__paren_text] = ACTIONS(135),
  },
  [28] = {
    [sym__paren_balanced] = STATE(49),
    [aux_sym_comment_command_repeat2] = STATE(49),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym__paren_text] = ACTIONS(137),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(139),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
  },
  [30] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(141),
  },
  [31] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(143),
  },
  [32] = {
    [sym__brace_balanced] = STATE(53),
    [aux_sym_comment_command_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym__brace_text] = ACTIONS(147),
  },
  [33] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
  },
  [34] = {
    [sym__quote_balanced] = STATE(55),
    [aux_sym_string_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym__quote_text] = ACTIONS(153),
  },
  [35] = {
    [sym__quote_balanced] = STATE(57),
    [aux_sym_string_repeat1] = STATE(57),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym__quote_text] = ACTIONS(157),
  },
  [36] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(159),
  },
  [37] = {
    [aux_sym_value_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [38] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(159),
  },
  [39] = {
    [aux_sym_value_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [40] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
  },
  [41] = {
    [aux_sym_entry_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [42] = {
    [aux_sym_entry_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(171),
  },
  [43] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym__brace_text] = ACTIONS(173),
  },
  [44] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(175),
    [sym__brace_text] = ACTIONS(131),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
  },
  [46] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym__brace_text] = ACTIONS(184),
  },
  [47] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [sym__paren_text] = ACTIONS(187),
  },
  [48] = {
    [sym__paren_balanced] = STATE(49),
    [aux_sym_comment_command_repeat2] = STATE(49),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym__paren_text] = ACTIONS(137),
  },
  [49] = {
    [sym__paren_balanced] = STATE(49),
    [aux_sym_comment_command_repeat2] = STATE(49),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(194),
    [sym__paren_text] = ACTIONS(196),
  },
  [50] = {
    [sym_value] = STATE(69),
    [sym_token] = STATE(37),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [51] = {
    [sym_value] = STATE(70),
    [sym_token] = STATE(39),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [52] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
  },
  [53] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(201),
    [sym__brace_text] = ACTIONS(131),
  },
  [54] = {
    [sym__brace_balanced] = STATE(73),
    [aux_sym_comment_command_repeat1] = STATE(73),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym__brace_text] = ACTIONS(205),
  },
  [55] = {
    [sym__quote_balanced] = STATE(74),
    [aux_sym_string_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym__quote_text] = ACTIONS(207),
  },
  [56] = {
    [sym__brace_balanced] = STATE(76),
    [aux_sym_comment_command_repeat1] = STATE(76),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym__brace_text] = ACTIONS(211),
  },
  [57] = {
    [sym__quote_balanced] = STATE(77),
    [aux_sym_string_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym__quote_text] = ACTIONS(213),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(215),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(215),
  },
  [59] = {
    [sym_token] = STATE(78),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [60] = {
    [aux_sym_value_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [61] = {
    [aux_sym_value_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(219),
    [anon_sym_AT] = ACTIONS(219),
  },
  [63] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(221),
    [sym_identifier] = ACTIONS(223),
  },
  [64] = {
    [aux_sym_entry_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(225),
  },
  [65] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(221),
    [sym_identifier] = ACTIONS(227),
  },
  [66] = {
    [aux_sym_entry_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(229),
  },
  [67] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [sym__brace_text] = ACTIONS(231),
  },
  [68] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [sym__paren_text] = ACTIONS(233),
  },
  [69] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [70] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(235),
  },
  [71] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(237),
  },
  [72] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [sym__quote_text] = ACTIONS(239),
  },
  [73] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym__brace_text] = ACTIONS(131),
  },
  [74] = {
    [sym__quote_balanced] = STATE(74),
    [aux_sym_string_repeat1] = STATE(74),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [sym__quote_text] = ACTIONS(248),
  },
  [75] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [sym__quote_text] = ACTIONS(239),
  },
  [76] = {
    [sym__brace_balanced] = STATE(46),
    [aux_sym_comment_command_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym__brace_text] = ACTIONS(131),
  },
  [77] = {
    [sym__quote_balanced] = STATE(77),
    [aux_sym_string_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym__quote_text] = ACTIONS(256),
  },
  [78] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(259),
  },
  [79] = {
    [aux_sym_value_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(261),
  },
  [80] = {
    [aux_sym_value_repeat1] = STATE(80),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(261),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_comment] = ACTIONS(264),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(264),
    [anon_sym_AT] = ACTIONS(264),
  },
  [82] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(266),
  },
  [83] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
  },
  [84] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(270),
    [sym_identifier] = ACTIONS(223),
  },
  [85] = {
    [aux_sym_entry_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(272),
  },
  [86] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(275),
  },
  [87] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(270),
    [sym_identifier] = ACTIONS(227),
  },
  [88] = {
    [aux_sym_entry_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(277),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_comment] = ACTIONS(280),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(280),
  },
  [90] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [sym__quote_text] = ACTIONS(282),
  },
  [91] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [sym__quote_text] = ACTIONS(282),
  },
  [92] = {
    [sym_value] = STATE(97),
    [sym_token] = STATE(98),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_comment] = ACTIONS(284),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(284),
    [anon_sym_AT] = ACTIONS(284),
  },
  [94] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [sym_identifier] = ACTIONS(223),
  },
  [95] = {
    [sym_value] = STATE(97),
    [sym_token] = STATE(99),
    [sym_string] = STATE(33),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [96] = {
    [sym_field] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [sym_identifier] = ACTIONS(227),
  },
  [97] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(286),
  },
  [98] = {
    [aux_sym_value_repeat1] = STATE(100),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [99] = {
    [aux_sym_value_repeat1] = STATE(101),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [100] = {
    [aux_sym_value_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [101] = {
    [aux_sym_value_repeat1] = STATE(103),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(163),
  },
  [102] = {
    [aux_sym_value_repeat1] = STATE(102),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(261),
  },
  [103] = {
    [aux_sym_value_repeat1] = STATE(103),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(261),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 2, .reusable = true}, SHIFT(5), SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 1),
  [16] = {.count = 2, .reusable = false}, REDUCE(sym_junk, 1), SHIFT_EXTRA(),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_junk, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(6),
  [25] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = false}, SHIFT(8),
  [29] = {.count = 1, .reusable = false}, SHIFT(9),
  [31] = {.count = 1, .reusable = false}, SHIFT(10),
  [33] = {.count = 1, .reusable = false}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [39] = {.count = 2, .reusable = true}, SHIFT(13), SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 2),
  [44] = {.count = 2, .reusable = false}, REDUCE(sym_junk, 2), SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_junk, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(15),
  [51] = {.count = 1, .reusable = false}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(16),
  [55] = {.count = 1, .reusable = true}, SHIFT(17),
  [57] = {.count = 1, .reusable = true}, SHIFT(18),
  [59] = {.count = 1, .reusable = true}, SHIFT(19),
  [61] = {.count = 1, .reusable = true}, SHIFT(20),
  [63] = {.count = 1, .reusable = true}, SHIFT(21),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(22),
  [69] = {.count = 1, .reusable = true}, SHIFT(23),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [73] = {.count = 3, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13), SHIFT_EXTRA(),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_junk, 3),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_junk_repeat1, 2),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_junk_repeat1, 2), SHIFT_EXTRA(),
  [90] = {.count = 1, .reusable = false}, REDUCE(aux_sym_junk_repeat1, 2),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_junk_repeat1, 2), SHIFT_REPEAT(15),
  [95] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = false}, SHIFT(24),
  [99] = {.count = 1, .reusable = false}, SHIFT(25),
  [101] = {.count = 1, .reusable = false}, SHIFT(26),
  [103] = {.count = 1, .reusable = false}, SHIFT(27),
  [105] = {.count = 1, .reusable = false}, SHIFT(28),
  [107] = {.count = 1, .reusable = true}, SHIFT(29),
  [109] = {.count = 1, .reusable = true}, SHIFT(30),
  [111] = {.count = 1, .reusable = true}, SHIFT(31),
  [113] = {.count = 1, .reusable = true}, SHIFT(32),
  [115] = {.count = 1, .reusable = true}, SHIFT(33),
  [117] = {.count = 1, .reusable = true}, SHIFT(34),
  [119] = {.count = 1, .reusable = true}, SHIFT(35),
  [121] = {.count = 1, .reusable = true}, SHIFT(40),
  [123] = {.count = 1, .reusable = false}, SHIFT(43),
  [125] = {.count = 1, .reusable = false}, SHIFT(44),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 4, .alias_sequence_id = 1),
  [129] = {.count = 1, .reusable = false}, SHIFT(45),
  [131] = {.count = 1, .reusable = false}, SHIFT(46),
  [133] = {.count = 1, .reusable = false}, SHIFT(47),
  [135] = {.count = 1, .reusable = false}, SHIFT(48),
  [137] = {.count = 1, .reusable = false}, SHIFT(49),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 4, .alias_sequence_id = 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(50),
  [143] = {.count = 1, .reusable = true}, SHIFT(51),
  [145] = {.count = 1, .reusable = false}, SHIFT(52),
  [147] = {.count = 1, .reusable = false}, SHIFT(53),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [151] = {.count = 1, .reusable = false}, SHIFT(54),
  [153] = {.count = 1, .reusable = false}, SHIFT(55),
  [155] = {.count = 1, .reusable = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = false}, SHIFT(57),
  [159] = {.count = 1, .reusable = true}, SHIFT(58),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(59),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(62),
  [169] = {.count = 1, .reusable = true}, SHIFT(63),
  [171] = {.count = 1, .reusable = true}, SHIFT(65),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [175] = {.count = 1, .reusable = false}, SHIFT(67),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5, .alias_sequence_id = 1),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(24),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat1, 2), SHIFT_REPEAT(46),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [189] = {.count = 1, .reusable = false}, SHIFT(68),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(27),
  [194] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_command_repeat2, 2), SHIFT_REPEAT(49),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [201] = {.count = 1, .reusable = false}, SHIFT(71),
  [203] = {.count = 1, .reusable = false}, SHIFT(72),
  [205] = {.count = 1, .reusable = false}, SHIFT(73),
  [207] = {.count = 1, .reusable = false}, SHIFT(74),
  [209] = {.count = 1, .reusable = false}, SHIFT(75),
  [211] = {.count = 1, .reusable = false}, SHIFT(76),
  [213] = {.count = 1, .reusable = false}, SHIFT(77),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5, .alias_sequence_id = 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [221] = {.count = 1, .reusable = true}, SHIFT(81),
  [223] = {.count = 1, .reusable = true}, SHIFT(82),
  [225] = {.count = 1, .reusable = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true}, SHIFT(86),
  [229] = {.count = 1, .reusable = true}, SHIFT(87),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [235] = {.count = 1, .reusable = true}, SHIFT(89),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [241] = {.count = 1, .reusable = false}, SHIFT(90),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [251] = {.count = 1, .reusable = false}, SHIFT(91),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(56),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(77),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(59),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [266] = {.count = 1, .reusable = true}, SHIFT(92),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [270] = {.count = 1, .reusable = true}, SHIFT(93),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(94),
  [275] = {.count = 1, .reusable = true}, SHIFT(95),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(96),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7, .alias_sequence_id = 1),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
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
