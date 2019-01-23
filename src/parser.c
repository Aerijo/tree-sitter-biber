#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 109
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 2
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH = 15,
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
  alias_sym_comment = 50,
  alias_sym_text = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = "/[^%@\\s\\n\\t\\r]/",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_BSLASHn_SLASH] = "/[^%@\\n]+\\n/",
  [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHn_RBRACK_PLUS_SLASH] = "/[^%@\\n]+/",
  [anon_sym_AT] = "@",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = "name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = "name",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "name",
  [anon_sym_COMMA] = ",",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = "/[^\\\"\\#%'\\(\\)\\,\\=\\{\\}\\\\\\~\\s\\t\\n]+/",
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
  [alias_sym_comment] = "comment",
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
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = {
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
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = alias_sym_comment,
  },
  [2] = {
    [1] = alias_sym_text,
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(61);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(62);
      if (lookahead == '\"' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '%')
        ADVANCE(61);
      if (lookahead == '\'')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '%')
        ADVANCE(61);
      if (lookahead == '\'')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 67:
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
        SKIP(67);
      END_STATE();
    case 68:
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
      if (lookahead == '}')
        ADVANCE(12);
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
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 67},
  [43] = {.lex_state = 68},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 56},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 64},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 56},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 68},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 55},
  [75] = {.lex_state = 69},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 69},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 64},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 64},
  [83] = {.lex_state = 69},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 69},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 67},
  [91] = {.lex_state = 59},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 60},
  [96] = {.lex_state = 64},
  [97] = {.lex_state = 56},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 56},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 69},
  [103] = {.lex_state = 67},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 67},
  [108] = {.lex_state = 68},
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(33),
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
    [sym_text_brace_balanced] = STATE(26),
    [sym__brace_balanced] = STATE(27),
    [aux_sym_text_brace_balanced_repeat1] = STATE(27),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym__brace_text] = ACTIONS(101),
  },
  [17] = {
    [sym_text_paren_balanced] = STATE(29),
    [sym__paren_balanced] = STATE(30),
    [aux_sym_text_paren_balanced_repeat1] = STATE(30),
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
    [sym_value] = STATE(37),
    [sym__token] = STATE(38),
    [sym_string] = STATE(38),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [21] = {
    [sym_value] = STATE(39),
    [sym__token] = STATE(40),
    [sym_string] = STATE(40),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(121),
    [sym_integer] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [22] = {
    [sym_key] = STATE(42),
    [sym_comment] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(123),
  },
  [23] = {
    [sym_key] = STATE(43),
    [sym_comment] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_DQUOTE_BSLASH_POUND_PERCENT_SQUOTE_BSLASH_LPAREN_BSLASH_RPAREN_BSLASH_COMMA_BSLASH_EQ_BSLASH_LBRACE_BSLASH_RBRACE_BSLASH_BSLASH_BSLASH_TILDE_BSLASHs_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(123),
  },
  [24] = {
    [sym__brace_balanced] = STATE(45),
    [aux_sym_text_brace_balanced_repeat1] = STATE(45),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(125),
    [sym__brace_text] = ACTIONS(127),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
  },
  [26] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [27] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_text_brace_balanced_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__brace_text] = ACTIONS(135),
  },
  [28] = {
    [sym__paren_balanced] = STATE(49),
    [aux_sym_text_paren_balanced_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym__paren_text] = ACTIONS(139),
  },
  [29] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(141),
  },
  [30] = {
    [sym__paren_balanced] = STATE(51),
    [aux_sym_text_paren_balanced_repeat1] = STATE(51),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym__paren_text] = ACTIONS(145),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(147),
  },
  [32] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(149),
  },
  [33] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(151),
  },
  [34] = {
    [sym_text_brace_balanced] = STATE(55),
    [sym__brace_balanced] = STATE(27),
    [aux_sym_text_brace_balanced_repeat1] = STATE(27),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym__brace_text] = ACTIONS(101),
  },
  [35] = {
    [sym_text_quote_balanced] = STATE(57),
    [sym__quote_balanced] = STATE(58),
    [aux_sym_text_quote_balanced_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__quote_text] = ACTIONS(157),
  },
  [36] = {
    [sym_text_quote_balanced] = STATE(60),
    [sym__quote_balanced] = STATE(61),
    [aux_sym_text_quote_balanced_repeat1] = STATE(61),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [sym__quote_text] = ACTIONS(161),
  },
  [37] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(163),
  },
  [38] = {
    [aux_sym_value_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [39] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(163),
  },
  [40] = {
    [aux_sym_value_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [41] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [42] = {
    [aux_sym_entry_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(173),
  },
  [43] = {
    [aux_sym_entry_repeat1] = STATE(70),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(175),
  },
  [44] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym__brace_text] = ACTIONS(177),
  },
  [45] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_text_brace_balanced_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym__brace_text] = ACTIONS(135),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
  },
  [47] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_text_brace_balanced_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(186),
    [sym__brace_text] = ACTIONS(188),
  },
  [48] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym__paren_text] = ACTIONS(191),
  },
  [49] = {
    [sym__paren_balanced] = STATE(51),
    [aux_sym_text_paren_balanced_repeat1] = STATE(51),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(193),
    [sym__paren_text] = ACTIONS(145),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
  },
  [51] = {
    [sym__paren_balanced] = STATE(51),
    [aux_sym_text_paren_balanced_repeat1] = STATE(51),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym__paren_text] = ACTIONS(202),
  },
  [52] = {
    [sym_value] = STATE(73),
    [sym__token] = STATE(38),
    [sym_string] = STATE(38),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [53] = {
    [sym_value] = STATE(74),
    [sym__token] = STATE(40),
    [sym_string] = STATE(40),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(121),
    [sym_integer] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [54] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(205),
  },
  [55] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(207),
  },
  [56] = {
    [sym__brace_balanced] = STATE(77),
    [aux_sym_text_brace_balanced_repeat1] = STATE(77),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym__brace_text] = ACTIONS(211),
  },
  [57] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(213),
  },
  [58] = {
    [sym__quote_balanced] = STATE(79),
    [aux_sym_text_quote_balanced_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [sym__quote_text] = ACTIONS(217),
  },
  [59] = {
    [sym__brace_balanced] = STATE(81),
    [aux_sym_text_brace_balanced_repeat1] = STATE(81),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym__brace_text] = ACTIONS(221),
  },
  [60] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(213),
  },
  [61] = {
    [sym__quote_balanced] = STATE(82),
    [aux_sym_text_quote_balanced_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [sym__quote_text] = ACTIONS(223),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(225),
  },
  [63] = {
    [sym__token] = STATE(83),
    [sym_string] = STATE(83),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(227),
    [sym_integer] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [64] = {
    [aux_sym_value_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [65] = {
    [aux_sym_value_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(231),
  },
  [67] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
  },
  [68] = {
    [aux_sym_entry_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(237),
  },
  [69] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(233),
    [sym_identifier] = ACTIONS(239),
  },
  [70] = {
    [aux_sym_entry_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(241),
  },
  [71] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym__brace_text] = ACTIONS(243),
  },
  [72] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [sym__paren_text] = ACTIONS(245),
  },
  [73] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [74] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(247),
  },
  [75] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(249),
  },
  [76] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym__quote_text] = ACTIONS(251),
  },
  [77] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_text_brace_balanced_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym__brace_text] = ACTIONS(135),
  },
  [78] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(255),
  },
  [79] = {
    [sym__quote_balanced] = STATE(79),
    [aux_sym_text_quote_balanced_repeat1] = STATE(79),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [sym__quote_text] = ACTIONS(262),
  },
  [80] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym__quote_text] = ACTIONS(251),
  },
  [81] = {
    [sym__brace_balanced] = STATE(47),
    [aux_sym_text_brace_balanced_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym__brace_text] = ACTIONS(135),
  },
  [82] = {
    [sym__quote_balanced] = STATE(82),
    [aux_sym_text_quote_balanced_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [sym__quote_text] = ACTIONS(270),
  },
  [83] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
  },
  [84] = {
    [aux_sym_value_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
  },
  [85] = {
    [aux_sym_value_repeat1] = STATE(85),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(278),
  },
  [87] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(280),
  },
  [88] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
  },
  [89] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(284),
    [sym_identifier] = ACTIONS(235),
  },
  [90] = {
    [aux_sym_entry_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(286),
  },
  [91] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(289),
  },
  [92] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_identifier] = ACTIONS(239),
  },
  [93] = {
    [aux_sym_entry_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(291),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_comment] = ACTIONS(294),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(294),
  },
  [95] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__quote_text] = ACTIONS(296),
  },
  [96] = {
    [sym_comment] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [sym__quote_text] = ACTIONS(296),
  },
  [97] = {
    [sym_value] = STATE(102),
    [sym__token] = STATE(103),
    [sym_string] = STATE(103),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(298),
    [sym_integer] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_comment] = ACTIONS(300),
    [aux_sym_SLASH_LBRACK_CARET_PERCENT_AT_BSLASHs_BSLASHn_BSLASHt_BSLASHr_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
  },
  [99] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [sym_identifier] = ACTIONS(235),
  },
  [100] = {
    [sym_value] = STATE(102),
    [sym__token] = STATE(104),
    [sym_string] = STATE(104),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(113),
    [sym_identifier] = ACTIONS(302),
    [sym_integer] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
  },
  [101] = {
    [sym_field] = STATE(88),
    [sym_comment] = ACTIONS(25),
    [sym_identifier] = ACTIONS(239),
  },
  [102] = {
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [103] = {
    [aux_sym_value_repeat1] = STATE(105),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [104] = {
    [aux_sym_value_repeat1] = STATE(106),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [105] = {
    [aux_sym_value_repeat1] = STATE(107),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [106] = {
    [aux_sym_value_repeat1] = STATE(108),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(167),
  },
  [107] = {
    [aux_sym_value_repeat1] = STATE(107),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
  },
  [108] = {
    [aux_sym_value_repeat1] = STATE(108),
    [sym_comment] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
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
  [101] = {.count = 1, .reusable = false}, SHIFT(27),
  [103] = {.count = 1, .reusable = false}, SHIFT(28),
  [105] = {.count = 1, .reusable = false}, SHIFT(30),
  [107] = {.count = 1, .reusable = true}, SHIFT(31),
  [109] = {.count = 1, .reusable = true}, SHIFT(32),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = true}, SHIFT(34),
  [115] = {.count = 1, .reusable = true}, SHIFT(38),
  [117] = {.count = 1, .reusable = true}, SHIFT(35),
  [119] = {.count = 1, .reusable = true}, SHIFT(36),
  [121] = {.count = 1, .reusable = true}, SHIFT(40),
  [123] = {.count = 1, .reusable = true}, SHIFT(41),
  [125] = {.count = 1, .reusable = false}, SHIFT(44),
  [127] = {.count = 1, .reusable = false}, SHIFT(45),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 4),
  [131] = {.count = 1, .reusable = true}, SHIFT(46),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_text_brace_balanced, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(47),
  [137] = {.count = 1, .reusable = false}, SHIFT(48),
  [139] = {.count = 1, .reusable = false}, SHIFT(49),
  [141] = {.count = 1, .reusable = true}, SHIFT(50),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_text_paren_balanced, 1),
  [145] = {.count = 1, .reusable = false}, SHIFT(51),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 4),
  [149] = {.count = 1, .reusable = true}, SHIFT(52),
  [151] = {.count = 1, .reusable = true}, SHIFT(53),
  [153] = {.count = 1, .reusable = false}, SHIFT(54),
  [155] = {.count = 1, .reusable = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = false}, SHIFT(58),
  [159] = {.count = 1, .reusable = false}, SHIFT(59),
  [161] = {.count = 1, .reusable = false}, SHIFT(61),
  [163] = {.count = 1, .reusable = true}, SHIFT(62),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(63),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [171] = {.count = 1, .reusable = true}, SHIFT(66),
  [173] = {.count = 1, .reusable = true}, SHIFT(67),
  [175] = {.count = 1, .reusable = true}, SHIFT(69),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 2),
  [179] = {.count = 1, .reusable = false}, SHIFT(71),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5, .alias_sequence_id = 1),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(24),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_brace_balanced_repeat1, 2), SHIFT_REPEAT(47),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 2),
  [193] = {.count = 1, .reusable = false}, SHIFT(72),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 5),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(28),
  [200] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_paren_balanced_repeat1, 2), SHIFT_REPEAT(51),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(75),
  [209] = {.count = 1, .reusable = false}, SHIFT(76),
  [211] = {.count = 1, .reusable = false}, SHIFT(77),
  [213] = {.count = 1, .reusable = true}, SHIFT(78),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_text_quote_balanced, 1),
  [217] = {.count = 1, .reusable = false}, SHIFT(79),
  [219] = {.count = 1, .reusable = false}, SHIFT(80),
  [221] = {.count = 1, .reusable = false}, SHIFT(81),
  [223] = {.count = 1, .reusable = false}, SHIFT(82),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [227] = {.count = 1, .reusable = true}, SHIFT(83),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5),
  [233] = {.count = 1, .reusable = true}, SHIFT(86),
  [235] = {.count = 1, .reusable = true}, SHIFT(87),
  [237] = {.count = 1, .reusable = true}, SHIFT(89),
  [239] = {.count = 1, .reusable = true}, SHIFT(91),
  [241] = {.count = 1, .reusable = true}, SHIFT(92),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__brace_balanced, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym__paren_balanced, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(94),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3, .alias_sequence_id = 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [253] = {.count = 1, .reusable = false}, SHIFT(95),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(56),
  [260] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(79),
  [265] = {.count = 1, .reusable = false}, SHIFT(96),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(59),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_quote_balanced_repeat1, 2), SHIFT_REPEAT(82),
  [273] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(63),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6),
  [280] = {.count = 1, .reusable = true}, SHIFT(97),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(98),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(99),
  [289] = {.count = 1, .reusable = true}, SHIFT(100),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(101),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [298] = {.count = 1, .reusable = true}, SHIFT(103),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7),
  [302] = {.count = 1, .reusable = true}, SHIFT(104),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
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
