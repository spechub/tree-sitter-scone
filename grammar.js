module.exports = grammar({
  name: 'scone',

  //externals: $ => [$._newline],

  rules: {
    // The production rules of the context-free grammar

    //Main Structure
    source_file: $ => seq($.feature,optional($.background),repeat($.scenario)),
    feature: $ => seq(repeat($.tag),'Feature:',$.title,$._eol,optional($.narrative)),      //$._newline
    title: $ => /.+/,
    narrative: $ => repeat1(/[^]/), //repeat1(/\S/),  //prec.left(                                 // ist das nicht eigentlich falsch?  //[^] /.+/
    background: $ => seq('Background:',optional($.language_setting),repeat($.import)),
    tag: $ => /[@].+/,                                                          //'a _space delimited string starting with @'
    language_setting: $ => seq($._asterisk,'Language',$._space,$._language_ID),
    _language_ID: $ => choice('%OWL','%CommonLogic'),
    import: $ => seq($._asterisk,'Test',$._space,optional(seq('the',$._space,'ontology')),$.uriref),

    //Scenarios
    scenario: $ => seq(repeat($.tag),$.scenario_head,$.scenario_body),
    scenario_head: $ => seq('Scenario:',$.title,$._eol,optional($.narrative),optional($.language_setting)),
/*blöcke?*/    scenario_body: $ => repeat1(choice($.assumption,$.test)),
    assumption: $ => seq(choice($.Given,$.And),optional($.that),$._sentence,optional($.dot)),
    test: $ => seq(choice($.Then,$.And),choice($._inference_test,$.consistency_test),optional($.dot)),
    _inference_test: $ => seq(optional($.donot),$.infer,optional($.that),$._infer_sentence),
/*token*/    consistency_test: $ => seq($.the,'scenario',$._space,$.is,$.consistency),
infer: $ => token(seq('infer',/\s+/)),

    //Sentences
    _sentence: $ => choice($.definition,$.proposition,$.fact,$.source),
    _infer_sentence: $ => choice($.definition,$.universal,$.fact,$.source),
    definition: $ => choice(
      seq($.pos_class,$.is_defined_as,$.class_expression),
      seq($.class_name,$.is_enumerated_as,$.indiv_name, repeat(seq($.and, $.indiv_name)))
    ),//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    is_enumerated_as: $ => token(seq('is',/\s+/,'enumerated',/\s+/,'as',/\s+/)),

    //is_enumerated_as: $ => seq('is enumerated as',$._space),
    proposition: $ => choice($.universal,$.particular),
    universal: $ => choice($.universal_positive,$.universal_negative),
    universal_positive: $ => choice(
      seq($.every,$.class_name,$.is,$.class_expression),
      seq($.class_name,$.subclass_of,$.class_expression) //is_a_
    ),
    a: $ => token(seq('a',/\s+/)),
    subclass: $ => seq('subclass',$._space),
    of: $ => seq('of',$._space),
  //  subclass_of: $ => seq($.is,$.a,$.subclass,$.of), //token(
    subclass_of: $ => token(seq('is',/\s+/,'a',/\s+/,'subclass',/\s+/,'of',/\s+/)), //
    //is_a_subclass_of: $ => seq('is a subclass of',$._space),
    //subclass: $ => token($.subclass_of),
    every: $ => seq('every',$._space),//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

  /*  is_stuff: $ => seq($.is,choice(
      seq()
    ))*/


    universal_negative: $ => choice(
      seq($.no,$.class_name,$.is,$.a,$.class_expression),
      seq($.qname_list,$.are,$.disjoint)//class_name
    ),
    disjoint: $ => seq('disjoint'/*,$._space*/),
    no: $ => seq('no',$._space),
    class_list: $ => seq($.class_name,repeat1(seq($.and,$.class_name))),
    qname_list: $ => seq($.qname,repeat1(seq($.and,$.qname))),
    qname: $ => $._qname,
    particular: $ => seq(
      $.some,$.class_name,choice($.are,$.arenot),$.class_expression
    ),
    are: $ => seq('are',$._space),
    arenot: $ => seq(choice('aren’t','aren\'t','are not'),$._space),

    fact: $ => choice($.instance,$.relation,$.equation,$.different),
    instance: $ => seq($.indiv_name,choice($.is,$.isnot),$.class_expression),
    relation: $ => seq($.indiv_name,$.predicate_phrase,$.indiv_name),
    equation: $ => seq(
      alias($._qname,$.indiv_name),$.the_same_as, /*'the same as',*/ alias($._qname,$.indiv_name) //indiv_name
    ),
    //the_same_as: $ => seq(choice('is the same as','isn\'t the same as'),$._space),
    the_same_as: $ => token(seq(choice('is','isn\'t'),/\s+/,'the',/\s+/,'same',/\s+/,'as',/\s+/)),
    different: $ => seq(
      $.qname_list,$.are,$.different_KW  //indiv_name
    ),
    different_KW: $ => seq('different'/*,$._space*/),
    indiv_list: $ => seq($.indiv_name,repeat1(seq($.and,$.indiv_name))),
    are_different: $ => 'are different', //#####
    source: $ => seq(
      $._language_ID,$.delimiter,$.source_body,$.delimiter
    ),
    source_body: $ => repeat1(choice(     //'some syntactically valid expression in the identified ontology language'
      /[^"]/,
      /"[^"]/,
      /""[^"]/
    )),
    delimiter: $ => '"""', // _eol fehlt (für Syntaxhighlighting nicht wichtig?) seq('\n', '"""', '\n') funktioniert nicht wie gewünscht


    //Terms
    class_expression: $ => choice($.class_atom,$.conjunction,$.disjunction,$.qualified_class),
    pos_class: $ => seq(optional(choice($.a,$.an)),$.class_name),
    class_atom: $ => seq(optional($.not),$.pos_class),

    conjunction: $ => choice(
      seq($.pos_class,repeat1(seq($.and,$.class_atom))),
      seq($.neither,$.pos_class,repeat1(seq($.nor,$.pos_class)))
    ),
    disjunction: $ => seq(
      $.class_atom,repeat1(seq($.or,$.class_atom))
    ),
    qualified_class: $ => seq(
      $.pos_class,optional($.comma),$.pronoun,$.qualifier
    ),
    qualifier: $ => choice(
      seq($.is,$.class_expression),
      seq($.predicate_phrase,$.quantifier,$.class_expression)
    ),
    quantifier: $ => choice($.some,$.only),
    predicate_phrase: $ => choice(
      seq($.predicate_open,$.predicate_name),
      seq(choice($.is,$.isnot),optional(choice($.a,$.an,$.the)),$.predicate_fragement,$.predicate_end)
    ),
    predicate_open: $ => choice(
      $.does,
      $.doesnot,
      seq(choice($.has,$.hasnot),$.as)                                          //was soll das heißen?
    ),
    predicate_end:$ => seq(choice('of','than','to','on','in'),$._space),


    class_name: $ => $._qname,
    predicate_name: $ => $._qname,
    predicate_fragement: $ => $._qname,
    //indiv: $ => $._qname,
    indiv_name: $ => $._qname,//prec(1,$._qname),   //prec(1,
    _qname: $ => /\S*[\w>]/, // darf so auch auf > enden --> nachfragen //später nochmal schauen/S*[^\.]/,///\S*\w/, // muss auf ein alphanumerisches Zeichen enden //prec.left(repeat1(/\S/)), /\S+(?![,\.].)/
    uriref: $ => /\S+/, //prec.left(repeat1(/\S/)),
    //---------------------
    And: $ => token(seq('And',/\s+/)),
    Given: $ => token(seq('Given',/\s+/)),
    Then: $ => token(seq('Then',/\s+/)), //$._space
    then: $ => 'Then ',
    consistency: $ => choice('consistent','inconsistent'),
    //is_defined_as: $ => 'is defined as ',
    is_defined_as: $ => prec(1,token(seq('is',/\s+/,'defined',/\s+/,'as',/\s+/))),
    infer_start: $ => seq(
      optional('don\'t '),
      'infer ',
      optional('that ')
    ),
    _asterisk: $ => '*',
    full_stop: $ => '.',
    BGround: $ => 'Background:',
    That: $ => 'that',


    //------------------------

    _space: $ => ' ',//repeat1(/\s/), ///\s+/,
    //rule(:_space?) { _space.maybe }
    _eol: $ => repeat1(/[\r\n]/),
    //rule(:crlf) { match('[\r\n]').repeat(1) }
    //rule(:line_end) { crlf >> _space? }
    //rule(:_eol) { line_end.repeat }

    and: $ => seq(choice('and'/*,'And'*/),$._space),
    neither: $ => seq('neither',$._space),
    nor: $ => seq('nor',$._space),
    or: $ => seq('or',$._space),
    comma: $ => seq(',',$._space),
    the: $ => seq('the',$._space),
    an: $ => seq('an',$._space), //!!!!!!!!!!!!!!!
    as: $ => seq('as',$._space),
    pronoun: $ => seq(choice('who','which','that'),$._space),
    some: $ => seq('some',$._space),
    only: $ => seq('only',$._space),

    does: $ => seq('does',$._space),
    has: $ => seq('has',$._space),
    is: $ => token(seq('is',/\s+/)),

    not: $ => seq('not',$._space),
    does: $ => seq('does',$._space),
    doesnot: $ => seq(choice('doesn’t','doesn\'t','does not'),$._space),
    hasnot: $ => seq(choice('hasn’t','hasn\'t','has not'),$._space),
    has: $ => seq('has',$._space),
    isnot: $ => seq(choice('isn’t','isn\'t','is not'),$._space),

    //-------------------
    given: $ => seq(choice('given','Given'),$._space),
    then: $ => seq(choice('then','Then'),$._space),
    consistency: $ => choice('consistent','inconsistent'),
    defined: $ => seq('defined',$._space),
    enumerated: $ => seq('enumerated',$._space),
    _asterisk: $ => '*',
    dot: $ => '.',
    that: $ => token(seq('that',/\s+/)),
    donot: $ => seq('don\'t',$._space),
  }
});
