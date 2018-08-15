#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 254
#define SYMBOL_COUNT 169
#define ALIAS_COUNT 1
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_Feature_COLON = 1,
  sym_title = 2,
  aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH = 3,
  anon_sym_Background_COLON = 4,
  sym_tag = 5,
  anon_sym_Language = 6,
  anon_sym_PERCENTOWL = 7,
  anon_sym_PERCENTCommonLogic = 8,
  anon_sym_Test = 9,
  anon_sym_the = 10,
  anon_sym_ontology = 11,
  anon_sym_Scenario_COLON = 12,
  anon_sym_scenario = 13,
  sym_infer = 14,
  sym_is_enumerated_as = 15,
  sym_a = 16,
  anon_sym_subclass = 17,
  anon_sym_of = 18,
  sym_subclass_of = 19,
  anon_sym_every = 20,
  sym_disjoint = 21,
  anon_sym_no = 22,
  anon_sym_are = 23,
  anon_sym_arent = 24,
  anon_sym_aren_SQUOTEt = 25,
  anon_sym_arenot = 26,
  sym_the_same_as = 27,
  sym_different_KW = 28,
  sym_are_different = 29,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 30,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 31,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 32,
  sym_delimiter = 33,
  anon_sym_than = 34,
  anon_sym_to = 35,
  anon_sym_on = 36,
  anon_sym_in = 37,
  sym__qname = 38,
  sym_uriref = 39,
  sym_And = 40,
  sym_Given = 41,
  sym_Then = 42,
  anon_sym_then = 43,
  anon_sym_Then = 44,
  anon_sym_consistent = 45,
  anon_sym_inconsistent = 46,
  sym_is_defined_as = 47,
  anon_sym_don_SQUOTEt = 48,
  anon_sym_infer1 = 49,
  anon_sym_that = 50,
  sym__asterisk = 51,
  anon_sym_DOT = 52,
  anon_sym_that1 = 53,
  sym__space = 54,
  aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH = 55,
  anon_sym_and = 56,
  anon_sym_neither = 57,
  anon_sym_nor = 58,
  anon_sym_or = 59,
  anon_sym_COMMA = 60,
  anon_sym_an = 61,
  anon_sym_as = 62,
  anon_sym_who = 63,
  anon_sym_which = 64,
  anon_sym_some = 65,
  anon_sym_only = 66,
  anon_sym_does = 67,
  anon_sym_has = 68,
  sym_is = 69,
  anon_sym_not = 70,
  anon_sym_doesnt = 71,
  anon_sym_doesn_SQUOTEt = 72,
  anon_sym_doesnot = 73,
  anon_sym_hasnt = 74,
  anon_sym_hasn_SQUOTEt = 75,
  anon_sym_hasnot = 76,
  anon_sym_isnt = 77,
  anon_sym_isn_SQUOTEt = 78,
  anon_sym_isnot = 79,
  anon_sym_given = 80,
  anon_sym_Given = 81,
  anon_sym_defined = 82,
  anon_sym_enumerated = 83,
  sym_that1 = 84,
  anon_sym_don_SQUOTEt1 = 85,
  sym_source_file = 86,
  sym_feature = 87,
  sym_narrative = 88,
  sym_background = 89,
  sym_language_setting = 90,
  sym__language_ID = 91,
  sym_import = 92,
  sym_scenario = 93,
  sym_scenario_head = 94,
  sym_scenario_body = 95,
  sym_assumption = 96,
  sym_test = 97,
  sym__inference_test = 98,
  sym_consistency_test = 99,
  sym__sentence = 100,
  sym__infer_sentence = 101,
  sym_definition = 102,
  sym_proposition = 103,
  sym_universal = 104,
  sym_universal_positive = 105,
  sym_every = 106,
  sym_universal_negative = 107,
  sym_no = 108,
  sym_qname_list = 109,
  sym_qname = 110,
  sym_particular = 111,
  sym_are = 112,
  sym_arenot1 = 113,
  sym_fact = 114,
  sym_instance = 115,
  sym_relation = 116,
  sym_equation = 117,
  sym_different = 118,
  sym_source = 119,
  sym_source_body = 120,
  sym_class_expression = 121,
  sym_pos_class = 122,
  sym_class_atom = 123,
  sym_conjunction = 124,
  sym_disjunction = 125,
  sym_qualified_class = 126,
  sym_qualifier = 127,
  sym_quantifier = 128,
  sym_predicate_phrase = 129,
  sym_predicate_open = 130,
  sym_predicate_end = 131,
  sym_class_name = 132,
  sym_predicate_name = 133,
  sym_predicate_fragement = 134,
  sym_indiv_name = 135,
  sym_consistency = 136,
  sym__eol = 137,
  sym_and = 138,
  sym_neither = 139,
  sym_nor = 140,
  sym_or = 141,
  sym_comma = 142,
  sym_the = 143,
  sym_an = 144,
  sym_as = 145,
  sym_pronoun = 146,
  sym_some = 147,
  sym_only = 148,
  sym_does = 149,
  sym_has = 150,
  sym_not = 151,
  sym_doesnot1 = 152,
  sym_hasnot1 = 153,
  sym_isnot1 = 154,
  sym_dot = 155,
  sym_donot = 156,
  aux_sym_source_file_repeat1 = 157,
  aux_sym_feature_repeat1 = 158,
  aux_sym_narrative_repeat1 = 159,
  aux_sym_background_repeat1 = 160,
  aux_sym_scenario_body_repeat1 = 161,
  aux_sym_definition_repeat1 = 162,
  aux_sym_qname_list_repeat1 = 163,
  aux_sym_source_body_repeat1 = 164,
  aux_sym_conjunction_repeat1 = 165,
  aux_sym_conjunction_repeat2 = 166,
  aux_sym_disjunction_repeat1 = 167,
  aux_sym__eol_repeat1 = 168,
  alias_sym_indiv_name = 169,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_Feature_COLON] = "Feature:",
  [sym_title] = "title",
  [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = "/[^]/",
  [anon_sym_Background_COLON] = "Background:",
  [sym_tag] = "tag",
  [anon_sym_Language] = "Language",
  [anon_sym_PERCENTOWL] = "%OWL",
  [anon_sym_PERCENTCommonLogic] = "%CommonLogic",
  [anon_sym_Test] = "Test",
  [anon_sym_the] = "the",
  [anon_sym_ontology] = "ontology",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_scenario] = "scenario",
  [sym_infer] = "infer",
  [sym_is_enumerated_as] = "is_enumerated_as",
  [sym_a] = "a",
  [anon_sym_subclass] = "subclass",
  [anon_sym_of] = "of",
  [sym_subclass_of] = "subclass_of",
  [anon_sym_every] = "every",
  [sym_disjoint] = "disjoint",
  [anon_sym_no] = "no",
  [anon_sym_are] = "are",
  [anon_sym_arent] = "aren’t",
  [anon_sym_aren_SQUOTEt] = "aren't",
  [anon_sym_arenot] = "are not",
  [sym_the_same_as] = "the_same_as",
  [sym_different_KW] = "different_KW",
  [sym_are_different] = "are_different",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"[^\"]/",
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"\"[^\"]/",
  [sym_delimiter] = "delimiter",
  [anon_sym_than] = "than",
  [anon_sym_to] = "to",
  [anon_sym_on] = "on",
  [anon_sym_in] = "in",
  [sym__qname] = "_qname",
  [sym_uriref] = "uriref",
  [sym_And] = "And",
  [sym_Given] = "Given",
  [sym_Then] = "Then",
  [anon_sym_then] = "then",
  [anon_sym_Then] = "Then",
  [anon_sym_consistent] = "consistent",
  [anon_sym_inconsistent] = "inconsistent",
  [sym_is_defined_as] = "is_defined_as",
  [anon_sym_don_SQUOTEt] = "don't ",
  [anon_sym_infer1] = "infer ",
  [anon_sym_that] = "that ",
  [sym__asterisk] = "_asterisk",
  [anon_sym_DOT] = ".",
  [anon_sym_that1] = "that",
  [sym__space] = "_space",
  [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = "/[\\r\\n]/",
  [anon_sym_and] = "and",
  [anon_sym_neither] = "neither",
  [anon_sym_nor] = "nor",
  [anon_sym_or] = "or",
  [anon_sym_COMMA] = ",",
  [anon_sym_an] = "an",
  [anon_sym_as] = "as",
  [anon_sym_who] = "who",
  [anon_sym_which] = "which",
  [anon_sym_some] = "some",
  [anon_sym_only] = "only",
  [anon_sym_does] = "does",
  [anon_sym_has] = "has",
  [sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_doesnt] = "doesn’t",
  [anon_sym_doesn_SQUOTEt] = "doesn't",
  [anon_sym_doesnot] = "does not",
  [anon_sym_hasnt] = "hasn’t",
  [anon_sym_hasn_SQUOTEt] = "hasn't",
  [anon_sym_hasnot] = "has not",
  [anon_sym_isnt] = "isn’t",
  [anon_sym_isn_SQUOTEt] = "isn't",
  [anon_sym_isnot] = "is not",
  [anon_sym_given] = "given",
  [anon_sym_Given] = "Given",
  [anon_sym_defined] = "defined",
  [anon_sym_enumerated] = "enumerated",
  [sym_that1] = "that",
  [anon_sym_don_SQUOTEt1] = "don't",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_narrative] = "narrative",
  [sym_background] = "background",
  [sym_language_setting] = "language_setting",
  [sym__language_ID] = "_language_ID",
  [sym_import] = "import",
  [sym_scenario] = "scenario",
  [sym_scenario_head] = "scenario_head",
  [sym_scenario_body] = "scenario_body",
  [sym_assumption] = "assumption",
  [sym_test] = "test",
  [sym__inference_test] = "_inference_test",
  [sym_consistency_test] = "consistency_test",
  [sym__sentence] = "_sentence",
  [sym__infer_sentence] = "_infer_sentence",
  [sym_definition] = "definition",
  [sym_proposition] = "proposition",
  [sym_universal] = "universal",
  [sym_universal_positive] = "universal_positive",
  [sym_every] = "every",
  [sym_universal_negative] = "universal_negative",
  [sym_no] = "no",
  [sym_qname_list] = "qname_list",
  [sym_qname] = "qname",
  [sym_particular] = "particular",
  [sym_are] = "are",
  [sym_arenot1] = "arenot",
  [sym_fact] = "fact",
  [sym_instance] = "instance",
  [sym_relation] = "relation",
  [sym_equation] = "equation",
  [sym_different] = "different",
  [sym_source] = "source",
  [sym_source_body] = "source_body",
  [sym_class_expression] = "class_expression",
  [sym_pos_class] = "pos_class",
  [sym_class_atom] = "class_atom",
  [sym_conjunction] = "conjunction",
  [sym_disjunction] = "disjunction",
  [sym_qualified_class] = "qualified_class",
  [sym_qualifier] = "qualifier",
  [sym_quantifier] = "quantifier",
  [sym_predicate_phrase] = "predicate_phrase",
  [sym_predicate_open] = "predicate_open",
  [sym_predicate_end] = "predicate_end",
  [sym_class_name] = "class_name",
  [sym_predicate_name] = "predicate_name",
  [sym_predicate_fragement] = "predicate_fragement",
  [sym_indiv_name] = "indiv_name",
  [sym_consistency] = "consistency",
  [sym__eol] = "_eol",
  [sym_and] = "and",
  [sym_neither] = "neither",
  [sym_nor] = "nor",
  [sym_or] = "or",
  [sym_comma] = "comma",
  [sym_the] = "the",
  [sym_an] = "an",
  [sym_as] = "as",
  [sym_pronoun] = "pronoun",
  [sym_some] = "some",
  [sym_only] = "only",
  [sym_does] = "does",
  [sym_has] = "has",
  [sym_not] = "not",
  [sym_doesnot1] = "doesnot",
  [sym_hasnot1] = "hasnot",
  [sym_isnot1] = "isnot",
  [sym_dot] = "dot",
  [sym_donot] = "donot",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_narrative_repeat1] = "narrative_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_body_repeat1] = "scenario_body_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_qname_list_repeat1] = "qname_list_repeat1",
  [aux_sym_source_body_repeat1] = "source_body_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym__eol_repeat1] = "_eol_repeat1",
  [alias_sym_indiv_name] = "indiv_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Feature_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Background_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Language] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTOWL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTCommonLogic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ontology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scenario] = {
    .visible = true,
    .named = false,
  },
  [sym_infer] = {
    .visible = true,
    .named = true,
  },
  [sym_is_enumerated_as] = {
    .visible = true,
    .named = true,
  },
  [sym_a] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_subclass_of] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_every] = {
    .visible = true,
    .named = false,
  },
  [sym_disjoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aren_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arenot] = {
    .visible = true,
    .named = false,
  },
  [sym_the_same_as] = {
    .visible = true,
    .named = true,
  },
  [sym_different_KW] = {
    .visible = true,
    .named = true,
  },
  [sym_are_different] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym__qname] = {
    .visible = false,
    .named = true,
  },
  [sym_uriref] = {
    .visible = true,
    .named = true,
  },
  [sym_And] = {
    .visible = true,
    .named = true,
  },
  [sym_Given] = {
    .visible = true,
    .named = true,
  },
  [sym_Then] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consistent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inconsistent] = {
    .visible = true,
    .named = false,
  },
  [sym_is_defined_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_don_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infer1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [sym__asterisk] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that1] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neither] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_an] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_who] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_which] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_does] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enumerated] = {
    .visible = true,
    .named = false,
  },
  [sym_that1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_don_SQUOTEt1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_narrative] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_language_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__language_ID] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_head] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__inference_test] = {
    .visible = false,
    .named = true,
  },
  [sym_consistency_test] = {
    .visible = true,
    .named = true,
  },
  [sym__sentence] = {
    .visible = false,
    .named = true,
  },
  [sym__infer_sentence] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_proposition] = {
    .visible = true,
    .named = true,
  },
  [sym_universal] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_every] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_no] = {
    .visible = true,
    .named = true,
  },
  [sym_qname_list] = {
    .visible = true,
    .named = true,
  },
  [sym_qname] = {
    .visible = true,
    .named = true,
  },
  [sym_particular] = {
    .visible = true,
    .named = true,
  },
  [sym_are] = {
    .visible = true,
    .named = true,
  },
  [sym_arenot1] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_different] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pos_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_class] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_open] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_end] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_indiv_name] = {
    .visible = true,
    .named = true,
  },
  [sym_consistency] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_neither] = {
    .visible = true,
    .named = true,
  },
  [sym_nor] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_the] = {
    .visible = true,
    .named = true,
  },
  [sym_an] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_pronoun] = {
    .visible = true,
    .named = true,
  },
  [sym_some] = {
    .visible = true,
    .named = true,
  },
  [sym_only] = {
    .visible = true,
    .named = true,
  },
  [sym_does] = {
    .visible = true,
    .named = true,
  },
  [sym_has] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_doesnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_hasnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_isnot1] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_donot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_narrative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qname_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__eol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_indiv_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_indiv_name,
    [2] = alias_sym_indiv_name,
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
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'B')
        ADVANCE(31);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead == 'G')
        ADVANCE(50);
      if (lookahead == 'L')
        ADVANCE(56);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(73);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'd')
        ADVANCE(116);
      if (lookahead == 'e')
        ADVANCE(153);
      if (lookahead == 'g')
        ADVANCE(167);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == 'i')
        ADVANCE(184);
      if (lookahead == 'n')
        ADVANCE(264);
      if (lookahead == 'o')
        ADVANCE(274);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(304);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 7:
      if (lookahead == 'C')
        ADVANCE(8);
      if (lookahead == 'O')
        ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'o')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'm')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'm')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'o')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'n')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'L')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'g')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'i')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'c')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENTCommonLogic);
      END_STATE();
    case 19:
      if (lookahead == 'W')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'L')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENTOWL);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'n')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'd')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_And);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'c')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'k')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'g')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'r')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'o')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'u')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'd')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Background_COLON);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'a')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'u')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'v')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Given);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_Given);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'a')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'g')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'g')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Language);
      END_STATE();
    case 64:
      if (lookahead == 'c')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'a')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'i')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'o')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == ':')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'h')
        ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 's')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 77:
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'n')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Then);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_Then);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == 'n')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 's')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'd')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 84:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == ' ')
        ADVANCE(86);
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'f')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'f')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'r')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'n')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 't')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_are_different);
      END_STATE();
    case 96:
      if (lookahead == 'o')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 't')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_arenot);
      END_STATE();
    case 99:
      if (lookahead == '\'')
        ADVANCE(100);
      if (lookahead == 8217)
        ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 't')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_aren_SQUOTEt);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_arent);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_a);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 's')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 's')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 't')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(123);
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'f')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'i')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'n')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'd')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 123:
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'f')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'n')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_different_KW);
      END_STATE();
    case 131:
      if (lookahead == 'j')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'o')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'i')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_disjoint);
      END_STATE();
    case 137:
      if (lookahead == 'e')
        ADVANCE(138);
      if (lookahead == 'n')
        ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 's')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_does);
      if (lookahead == ' ')
        ADVANCE(140);
      if (lookahead == 'n')
        ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 'n')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'o')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_doesnot);
      END_STATE();
    case 144:
      if (lookahead == '\'')
        ADVANCE(145);
      if (lookahead == 8217)
        ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_doesn_SQUOTEt);
      END_STATE();
    case 147:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_doesnt);
      END_STATE();
    case 149:
      if (lookahead == '\'')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt1);
      if (lookahead == ' ')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      END_STATE();
    case 153:
      if (lookahead == 'n')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'u')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'm')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'r')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'a')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'd')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_enumerated);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'y')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 167:
      if (lookahead == 'i')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'v')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_given);
      END_STATE();
    case 172:
      if (lookahead == 'a')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 's')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == ' ')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 175:
      if (lookahead == 'n')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'o')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_hasnot);
      END_STATE();
    case 179:
      if (lookahead == '\'')
        ADVANCE(180);
      if (lookahead == 8217)
        ADVANCE(182);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_hasn_SQUOTEt);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_hasnt);
      END_STATE();
    case 184:
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'f')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'o')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 's')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'i')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 's')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'r')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == ' ')
        ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_infer1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_infer);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead == ' ')
        ADVANCE(202);
      if (lookahead == 'n')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(257);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(257);
      END_STATE();
    case 203:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 's')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == 'u')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'b')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'c')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'l')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'a')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 's')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 's')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'o')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'f')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_subclass_of);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'f')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'i')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'n')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'd')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'a')
        ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 's')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_is_defined_as);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(227);
      END_STATE();
    case 228:
      if (lookahead == 'n')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'u')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'm')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'a')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'e')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'd')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'a')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(238);
      END_STATE();
    case 239:
      if (lookahead == 's')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_is_enumerated_as);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(241);
      END_STATE();
    case 242:
      if (lookahead == 'o')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_isnot);
      END_STATE();
    case 245:
      if (lookahead == 'h')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 's')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      END_STATE();
    case 249:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'm')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      END_STATE();
    case 254:
      if (lookahead == 's')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_the_same_as);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == '\'')
        ADVANCE(259);
      if (lookahead == 8217)
        ADVANCE(262);
      END_STATE();
    case 259:
      if (lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(261);
      END_STATE();
    case 262:
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_isnt);
      END_STATE();
    case 264:
      if (lookahead == 'e')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(271);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 't')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'h')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'r')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_neither);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'r')
        ADVANCE(272);
      if (lookahead == 't')
        ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 274:
      if (lookahead == 'f')
        ADVANCE(275);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 'r')
        ADVANCE(285);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'l')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(279);
      END_STATE();
    case 277:
      if (lookahead == 'y')
        ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 279:
      if (lookahead == 'o')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'l')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'o')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'g')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'y')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ontology);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 286:
      if (lookahead == 'c')
        ADVANCE(287);
      if (lookahead == 'o')
        ADVANCE(294);
      if (lookahead == 'u')
        ADVANCE(297);
      END_STATE();
    case 287:
      if (lookahead == 'e')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'a')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'r')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'i')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'o')
        ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_scenario);
      END_STATE();
    case 294:
      if (lookahead == 'm')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 297:
      if (lookahead == 'b')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'c')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'a')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 's')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 's')
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_subclass);
      END_STATE();
    case 304:
      if (lookahead == 'h')
        ADVANCE(305);
      if (lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 305:
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead == 'e')
        ADVANCE(311);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 't')
        ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_that1);
      if (lookahead == ' ')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_that);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_that1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == 'n')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 314:
      if (lookahead == 'h')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'o')
        ADVANCE(319);
      END_STATE();
    case 316:
      if (lookahead == 'c')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'h')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_which);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_who);
      END_STATE();
    case 320:
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(320);
      END_STATE();
    case 321:
      if (lookahead == '\n')
        SKIP(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(323);
      END_STATE();
    case 324:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      END_STATE();
    case 325:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'B')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      END_STATE();
    case 326:
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 328:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      END_STATE();
    case 329:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      END_STATE();
    case 330:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(330);
      END_STATE();
    case 331:
      if (lookahead == 'i')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'v')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'e')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'n')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(55);
      END_STATE();
    case 336:
      if (lookahead == 'h')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'e')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(80);
      END_STATE();
    case 340:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(341);
      if (lookahead == 'B')
        ADVANCE(342);
      if (lookahead == 'S')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(344);
      ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(65);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      END_STATE();
    case 345:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(341);
      if (lookahead == 'B')
        ADVANCE(342);
      if (lookahead == 'S')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(344);
      ADVANCE(344);
      END_STATE();
    case 346:
      if (lookahead == 'L')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(346);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 348:
      if (lookahead == '%')
        ADVANCE(349);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'd')
        ADVANCE(368);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'i')
        ADVANCE(378);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == 't')
        ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 349:
      if (lookahead == 'C')
        ADVANCE(350);
      if (lookahead == 'O')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'm')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'm')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'n')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'L')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'g')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'i')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'c')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PERCENTCommonLogic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__qname);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'W')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'L')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PERCENTOWL);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'n')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_an);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'n')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == '\'')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 371:
      if (lookahead == 't')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'v')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'r')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'y')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_every);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'n')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'f')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'r')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'm')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'h')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'a')
        ADVANCE(391);
      if (lookahead == 'e')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 't')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_the);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 394:
      if (lookahead == '%')
        ADVANCE(349);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == 't')
        ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'h')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'a')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 397:
      if (lookahead == ' ')
        ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 399:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == 'A')
        ADVANCE(400);
      if (lookahead == 'G')
        ADVANCE(401);
      if (lookahead == 'T')
        ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(344);
      if (lookahead != 0)
        ADVANCE(344);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(28);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(332);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH);
      if (lookahead == 'h')
        ADVANCE(337);
      END_STATE();
    case 403:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == 'A')
        ADVANCE(400);
      if (lookahead == 'G')
        ADVANCE(401);
      if (lookahead == 'T')
        ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(344);
      if (lookahead != 0)
        ADVANCE(344);
      END_STATE();
    case 404:
      if (lookahead == '%')
        ADVANCE(349);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead == 't')
        ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 405:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 406:
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'd')
        ADVANCE(409);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == 'i')
        ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(406);
      END_STATE();
    case 407:
      if (lookahead == 'n')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'd')
        ADVANCE(83);
      END_STATE();
    case 409:
      if (lookahead == 'o')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 411:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 412:
      if (lookahead == '%')
        ADVANCE(349);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead == 's')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 413:
      if (lookahead == '\"')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      if (lookahead == '\"')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == '\"')
        ADVANCE(4);
      END_STATE();
    case 416:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(416);
      END_STATE();
    case 417:
      if (lookahead == 'a')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      END_STATE();
    case 418:
      if (lookahead == 'n')
        ADVANCE(408);
      if (lookahead == 'r')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'e')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 421:
      if (lookahead == 'd')
        ADVANCE(409);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == 'i')
        ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(421);
      END_STATE();
    case 422:
      if (lookahead == 's')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == ' ')
        ADVANCE(424);
      if (lookahead == 'n')
        ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(425);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 426:
      if (lookahead == '\'')
        ADVANCE(427);
      if (lookahead == 8217)
        ADVANCE(262);
      END_STATE();
    case 427:
      if (lookahead == 't')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      END_STATE();
    case 429:
      if (lookahead == 's')
        ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      END_STATE();
    case 430:
      if (lookahead == 'c')
        ADVANCE(287);
      END_STATE();
    case 431:
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(431);
      END_STATE();
    case 432:
      if (lookahead == 't')
        ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(432);
      if (lookahead != 0)
        ADVANCE(436);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead == 'e')
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_uriref);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      END_STATE();
    case 438:
      if (lookahead == '%')
        ADVANCE(349);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 439:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(444);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == 't')
        ADVANCE(450);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(439);
      END_STATE();
    case 440:
      if (lookahead == 'n')
        ADVANCE(408);
      if (lookahead == 'r')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == ' ')
        ADVANCE(443);
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 443:
      if (lookahead == 'n')
        ADVANCE(96);
      END_STATE();
    case 444:
      if (lookahead == 's')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(446);
      END_STATE();
    case 447:
      if (lookahead == 'o')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'r')
        ADVANCE(272);
      END_STATE();
    case 449:
      if (lookahead == 'r')
        ADVANCE(285);
      END_STATE();
    case 450:
      if (lookahead == 'h')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'a')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 't')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_that1);
      END_STATE();
    case 454:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'i')
        ADVANCE(444);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == 't')
        ADVANCE(450);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      END_STATE();
    case 455:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(456);
      if (lookahead != 0)
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 457:
      if (lookahead == 'i')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      END_STATE();
    case 458:
      if (lookahead == 's')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 460:
      if (lookahead == 'd')
        ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(460);
      END_STATE();
    case 461:
      if (lookahead == 'i')
        ADVANCE(123);
      END_STATE();
    case 462:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'i')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 't')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'h')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'r')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_neither);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 't')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 472:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead == 't')
        ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'h')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'e')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 475:
      if (lookahead == 'a')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(475);
      END_STATE();
    case 476:
      if (lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 477:
      if (lookahead == 'a')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      END_STATE();
    case 478:
      if (lookahead == 'r')
        ADVANCE(441);
      END_STATE();
    case 479:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == 't')
        ADVANCE(450);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(479);
      END_STATE();
    case 480:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      END_STATE();
    case 481:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == 't')
        ADVANCE(450);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      END_STATE();
    case 482:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 483:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(483);
      END_STATE();
    case 484:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'i')
        ADVANCE(485);
      if (lookahead == 'o')
        ADVANCE(487);
      if (lookahead == 't')
        ADVANCE(489);
      if (lookahead == 'w')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(484);
      END_STATE();
    case 485:
      if (lookahead == 'n')
        ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 487:
      if (lookahead == 'f')
        ADVANCE(275);
      if (lookahead == 'n')
        ADVANCE(488);
      if (lookahead == 'r')
        ADVANCE(285);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 489:
      if (lookahead == 'h')
        ADVANCE(490);
      if (lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 490:
      if (lookahead == 'a')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead == 't')
        ADVANCE(453);
      END_STATE();
    case 492:
      if (lookahead == 'o')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 't')
        ADVANCE(279);
      END_STATE();
    case 495:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 'n')
        ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__qname);
      if (lookahead == 'o')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(362);
      END_STATE();
    case 497:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      END_STATE();
    case 498:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(27);
      if (lookahead == 'G')
        ADVANCE(331);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead == 'T')
        ADVANCE(336);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(498);
      END_STATE();
    case 499:
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'i')
        ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(499);
      END_STATE();
    case 500:
      if (lookahead == 'n')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 'c')
        ADVANCE(186);
      END_STATE();
    case 502:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead != 0)
        ADVANCE(436);
      END_STATE();
    case 503:
      if (lookahead == 'o')
        ADVANCE(504);
      if (lookahead == 's')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(503);
      END_STATE();
    case 504:
      if (lookahead == 'n')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'l')
        ADVANCE(277);
      END_STATE();
    case 506:
      if (lookahead == 'o')
        ADVANCE(294);
      END_STATE();
    case 507:
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead == 't')
        ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(362);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 320},
  [2] = {.lex_state = 321},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 325},
  [5] = {.lex_state = 320},
  [6] = {.lex_state = 326},
  [7] = {.lex_state = 328},
  [8] = {.lex_state = 321},
  [9] = {.lex_state = 329},
  [10] = {.lex_state = 330},
  [11] = {.lex_state = 329},
  [12] = {.lex_state = 325},
  [13] = {.lex_state = 321},
  [14] = {.lex_state = 320},
  [15] = {.lex_state = 340},
  [16] = {.lex_state = 345},
  [17] = {.lex_state = 346},
  [18] = {.lex_state = 328},
  [19] = {.lex_state = 328},
  [20] = {.lex_state = 326},
  [21] = {.lex_state = 329},
  [22] = {.lex_state = 348},
  [23] = {.lex_state = 394},
  [24] = {.lex_state = 348},
  [25] = {.lex_state = 329},
  [26] = {.lex_state = 330},
  [27] = {.lex_state = 329},
  [28] = {.lex_state = 330},
  [29] = {.lex_state = 325},
  [30] = {.lex_state = 326},
  [31] = {.lex_state = 325},
  [32] = {.lex_state = 340},
  [33] = {.lex_state = 345},
  [34] = {.lex_state = 397},
  [35] = {.lex_state = 397},
  [36] = {.lex_state = 346},
  [37] = {.lex_state = 328},
  [38] = {.lex_state = 328},
  [39] = {.lex_state = 399},
  [40] = {.lex_state = 403},
  [41] = {.lex_state = 397},
  [42] = {.lex_state = 404},
  [43] = {.lex_state = 405},
  [44] = {.lex_state = 397},
  [45] = {.lex_state = 397},
  [46] = {.lex_state = 406},
  [47] = {.lex_state = 397},
  [48] = {.lex_state = 397},
  [49] = {.lex_state = 412},
  [50] = {.lex_state = 397},
  [51] = {.lex_state = 413},
  [52] = {.lex_state = 416},
  [53] = {.lex_state = 416},
  [54] = {.lex_state = 416},
  [55] = {.lex_state = 416},
  [56] = {.lex_state = 405},
  [57] = {.lex_state = 405},
  [58] = {.lex_state = 417},
  [59] = {.lex_state = 406},
  [60] = {.lex_state = 416},
  [61] = {.lex_state = 406},
  [62] = {.lex_state = 406},
  [63] = {.lex_state = 421},
  [64] = {.lex_state = 429},
  [65] = {.lex_state = 405},
  [66] = {.lex_state = 348},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 329},
  [69] = {.lex_state = 340},
  [70] = {.lex_state = 340},
  [71] = {.lex_state = 431},
  [72] = {.lex_state = 432},
  [73] = {.lex_state = 346},
  [74] = {.lex_state = 437},
  [75] = {.lex_state = 330},
  [76] = {.lex_state = 399},
  [77] = {.lex_state = 403},
  [78] = {.lex_state = 429},
  [79] = {.lex_state = 438},
  [80] = {.lex_state = 416},
  [81] = {.lex_state = 439},
  [82] = {.lex_state = 454},
  [83] = {.lex_state = 405},
  [84] = {.lex_state = 405},
  [85] = {.lex_state = 405},
  [86] = {.lex_state = 405},
  [87] = {.lex_state = 405},
  [88] = {.lex_state = 416},
  [89] = {.lex_state = 348},
  [90] = {.lex_state = 455},
  [91] = {.lex_state = 330},
  [92] = {.lex_state = 330},
  [93] = {.lex_state = 330},
  [94] = {.lex_state = 457},
  [95] = {.lex_state = 457},
  [96] = {.lex_state = 457},
  [97] = {.lex_state = 397},
  [98] = {.lex_state = 460},
  [99] = {.lex_state = 397},
  [100] = {.lex_state = 405},
  [101] = {.lex_state = 417},
  [102] = {.lex_state = 462},
  [103] = {.lex_state = 405},
  [104] = {.lex_state = 462},
  [105] = {.lex_state = 397},
  [106] = {.lex_state = 397},
  [107] = {.lex_state = 472},
  [108] = {.lex_state = 397},
  [109] = {.lex_state = 397},
  [110] = {.lex_state = 397},
  [111] = {.lex_state = 405},
  [112] = {.lex_state = 405},
  [113] = {.lex_state = 405},
  [114] = {.lex_state = 475},
  [115] = {.lex_state = 397},
  [116] = {.lex_state = 477},
  [117] = {.lex_state = 404},
  [118] = {.lex_state = 325},
  [119] = {.lex_state = 437},
  [120] = {.lex_state = 397},
  [121] = {.lex_state = 328},
  [122] = {.lex_state = 330},
  [123] = {.lex_state = 399},
  [124] = {.lex_state = 416},
  [125] = {.lex_state = 416},
  [126] = {.lex_state = 330},
  [127] = {.lex_state = 413},
  [128] = {.lex_state = 455},
  [129] = {.lex_state = 462},
  [130] = {.lex_state = 348},
  [131] = {.lex_state = 460},
  [132] = {.lex_state = 416},
  [133] = {.lex_state = 416},
  [134] = {.lex_state = 405},
  [135] = {.lex_state = 417},
  [136] = {.lex_state = 417},
  [137] = {.lex_state = 417},
  [138] = {.lex_state = 397},
  [139] = {.lex_state = 397},
  [140] = {.lex_state = 416},
  [141] = {.lex_state = 479},
  [142] = {.lex_state = 480},
  [143] = {.lex_state = 416},
  [144] = {.lex_state = 481},
  [145] = {.lex_state = 482},
  [146] = {.lex_state = 482},
  [147] = {.lex_state = 483},
  [148] = {.lex_state = 483},
  [149] = {.lex_state = 416},
  [150] = {.lex_state = 405},
  [151] = {.lex_state = 475},
  [152] = {.lex_state = 397},
  [153] = {.lex_state = 405},
  [154] = {.lex_state = 484},
  [155] = {.lex_state = 416},
  [156] = {.lex_state = 484},
  [157] = {.lex_state = 405},
  [158] = {.lex_state = 405},
  [159] = {.lex_state = 475},
  [160] = {.lex_state = 472},
  [161] = {.lex_state = 416},
  [162] = {.lex_state = 405},
  [163] = {.lex_state = 405},
  [164] = {.lex_state = 397},
  [165] = {.lex_state = 405},
  [166] = {.lex_state = 457},
  [167] = {.lex_state = 397},
  [168] = {.lex_state = 397},
  [169] = {.lex_state = 462},
  [170] = {.lex_state = 438},
  [171] = {.lex_state = 492},
  [172] = {.lex_state = 416},
  [173] = {.lex_state = 455},
  [174] = {.lex_state = 416},
  [175] = {.lex_state = 462},
  [176] = {.lex_state = 482},
  [177] = {.lex_state = 482},
  [178] = {.lex_state = 397},
  [179] = {.lex_state = 397},
  [180] = {.lex_state = 397},
  [181] = {.lex_state = 495},
  [182] = {.lex_state = 479},
  [183] = {.lex_state = 421},
  [184] = {.lex_state = 483},
  [185] = {.lex_state = 397},
  [186] = {.lex_state = 495},
  [187] = {.lex_state = 480},
  [188] = {.lex_state = 497},
  [189] = {.lex_state = 498},
  [190] = {.lex_state = 405},
  [191] = {.lex_state = 483},
  [192] = {.lex_state = 405},
  [193] = {.lex_state = 484},
  [194] = {.lex_state = 397},
  [195] = {.lex_state = 405},
  [196] = {.lex_state = 484},
  [197] = {.lex_state = 405},
  [198] = {.lex_state = 499},
  [199] = {.lex_state = 462},
  [200] = {.lex_state = 462},
  [201] = {.lex_state = 416},
  [202] = {.lex_state = 416},
  [203] = {.lex_state = 502},
  [204] = {.lex_state = 416},
  [205] = {.lex_state = 421},
  [206] = {.lex_state = 495},
  [207] = {.lex_state = 479},
  [208] = {.lex_state = 498},
  [209] = {.lex_state = 483},
  [210] = {.lex_state = 421},
  [211] = {.lex_state = 472},
  [212] = {.lex_state = 397},
  [213] = {.lex_state = 416},
  [214] = {.lex_state = 503},
  [215] = {.lex_state = 405},
  [216] = {.lex_state = 507},
  [217] = {.lex_state = 483},
  [218] = {.lex_state = 495},
  [219] = {.lex_state = 480},
  [220] = {.lex_state = 480},
  [221] = {.lex_state = 397},
  [222] = {.lex_state = 482},
  [223] = {.lex_state = 497},
  [224] = {.lex_state = 483},
  [225] = {.lex_state = 483},
  [226] = {.lex_state = 405},
  [227] = {.lex_state = 405},
  [228] = {.lex_state = 416},
  [229] = {.lex_state = 416},
  [230] = {.lex_state = 328},
  [231] = {.lex_state = 416},
  [232] = {.lex_state = 405},
  [233] = {.lex_state = 416},
  [234] = {.lex_state = 484},
  [235] = {.lex_state = 405},
  [236] = {.lex_state = 507},
  [237] = {.lex_state = 397},
  [238] = {.lex_state = 397},
  [239] = {.lex_state = 462},
  [240] = {.lex_state = 462},
  [241] = {.lex_state = 503},
  [242] = {.lex_state = 503},
  [243] = {.lex_state = 482},
  [244] = {.lex_state = 497},
  [245] = {.lex_state = 497},
  [246] = {.lex_state = 484},
  [247] = {.lex_state = 397},
  [248] = {.lex_state = 503},
  [249] = {.lex_state = 462},
  [250] = {.lex_state = 462},
  [251] = {.lex_state = 416},
  [252] = {.lex_state = 503},
  [253] = {.lex_state = 503},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Feature_COLON] = ACTIONS(1),
    [anon_sym_Background_COLON] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_Language] = ACTIONS(1),
    [anon_sym_PERCENTOWL] = ACTIONS(1),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(1),
    [anon_sym_Test] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(3),
    [anon_sym_ontology] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_scenario] = ACTIONS(1),
    [sym_infer] = ACTIONS(3),
    [sym_is_enumerated_as] = ACTIONS(1),
    [sym_a] = ACTIONS(1),
    [anon_sym_subclass] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_subclass_of] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [sym_disjoint] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(3),
    [anon_sym_are] = ACTIONS(3),
    [anon_sym_arent] = ACTIONS(1),
    [anon_sym_aren_SQUOTEt] = ACTIONS(1),
    [anon_sym_arenot] = ACTIONS(1),
    [sym_the_same_as] = ACTIONS(1),
    [sym_different_KW] = ACTIONS(1),
    [sym_are_different] = ACTIONS(1),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(3),
    [sym_And] = ACTIONS(1),
    [sym_Given] = ACTIONS(1),
    [sym_Then] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(3),
    [anon_sym_consistent] = ACTIONS(1),
    [anon_sym_inconsistent] = ACTIONS(1),
    [sym_is_defined_as] = ACTIONS(1),
    [anon_sym_don_SQUOTEt] = ACTIONS(1),
    [anon_sym_infer1] = ACTIONS(3),
    [anon_sym_that] = ACTIONS(3),
    [sym__asterisk] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_that1] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_neither] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(3),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_who] = ACTIONS(1),
    [anon_sym_which] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_does] = ACTIONS(3),
    [anon_sym_has] = ACTIONS(3),
    [sym_is] = ACTIONS(3),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_doesnt] = ACTIONS(1),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(1),
    [anon_sym_doesnot] = ACTIONS(1),
    [anon_sym_hasnt] = ACTIONS(1),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(1),
    [anon_sym_hasnot] = ACTIONS(1),
    [anon_sym_isnt] = ACTIONS(1),
    [anon_sym_isn_SQUOTEt] = ACTIONS(3),
    [anon_sym_isnot] = ACTIONS(1),
    [anon_sym_given] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(3),
    [anon_sym_defined] = ACTIONS(1),
    [anon_sym_enumerated] = ACTIONS(1),
    [sym_that1] = ACTIONS(3),
    [anon_sym_don_SQUOTEt1] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_feature] = STATE(4),
    [aux_sym_feature_repeat1] = STATE(5),
    [anon_sym_Feature_COLON] = ACTIONS(5),
    [sym_tag] = ACTIONS(7),
  },
  [2] = {
    [sym_title] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_background] = STATE(9),
    [sym_scenario] = STATE(11),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_Background_COLON] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [5] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(21),
    [sym_tag] = ACTIONS(23),
  },
  [6] = {
    [sym__eol] = STATE(15),
    [aux_sym__eol_repeat1] = STATE(16),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
  },
  [7] = {
    [sym_language_setting] = STATE(18),
    [sym_import] = STATE(19),
    [aux_sym_background_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_tag] = ACTIONS(27),
    [anon_sym_Scenario_COLON] = ACTIONS(27),
    [sym__asterisk] = ACTIONS(29),
  },
  [8] = {
    [sym_title] = ACTIONS(31),
  },
  [9] = {
    [sym_scenario] = STATE(21),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [10] = {
    [sym_scenario_body] = STATE(25),
    [sym_assumption] = STATE(26),
    [sym_test] = STATE(26),
    [aux_sym_scenario_body_repeat1] = STATE(26),
    [sym_And] = ACTIONS(35),
    [sym_Given] = ACTIONS(37),
    [sym_Then] = ACTIONS(39),
  },
  [11] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [12] = {
    [sym_scenario_head] = STATE(28),
    [aux_sym_feature_repeat1] = STATE(29),
    [sym_tag] = ACTIONS(41),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [13] = {
    [sym_title] = ACTIONS(43),
  },
  [14] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(45),
    [sym_tag] = ACTIONS(47),
  },
  [15] = {
    [sym_narrative] = STATE(31),
    [aux_sym_narrative_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_Background_COLON] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
  },
  [16] = {
    [aux_sym__eol_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(58),
    [anon_sym_Background_COLON] = ACTIONS(58),
    [sym_tag] = ACTIONS(58),
    [anon_sym_Scenario_COLON] = ACTIONS(58),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(60),
  },
  [17] = {
    [anon_sym_Language] = ACTIONS(62),
    [anon_sym_Test] = ACTIONS(64),
  },
  [18] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_tag] = ACTIONS(66),
    [anon_sym_Scenario_COLON] = ACTIONS(66),
    [sym__asterisk] = ACTIONS(68),
  },
  [19] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_tag] = ACTIONS(66),
    [anon_sym_Scenario_COLON] = ACTIONS(66),
    [sym__asterisk] = ACTIONS(68),
  },
  [20] = {
    [sym__eol] = STATE(39),
    [aux_sym__eol_repeat1] = STATE(40),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(70),
  },
  [21] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [22] = {
    [sym__language_ID] = STATE(51),
    [sym__inference_test] = STATE(52),
    [sym_consistency_test] = STATE(52),
    [sym__sentence] = STATE(53),
    [sym_definition] = STATE(53),
    [sym_proposition] = STATE(53),
    [sym_universal] = STATE(54),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_particular] = STATE(54),
    [sym_fact] = STATE(53),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(53),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_the] = STATE(64),
    [sym_an] = STATE(43),
    [sym_some] = STATE(65),
    [sym_donot] = STATE(66),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [anon_sym_the] = ACTIONS(76),
    [sym_infer] = ACTIONS(78),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_some] = ACTIONS(90),
    [sym_that1] = ACTIONS(92),
    [anon_sym_don_SQUOTEt1] = ACTIONS(94),
  },
  [23] = {
    [sym__language_ID] = STATE(51),
    [sym__sentence] = STATE(53),
    [sym_definition] = STATE(53),
    [sym_proposition] = STATE(53),
    [sym_universal] = STATE(54),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_particular] = STATE(54),
    [sym_fact] = STATE(53),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(53),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [sym_some] = STATE(65),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_some] = ACTIONS(90),
    [sym_that1] = ACTIONS(92),
  },
  [24] = {
    [sym__inference_test] = STATE(52),
    [sym_consistency_test] = STATE(52),
    [sym_the] = STATE(64),
    [sym_donot] = STATE(66),
    [anon_sym_the] = ACTIONS(96),
    [sym_infer] = ACTIONS(78),
    [anon_sym_don_SQUOTEt1] = ACTIONS(98),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
  },
  [26] = {
    [sym_assumption] = STATE(67),
    [sym_test] = STATE(67),
    [aux_sym_scenario_body_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_tag] = ACTIONS(102),
    [anon_sym_Scenario_COLON] = ACTIONS(102),
    [sym_And] = ACTIONS(35),
    [sym_Given] = ACTIONS(37),
    [sym_Then] = ACTIONS(39),
  },
  [27] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_tag] = ACTIONS(106),
    [anon_sym_Scenario_COLON] = ACTIONS(109),
  },
  [28] = {
    [sym_scenario_body] = STATE(68),
    [sym_assumption] = STATE(26),
    [sym_test] = STATE(26),
    [aux_sym_scenario_body_repeat1] = STATE(26),
    [sym_And] = ACTIONS(35),
    [sym_Given] = ACTIONS(37),
    [sym_Then] = ACTIONS(39),
  },
  [29] = {
    [aux_sym_feature_repeat1] = STATE(29),
    [sym_tag] = ACTIONS(112),
    [anon_sym_Scenario_COLON] = ACTIONS(45),
  },
  [30] = {
    [sym__eol] = STATE(69),
    [aux_sym__eol_repeat1] = STATE(16),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_Background_COLON] = ACTIONS(115),
    [sym_tag] = ACTIONS(115),
    [anon_sym_Scenario_COLON] = ACTIONS(115),
  },
  [32] = {
    [aux_sym_narrative_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(119),
    [anon_sym_Background_COLON] = ACTIONS(121),
    [sym_tag] = ACTIONS(121),
    [anon_sym_Scenario_COLON] = ACTIONS(121),
  },
  [33] = {
    [aux_sym__eol_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(125),
    [anon_sym_Background_COLON] = ACTIONS(125),
    [sym_tag] = ACTIONS(125),
    [anon_sym_Scenario_COLON] = ACTIONS(125),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(127),
  },
  [34] = {
    [sym__space] = ACTIONS(130),
  },
  [35] = {
    [sym__space] = ACTIONS(132),
  },
  [36] = {
    [anon_sym_Test] = ACTIONS(64),
  },
  [37] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_tag] = ACTIONS(134),
    [anon_sym_Scenario_COLON] = ACTIONS(134),
    [sym__asterisk] = ACTIONS(68),
  },
  [38] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_tag] = ACTIONS(136),
    [anon_sym_Scenario_COLON] = ACTIONS(136),
    [sym__asterisk] = ACTIONS(138),
  },
  [39] = {
    [sym_narrative] = STATE(74),
    [sym_language_setting] = STATE(75),
    [aux_sym_narrative_repeat1] = STATE(76),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(141),
    [sym_And] = ACTIONS(143),
    [sym_Given] = ACTIONS(143),
    [sym_Then] = ACTIONS(143),
    [sym__asterisk] = ACTIONS(145),
  },
  [40] = {
    [aux_sym__eol_repeat1] = STATE(77),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(58),
    [sym_And] = ACTIONS(58),
    [sym_Given] = ACTIONS(58),
    [sym_Then] = ACTIONS(58),
    [sym__asterisk] = ACTIONS(58),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(147),
  },
  [41] = {
    [sym__space] = ACTIONS(149),
  },
  [42] = {
    [sym__language_ID] = STATE(51),
    [sym__infer_sentence] = STATE(80),
    [sym_definition] = STATE(80),
    [sym_universal] = STATE(80),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_fact] = STATE(80),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(80),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
    [sym_that1] = ACTIONS(151),
  },
  [43] = {
    [sym_class_name] = STATE(82),
    [sym__qname] = ACTIONS(153),
  },
  [44] = {
    [sym__space] = ACTIONS(155),
  },
  [45] = {
    [sym__space] = ACTIONS(157),
  },
  [46] = {
    [sym_is_enumerated_as] = ACTIONS(159),
    [sym_subclass_of] = ACTIONS(159),
    [sym_the_same_as] = ACTIONS(161),
    [sym_is_defined_as] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_does] = ACTIONS(165),
    [anon_sym_has] = ACTIONS(165),
    [sym_is] = ACTIONS(165),
    [anon_sym_doesnt] = ACTIONS(167),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(167),
    [anon_sym_doesnot] = ACTIONS(167),
    [anon_sym_hasnt] = ACTIONS(167),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(167),
    [anon_sym_hasnot] = ACTIONS(167),
    [anon_sym_isnt] = ACTIONS(167),
    [anon_sym_isn_SQUOTEt] = ACTIONS(165),
    [anon_sym_isnot] = ACTIONS(167),
  },
  [47] = {
    [sym__space] = ACTIONS(169),
  },
  [48] = {
    [sym__space] = ACTIONS(171),
  },
  [49] = {
    [sym__language_ID] = STATE(51),
    [sym__sentence] = STATE(88),
    [sym_definition] = STATE(88),
    [sym_proposition] = STATE(88),
    [sym_universal] = STATE(54),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_particular] = STATE(54),
    [sym_fact] = STATE(88),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(88),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [sym_some] = STATE(65),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_some] = ACTIONS(90),
  },
  [50] = {
    [sym__space] = ACTIONS(173),
  },
  [51] = {
    [sym_delimiter] = ACTIONS(175),
  },
  [52] = {
    [sym_dot] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_tag] = ACTIONS(177),
    [anon_sym_Scenario_COLON] = ACTIONS(177),
    [sym_And] = ACTIONS(177),
    [sym_Given] = ACTIONS(177),
    [sym_Then] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [53] = {
    [sym_dot] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_tag] = ACTIONS(181),
    [anon_sym_Scenario_COLON] = ACTIONS(181),
    [sym_And] = ACTIONS(181),
    [sym_Given] = ACTIONS(181),
    [sym_Then] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_tag] = ACTIONS(183),
    [anon_sym_Scenario_COLON] = ACTIONS(183),
    [sym_And] = ACTIONS(183),
    [sym_Given] = ACTIONS(183),
    [sym_Then] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_tag] = ACTIONS(185),
    [anon_sym_Scenario_COLON] = ACTIONS(185),
    [sym_And] = ACTIONS(185),
    [sym_Given] = ACTIONS(185),
    [sym_Then] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [56] = {
    [sym_class_name] = STATE(95),
    [sym__qname] = ACTIONS(187),
  },
  [57] = {
    [sym_class_name] = STATE(96),
    [sym__qname] = ACTIONS(187),
  },
  [58] = {
    [sym_are] = STATE(98),
    [anon_sym_are] = ACTIONS(189),
  },
  [59] = {
    [sym_and] = STATE(100),
    [aux_sym_qname_list_repeat1] = STATE(101),
    [anon_sym_and] = ACTIONS(191),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_tag] = ACTIONS(193),
    [anon_sym_Scenario_COLON] = ACTIONS(193),
    [sym_And] = ACTIONS(193),
    [sym_Given] = ACTIONS(193),
    [sym_Then] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
  },
  [61] = {
    [sym_is_defined_as] = ACTIONS(195),
  },
  [62] = {
    [sym_is_enumerated_as] = ACTIONS(197),
    [sym_subclass_of] = ACTIONS(199),
    [sym_is_defined_as] = ACTIONS(201),
  },
  [63] = {
    [sym_predicate_phrase] = STATE(111),
    [sym_predicate_open] = STATE(112),
    [sym_does] = STATE(113),
    [sym_has] = STATE(114),
    [sym_doesnot1] = STATE(113),
    [sym_hasnot1] = STATE(114),
    [sym_isnot1] = STATE(107),
    [anon_sym_does] = ACTIONS(203),
    [anon_sym_has] = ACTIONS(205),
    [sym_is] = ACTIONS(207),
    [anon_sym_doesnt] = ACTIONS(209),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(209),
    [anon_sym_doesnot] = ACTIONS(209),
    [anon_sym_hasnt] = ACTIONS(211),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(211),
    [anon_sym_hasnot] = ACTIONS(211),
    [anon_sym_isnt] = ACTIONS(213),
    [anon_sym_isn_SQUOTEt] = ACTIONS(213),
    [anon_sym_isnot] = ACTIONS(213),
  },
  [64] = {
    [anon_sym_scenario] = ACTIONS(215),
  },
  [65] = {
    [sym_class_name] = STATE(116),
    [sym__qname] = ACTIONS(153),
  },
  [66] = {
    [sym_infer] = ACTIONS(217),
  },
  [67] = {
    [sym_assumption] = STATE(67),
    [sym_test] = STATE(67),
    [aux_sym_scenario_body_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_tag] = ACTIONS(219),
    [anon_sym_Scenario_COLON] = ACTIONS(219),
    [sym_And] = ACTIONS(221),
    [sym_Given] = ACTIONS(224),
    [sym_Then] = ACTIONS(227),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_tag] = ACTIONS(230),
    [anon_sym_Scenario_COLON] = ACTIONS(230),
  },
  [69] = {
    [sym_narrative] = STATE(118),
    [aux_sym_narrative_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(52),
    [anon_sym_Background_COLON] = ACTIONS(232),
    [sym_tag] = ACTIONS(232),
    [anon_sym_Scenario_COLON] = ACTIONS(232),
  },
  [70] = {
    [aux_sym_narrative_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(236),
    [anon_sym_Background_COLON] = ACTIONS(239),
    [sym_tag] = ACTIONS(239),
    [anon_sym_Scenario_COLON] = ACTIONS(239),
  },
  [71] = {
    [sym__language_ID] = STATE(119),
    [anon_sym_PERCENTOWL] = ACTIONS(241),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(241),
  },
  [72] = {
    [anon_sym_the] = ACTIONS(243),
    [sym_uriref] = ACTIONS(245),
  },
  [73] = {
    [anon_sym_Language] = ACTIONS(62),
  },
  [74] = {
    [sym_language_setting] = STATE(122),
    [sym_And] = ACTIONS(247),
    [sym_Given] = ACTIONS(247),
    [sym_Then] = ACTIONS(247),
    [sym__asterisk] = ACTIONS(249),
  },
  [75] = {
    [sym_And] = ACTIONS(247),
    [sym_Given] = ACTIONS(247),
    [sym_Then] = ACTIONS(247),
  },
  [76] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(251),
    [sym_And] = ACTIONS(121),
    [sym_Given] = ACTIONS(121),
    [sym_Then] = ACTIONS(121),
    [sym__asterisk] = ACTIONS(121),
  },
  [77] = {
    [aux_sym__eol_repeat1] = STATE(77),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(125),
    [sym_And] = ACTIONS(125),
    [sym_Given] = ACTIONS(125),
    [sym_Then] = ACTIONS(125),
    [sym__asterisk] = ACTIONS(125),
    [aux_sym_SLASH_LBRACK_BSLASHr_BSLASHn_RBRACK_SLASH] = ACTIONS(253),
  },
  [78] = {
    [anon_sym_scenario] = ACTIONS(256),
  },
  [79] = {
    [sym__language_ID] = STATE(51),
    [sym__infer_sentence] = STATE(124),
    [sym_definition] = STATE(124),
    [sym_universal] = STATE(124),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_fact] = STATE(124),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(124),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_tag] = ACTIONS(258),
    [anon_sym_Scenario_COLON] = ACTIONS(258),
    [sym_And] = ACTIONS(258),
    [sym_Given] = ACTIONS(258),
    [sym_Then] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(258),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_tag] = ACTIONS(159),
    [anon_sym_Scenario_COLON] = ACTIONS(159),
    [anon_sym_are] = ACTIONS(260),
    [anon_sym_arent] = ACTIONS(159),
    [anon_sym_aren_SQUOTEt] = ACTIONS(159),
    [anon_sym_arenot] = ACTIONS(159),
    [sym_And] = ACTIONS(159),
    [sym_Given] = ACTIONS(159),
    [sym_Then] = ACTIONS(159),
    [sym_is_defined_as] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_that1] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_nor] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_who] = ACTIONS(159),
    [anon_sym_which] = ACTIONS(159),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_tag] = ACTIONS(262),
    [anon_sym_Scenario_COLON] = ACTIONS(262),
    [sym_And] = ACTIONS(262),
    [sym_Given] = ACTIONS(262),
    [sym_Then] = ACTIONS(262),
    [sym_is_defined_as] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_that1] = ACTIONS(262),
    [anon_sym_and] = ACTIONS(262),
    [anon_sym_nor] = ACTIONS(262),
    [anon_sym_or] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_who] = ACTIONS(262),
    [anon_sym_which] = ACTIONS(262),
  },
  [83] = {
    [sym__qname] = ACTIONS(264),
  },
  [84] = {
    [sym__qname] = ACTIONS(266),
  },
  [85] = {
    [sym__qname] = ACTIONS(268),
  },
  [86] = {
    [sym__qname] = ACTIONS(270),
  },
  [87] = {
    [sym__qname] = ACTIONS(272),
  },
  [88] = {
    [sym_dot] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_tag] = ACTIONS(274),
    [anon_sym_Scenario_COLON] = ACTIONS(274),
    [sym_And] = ACTIONS(274),
    [sym_Given] = ACTIONS(274),
    [sym_Then] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(179),
  },
  [89] = {
    [sym_infer] = ACTIONS(276),
  },
  [90] = {
    [sym_source_body] = STATE(127),
    [aux_sym_source_body_repeat1] = STATE(128),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(280),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_tag] = ACTIONS(282),
    [anon_sym_Scenario_COLON] = ACTIONS(282),
    [sym_And] = ACTIONS(282),
    [sym_Given] = ACTIONS(282),
    [sym_Then] = ACTIONS(282),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_tag] = ACTIONS(284),
    [anon_sym_Scenario_COLON] = ACTIONS(284),
    [sym_And] = ACTIONS(284),
    [sym_Given] = ACTIONS(284),
    [sym_Then] = ACTIONS(284),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_tag] = ACTIONS(274),
    [anon_sym_Scenario_COLON] = ACTIONS(274),
    [sym_And] = ACTIONS(274),
    [sym_Given] = ACTIONS(274),
    [sym_Then] = ACTIONS(274),
  },
  [94] = {
    [sym_is] = ACTIONS(159),
  },
  [95] = {
    [sym_is] = ACTIONS(286),
  },
  [96] = {
    [sym_is] = ACTIONS(288),
  },
  [97] = {
    [sym__space] = ACTIONS(290),
  },
  [98] = {
    [sym_disjoint] = ACTIONS(292),
    [sym_different_KW] = ACTIONS(294),
  },
  [99] = {
    [sym__space] = ACTIONS(296),
  },
  [100] = {
    [sym_qname] = STATE(136),
    [sym__qname] = ACTIONS(298),
  },
  [101] = {
    [sym_and] = STATE(100),
    [aux_sym_qname_list_repeat1] = STATE(137),
    [anon_sym_are] = ACTIONS(300),
    [anon_sym_and] = ACTIONS(191),
  },
  [102] = {
    [sym_class_expression] = STATE(140),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [103] = {
    [sym_indiv_name] = STATE(148),
    [sym__qname] = ACTIONS(308),
  },
  [104] = {
    [sym_class_expression] = STATE(149),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [105] = {
    [sym__space] = ACTIONS(310),
  },
  [106] = {
    [sym__space] = ACTIONS(312),
  },
  [107] = {
    [sym_class_expression] = STATE(155),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_predicate_fragement] = STATE(156),
    [sym_neither] = STATE(145),
    [sym_the] = STATE(157),
    [sym_an] = STATE(153),
    [sym_not] = STATE(146),
    [anon_sym_the] = ACTIONS(314),
    [sym_a] = ACTIONS(316),
    [sym__qname] = ACTIONS(318),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [108] = {
    [sym__space] = ACTIONS(320),
  },
  [109] = {
    [sym__space] = ACTIONS(322),
  },
  [110] = {
    [sym__space] = ACTIONS(324),
  },
  [111] = {
    [sym_indiv_name] = STATE(161),
    [sym__qname] = ACTIONS(308),
  },
  [112] = {
    [sym_predicate_name] = STATE(163),
    [sym__qname] = ACTIONS(326),
  },
  [113] = {
    [sym__qname] = ACTIONS(328),
  },
  [114] = {
    [sym_as] = STATE(165),
    [anon_sym_as] = ACTIONS(330),
  },
  [115] = {
    [sym__space] = ACTIONS(332),
  },
  [116] = {
    [sym_are] = STATE(169),
    [sym_arenot1] = STATE(169),
    [anon_sym_are] = ACTIONS(334),
    [anon_sym_arent] = ACTIONS(336),
    [anon_sym_aren_SQUOTEt] = ACTIONS(336),
    [anon_sym_arenot] = ACTIONS(336),
  },
  [117] = {
    [sym__language_ID] = STATE(51),
    [sym__infer_sentence] = STATE(124),
    [sym_definition] = STATE(124),
    [sym_universal] = STATE(124),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_fact] = STATE(124),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(124),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
    [sym_that1] = ACTIONS(338),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_Background_COLON] = ACTIONS(340),
    [sym_tag] = ACTIONS(340),
    [anon_sym_Scenario_COLON] = ACTIONS(340),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym_tag] = ACTIONS(342),
    [anon_sym_Scenario_COLON] = ACTIONS(342),
    [sym_And] = ACTIONS(342),
    [sym_Given] = ACTIONS(342),
    [sym_Then] = ACTIONS(342),
    [sym__asterisk] = ACTIONS(342),
  },
  [120] = {
    [sym__space] = ACTIONS(344),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_tag] = ACTIONS(346),
    [anon_sym_Scenario_COLON] = ACTIONS(346),
    [sym__asterisk] = ACTIONS(346),
  },
  [122] = {
    [sym_And] = ACTIONS(348),
    [sym_Given] = ACTIONS(348),
    [sym_Then] = ACTIONS(348),
  },
  [123] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_LBRACK_CARET_RBRACK_SLASH] = ACTIONS(350),
    [sym_And] = ACTIONS(239),
    [sym_Given] = ACTIONS(239),
    [sym_Then] = ACTIONS(239),
    [sym__asterisk] = ACTIONS(239),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_tag] = ACTIONS(353),
    [anon_sym_Scenario_COLON] = ACTIONS(353),
    [sym_And] = ACTIONS(353),
    [sym_Given] = ACTIONS(353),
    [sym_Then] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_tag] = ACTIONS(355),
    [anon_sym_Scenario_COLON] = ACTIONS(355),
    [sym_And] = ACTIONS(355),
    [sym_Given] = ACTIONS(355),
    [sym_Then] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(355),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [sym_tag] = ACTIONS(357),
    [anon_sym_Scenario_COLON] = ACTIONS(357),
    [sym_And] = ACTIONS(357),
    [sym_Given] = ACTIONS(357),
    [sym_Then] = ACTIONS(357),
  },
  [127] = {
    [sym_delimiter] = ACTIONS(359),
  },
  [128] = {
    [aux_sym_source_body_repeat1] = STATE(173),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(363),
    [sym_delimiter] = ACTIONS(365),
  },
  [129] = {
    [sym_class_expression] = STATE(174),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [130] = {
    [sym_a] = ACTIONS(367),
  },
  [131] = {
    [sym_disjoint] = ACTIONS(369),
    [sym_different_KW] = ACTIONS(369),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_tag] = ACTIONS(371),
    [anon_sym_Scenario_COLON] = ACTIONS(371),
    [sym_And] = ACTIONS(371),
    [sym_Given] = ACTIONS(371),
    [sym_Then] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym_tag] = ACTIONS(373),
    [anon_sym_Scenario_COLON] = ACTIONS(373),
    [sym_And] = ACTIONS(373),
    [sym_Given] = ACTIONS(373),
    [sym_Then] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
  },
  [134] = {
    [sym__qname] = ACTIONS(375),
  },
  [135] = {
    [anon_sym_are] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
  },
  [136] = {
    [anon_sym_are] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
  },
  [137] = {
    [sym_and] = STATE(100),
    [aux_sym_qname_list_repeat1] = STATE(137),
    [anon_sym_are] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(379),
  },
  [138] = {
    [sym__space] = ACTIONS(382),
  },
  [139] = {
    [sym__space] = ACTIONS(384),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym_tag] = ACTIONS(386),
    [anon_sym_Scenario_COLON] = ACTIONS(386),
    [sym_And] = ACTIONS(386),
    [sym_Given] = ACTIONS(386),
    [sym_Then] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
  },
  [141] = {
    [sym_and] = STATE(181),
    [sym_comma] = STATE(182),
    [sym_pronoun] = STATE(183),
    [aux_sym_conjunction_repeat1] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_tag] = ACTIONS(388),
    [anon_sym_Scenario_COLON] = ACTIONS(388),
    [sym_And] = ACTIONS(388),
    [sym_Given] = ACTIONS(388),
    [sym_Then] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_that1] = ACTIONS(390),
    [anon_sym_and] = ACTIONS(392),
    [anon_sym_or] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_who] = ACTIONS(390),
    [anon_sym_which] = ACTIONS(390),
  },
  [142] = {
    [sym_or] = STATE(186),
    [aux_sym_disjunction_repeat1] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_tag] = ACTIONS(396),
    [anon_sym_Scenario_COLON] = ACTIONS(396),
    [sym_And] = ACTIONS(396),
    [sym_Given] = ACTIONS(396),
    [sym_Then] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
    [anon_sym_or] = ACTIONS(398),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_tag] = ACTIONS(396),
    [anon_sym_Scenario_COLON] = ACTIONS(396),
    [sym_And] = ACTIONS(396),
    [sym_Given] = ACTIONS(396),
    [sym_Then] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_tag] = ACTIONS(201),
    [anon_sym_Scenario_COLON] = ACTIONS(201),
    [sym_And] = ACTIONS(201),
    [sym_Given] = ACTIONS(201),
    [sym_Then] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_that1] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_nor] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_who] = ACTIONS(201),
    [anon_sym_which] = ACTIONS(201),
  },
  [145] = {
    [sym_pos_class] = STATE(188),
    [sym_class_name] = STATE(144),
    [sym_an] = STATE(43),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_an] = ACTIONS(88),
  },
  [146] = {
    [sym_pos_class] = STATE(189),
    [sym_class_name] = STATE(144),
    [sym_an] = STATE(43),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_an] = ACTIONS(88),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_tag] = ACTIONS(167),
    [anon_sym_Scenario_COLON] = ACTIONS(167),
    [sym_And] = ACTIONS(167),
    [sym_Given] = ACTIONS(167),
    [sym_Then] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_and] = ACTIONS(167),
  },
  [148] = {
    [sym_and] = STATE(190),
    [aux_sym_definition_repeat1] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym_tag] = ACTIONS(386),
    [anon_sym_Scenario_COLON] = ACTIONS(386),
    [sym_And] = ACTIONS(386),
    [sym_Given] = ACTIONS(386),
    [sym_Then] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_and] = ACTIONS(191),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [sym_tag] = ACTIONS(400),
    [anon_sym_Scenario_COLON] = ACTIONS(400),
    [sym_And] = ACTIONS(400),
    [sym_Given] = ACTIONS(400),
    [sym_Then] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(400),
  },
  [150] = {
    [sym__qname] = ACTIONS(402),
  },
  [151] = {
    [anon_sym_as] = ACTIONS(404),
  },
  [152] = {
    [sym__space] = ACTIONS(406),
  },
  [153] = {
    [sym_class_name] = STATE(82),
    [sym_predicate_fragement] = STATE(193),
    [sym__qname] = ACTIONS(408),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_tag] = ACTIONS(159),
    [anon_sym_Scenario_COLON] = ACTIONS(159),
    [anon_sym_of] = ACTIONS(410),
    [anon_sym_than] = ACTIONS(410),
    [anon_sym_to] = ACTIONS(410),
    [anon_sym_on] = ACTIONS(410),
    [anon_sym_in] = ACTIONS(410),
    [sym_And] = ACTIONS(159),
    [sym_Given] = ACTIONS(159),
    [sym_Then] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_that1] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_who] = ACTIONS(159),
    [anon_sym_which] = ACTIONS(159),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym_tag] = ACTIONS(412),
    [anon_sym_Scenario_COLON] = ACTIONS(412),
    [sym_And] = ACTIONS(412),
    [sym_Given] = ACTIONS(412),
    [sym_Then] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(412),
  },
  [156] = {
    [sym_predicate_end] = STATE(195),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_than] = ACTIONS(414),
    [anon_sym_to] = ACTIONS(414),
    [anon_sym_on] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
  },
  [157] = {
    [sym_predicate_fragement] = STATE(193),
    [sym__qname] = ACTIONS(416),
  },
  [158] = {
    [sym__qname] = ACTIONS(418),
  },
  [159] = {
    [anon_sym_as] = ACTIONS(420),
  },
  [160] = {
    [anon_sym_the] = ACTIONS(422),
    [sym_a] = ACTIONS(424),
    [sym__qname] = ACTIONS(422),
    [anon_sym_neither] = ACTIONS(422),
    [anon_sym_an] = ACTIONS(422),
    [anon_sym_not] = ACTIONS(422),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym_tag] = ACTIONS(426),
    [anon_sym_Scenario_COLON] = ACTIONS(426),
    [sym_And] = ACTIONS(426),
    [sym_Given] = ACTIONS(426),
    [sym_Then] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
  },
  [162] = {
    [sym__qname] = ACTIONS(428),
  },
  [163] = {
    [sym__qname] = ACTIONS(430),
  },
  [164] = {
    [sym__space] = ACTIONS(432),
  },
  [165] = {
    [sym__qname] = ACTIONS(434),
  },
  [166] = {
    [sym_is] = ACTIONS(436),
  },
  [167] = {
    [sym__space] = ACTIONS(438),
  },
  [168] = {
    [sym__space] = ACTIONS(440),
  },
  [169] = {
    [sym_class_expression] = STATE(201),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [170] = {
    [sym__language_ID] = STATE(51),
    [sym__infer_sentence] = STATE(202),
    [sym_definition] = STATE(202),
    [sym_universal] = STATE(202),
    [sym_universal_positive] = STATE(55),
    [sym_every] = STATE(56),
    [sym_universal_negative] = STATE(55),
    [sym_no] = STATE(57),
    [sym_qname_list] = STATE(58),
    [sym_qname] = STATE(59),
    [sym_fact] = STATE(202),
    [sym_instance] = STATE(60),
    [sym_relation] = STATE(60),
    [sym_equation] = STATE(60),
    [sym_different] = STATE(60),
    [sym_source] = STATE(202),
    [sym_pos_class] = STATE(61),
    [sym_class_name] = STATE(62),
    [sym_indiv_name] = STATE(63),
    [sym_an] = STATE(43),
    [anon_sym_PERCENTOWL] = ACTIONS(74),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(74),
    [sym_a] = ACTIONS(80),
    [anon_sym_every] = ACTIONS(82),
    [anon_sym_no] = ACTIONS(84),
    [sym__qname] = ACTIONS(86),
    [anon_sym_an] = ACTIONS(88),
  },
  [171] = {
    [anon_sym_ontology] = ACTIONS(442),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_tag] = ACTIONS(444),
    [anon_sym_Scenario_COLON] = ACTIONS(444),
    [sym_And] = ACTIONS(444),
    [sym_Given] = ACTIONS(444),
    [sym_Then] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
  },
  [173] = {
    [aux_sym_source_body_repeat1] = STATE(173),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(449),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(449),
    [sym_delimiter] = ACTIONS(452),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [sym_tag] = ACTIONS(454),
    [anon_sym_Scenario_COLON] = ACTIONS(454),
    [sym_And] = ACTIONS(454),
    [sym_Given] = ACTIONS(454),
    [sym_Then] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(454),
  },
  [175] = {
    [sym_class_expression] = STATE(204),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [176] = {
    [sym_a] = ACTIONS(456),
    [sym__qname] = ACTIONS(458),
    [anon_sym_an] = ACTIONS(458),
  },
  [177] = {
    [sym_a] = ACTIONS(460),
    [sym__qname] = ACTIONS(462),
    [anon_sym_an] = ACTIONS(462),
  },
  [178] = {
    [sym__space] = ACTIONS(464),
  },
  [179] = {
    [sym__space] = ACTIONS(466),
  },
  [180] = {
    [sym__space] = ACTIONS(468),
  },
  [181] = {
    [sym_pos_class] = STATE(208),
    [sym_class_atom] = STATE(209),
    [sym_class_name] = STATE(144),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [182] = {
    [sym_pronoun] = STATE(210),
    [anon_sym_that1] = ACTIONS(390),
    [anon_sym_who] = ACTIONS(390),
    [anon_sym_which] = ACTIONS(390),
  },
  [183] = {
    [sym_qualifier] = STATE(213),
    [sym_predicate_phrase] = STATE(214),
    [sym_predicate_open] = STATE(215),
    [sym_does] = STATE(113),
    [sym_has] = STATE(114),
    [sym_doesnot1] = STATE(113),
    [sym_hasnot1] = STATE(114),
    [sym_isnot1] = STATE(216),
    [anon_sym_does] = ACTIONS(203),
    [anon_sym_has] = ACTIONS(205),
    [sym_is] = ACTIONS(470),
    [anon_sym_doesnt] = ACTIONS(209),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(209),
    [anon_sym_doesnot] = ACTIONS(209),
    [anon_sym_hasnt] = ACTIONS(211),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(211),
    [anon_sym_hasnot] = ACTIONS(211),
    [anon_sym_isnt] = ACTIONS(472),
    [anon_sym_isn_SQUOTEt] = ACTIONS(472),
    [anon_sym_isnot] = ACTIONS(472),
  },
  [184] = {
    [sym_and] = STATE(181),
    [aux_sym_conjunction_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(474),
    [sym_tag] = ACTIONS(474),
    [anon_sym_Scenario_COLON] = ACTIONS(474),
    [sym_And] = ACTIONS(474),
    [sym_Given] = ACTIONS(474),
    [sym_Then] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_and] = ACTIONS(392),
  },
  [185] = {
    [sym__space] = ACTIONS(476),
  },
  [186] = {
    [sym_pos_class] = STATE(208),
    [sym_class_atom] = STATE(219),
    [sym_class_name] = STATE(144),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [187] = {
    [sym_or] = STATE(186),
    [aux_sym_disjunction_repeat1] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(478),
    [sym_tag] = ACTIONS(478),
    [anon_sym_Scenario_COLON] = ACTIONS(478),
    [sym_And] = ACTIONS(478),
    [sym_Given] = ACTIONS(478),
    [sym_Then] = ACTIONS(478),
    [anon_sym_DOT] = ACTIONS(478),
    [anon_sym_or] = ACTIONS(398),
  },
  [188] = {
    [sym_nor] = STATE(222),
    [aux_sym_conjunction_repeat2] = STATE(223),
    [anon_sym_nor] = ACTIONS(480),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [sym_tag] = ACTIONS(482),
    [anon_sym_Scenario_COLON] = ACTIONS(482),
    [sym_And] = ACTIONS(482),
    [sym_Given] = ACTIONS(482),
    [sym_Then] = ACTIONS(482),
    [anon_sym_DOT] = ACTIONS(482),
    [anon_sym_and] = ACTIONS(482),
    [anon_sym_or] = ACTIONS(482),
  },
  [190] = {
    [sym_indiv_name] = STATE(224),
    [sym__qname] = ACTIONS(308),
  },
  [191] = {
    [sym_and] = STATE(190),
    [aux_sym_definition_repeat1] = STATE(225),
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_tag] = ACTIONS(484),
    [anon_sym_Scenario_COLON] = ACTIONS(484),
    [sym_And] = ACTIONS(484),
    [sym_Given] = ACTIONS(484),
    [sym_Then] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_and] = ACTIONS(191),
  },
  [192] = {
    [sym__qname] = ACTIONS(256),
  },
  [193] = {
    [sym_predicate_end] = STATE(226),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_than] = ACTIONS(414),
    [anon_sym_to] = ACTIONS(414),
    [anon_sym_on] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
  },
  [194] = {
    [sym__space] = ACTIONS(486),
  },
  [195] = {
    [sym__qname] = ACTIONS(488),
  },
  [196] = {
    [anon_sym_of] = ACTIONS(410),
    [anon_sym_than] = ACTIONS(410),
    [anon_sym_to] = ACTIONS(410),
    [anon_sym_on] = ACTIONS(410),
    [anon_sym_in] = ACTIONS(410),
  },
  [197] = {
    [sym__qname] = ACTIONS(490),
  },
  [198] = {
    [sym_consistency] = STATE(229),
    [anon_sym_consistent] = ACTIONS(492),
    [anon_sym_inconsistent] = ACTIONS(492),
  },
  [199] = {
    [sym_a] = ACTIONS(369),
    [sym__qname] = ACTIONS(494),
    [anon_sym_neither] = ACTIONS(494),
    [anon_sym_an] = ACTIONS(494),
    [anon_sym_not] = ACTIONS(494),
  },
  [200] = {
    [sym_a] = ACTIONS(496),
    [sym__qname] = ACTIONS(498),
    [anon_sym_neither] = ACTIONS(498),
    [anon_sym_an] = ACTIONS(498),
    [anon_sym_not] = ACTIONS(498),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [sym_tag] = ACTIONS(500),
    [anon_sym_Scenario_COLON] = ACTIONS(500),
    [sym_And] = ACTIONS(500),
    [sym_Given] = ACTIONS(500),
    [sym_Then] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_tag] = ACTIONS(502),
    [anon_sym_Scenario_COLON] = ACTIONS(502),
    [sym_And] = ACTIONS(502),
    [sym_Given] = ACTIONS(502),
    [sym_Then] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
  },
  [203] = {
    [sym_uriref] = ACTIONS(504),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [sym_tag] = ACTIONS(506),
    [anon_sym_Scenario_COLON] = ACTIONS(506),
    [sym_And] = ACTIONS(506),
    [sym_Given] = ACTIONS(506),
    [sym_Then] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(506),
  },
  [205] = {
    [anon_sym_does] = ACTIONS(508),
    [anon_sym_has] = ACTIONS(508),
    [sym_is] = ACTIONS(508),
    [anon_sym_doesnt] = ACTIONS(510),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(510),
    [anon_sym_doesnot] = ACTIONS(510),
    [anon_sym_hasnt] = ACTIONS(510),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(510),
    [anon_sym_hasnot] = ACTIONS(510),
    [anon_sym_isnt] = ACTIONS(510),
    [anon_sym_isn_SQUOTEt] = ACTIONS(510),
    [anon_sym_isnot] = ACTIONS(510),
  },
  [206] = {
    [sym_a] = ACTIONS(375),
    [sym__qname] = ACTIONS(512),
    [anon_sym_an] = ACTIONS(512),
    [anon_sym_not] = ACTIONS(512),
  },
  [207] = {
    [anon_sym_that1] = ACTIONS(514),
    [anon_sym_who] = ACTIONS(514),
    [anon_sym_which] = ACTIONS(514),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_tag] = ACTIONS(388),
    [anon_sym_Scenario_COLON] = ACTIONS(388),
    [sym_And] = ACTIONS(388),
    [sym_Given] = ACTIONS(388),
    [sym_Then] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(388),
    [anon_sym_or] = ACTIONS(388),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym_tag] = ACTIONS(516),
    [anon_sym_Scenario_COLON] = ACTIONS(516),
    [sym_And] = ACTIONS(516),
    [sym_Given] = ACTIONS(516),
    [sym_Then] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(516),
  },
  [210] = {
    [sym_qualifier] = STATE(231),
    [sym_predicate_phrase] = STATE(214),
    [sym_predicate_open] = STATE(215),
    [sym_does] = STATE(113),
    [sym_has] = STATE(114),
    [sym_doesnot1] = STATE(113),
    [sym_hasnot1] = STATE(114),
    [sym_isnot1] = STATE(216),
    [anon_sym_does] = ACTIONS(203),
    [anon_sym_has] = ACTIONS(205),
    [sym_is] = ACTIONS(470),
    [anon_sym_doesnt] = ACTIONS(209),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(209),
    [anon_sym_doesnot] = ACTIONS(209),
    [anon_sym_hasnt] = ACTIONS(211),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(211),
    [anon_sym_hasnot] = ACTIONS(211),
    [anon_sym_isnt] = ACTIONS(472),
    [anon_sym_isn_SQUOTEt] = ACTIONS(472),
    [anon_sym_isnot] = ACTIONS(472),
  },
  [211] = {
    [sym_class_expression] = STATE(233),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_predicate_fragement] = STATE(234),
    [sym_neither] = STATE(145),
    [sym_the] = STATE(235),
    [sym_an] = STATE(232),
    [sym_not] = STATE(146),
    [anon_sym_the] = ACTIONS(314),
    [sym_a] = ACTIONS(518),
    [sym__qname] = ACTIONS(318),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [212] = {
    [sym__space] = ACTIONS(520),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_tag] = ACTIONS(522),
    [anon_sym_Scenario_COLON] = ACTIONS(522),
    [sym_And] = ACTIONS(522),
    [sym_Given] = ACTIONS(522),
    [sym_Then] = ACTIONS(522),
    [anon_sym_DOT] = ACTIONS(522),
  },
  [214] = {
    [sym_quantifier] = STATE(239),
    [sym_some] = STATE(240),
    [sym_only] = STATE(240),
    [anon_sym_some] = ACTIONS(524),
    [anon_sym_only] = ACTIONS(526),
  },
  [215] = {
    [sym_predicate_name] = STATE(242),
    [sym__qname] = ACTIONS(528),
  },
  [216] = {
    [sym_predicate_fragement] = STATE(234),
    [sym_the] = STATE(235),
    [sym_an] = STATE(235),
    [anon_sym_the] = ACTIONS(314),
    [sym_a] = ACTIONS(530),
    [sym__qname] = ACTIONS(532),
    [anon_sym_an] = ACTIONS(88),
  },
  [217] = {
    [sym_and] = STATE(181),
    [aux_sym_conjunction_repeat1] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym_tag] = ACTIONS(516),
    [anon_sym_Scenario_COLON] = ACTIONS(516),
    [sym_And] = ACTIONS(516),
    [sym_Given] = ACTIONS(516),
    [sym_Then] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(534),
  },
  [218] = {
    [sym_a] = ACTIONS(537),
    [sym__qname] = ACTIONS(539),
    [anon_sym_an] = ACTIONS(539),
    [anon_sym_not] = ACTIONS(539),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_tag] = ACTIONS(541),
    [anon_sym_Scenario_COLON] = ACTIONS(541),
    [sym_And] = ACTIONS(541),
    [sym_Given] = ACTIONS(541),
    [sym_Then] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_or] = ACTIONS(541),
  },
  [220] = {
    [sym_or] = STATE(186),
    [aux_sym_disjunction_repeat1] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_tag] = ACTIONS(541),
    [anon_sym_Scenario_COLON] = ACTIONS(541),
    [sym_And] = ACTIONS(541),
    [sym_Given] = ACTIONS(541),
    [sym_Then] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_or] = ACTIONS(543),
  },
  [221] = {
    [sym__space] = ACTIONS(546),
  },
  [222] = {
    [sym_pos_class] = STATE(244),
    [sym_class_name] = STATE(144),
    [sym_an] = STATE(43),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_an] = ACTIONS(88),
  },
  [223] = {
    [sym_nor] = STATE(222),
    [aux_sym_conjunction_repeat2] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_tag] = ACTIONS(548),
    [anon_sym_Scenario_COLON] = ACTIONS(548),
    [sym_And] = ACTIONS(548),
    [sym_Given] = ACTIONS(548),
    [sym_Then] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_nor] = ACTIONS(480),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [sym_tag] = ACTIONS(550),
    [anon_sym_Scenario_COLON] = ACTIONS(550),
    [sym_And] = ACTIONS(550),
    [sym_Given] = ACTIONS(550),
    [sym_Then] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_and] = ACTIONS(550),
  },
  [225] = {
    [sym_and] = STATE(190),
    [aux_sym_definition_repeat1] = STATE(225),
    [ts_builtin_sym_end] = ACTIONS(550),
    [sym_tag] = ACTIONS(550),
    [anon_sym_Scenario_COLON] = ACTIONS(550),
    [sym_And] = ACTIONS(550),
    [sym_Given] = ACTIONS(550),
    [sym_Then] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_and] = ACTIONS(552),
  },
  [226] = {
    [sym__qname] = ACTIONS(555),
  },
  [227] = {
    [sym__qname] = ACTIONS(557),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [sym_tag] = ACTIONS(559),
    [anon_sym_Scenario_COLON] = ACTIONS(559),
    [sym_And] = ACTIONS(559),
    [sym_Given] = ACTIONS(559),
    [sym_Then] = ACTIONS(559),
    [anon_sym_DOT] = ACTIONS(559),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [sym_tag] = ACTIONS(561),
    [anon_sym_Scenario_COLON] = ACTIONS(561),
    [sym_And] = ACTIONS(561),
    [sym_Given] = ACTIONS(561),
    [sym_Then] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_tag] = ACTIONS(563),
    [anon_sym_Scenario_COLON] = ACTIONS(563),
    [sym__asterisk] = ACTIONS(563),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [sym_tag] = ACTIONS(565),
    [anon_sym_Scenario_COLON] = ACTIONS(565),
    [sym_And] = ACTIONS(565),
    [sym_Given] = ACTIONS(565),
    [sym_Then] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
  },
  [232] = {
    [sym_class_name] = STATE(82),
    [sym_predicate_fragement] = STATE(246),
    [sym__qname] = ACTIONS(408),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(567),
    [sym_tag] = ACTIONS(567),
    [anon_sym_Scenario_COLON] = ACTIONS(567),
    [sym_And] = ACTIONS(567),
    [sym_Given] = ACTIONS(567),
    [sym_Then] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
  },
  [234] = {
    [sym_predicate_end] = STATE(248),
    [anon_sym_of] = ACTIONS(569),
    [anon_sym_than] = ACTIONS(569),
    [anon_sym_to] = ACTIONS(569),
    [anon_sym_on] = ACTIONS(569),
    [anon_sym_in] = ACTIONS(569),
  },
  [235] = {
    [sym_predicate_fragement] = STATE(246),
    [sym__qname] = ACTIONS(416),
  },
  [236] = {
    [anon_sym_the] = ACTIONS(422),
    [sym_a] = ACTIONS(424),
    [sym__qname] = ACTIONS(422),
    [anon_sym_an] = ACTIONS(422),
  },
  [237] = {
    [sym__space] = ACTIONS(571),
  },
  [238] = {
    [sym__space] = ACTIONS(573),
  },
  [239] = {
    [sym_class_expression] = STATE(251),
    [sym_pos_class] = STATE(141),
    [sym_class_atom] = STATE(142),
    [sym_conjunction] = STATE(143),
    [sym_disjunction] = STATE(143),
    [sym_qualified_class] = STATE(143),
    [sym_class_name] = STATE(144),
    [sym_neither] = STATE(145),
    [sym_an] = STATE(43),
    [sym_not] = STATE(146),
    [sym_a] = ACTIONS(80),
    [sym__qname] = ACTIONS(302),
    [anon_sym_neither] = ACTIONS(304),
    [anon_sym_an] = ACTIONS(88),
    [anon_sym_not] = ACTIONS(306),
  },
  [240] = {
    [sym_a] = ACTIONS(575),
    [sym__qname] = ACTIONS(577),
    [anon_sym_neither] = ACTIONS(577),
    [anon_sym_an] = ACTIONS(577),
    [anon_sym_not] = ACTIONS(577),
  },
  [241] = {
    [anon_sym_some] = ACTIONS(428),
    [anon_sym_only] = ACTIONS(428),
  },
  [242] = {
    [anon_sym_some] = ACTIONS(430),
    [anon_sym_only] = ACTIONS(430),
  },
  [243] = {
    [sym_a] = ACTIONS(579),
    [sym__qname] = ACTIONS(581),
    [anon_sym_an] = ACTIONS(581),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_tag] = ACTIONS(583),
    [anon_sym_Scenario_COLON] = ACTIONS(583),
    [sym_And] = ACTIONS(583),
    [sym_Given] = ACTIONS(583),
    [sym_Then] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_nor] = ACTIONS(583),
  },
  [245] = {
    [sym_nor] = STATE(222),
    [aux_sym_conjunction_repeat2] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_tag] = ACTIONS(583),
    [anon_sym_Scenario_COLON] = ACTIONS(583),
    [sym_And] = ACTIONS(583),
    [sym_Given] = ACTIONS(583),
    [sym_Then] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_nor] = ACTIONS(585),
  },
  [246] = {
    [sym_predicate_end] = STATE(252),
    [anon_sym_of] = ACTIONS(569),
    [anon_sym_than] = ACTIONS(569),
    [anon_sym_to] = ACTIONS(569),
    [anon_sym_on] = ACTIONS(569),
    [anon_sym_in] = ACTIONS(569),
  },
  [247] = {
    [sym__space] = ACTIONS(588),
  },
  [248] = {
    [anon_sym_some] = ACTIONS(488),
    [anon_sym_only] = ACTIONS(488),
  },
  [249] = {
    [sym_a] = ACTIONS(272),
    [sym__qname] = ACTIONS(590),
    [anon_sym_neither] = ACTIONS(590),
    [anon_sym_an] = ACTIONS(590),
    [anon_sym_not] = ACTIONS(590),
  },
  [250] = {
    [sym_a] = ACTIONS(592),
    [sym__qname] = ACTIONS(594),
    [anon_sym_neither] = ACTIONS(594),
    [anon_sym_an] = ACTIONS(594),
    [anon_sym_not] = ACTIONS(594),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_tag] = ACTIONS(596),
    [anon_sym_Scenario_COLON] = ACTIONS(596),
    [sym_And] = ACTIONS(596),
    [sym_Given] = ACTIONS(596),
    [sym_Then] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(596),
  },
  [252] = {
    [anon_sym_some] = ACTIONS(555),
    [anon_sym_only] = ACTIONS(555),
  },
  [253] = {
    [anon_sym_some] = ACTIONS(557),
    [anon_sym_only] = ACTIONS(557),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_background, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(20),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(24),
  [41] = {.count = 1, .reusable = true}, SHIFT(29),
  [43] = {.count = 1, .reusable = true}, SHIFT(30),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 3),
  [52] = {.count = 1, .reusable = false}, SHIFT(32),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_feature, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__eol, 1),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym__eol, 1),
  [60] = {.count = 1, .reusable = false}, SHIFT(33),
  [62] = {.count = 1, .reusable = true}, SHIFT(34),
  [64] = {.count = 1, .reusable = true}, SHIFT(35),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(36),
  [70] = {.count = 1, .reusable = true}, SHIFT(40),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [74] = {.count = 1, .reusable = false}, SHIFT(51),
  [76] = {.count = 1, .reusable = false}, SHIFT(41),
  [78] = {.count = 1, .reusable = true}, SHIFT(42),
  [80] = {.count = 1, .reusable = true}, SHIFT(43),
  [82] = {.count = 1, .reusable = false}, SHIFT(44),
  [84] = {.count = 1, .reusable = false}, SHIFT(45),
  [86] = {.count = 1, .reusable = false}, SHIFT(46),
  [88] = {.count = 1, .reusable = false}, SHIFT(47),
  [90] = {.count = 1, .reusable = false}, SHIFT(48),
  [92] = {.count = 1, .reusable = true}, SHIFT(49),
  [94] = {.count = 1, .reusable = false}, SHIFT(50),
  [96] = {.count = 1, .reusable = true}, SHIFT(41),
  [98] = {.count = 1, .reusable = true}, SHIFT(50),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(29),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(70),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_narrative, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym__eol_repeat1, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(aux_sym__eol_repeat1, 2),
  [127] = {.count = 2, .reusable = false}, REDUCE(aux_sym__eol_repeat1, 2), SHIFT_REPEAT(33),
  [130] = {.count = 1, .reusable = true}, SHIFT(71),
  [132] = {.count = 1, .reusable = true}, SHIFT(72),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(36),
  [141] = {.count = 1, .reusable = false}, SHIFT(76),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_scenario_head, 3),
  [145] = {.count = 1, .reusable = false}, SHIFT(73),
  [147] = {.count = 1, .reusable = false}, SHIFT(77),
  [149] = {.count = 1, .reusable = true}, SHIFT(78),
  [151] = {.count = 1, .reusable = true}, SHIFT(79),
  [153] = {.count = 1, .reusable = true}, SHIFT(81),
  [155] = {.count = 1, .reusable = true}, SHIFT(83),
  [157] = {.count = 1, .reusable = true}, SHIFT(84),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(85),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_qname, 1),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(86),
  [171] = {.count = 1, .reusable = true}, SHIFT(87),
  [173] = {.count = 1, .reusable = true}, SHIFT(89),
  [175] = {.count = 1, .reusable = true}, SHIFT(90),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(91),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(94),
  [189] = {.count = 1, .reusable = true}, SHIFT(97),
  [191] = {.count = 1, .reusable = true}, SHIFT(99),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(102),
  [197] = {.count = 1, .reusable = true}, SHIFT(103),
  [199] = {.count = 1, .reusable = true}, SHIFT(104),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [203] = {.count = 1, .reusable = false}, SHIFT(105),
  [205] = {.count = 1, .reusable = false}, SHIFT(106),
  [207] = {.count = 1, .reusable = false}, SHIFT(107),
  [209] = {.count = 1, .reusable = true}, SHIFT(108),
  [211] = {.count = 1, .reusable = true}, SHIFT(109),
  [213] = {.count = 1, .reusable = true}, SHIFT(110),
  [215] = {.count = 1, .reusable = true}, SHIFT(115),
  [217] = {.count = 1, .reusable = true}, SHIFT(117),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(22),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(23),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(24),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_feature, 4),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(70),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(119),
  [243] = {.count = 1, .reusable = false}, SHIFT(120),
  [245] = {.count = 1, .reusable = false}, SHIFT(121),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 4),
  [249] = {.count = 1, .reusable = true}, SHIFT(73),
  [251] = {.count = 1, .reusable = false}, SHIFT(123),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym__eol_repeat1, 2), SHIFT_REPEAT(77),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_the, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__inference_test, 2),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_every, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_no, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(125),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_an, 2),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_some, 2),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_donot, 2),
  [278] = {.count = 1, .reusable = true}, SHIFT(128),
  [280] = {.count = 1, .reusable = false}, SHIFT(128),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_dot, 1),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(129),
  [288] = {.count = 1, .reusable = true}, SHIFT(130),
  [290] = {.count = 1, .reusable = true}, SHIFT(131),
  [292] = {.count = 1, .reusable = true}, SHIFT(132),
  [294] = {.count = 1, .reusable = true}, SHIFT(133),
  [296] = {.count = 1, .reusable = true}, SHIFT(134),
  [298] = {.count = 1, .reusable = true}, SHIFT(135),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_qname_list, 2),
  [302] = {.count = 1, .reusable = false}, SHIFT(81),
  [304] = {.count = 1, .reusable = false}, SHIFT(138),
  [306] = {.count = 1, .reusable = false}, SHIFT(139),
  [308] = {.count = 1, .reusable = true}, SHIFT(147),
  [310] = {.count = 1, .reusable = true}, SHIFT(150),
  [312] = {.count = 1, .reusable = true}, SHIFT(151),
  [314] = {.count = 1, .reusable = false}, SHIFT(152),
  [316] = {.count = 1, .reusable = true}, SHIFT(153),
  [318] = {.count = 1, .reusable = false}, SHIFT(154),
  [320] = {.count = 1, .reusable = true}, SHIFT(158),
  [322] = {.count = 1, .reusable = true}, SHIFT(159),
  [324] = {.count = 1, .reusable = true}, SHIFT(160),
  [326] = {.count = 1, .reusable = true}, SHIFT(162),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(164),
  [332] = {.count = 1, .reusable = true}, SHIFT(166),
  [334] = {.count = 1, .reusable = false}, SHIFT(167),
  [336] = {.count = 1, .reusable = true}, SHIFT(168),
  [338] = {.count = 1, .reusable = true}, SHIFT(170),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 4),
  [344] = {.count = 1, .reusable = true}, SHIFT(171),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 5),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(123),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__inference_test, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 3, .alias_sequence_id = 1),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 4),
  [359] = {.count = 1, .reusable = true}, SHIFT(172),
  [361] = {.count = 1, .reusable = true}, SHIFT(173),
  [363] = {.count = 1, .reusable = false}, SHIFT(173),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_source_body, 1),
  [367] = {.count = 1, .reusable = true}, SHIFT(175),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_are, 2),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_different, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_and, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_qname_list_repeat1, 2),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_qname_list_repeat1, 2), SHIFT_REPEAT(99),
  [382] = {.count = 1, .reusable = true}, SHIFT(176),
  [384] = {.count = 1, .reusable = true}, SHIFT(177),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [390] = {.count = 1, .reusable = true}, SHIFT(178),
  [392] = {.count = 1, .reusable = true}, SHIFT(179),
  [394] = {.count = 1, .reusable = true}, SHIFT(180),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [398] = {.count = 1, .reusable = true}, SHIFT(185),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positive, 3),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_does, 2),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_has, 2),
  [406] = {.count = 1, .reusable = true}, SHIFT(192),
  [408] = {.count = 1, .reusable = true}, SHIFT(154),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_fragement, 1),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [414] = {.count = 1, .reusable = true}, SHIFT(194),
  [416] = {.count = 1, .reusable = true}, SHIFT(196),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_doesnot1, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_hasnot1, 2),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_isnot1, 2),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_isnot1, 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_relation, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_name, 1),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 2),
  [432] = {.count = 1, .reusable = true}, SHIFT(197),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 2),
  [436] = {.count = 1, .reusable = true}, SHIFT(198),
  [438] = {.count = 1, .reusable = true}, SHIFT(199),
  [440] = {.count = 1, .reusable = true}, SHIFT(200),
  [442] = {.count = 1, .reusable = true}, SHIFT(203),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_source, 4),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(173),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(173),
  [452] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positive, 4),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_neither, 2),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_neither, 2),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_not, 2),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_not, 2),
  [464] = {.count = 1, .reusable = true}, SHIFT(205),
  [466] = {.count = 1, .reusable = true}, SHIFT(206),
  [468] = {.count = 1, .reusable = true}, SHIFT(207),
  [470] = {.count = 1, .reusable = false}, SHIFT(211),
  [472] = {.count = 1, .reusable = true}, SHIFT(212),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 2),
  [476] = {.count = 1, .reusable = true}, SHIFT(218),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [480] = {.count = 1, .reusable = true}, SHIFT(221),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [486] = {.count = 1, .reusable = true}, SHIFT(227),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 3),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_as, 2),
  [492] = {.count = 1, .reusable = true}, SHIFT(228),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_are, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_arenot1, 2),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_arenot1, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym__inference_test, 4),
  [504] = {.count = 1, .reusable = true}, SHIFT(230),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 5),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_pronoun, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_pronoun, 2),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_and, 2),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_comma, 2),
  [516] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [518] = {.count = 1, .reusable = true}, SHIFT(232),
  [520] = {.count = 1, .reusable = true}, SHIFT(236),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 3),
  [524] = {.count = 1, .reusable = true}, SHIFT(237),
  [526] = {.count = 1, .reusable = true}, SHIFT(238),
  [528] = {.count = 1, .reusable = true}, SHIFT(241),
  [530] = {.count = 1, .reusable = true}, SHIFT(235),
  [532] = {.count = 1, .reusable = false}, SHIFT(196),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(179),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_or, 2),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_or, 2),
  [541] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(185),
  [546] = {.count = 1, .reusable = true}, SHIFT(243),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(99),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 4),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_end, 2),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 5),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_import, 7),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 4),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 2),
  [569] = {.count = 1, .reusable = true}, SHIFT(247),
  [571] = {.count = 1, .reusable = true}, SHIFT(249),
  [573] = {.count = 1, .reusable = true}, SHIFT(250),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_nor, 2),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_nor, 2),
  [583] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(221),
  [588] = {.count = 1, .reusable = true}, SHIFT(253),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_some, 2),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_only, 2),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_only, 2),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scone() {
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
