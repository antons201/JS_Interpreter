
    #include "JavaScriptBaseParser.h"


// Generated from JavaScriptParser.g4 by ANTLR 4.8


#include "JavaScriptParserListener.h"
#include "JavaScriptParserVisitor.h"

#include "JavaScriptParser.h"


using namespace antlrcpp;
using namespace antlr4;

JavaScriptParser::JavaScriptParser(TokenStream *input) : JavaScriptBaseParser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JavaScriptParser::~JavaScriptParser() {
  delete _interpreter;
}

std::string JavaScriptParser::getGrammarFileName() const {
  return "JavaScriptParser.g4";
}

const std::vector<std::string>& JavaScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JavaScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

JavaScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ProgramContext::EOF() {
  return getToken(JavaScriptParser::EOF, 0);
}

tree::TerminalNode* JavaScriptParser::ProgramContext::HashBangLine() {
  return getToken(JavaScriptParser::HashBangLine, 0);
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::ProgramContext::sourceElements() {
  return getRuleContext<JavaScriptParser::SourceElementsContext>(0);
}


size_t JavaScriptParser::ProgramContext::getRuleIndex() const {
  return JavaScriptParser::RuleProgram;
}

void JavaScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void JavaScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any JavaScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ProgramContext* JavaScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, JavaScriptParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(146);
      match(JavaScriptParser::HashBangLine);
      break;
    }

    }
    setState(150);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(149);
      sourceElements();
      break;
    }

    }
    setState(152);
    match(JavaScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementContext ------------------------------------------------------------------

JavaScriptParser::SourceElementContext::SourceElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::StatementContext* JavaScriptParser::SourceElementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}


size_t JavaScriptParser::SourceElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleSourceElement;
}

void JavaScriptParser::SourceElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElement(this);
}

void JavaScriptParser::SourceElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElement(this);
}


antlrcpp::Any JavaScriptParser::SourceElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitSourceElement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::SourceElementContext* JavaScriptParser::sourceElement() {
  SourceElementContext *_localctx = _tracker.createInstance<SourceElementContext>(_ctx, getState());
  enterRule(_localctx, 2, JavaScriptParser::RuleSourceElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JavaScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::BlockContext* JavaScriptParser::StatementContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}

JavaScriptParser::VariableStatementContext* JavaScriptParser::StatementContext::variableStatement() {
  return getRuleContext<JavaScriptParser::VariableStatementContext>(0);
}

JavaScriptParser::ImportStatementContext* JavaScriptParser::StatementContext::importStatement() {
  return getRuleContext<JavaScriptParser::ImportStatementContext>(0);
}

JavaScriptParser::ExportStatementContext* JavaScriptParser::StatementContext::exportStatement() {
  return getRuleContext<JavaScriptParser::ExportStatementContext>(0);
}

JavaScriptParser::EmptyStatementContext* JavaScriptParser::StatementContext::emptyStatement() {
  return getRuleContext<JavaScriptParser::EmptyStatementContext>(0);
}

JavaScriptParser::ClassDeclarationContext* JavaScriptParser::StatementContext::classDeclaration() {
  return getRuleContext<JavaScriptParser::ClassDeclarationContext>(0);
}

JavaScriptParser::ExpressionStatementContext* JavaScriptParser::StatementContext::expressionStatement() {
  return getRuleContext<JavaScriptParser::ExpressionStatementContext>(0);
}

JavaScriptParser::IfStatementContext* JavaScriptParser::StatementContext::ifStatement() {
  return getRuleContext<JavaScriptParser::IfStatementContext>(0);
}

JavaScriptParser::IterationStatementContext* JavaScriptParser::StatementContext::iterationStatement() {
  return getRuleContext<JavaScriptParser::IterationStatementContext>(0);
}

JavaScriptParser::ContinueStatementContext* JavaScriptParser::StatementContext::continueStatement() {
  return getRuleContext<JavaScriptParser::ContinueStatementContext>(0);
}

JavaScriptParser::BreakStatementContext* JavaScriptParser::StatementContext::breakStatement() {
  return getRuleContext<JavaScriptParser::BreakStatementContext>(0);
}

JavaScriptParser::ReturnStatementContext* JavaScriptParser::StatementContext::returnStatement() {
  return getRuleContext<JavaScriptParser::ReturnStatementContext>(0);
}

JavaScriptParser::YieldStatementContext* JavaScriptParser::StatementContext::yieldStatement() {
  return getRuleContext<JavaScriptParser::YieldStatementContext>(0);
}

JavaScriptParser::WithStatementContext* JavaScriptParser::StatementContext::withStatement() {
  return getRuleContext<JavaScriptParser::WithStatementContext>(0);
}

JavaScriptParser::LabelledStatementContext* JavaScriptParser::StatementContext::labelledStatement() {
  return getRuleContext<JavaScriptParser::LabelledStatementContext>(0);
}

JavaScriptParser::SwitchStatementContext* JavaScriptParser::StatementContext::switchStatement() {
  return getRuleContext<JavaScriptParser::SwitchStatementContext>(0);
}

JavaScriptParser::ThrowStatementContext* JavaScriptParser::StatementContext::throwStatement() {
  return getRuleContext<JavaScriptParser::ThrowStatementContext>(0);
}

JavaScriptParser::TryStatementContext* JavaScriptParser::StatementContext::tryStatement() {
  return getRuleContext<JavaScriptParser::TryStatementContext>(0);
}

JavaScriptParser::DebuggerStatementContext* JavaScriptParser::StatementContext::debuggerStatement() {
  return getRuleContext<JavaScriptParser::DebuggerStatementContext>(0);
}

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::StatementContext::functionDeclaration() {
  return getRuleContext<JavaScriptParser::FunctionDeclarationContext>(0);
}


size_t JavaScriptParser::StatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleStatement;
}

void JavaScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void JavaScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any JavaScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::StatementContext* JavaScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, JavaScriptParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(156);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(157);
      variableStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(158);
      importStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(159);
      exportStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(160);
      emptyStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(161);
      classDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(162);
      expressionStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(163);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(164);
      iterationStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(165);
      continueStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(166);
      breakStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(167);
      returnStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(168);
      yieldStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(169);
      withStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(170);
      labelledStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(171);
      switchStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(172);
      throwStatement();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(173);
      tryStatement();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(174);
      debuggerStatement();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(175);
      functionDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

JavaScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::BlockContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

tree::TerminalNode* JavaScriptParser::BlockContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

JavaScriptParser::StatementListContext* JavaScriptParser::BlockContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::BlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleBlock;
}

void JavaScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void JavaScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any JavaScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::BlockContext* JavaScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, JavaScriptParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(JavaScriptParser::OpenBrace);
    setState(180);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(179);
      statementList();
      break;
    }

    }
    setState(182);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

JavaScriptParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::StatementContext *> JavaScriptParser::StatementListContext::statement() {
  return getRuleContexts<JavaScriptParser::StatementContext>();
}

JavaScriptParser::StatementContext* JavaScriptParser::StatementListContext::statement(size_t i) {
  return getRuleContext<JavaScriptParser::StatementContext>(i);
}


size_t JavaScriptParser::StatementListContext::getRuleIndex() const {
  return JavaScriptParser::RuleStatementList;
}

void JavaScriptParser::StatementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementList(this);
}

void JavaScriptParser::StatementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementList(this);
}


antlrcpp::Any JavaScriptParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::StatementListContext* JavaScriptParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 8, JavaScriptParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(185); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(184);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(187); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

JavaScriptParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ImportStatementContext::Import() {
  return getToken(JavaScriptParser::Import, 0);
}

JavaScriptParser::ImportFromBlockContext* JavaScriptParser::ImportStatementContext::importFromBlock() {
  return getRuleContext<JavaScriptParser::ImportFromBlockContext>(0);
}


size_t JavaScriptParser::ImportStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleImportStatement;
}

void JavaScriptParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void JavaScriptParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


antlrcpp::Any JavaScriptParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ImportStatementContext* JavaScriptParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, JavaScriptParser::RuleImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(JavaScriptParser::Import);
    setState(190);
    importFromBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportFromBlockContext ------------------------------------------------------------------

JavaScriptParser::ImportFromBlockContext::ImportFromBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::ImportFromContext* JavaScriptParser::ImportFromBlockContext::importFrom() {
  return getRuleContext<JavaScriptParser::ImportFromContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ImportFromBlockContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ImportNamespaceContext* JavaScriptParser::ImportFromBlockContext::importNamespace() {
  return getRuleContext<JavaScriptParser::ImportNamespaceContext>(0);
}

JavaScriptParser::ModuleItemsContext* JavaScriptParser::ImportFromBlockContext::moduleItems() {
  return getRuleContext<JavaScriptParser::ModuleItemsContext>(0);
}

JavaScriptParser::ImportDefaultContext* JavaScriptParser::ImportFromBlockContext::importDefault() {
  return getRuleContext<JavaScriptParser::ImportDefaultContext>(0);
}

tree::TerminalNode* JavaScriptParser::ImportFromBlockContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}


size_t JavaScriptParser::ImportFromBlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleImportFromBlock;
}

void JavaScriptParser::ImportFromBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportFromBlock(this);
}

void JavaScriptParser::ImportFromBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportFromBlock(this);
}


antlrcpp::Any JavaScriptParser::ImportFromBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportFromBlock(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ImportFromBlockContext* JavaScriptParser::importFromBlock() {
  ImportFromBlockContext *_localctx = _tracker.createInstance<ImportFromBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, JavaScriptParser::RuleImportFromBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::OpenBrace:
      case JavaScriptParser::Multiply:
      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::As:
      case JavaScriptParser::From:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Async:
      case JavaScriptParser::Await:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield:
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(193);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 59) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 59)) & ((1ULL << (JavaScriptParser::NullLiteral - 59))
          | (1ULL << (JavaScriptParser::BooleanLiteral - 59))
          | (1ULL << (JavaScriptParser::Break - 59))
          | (1ULL << (JavaScriptParser::Do - 59))
          | (1ULL << (JavaScriptParser::Instanceof - 59))
          | (1ULL << (JavaScriptParser::Typeof - 59))
          | (1ULL << (JavaScriptParser::Case - 59))
          | (1ULL << (JavaScriptParser::Else - 59))
          | (1ULL << (JavaScriptParser::New - 59))
          | (1ULL << (JavaScriptParser::Var - 59))
          | (1ULL << (JavaScriptParser::Catch - 59))
          | (1ULL << (JavaScriptParser::Finally - 59))
          | (1ULL << (JavaScriptParser::Return - 59))
          | (1ULL << (JavaScriptParser::Void - 59))
          | (1ULL << (JavaScriptParser::Continue - 59))
          | (1ULL << (JavaScriptParser::For - 59))
          | (1ULL << (JavaScriptParser::Switch - 59))
          | (1ULL << (JavaScriptParser::While - 59))
          | (1ULL << (JavaScriptParser::Debugger - 59))
          | (1ULL << (JavaScriptParser::Function - 59))
          | (1ULL << (JavaScriptParser::This - 59))
          | (1ULL << (JavaScriptParser::With - 59))
          | (1ULL << (JavaScriptParser::Default - 59))
          | (1ULL << (JavaScriptParser::If - 59))
          | (1ULL << (JavaScriptParser::Throw - 59))
          | (1ULL << (JavaScriptParser::Delete - 59))
          | (1ULL << (JavaScriptParser::In - 59))
          | (1ULL << (JavaScriptParser::Try - 59))
          | (1ULL << (JavaScriptParser::As - 59))
          | (1ULL << (JavaScriptParser::From - 59))
          | (1ULL << (JavaScriptParser::Class - 59))
          | (1ULL << (JavaScriptParser::Enum - 59))
          | (1ULL << (JavaScriptParser::Extends - 59))
          | (1ULL << (JavaScriptParser::Super - 59))
          | (1ULL << (JavaScriptParser::Const - 59))
          | (1ULL << (JavaScriptParser::Export - 59))
          | (1ULL << (JavaScriptParser::Import - 59))
          | (1ULL << (JavaScriptParser::Async - 59))
          | (1ULL << (JavaScriptParser::Await - 59))
          | (1ULL << (JavaScriptParser::Implements - 59))
          | (1ULL << (JavaScriptParser::Let - 59))
          | (1ULL << (JavaScriptParser::Private - 59))
          | (1ULL << (JavaScriptParser::Public - 59))
          | (1ULL << (JavaScriptParser::Interface - 59))
          | (1ULL << (JavaScriptParser::Package - 59))
          | (1ULL << (JavaScriptParser::Protected - 59))
          | (1ULL << (JavaScriptParser::Static - 59))
          | (1ULL << (JavaScriptParser::Yield - 59))
          | (1ULL << (JavaScriptParser::Identifier - 59)))) != 0)) {
          setState(192);
          importDefault();
        }
        setState(197);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case JavaScriptParser::Multiply: {
            setState(195);
            importNamespace();
            break;
          }

          case JavaScriptParser::OpenBrace: {
            setState(196);
            moduleItems();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(199);
        importFrom();
        setState(200);
        eos();
        break;
      }

      case JavaScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(202);
        match(JavaScriptParser::StringLiteral);
        setState(203);
        eos();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleItemsContext ------------------------------------------------------------------

JavaScriptParser::ModuleItemsContext::ModuleItemsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ModuleItemsContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

tree::TerminalNode* JavaScriptParser::ModuleItemsContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

std::vector<JavaScriptParser::AliasNameContext *> JavaScriptParser::ModuleItemsContext::aliasName() {
  return getRuleContexts<JavaScriptParser::AliasNameContext>();
}

JavaScriptParser::AliasNameContext* JavaScriptParser::ModuleItemsContext::aliasName(size_t i) {
  return getRuleContext<JavaScriptParser::AliasNameContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ModuleItemsContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::ModuleItemsContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}


size_t JavaScriptParser::ModuleItemsContext::getRuleIndex() const {
  return JavaScriptParser::RuleModuleItems;
}

void JavaScriptParser::ModuleItemsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleItems(this);
}

void JavaScriptParser::ModuleItemsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleItems(this);
}


antlrcpp::Any JavaScriptParser::ModuleItemsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleItems(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ModuleItemsContext* JavaScriptParser::moduleItems() {
  ModuleItemsContext *_localctx = _tracker.createInstance<ModuleItemsContext>(_ctx, getState());
  enterRule(_localctx, 14, JavaScriptParser::RuleModuleItems);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(JavaScriptParser::OpenBrace);
    setState(212);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(207);
        aliasName();
        setState(208);
        match(JavaScriptParser::Comma); 
      }
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (JavaScriptParser::NullLiteral - 59))
      | (1ULL << (JavaScriptParser::BooleanLiteral - 59))
      | (1ULL << (JavaScriptParser::Break - 59))
      | (1ULL << (JavaScriptParser::Do - 59))
      | (1ULL << (JavaScriptParser::Instanceof - 59))
      | (1ULL << (JavaScriptParser::Typeof - 59))
      | (1ULL << (JavaScriptParser::Case - 59))
      | (1ULL << (JavaScriptParser::Else - 59))
      | (1ULL << (JavaScriptParser::New - 59))
      | (1ULL << (JavaScriptParser::Var - 59))
      | (1ULL << (JavaScriptParser::Catch - 59))
      | (1ULL << (JavaScriptParser::Finally - 59))
      | (1ULL << (JavaScriptParser::Return - 59))
      | (1ULL << (JavaScriptParser::Void - 59))
      | (1ULL << (JavaScriptParser::Continue - 59))
      | (1ULL << (JavaScriptParser::For - 59))
      | (1ULL << (JavaScriptParser::Switch - 59))
      | (1ULL << (JavaScriptParser::While - 59))
      | (1ULL << (JavaScriptParser::Debugger - 59))
      | (1ULL << (JavaScriptParser::Function - 59))
      | (1ULL << (JavaScriptParser::This - 59))
      | (1ULL << (JavaScriptParser::With - 59))
      | (1ULL << (JavaScriptParser::Default - 59))
      | (1ULL << (JavaScriptParser::If - 59))
      | (1ULL << (JavaScriptParser::Throw - 59))
      | (1ULL << (JavaScriptParser::Delete - 59))
      | (1ULL << (JavaScriptParser::In - 59))
      | (1ULL << (JavaScriptParser::Try - 59))
      | (1ULL << (JavaScriptParser::As - 59))
      | (1ULL << (JavaScriptParser::From - 59))
      | (1ULL << (JavaScriptParser::Class - 59))
      | (1ULL << (JavaScriptParser::Enum - 59))
      | (1ULL << (JavaScriptParser::Extends - 59))
      | (1ULL << (JavaScriptParser::Super - 59))
      | (1ULL << (JavaScriptParser::Const - 59))
      | (1ULL << (JavaScriptParser::Export - 59))
      | (1ULL << (JavaScriptParser::Import - 59))
      | (1ULL << (JavaScriptParser::Async - 59))
      | (1ULL << (JavaScriptParser::Await - 59))
      | (1ULL << (JavaScriptParser::Implements - 59))
      | (1ULL << (JavaScriptParser::Let - 59))
      | (1ULL << (JavaScriptParser::Private - 59))
      | (1ULL << (JavaScriptParser::Public - 59))
      | (1ULL << (JavaScriptParser::Interface - 59))
      | (1ULL << (JavaScriptParser::Package - 59))
      | (1ULL << (JavaScriptParser::Protected - 59))
      | (1ULL << (JavaScriptParser::Static - 59))
      | (1ULL << (JavaScriptParser::Yield - 59))
      | (1ULL << (JavaScriptParser::Identifier - 59)))) != 0)) {
      setState(215);
      aliasName();
      setState(217);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Comma) {
        setState(216);
        match(JavaScriptParser::Comma);
      }
    }
    setState(221);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDefaultContext ------------------------------------------------------------------

JavaScriptParser::ImportDefaultContext::ImportDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::AliasNameContext* JavaScriptParser::ImportDefaultContext::aliasName() {
  return getRuleContext<JavaScriptParser::AliasNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::ImportDefaultContext::Comma() {
  return getToken(JavaScriptParser::Comma, 0);
}


size_t JavaScriptParser::ImportDefaultContext::getRuleIndex() const {
  return JavaScriptParser::RuleImportDefault;
}

void JavaScriptParser::ImportDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDefault(this);
}

void JavaScriptParser::ImportDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDefault(this);
}


antlrcpp::Any JavaScriptParser::ImportDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportDefault(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ImportDefaultContext* JavaScriptParser::importDefault() {
  ImportDefaultContext *_localctx = _tracker.createInstance<ImportDefaultContext>(_ctx, getState());
  enterRule(_localctx, 16, JavaScriptParser::RuleImportDefault);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    aliasName();
    setState(224);
    match(JavaScriptParser::Comma);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportNamespaceContext ------------------------------------------------------------------

JavaScriptParser::ImportNamespaceContext::ImportNamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ImportNamespaceContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

tree::TerminalNode* JavaScriptParser::ImportNamespaceContext::As() {
  return getToken(JavaScriptParser::As, 0);
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::ImportNamespaceContext::identifierName() {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(0);
}


size_t JavaScriptParser::ImportNamespaceContext::getRuleIndex() const {
  return JavaScriptParser::RuleImportNamespace;
}

void JavaScriptParser::ImportNamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportNamespace(this);
}

void JavaScriptParser::ImportNamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportNamespace(this);
}


antlrcpp::Any JavaScriptParser::ImportNamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportNamespace(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ImportNamespaceContext* JavaScriptParser::importNamespace() {
  ImportNamespaceContext *_localctx = _tracker.createInstance<ImportNamespaceContext>(_ctx, getState());
  enterRule(_localctx, 18, JavaScriptParser::RuleImportNamespace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(JavaScriptParser::Multiply);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::As) {
      setState(227);
      match(JavaScriptParser::As);
      setState(228);
      identifierName();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportFromContext ------------------------------------------------------------------

JavaScriptParser::ImportFromContext::ImportFromContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ImportFromContext::From() {
  return getToken(JavaScriptParser::From, 0);
}

tree::TerminalNode* JavaScriptParser::ImportFromContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}


size_t JavaScriptParser::ImportFromContext::getRuleIndex() const {
  return JavaScriptParser::RuleImportFrom;
}

void JavaScriptParser::ImportFromContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportFrom(this);
}

void JavaScriptParser::ImportFromContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportFrom(this);
}


antlrcpp::Any JavaScriptParser::ImportFromContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportFrom(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ImportFromContext* JavaScriptParser::importFrom() {
  ImportFromContext *_localctx = _tracker.createInstance<ImportFromContext>(_ctx, getState());
  enterRule(_localctx, 20, JavaScriptParser::RuleImportFrom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(JavaScriptParser::From);
    setState(232);
    match(JavaScriptParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasNameContext ------------------------------------------------------------------

JavaScriptParser::AliasNameContext::AliasNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::IdentifierNameContext *> JavaScriptParser::AliasNameContext::identifierName() {
  return getRuleContexts<JavaScriptParser::IdentifierNameContext>();
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::AliasNameContext::identifierName(size_t i) {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(i);
}

tree::TerminalNode* JavaScriptParser::AliasNameContext::As() {
  return getToken(JavaScriptParser::As, 0);
}


size_t JavaScriptParser::AliasNameContext::getRuleIndex() const {
  return JavaScriptParser::RuleAliasName;
}

void JavaScriptParser::AliasNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasName(this);
}

void JavaScriptParser::AliasNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasName(this);
}


antlrcpp::Any JavaScriptParser::AliasNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAliasName(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::AliasNameContext* JavaScriptParser::aliasName() {
  AliasNameContext *_localctx = _tracker.createInstance<AliasNameContext>(_ctx, getState());
  enterRule(_localctx, 22, JavaScriptParser::RuleAliasName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    identifierName();
    setState(237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::As) {
      setState(235);
      match(JavaScriptParser::As);
      setState(236);
      identifierName();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExportStatementContext ------------------------------------------------------------------

JavaScriptParser::ExportStatementContext::ExportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::ExportStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleExportStatement;
}

void JavaScriptParser::ExportStatementContext::copyFrom(ExportStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExportDefaultDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ExportDefaultDeclarationContext::Export() {
  return getToken(JavaScriptParser::Export, 0);
}

tree::TerminalNode* JavaScriptParser::ExportDefaultDeclarationContext::Default() {
  return getToken(JavaScriptParser::Default, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ExportDefaultDeclarationContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ExportDefaultDeclarationContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ExportDefaultDeclarationContext::ExportDefaultDeclarationContext(ExportStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ExportDefaultDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportDefaultDeclaration(this);
}
void JavaScriptParser::ExportDefaultDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportDefaultDeclaration(this);
}

antlrcpp::Any JavaScriptParser::ExportDefaultDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitExportDefaultDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExportDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ExportDeclarationContext::Export() {
  return getToken(JavaScriptParser::Export, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::ExportDeclarationContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ExportFromBlockContext* JavaScriptParser::ExportDeclarationContext::exportFromBlock() {
  return getRuleContext<JavaScriptParser::ExportFromBlockContext>(0);
}

JavaScriptParser::DeclarationContext* JavaScriptParser::ExportDeclarationContext::declaration() {
  return getRuleContext<JavaScriptParser::DeclarationContext>(0);
}

JavaScriptParser::ExportDeclarationContext::ExportDeclarationContext(ExportStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ExportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportDeclaration(this);
}
void JavaScriptParser::ExportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportDeclaration(this);
}

antlrcpp::Any JavaScriptParser::ExportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitExportDeclaration(this);
  else
    return visitor->visitChildren(this);
}
JavaScriptParser::ExportStatementContext* JavaScriptParser::exportStatement() {
  ExportStatementContext *_localctx = _tracker.createInstance<ExportStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, JavaScriptParser::RuleExportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ExportStatementContext *>(_tracker.createInstance<JavaScriptParser::ExportDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(239);
      match(JavaScriptParser::Export);
      setState(242);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::OpenBrace:
        case JavaScriptParser::Multiply: {
          setState(240);
          exportFromBlock();
          break;
        }

        case JavaScriptParser::Var:
        case JavaScriptParser::Function:
        case JavaScriptParser::Class:
        case JavaScriptParser::Const:
        case JavaScriptParser::Async:
        case JavaScriptParser::Let: {
          setState(241);
          declaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(244);
      eos();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ExportStatementContext *>(_tracker.createInstance<JavaScriptParser::ExportDefaultDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(246);
      match(JavaScriptParser::Export);
      setState(247);
      match(JavaScriptParser::Default);
      setState(248);
      singleExpression(0);
      setState(249);
      eos();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExportFromBlockContext ------------------------------------------------------------------

JavaScriptParser::ExportFromBlockContext::ExportFromBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::ImportNamespaceContext* JavaScriptParser::ExportFromBlockContext::importNamespace() {
  return getRuleContext<JavaScriptParser::ImportNamespaceContext>(0);
}

JavaScriptParser::ImportFromContext* JavaScriptParser::ExportFromBlockContext::importFrom() {
  return getRuleContext<JavaScriptParser::ImportFromContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ExportFromBlockContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ModuleItemsContext* JavaScriptParser::ExportFromBlockContext::moduleItems() {
  return getRuleContext<JavaScriptParser::ModuleItemsContext>(0);
}


size_t JavaScriptParser::ExportFromBlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleExportFromBlock;
}

void JavaScriptParser::ExportFromBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportFromBlock(this);
}

void JavaScriptParser::ExportFromBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportFromBlock(this);
}


antlrcpp::Any JavaScriptParser::ExportFromBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitExportFromBlock(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ExportFromBlockContext* JavaScriptParser::exportFromBlock() {
  ExportFromBlockContext *_localctx = _tracker.createInstance<ExportFromBlockContext>(_ctx, getState());
  enterRule(_localctx, 26, JavaScriptParser::RuleExportFromBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Multiply: {
        enterOuterAlt(_localctx, 1);
        setState(253);
        importNamespace();
        setState(254);
        importFrom();
        setState(255);
        eos();
        break;
      }

      case JavaScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(257);
        moduleItems();
        setState(259);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(258);
          importFrom();
          break;
        }

        }
        setState(261);
        eos();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

JavaScriptParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::VariableStatementContext* JavaScriptParser::DeclarationContext::variableStatement() {
  return getRuleContext<JavaScriptParser::VariableStatementContext>(0);
}

JavaScriptParser::ClassDeclarationContext* JavaScriptParser::DeclarationContext::classDeclaration() {
  return getRuleContext<JavaScriptParser::ClassDeclarationContext>(0);
}

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<JavaScriptParser::FunctionDeclarationContext>(0);
}


size_t JavaScriptParser::DeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleDeclaration;
}

void JavaScriptParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void JavaScriptParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any JavaScriptParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::DeclarationContext* JavaScriptParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, JavaScriptParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Var:
      case JavaScriptParser::Const:
      case JavaScriptParser::Let: {
        enterOuterAlt(_localctx, 1);
        setState(265);
        variableStatement();
        break;
      }

      case JavaScriptParser::Class: {
        enterOuterAlt(_localctx, 2);
        setState(266);
        classDeclaration();
        break;
      }

      case JavaScriptParser::Function:
      case JavaScriptParser::Async: {
        enterOuterAlt(_localctx, 3);
        setState(267);
        functionDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableStatementContext ------------------------------------------------------------------

JavaScriptParser::VariableStatementContext::VariableStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::VariableStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::VariableStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::VariableStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableStatement;
}

void JavaScriptParser::VariableStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableStatement(this);
}

void JavaScriptParser::VariableStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableStatement(this);
}


antlrcpp::Any JavaScriptParser::VariableStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::VariableStatementContext* JavaScriptParser::variableStatement() {
  VariableStatementContext *_localctx = _tracker.createInstance<VariableStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, JavaScriptParser::RuleVariableStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    variableDeclarationList();
    setState(271);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

JavaScriptParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::VarModifierContext* JavaScriptParser::VariableDeclarationListContext::varModifier() {
  return getRuleContext<JavaScriptParser::VarModifierContext>(0);
}

std::vector<JavaScriptParser::VariableDeclarationContext *> JavaScriptParser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<JavaScriptParser::VariableDeclarationContext>();
}

JavaScriptParser::VariableDeclarationContext* JavaScriptParser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<JavaScriptParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::VariableDeclarationListContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::VariableDeclarationListContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}


size_t JavaScriptParser::VariableDeclarationListContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableDeclarationList;
}

void JavaScriptParser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void JavaScriptParser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}


antlrcpp::Any JavaScriptParser::VariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 32, JavaScriptParser::RuleVariableDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(273);
    varModifier();
    setState(274);
    variableDeclaration();
    setState(279);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(275);
        match(JavaScriptParser::Comma);
        setState(276);
        variableDeclaration(); 
      }
      setState(281);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

JavaScriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::AssignableContext* JavaScriptParser::VariableDeclarationContext::assignable() {
  return getRuleContext<JavaScriptParser::AssignableContext>(0);
}

tree::TerminalNode* JavaScriptParser::VariableDeclarationContext::Assign() {
  return getToken(JavaScriptParser::Assign, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::VariableDeclarationContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}


size_t JavaScriptParser::VariableDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableDeclaration;
}

void JavaScriptParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void JavaScriptParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any JavaScriptParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::VariableDeclarationContext* JavaScriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, JavaScriptParser::RuleVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    assignable();
    setState(285);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(283);
      match(JavaScriptParser::Assign);
      setState(284);
      singleExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

JavaScriptParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::EmptyStatementContext::SemiColon() {
  return getToken(JavaScriptParser::SemiColon, 0);
}


size_t JavaScriptParser::EmptyStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleEmptyStatement;
}

void JavaScriptParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void JavaScriptParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any JavaScriptParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::EmptyStatementContext* JavaScriptParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, JavaScriptParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(JavaScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

JavaScriptParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ExpressionStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ExpressionStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::ExpressionStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleExpressionStatement;
}

void JavaScriptParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void JavaScriptParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any JavaScriptParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ExpressionStatementContext* JavaScriptParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, JavaScriptParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);

    if (!(this->notOpenBraceAndNotFunction())) throw FailedPredicateException(this, "this->notOpenBraceAndNotFunction()");
    setState(290);
    expressionSequence();
    setState(291);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

JavaScriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::If() {
  return getToken(JavaScriptParser::If, 0);
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::IfStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

std::vector<JavaScriptParser::StatementContext *> JavaScriptParser::IfStatementContext::statement() {
  return getRuleContexts<JavaScriptParser::StatementContext>();
}

JavaScriptParser::StatementContext* JavaScriptParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<JavaScriptParser::StatementContext>(i);
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::Else() {
  return getToken(JavaScriptParser::Else, 0);
}


size_t JavaScriptParser::IfStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleIfStatement;
}

void JavaScriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void JavaScriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any JavaScriptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::IfStatementContext* JavaScriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, JavaScriptParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(JavaScriptParser::If);
    setState(294);
    match(JavaScriptParser::OpenParen);
    setState(295);
    expressionSequence();
    setState(296);
    match(JavaScriptParser::CloseParen);
    setState(297);
    statement();
    setState(300);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(298);
      match(JavaScriptParser::Else);
      setState(299);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

JavaScriptParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::IterationStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleIterationStatement;
}

void JavaScriptParser::IterationStatementContext::copyFrom(IterationStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::DoStatementContext::Do() {
  return getToken(JavaScriptParser::Do, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::DoStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

tree::TerminalNode* JavaScriptParser::DoStatementContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

tree::TerminalNode* JavaScriptParser::DoStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::DoStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::DoStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::DoStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::DoStatementContext::DoStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void JavaScriptParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}

antlrcpp::Any JavaScriptParser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::WhileStatementContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

tree::TerminalNode* JavaScriptParser::WhileStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::WhileStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::WhileStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::WhileStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

JavaScriptParser::WhileStatementContext::WhileStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void JavaScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

antlrcpp::Any JavaScriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

tree::TerminalNode* JavaScriptParser::ForStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ForStatementContext::SemiColon() {
  return getTokens(JavaScriptParser::SemiColon);
}

tree::TerminalNode* JavaScriptParser::ForStatementContext::SemiColon(size_t i) {
  return getToken(JavaScriptParser::SemiColon, i);
}

tree::TerminalNode* JavaScriptParser::ForStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

std::vector<JavaScriptParser::ExpressionSequenceContext *> JavaScriptParser::ForStatementContext::expressionSequence() {
  return getRuleContexts<JavaScriptParser::ExpressionSequenceContext>();
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForStatementContext::expressionSequence(size_t i) {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(i);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::ForStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

JavaScriptParser::ForStatementContext::ForStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void JavaScriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

antlrcpp::Any JavaScriptParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForInStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForInStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

tree::TerminalNode* JavaScriptParser::ForInStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::ForInStatementContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForInStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::ForInStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForInStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ForInStatementContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::ForInStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

JavaScriptParser::ForInStatementContext::ForInStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInStatement(this);
}
void JavaScriptParser::ForInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInStatement(this);
}

antlrcpp::Any JavaScriptParser::ForInStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitForInStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForOfStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForOfStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

tree::TerminalNode* JavaScriptParser::ForOfStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::ForOfStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForOfStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::ForOfStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForOfStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ForOfStatementContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::ForOfStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

tree::TerminalNode* JavaScriptParser::ForOfStatementContext::Await() {
  return getToken(JavaScriptParser::Await, 0);
}

JavaScriptParser::ForOfStatementContext::ForOfStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForOfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForOfStatement(this);
}
void JavaScriptParser::ForOfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForOfStatement(this);
}

antlrcpp::Any JavaScriptParser::ForOfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitForOfStatement(this);
  else
    return visitor->visitChildren(this);
}
JavaScriptParser::IterationStatementContext* JavaScriptParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, JavaScriptParser::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::DoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(302);
      match(JavaScriptParser::Do);
      setState(303);
      statement();
      setState(304);
      match(JavaScriptParser::While);
      setState(305);
      match(JavaScriptParser::OpenParen);
      setState(306);
      expressionSequence();
      setState(307);
      match(JavaScriptParser::CloseParen);
      setState(308);
      eos();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::WhileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(310);
      match(JavaScriptParser::While);
      setState(311);
      match(JavaScriptParser::OpenParen);
      setState(312);
      expressionSequence();
      setState(313);
      match(JavaScriptParser::CloseParen);
      setState(314);
      statement();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(316);
      match(JavaScriptParser::For);
      setState(317);
      match(JavaScriptParser::OpenParen);
      setState(320);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::RegularExpressionLiteral:
        case JavaScriptParser::OpenBracket:
        case JavaScriptParser::OpenParen:
        case JavaScriptParser::OpenBrace:
        case JavaScriptParser::PlusPlus:
        case JavaScriptParser::MinusMinus:
        case JavaScriptParser::Plus:
        case JavaScriptParser::Minus:
        case JavaScriptParser::BitNot:
        case JavaScriptParser::Not:
        case JavaScriptParser::NullLiteral:
        case JavaScriptParser::BooleanLiteral:
        case JavaScriptParser::DecimalLiteral:
        case JavaScriptParser::HexIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral2:
        case JavaScriptParser::BinaryIntegerLiteral:
        case JavaScriptParser::BigHexIntegerLiteral:
        case JavaScriptParser::BigOctalIntegerLiteral:
        case JavaScriptParser::BigBinaryIntegerLiteral:
        case JavaScriptParser::BigDecimalIntegerLiteral:
        case JavaScriptParser::Typeof:
        case JavaScriptParser::New:
        case JavaScriptParser::Void:
        case JavaScriptParser::Function:
        case JavaScriptParser::This:
        case JavaScriptParser::Delete:
        case JavaScriptParser::Class:
        case JavaScriptParser::Super:
        case JavaScriptParser::Import:
        case JavaScriptParser::Async:
        case JavaScriptParser::Await:
        case JavaScriptParser::Yield:
        case JavaScriptParser::Identifier:
        case JavaScriptParser::StringLiteral:
        case JavaScriptParser::TemplateStringLiteral: {
          setState(318);
          expressionSequence();
          break;
        }

        case JavaScriptParser::Var:
        case JavaScriptParser::Const:
        case JavaScriptParser::Let: {
          setState(319);
          variableDeclarationList();
          break;
        }

        case JavaScriptParser::SemiColon: {
          break;
        }

      default:
        break;
      }
      setState(322);
      match(JavaScriptParser::SemiColon);
      setState(324);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 64))
        | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigHexIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::Typeof - 64))
        | (1ULL << (JavaScriptParser::New - 64))
        | (1ULL << (JavaScriptParser::Void - 64))
        | (1ULL << (JavaScriptParser::Function - 64))
        | (1ULL << (JavaScriptParser::This - 64))
        | (1ULL << (JavaScriptParser::Delete - 64))
        | (1ULL << (JavaScriptParser::Class - 64))
        | (1ULL << (JavaScriptParser::Super - 64))
        | (1ULL << (JavaScriptParser::Import - 64))
        | (1ULL << (JavaScriptParser::Async - 64))
        | (1ULL << (JavaScriptParser::Await - 64))
        | (1ULL << (JavaScriptParser::Yield - 64))
        | (1ULL << (JavaScriptParser::Identifier - 64))
        | (1ULL << (JavaScriptParser::StringLiteral - 64))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 64)))) != 0)) {
        setState(323);
        expressionSequence();
      }
      setState(326);
      match(JavaScriptParser::SemiColon);
      setState(328);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 64))
        | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigHexIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 64))
        | (1ULL << (JavaScriptParser::Typeof - 64))
        | (1ULL << (JavaScriptParser::New - 64))
        | (1ULL << (JavaScriptParser::Void - 64))
        | (1ULL << (JavaScriptParser::Function - 64))
        | (1ULL << (JavaScriptParser::This - 64))
        | (1ULL << (JavaScriptParser::Delete - 64))
        | (1ULL << (JavaScriptParser::Class - 64))
        | (1ULL << (JavaScriptParser::Super - 64))
        | (1ULL << (JavaScriptParser::Import - 64))
        | (1ULL << (JavaScriptParser::Async - 64))
        | (1ULL << (JavaScriptParser::Await - 64))
        | (1ULL << (JavaScriptParser::Yield - 64))
        | (1ULL << (JavaScriptParser::Identifier - 64))
        | (1ULL << (JavaScriptParser::StringLiteral - 64))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 64)))) != 0)) {
        setState(327);
        expressionSequence();
      }
      setState(330);
      match(JavaScriptParser::CloseParen);
      setState(331);
      statement();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForInStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(332);
      match(JavaScriptParser::For);
      setState(333);
      match(JavaScriptParser::OpenParen);
      setState(336);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::RegularExpressionLiteral:
        case JavaScriptParser::OpenBracket:
        case JavaScriptParser::OpenParen:
        case JavaScriptParser::OpenBrace:
        case JavaScriptParser::PlusPlus:
        case JavaScriptParser::MinusMinus:
        case JavaScriptParser::Plus:
        case JavaScriptParser::Minus:
        case JavaScriptParser::BitNot:
        case JavaScriptParser::Not:
        case JavaScriptParser::NullLiteral:
        case JavaScriptParser::BooleanLiteral:
        case JavaScriptParser::DecimalLiteral:
        case JavaScriptParser::HexIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral2:
        case JavaScriptParser::BinaryIntegerLiteral:
        case JavaScriptParser::BigHexIntegerLiteral:
        case JavaScriptParser::BigOctalIntegerLiteral:
        case JavaScriptParser::BigBinaryIntegerLiteral:
        case JavaScriptParser::BigDecimalIntegerLiteral:
        case JavaScriptParser::Typeof:
        case JavaScriptParser::New:
        case JavaScriptParser::Void:
        case JavaScriptParser::Function:
        case JavaScriptParser::This:
        case JavaScriptParser::Delete:
        case JavaScriptParser::Class:
        case JavaScriptParser::Super:
        case JavaScriptParser::Import:
        case JavaScriptParser::Async:
        case JavaScriptParser::Await:
        case JavaScriptParser::Yield:
        case JavaScriptParser::Identifier:
        case JavaScriptParser::StringLiteral:
        case JavaScriptParser::TemplateStringLiteral: {
          setState(334);
          singleExpression(0);
          break;
        }

        case JavaScriptParser::Var:
        case JavaScriptParser::Const:
        case JavaScriptParser::Let: {
          setState(335);
          variableDeclarationList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(338);
      match(JavaScriptParser::In);
      setState(339);
      expressionSequence();
      setState(340);
      match(JavaScriptParser::CloseParen);
      setState(341);
      statement();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForOfStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(343);
      match(JavaScriptParser::For);
      setState(345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Await) {
        setState(344);
        match(JavaScriptParser::Await);
      }
      setState(347);
      match(JavaScriptParser::OpenParen);
      setState(350);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::RegularExpressionLiteral:
        case JavaScriptParser::OpenBracket:
        case JavaScriptParser::OpenParen:
        case JavaScriptParser::OpenBrace:
        case JavaScriptParser::PlusPlus:
        case JavaScriptParser::MinusMinus:
        case JavaScriptParser::Plus:
        case JavaScriptParser::Minus:
        case JavaScriptParser::BitNot:
        case JavaScriptParser::Not:
        case JavaScriptParser::NullLiteral:
        case JavaScriptParser::BooleanLiteral:
        case JavaScriptParser::DecimalLiteral:
        case JavaScriptParser::HexIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral:
        case JavaScriptParser::OctalIntegerLiteral2:
        case JavaScriptParser::BinaryIntegerLiteral:
        case JavaScriptParser::BigHexIntegerLiteral:
        case JavaScriptParser::BigOctalIntegerLiteral:
        case JavaScriptParser::BigBinaryIntegerLiteral:
        case JavaScriptParser::BigDecimalIntegerLiteral:
        case JavaScriptParser::Typeof:
        case JavaScriptParser::New:
        case JavaScriptParser::Void:
        case JavaScriptParser::Function:
        case JavaScriptParser::This:
        case JavaScriptParser::Delete:
        case JavaScriptParser::Class:
        case JavaScriptParser::Super:
        case JavaScriptParser::Import:
        case JavaScriptParser::Async:
        case JavaScriptParser::Await:
        case JavaScriptParser::Yield:
        case JavaScriptParser::Identifier:
        case JavaScriptParser::StringLiteral:
        case JavaScriptParser::TemplateStringLiteral: {
          setState(348);
          singleExpression(0);
          break;
        }

        case JavaScriptParser::Var:
        case JavaScriptParser::Const:
        case JavaScriptParser::Let: {
          setState(349);
          variableDeclarationList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(352);
      match(JavaScriptParser::Identifier);
      setState(353);

      if (!(this->p("of"))) throw FailedPredicateException(this, "this->p(\"of\")");
      setState(354);
      expressionSequence();
      setState(355);
      match(JavaScriptParser::CloseParen);
      setState(356);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarModifierContext ------------------------------------------------------------------

JavaScriptParser::VarModifierContext::VarModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Var() {
  return getToken(JavaScriptParser::Var, 0);
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Let() {
  return getToken(JavaScriptParser::Let, 0);
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Const() {
  return getToken(JavaScriptParser::Const, 0);
}


size_t JavaScriptParser::VarModifierContext::getRuleIndex() const {
  return JavaScriptParser::RuleVarModifier;
}

void JavaScriptParser::VarModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarModifier(this);
}

void JavaScriptParser::VarModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarModifier(this);
}


antlrcpp::Any JavaScriptParser::VarModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitVarModifier(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::VarModifierContext* JavaScriptParser::varModifier() {
  VarModifierContext *_localctx = _tracker.createInstance<VarModifierContext>(_ctx, getState());
  enterRule(_localctx, 44, JavaScriptParser::RuleVarModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _la = _input->LA(1);
    if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (JavaScriptParser::Var - 77))
      | (1ULL << (JavaScriptParser::Const - 77))
      | (1ULL << (JavaScriptParser::Let - 77)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

JavaScriptParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ContinueStatementContext::Continue() {
  return getToken(JavaScriptParser::Continue, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::ContinueStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

tree::TerminalNode* JavaScriptParser::ContinueStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::ContinueStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleContinueStatement;
}

void JavaScriptParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void JavaScriptParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any JavaScriptParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ContinueStatementContext* JavaScriptParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, JavaScriptParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(JavaScriptParser::Continue);
    setState(365);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(363);

      if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
      setState(364);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
    setState(367);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

JavaScriptParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::BreakStatementContext::Break() {
  return getToken(JavaScriptParser::Break, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::BreakStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

tree::TerminalNode* JavaScriptParser::BreakStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::BreakStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleBreakStatement;
}

void JavaScriptParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void JavaScriptParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any JavaScriptParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::BreakStatementContext* JavaScriptParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, JavaScriptParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(JavaScriptParser::Break);
    setState(372);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(370);

      if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
      setState(371);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
    setState(374);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

JavaScriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ReturnStatementContext::Return() {
  return getToken(JavaScriptParser::Return, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::ReturnStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ReturnStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}


size_t JavaScriptParser::ReturnStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleReturnStatement;
}

void JavaScriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void JavaScriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any JavaScriptParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ReturnStatementContext* JavaScriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, JavaScriptParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(JavaScriptParser::Return);
    setState(379);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(377);

      if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
      setState(378);
      expressionSequence();
      break;
    }

    }
    setState(381);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- YieldStatementContext ------------------------------------------------------------------

JavaScriptParser::YieldStatementContext::YieldStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::YieldStatementContext::Yield() {
  return getToken(JavaScriptParser::Yield, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::YieldStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::YieldStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}


size_t JavaScriptParser::YieldStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleYieldStatement;
}

void JavaScriptParser::YieldStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldStatement(this);
}

void JavaScriptParser::YieldStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldStatement(this);
}


antlrcpp::Any JavaScriptParser::YieldStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitYieldStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::YieldStatementContext* JavaScriptParser::yieldStatement() {
  YieldStatementContext *_localctx = _tracker.createInstance<YieldStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, JavaScriptParser::RuleYieldStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(JavaScriptParser::Yield);
    setState(386);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(384);

      if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
      setState(385);
      expressionSequence();
      break;
    }

    }
    setState(388);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithStatementContext ------------------------------------------------------------------

JavaScriptParser::WithStatementContext::WithStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::WithStatementContext::With() {
  return getToken(JavaScriptParser::With, 0);
}

tree::TerminalNode* JavaScriptParser::WithStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::WithStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::WithStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::WithStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}


size_t JavaScriptParser::WithStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleWithStatement;
}

void JavaScriptParser::WithStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithStatement(this);
}

void JavaScriptParser::WithStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithStatement(this);
}


antlrcpp::Any JavaScriptParser::WithStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitWithStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::WithStatementContext* JavaScriptParser::withStatement() {
  WithStatementContext *_localctx = _tracker.createInstance<WithStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, JavaScriptParser::RuleWithStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(JavaScriptParser::With);
    setState(391);
    match(JavaScriptParser::OpenParen);
    setState(392);
    expressionSequence();
    setState(393);
    match(JavaScriptParser::CloseParen);
    setState(394);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

JavaScriptParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::SwitchStatementContext::Switch() {
  return getToken(JavaScriptParser::Switch, 0);
}

tree::TerminalNode* JavaScriptParser::SwitchStatementContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::SwitchStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::SwitchStatementContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::CaseBlockContext* JavaScriptParser::SwitchStatementContext::caseBlock() {
  return getRuleContext<JavaScriptParser::CaseBlockContext>(0);
}


size_t JavaScriptParser::SwitchStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleSwitchStatement;
}

void JavaScriptParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void JavaScriptParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any JavaScriptParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::SwitchStatementContext* JavaScriptParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, JavaScriptParser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    match(JavaScriptParser::Switch);
    setState(397);
    match(JavaScriptParser::OpenParen);
    setState(398);
    expressionSequence();
    setState(399);
    match(JavaScriptParser::CloseParen);
    setState(400);
    caseBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBlockContext ------------------------------------------------------------------

JavaScriptParser::CaseBlockContext::CaseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::CaseBlockContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

tree::TerminalNode* JavaScriptParser::CaseBlockContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

std::vector<JavaScriptParser::CaseClausesContext *> JavaScriptParser::CaseBlockContext::caseClauses() {
  return getRuleContexts<JavaScriptParser::CaseClausesContext>();
}

JavaScriptParser::CaseClausesContext* JavaScriptParser::CaseBlockContext::caseClauses(size_t i) {
  return getRuleContext<JavaScriptParser::CaseClausesContext>(i);
}

JavaScriptParser::DefaultClauseContext* JavaScriptParser::CaseBlockContext::defaultClause() {
  return getRuleContext<JavaScriptParser::DefaultClauseContext>(0);
}


size_t JavaScriptParser::CaseBlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseBlock;
}

void JavaScriptParser::CaseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseBlock(this);
}

void JavaScriptParser::CaseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseBlock(this);
}


antlrcpp::Any JavaScriptParser::CaseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseBlock(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::CaseBlockContext* JavaScriptParser::caseBlock() {
  CaseBlockContext *_localctx = _tracker.createInstance<CaseBlockContext>(_ctx, getState());
  enterRule(_localctx, 58, JavaScriptParser::RuleCaseBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(JavaScriptParser::OpenBrace);
    setState(404);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Case) {
      setState(403);
      caseClauses();
    }
    setState(410);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Default) {
      setState(406);
      defaultClause();
      setState(408);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Case) {
        setState(407);
        caseClauses();
      }
    }
    setState(412);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClausesContext ------------------------------------------------------------------

JavaScriptParser::CaseClausesContext::CaseClausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::CaseClauseContext *> JavaScriptParser::CaseClausesContext::caseClause() {
  return getRuleContexts<JavaScriptParser::CaseClauseContext>();
}

JavaScriptParser::CaseClauseContext* JavaScriptParser::CaseClausesContext::caseClause(size_t i) {
  return getRuleContext<JavaScriptParser::CaseClauseContext>(i);
}


size_t JavaScriptParser::CaseClausesContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseClauses;
}

void JavaScriptParser::CaseClausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClauses(this);
}

void JavaScriptParser::CaseClausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClauses(this);
}


antlrcpp::Any JavaScriptParser::CaseClausesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseClauses(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::CaseClausesContext* JavaScriptParser::caseClauses() {
  CaseClausesContext *_localctx = _tracker.createInstance<CaseClausesContext>(_ctx, getState());
  enterRule(_localctx, 60, JavaScriptParser::RuleCaseClauses);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(414);
      caseClause();
      setState(417); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == JavaScriptParser::Case);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClauseContext ------------------------------------------------------------------

JavaScriptParser::CaseClauseContext::CaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::CaseClauseContext::Case() {
  return getToken(JavaScriptParser::Case, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::CaseClauseContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::CaseClauseContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::StatementListContext* JavaScriptParser::CaseClauseContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::CaseClauseContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseClause;
}

void JavaScriptParser::CaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClause(this);
}

void JavaScriptParser::CaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClause(this);
}


antlrcpp::Any JavaScriptParser::CaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseClause(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::CaseClauseContext* JavaScriptParser::caseClause() {
  CaseClauseContext *_localctx = _tracker.createInstance<CaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 62, JavaScriptParser::RuleCaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(JavaScriptParser::Case);
    setState(420);
    expressionSequence();
    setState(421);
    match(JavaScriptParser::Colon);
    setState(423);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(422);
      statementList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultClauseContext ------------------------------------------------------------------

JavaScriptParser::DefaultClauseContext::DefaultClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::DefaultClauseContext::Default() {
  return getToken(JavaScriptParser::Default, 0);
}

tree::TerminalNode* JavaScriptParser::DefaultClauseContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::StatementListContext* JavaScriptParser::DefaultClauseContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::DefaultClauseContext::getRuleIndex() const {
  return JavaScriptParser::RuleDefaultClause;
}

void JavaScriptParser::DefaultClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultClause(this);
}

void JavaScriptParser::DefaultClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultClause(this);
}


antlrcpp::Any JavaScriptParser::DefaultClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitDefaultClause(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::DefaultClauseContext* JavaScriptParser::defaultClause() {
  DefaultClauseContext *_localctx = _tracker.createInstance<DefaultClauseContext>(_ctx, getState());
  enterRule(_localctx, 64, JavaScriptParser::RuleDefaultClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(JavaScriptParser::Default);
    setState(426);
    match(JavaScriptParser::Colon);
    setState(428);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(427);
      statementList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelledStatementContext ------------------------------------------------------------------

JavaScriptParser::LabelledStatementContext::LabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LabelledStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

tree::TerminalNode* JavaScriptParser::LabelledStatementContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::LabelledStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}


size_t JavaScriptParser::LabelledStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleLabelledStatement;
}

void JavaScriptParser::LabelledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelledStatement(this);
}

void JavaScriptParser::LabelledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelledStatement(this);
}


antlrcpp::Any JavaScriptParser::LabelledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLabelledStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::LabelledStatementContext* JavaScriptParser::labelledStatement() {
  LabelledStatementContext *_localctx = _tracker.createInstance<LabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, JavaScriptParser::RuleLabelledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(JavaScriptParser::Identifier);
    setState(431);
    match(JavaScriptParser::Colon);
    setState(432);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

JavaScriptParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ThrowStatementContext::Throw() {
  return getToken(JavaScriptParser::Throw, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ThrowStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ThrowStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::ThrowStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleThrowStatement;
}

void JavaScriptParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void JavaScriptParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}


antlrcpp::Any JavaScriptParser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ThrowStatementContext* JavaScriptParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, JavaScriptParser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(JavaScriptParser::Throw);
    setState(435);

    if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
    setState(436);
    expressionSequence();
    setState(437);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

JavaScriptParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::TryStatementContext::Try() {
  return getToken(JavaScriptParser::Try, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::TryStatementContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}

JavaScriptParser::CatchProductionContext* JavaScriptParser::TryStatementContext::catchProduction() {
  return getRuleContext<JavaScriptParser::CatchProductionContext>(0);
}

JavaScriptParser::FinallyProductionContext* JavaScriptParser::TryStatementContext::finallyProduction() {
  return getRuleContext<JavaScriptParser::FinallyProductionContext>(0);
}


size_t JavaScriptParser::TryStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleTryStatement;
}

void JavaScriptParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void JavaScriptParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}


antlrcpp::Any JavaScriptParser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::TryStatementContext* JavaScriptParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, JavaScriptParser::RuleTryStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(JavaScriptParser::Try);
    setState(440);
    block();
    setState(446);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Catch: {
        setState(441);
        catchProduction();
        setState(443);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
        case 1: {
          setState(442);
          finallyProduction();
          break;
        }

        }
        break;
      }

      case JavaScriptParser::Finally: {
        setState(445);
        finallyProduction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchProductionContext ------------------------------------------------------------------

JavaScriptParser::CatchProductionContext::CatchProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::CatchProductionContext::Catch() {
  return getToken(JavaScriptParser::Catch, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::CatchProductionContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}

tree::TerminalNode* JavaScriptParser::CatchProductionContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::CatchProductionContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::AssignableContext* JavaScriptParser::CatchProductionContext::assignable() {
  return getRuleContext<JavaScriptParser::AssignableContext>(0);
}


size_t JavaScriptParser::CatchProductionContext::getRuleIndex() const {
  return JavaScriptParser::RuleCatchProduction;
}

void JavaScriptParser::CatchProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchProduction(this);
}

void JavaScriptParser::CatchProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchProduction(this);
}


antlrcpp::Any JavaScriptParser::CatchProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitCatchProduction(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::CatchProductionContext* JavaScriptParser::catchProduction() {
  CatchProductionContext *_localctx = _tracker.createInstance<CatchProductionContext>(_ctx, getState());
  enterRule(_localctx, 72, JavaScriptParser::RuleCatchProduction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(JavaScriptParser::Catch);
    setState(454);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::OpenParen) {
      setState(449);
      match(JavaScriptParser::OpenParen);
      setState(451);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::OpenBracket

      || _la == JavaScriptParser::OpenBrace || _la == JavaScriptParser::Identifier) {
        setState(450);
        assignable();
      }
      setState(453);
      match(JavaScriptParser::CloseParen);
    }
    setState(456);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyProductionContext ------------------------------------------------------------------

JavaScriptParser::FinallyProductionContext::FinallyProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::FinallyProductionContext::Finally() {
  return getToken(JavaScriptParser::Finally, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::FinallyProductionContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}


size_t JavaScriptParser::FinallyProductionContext::getRuleIndex() const {
  return JavaScriptParser::RuleFinallyProduction;
}

void JavaScriptParser::FinallyProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyProduction(this);
}

void JavaScriptParser::FinallyProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyProduction(this);
}


antlrcpp::Any JavaScriptParser::FinallyProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFinallyProduction(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::FinallyProductionContext* JavaScriptParser::finallyProduction() {
  FinallyProductionContext *_localctx = _tracker.createInstance<FinallyProductionContext>(_ctx, getState());
  enterRule(_localctx, 74, JavaScriptParser::RuleFinallyProduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(JavaScriptParser::Finally);
    setState(459);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DebuggerStatementContext ------------------------------------------------------------------

JavaScriptParser::DebuggerStatementContext::DebuggerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::DebuggerStatementContext::Debugger() {
  return getToken(JavaScriptParser::Debugger, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::DebuggerStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::DebuggerStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleDebuggerStatement;
}

void JavaScriptParser::DebuggerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDebuggerStatement(this);
}

void JavaScriptParser::DebuggerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDebuggerStatement(this);
}


antlrcpp::Any JavaScriptParser::DebuggerStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitDebuggerStatement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::DebuggerStatementContext* JavaScriptParser::debuggerStatement() {
  DebuggerStatementContext *_localctx = _tracker.createInstance<DebuggerStatementContext>(_ctx, getState());
  enterRule(_localctx, 76, JavaScriptParser::RuleDebuggerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(JavaScriptParser::Debugger);
    setState(462);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

JavaScriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::FunctionDeclarationContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Async() {
  return getToken(JavaScriptParser::Async, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::FunctionDeclarationContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}


size_t JavaScriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleFunctionDeclaration;
}

void JavaScriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void JavaScriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any JavaScriptParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, JavaScriptParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Async) {
      setState(464);
      match(JavaScriptParser::Async);
    }
    setState(467);
    match(JavaScriptParser::Function);
    setState(469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Multiply) {
      setState(468);
      match(JavaScriptParser::Multiply);
    }
    setState(471);
    match(JavaScriptParser::Identifier);
    setState(472);
    match(JavaScriptParser::OpenParen);
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
      setState(473);
      formalParameterList();
    }
    setState(476);
    match(JavaScriptParser::CloseParen);
    setState(477);
    match(JavaScriptParser::OpenBrace);
    setState(478);
    functionBody();
    setState(479);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

JavaScriptParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ClassDeclarationContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

tree::TerminalNode* JavaScriptParser::ClassDeclarationContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::ClassDeclarationContext::classTail() {
  return getRuleContext<JavaScriptParser::ClassTailContext>(0);
}


size_t JavaScriptParser::ClassDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassDeclaration;
}

void JavaScriptParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void JavaScriptParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}


antlrcpp::Any JavaScriptParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ClassDeclarationContext* JavaScriptParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 80, JavaScriptParser::RuleClassDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(JavaScriptParser::Class);
    setState(482);
    match(JavaScriptParser::Identifier);
    setState(483);
    classTail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTailContext ------------------------------------------------------------------

JavaScriptParser::ClassTailContext::ClassTailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ClassTailContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

tree::TerminalNode* JavaScriptParser::ClassTailContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

tree::TerminalNode* JavaScriptParser::ClassTailContext::Extends() {
  return getToken(JavaScriptParser::Extends, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ClassTailContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

std::vector<JavaScriptParser::ClassElementContext *> JavaScriptParser::ClassTailContext::classElement() {
  return getRuleContexts<JavaScriptParser::ClassElementContext>();
}

JavaScriptParser::ClassElementContext* JavaScriptParser::ClassTailContext::classElement(size_t i) {
  return getRuleContext<JavaScriptParser::ClassElementContext>(i);
}


size_t JavaScriptParser::ClassTailContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassTail;
}

void JavaScriptParser::ClassTailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTail(this);
}

void JavaScriptParser::ClassTailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTail(this);
}


antlrcpp::Any JavaScriptParser::ClassTailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassTail(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::classTail() {
  ClassTailContext *_localctx = _tracker.createInstance<ClassTailContext>(_ctx, getState());
  enterRule(_localctx, 82, JavaScriptParser::RuleClassTail);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(487);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Extends) {
      setState(485);
      match(JavaScriptParser::Extends);
      setState(486);
      singleExpression(0);
    }
    setState(489);
    match(JavaScriptParser::OpenBrace);
    setState(493);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(490);
        classElement(); 
      }
      setState(495);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(496);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassElementContext ------------------------------------------------------------------

JavaScriptParser::ClassElementContext::ClassElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::MethodDefinitionContext* JavaScriptParser::ClassElementContext::methodDefinition() {
  return getRuleContext<JavaScriptParser::MethodDefinitionContext>(0);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ClassElementContext::Static() {
  return getTokens(JavaScriptParser::Static);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Static(size_t i) {
  return getToken(JavaScriptParser::Static, i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ClassElementContext::Identifier() {
  return getTokens(JavaScriptParser::Identifier);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Identifier(size_t i) {
  return getToken(JavaScriptParser::Identifier, i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ClassElementContext::Async() {
  return getTokens(JavaScriptParser::Async);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Async(size_t i) {
  return getToken(JavaScriptParser::Async, i);
}

JavaScriptParser::EmptyStatementContext* JavaScriptParser::ClassElementContext::emptyStatement() {
  return getRuleContext<JavaScriptParser::EmptyStatementContext>(0);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::ClassElementContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Assign() {
  return getToken(JavaScriptParser::Assign, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ClassElementContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Hashtag() {
  return getToken(JavaScriptParser::Hashtag, 0);
}


size_t JavaScriptParser::ClassElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassElement;
}

void JavaScriptParser::ClassElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassElement(this);
}

void JavaScriptParser::ClassElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassElement(this);
}


antlrcpp::Any JavaScriptParser::ClassElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassElement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ClassElementContext* JavaScriptParser::classElement() {
  ClassElementContext *_localctx = _tracker.createInstance<ClassElementContext>(_ctx, getState());
  enterRule(_localctx, 84, JavaScriptParser::RuleClassElement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(516);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(504);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(502);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
          case 1: {
            setState(498);
            match(JavaScriptParser::Static);
            break;
          }

          case 2: {
            setState(499);

            if (!(this->n("static"))) throw FailedPredicateException(this, "this->n(\"static\")");
            setState(500);
            match(JavaScriptParser::Identifier);
            break;
          }

          case 3: {
            setState(501);
            match(JavaScriptParser::Async);
            break;
          }

          } 
        }
        setState(506);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      }
      setState(507);
      methodDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(508);
      emptyStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(510);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Hashtag) {
        setState(509);
        match(JavaScriptParser::Hashtag);
      }
      setState(512);
      propertyName();
      setState(513);
      match(JavaScriptParser::Assign);
      setState(514);
      singleExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDefinitionContext ------------------------------------------------------------------

JavaScriptParser::MethodDefinitionContext::MethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::MethodDefinitionContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::MethodDefinitionContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

tree::TerminalNode* JavaScriptParser::MethodDefinitionContext::Hashtag() {
  return getToken(JavaScriptParser::Hashtag, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::MethodDefinitionContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}

JavaScriptParser::GetterContext* JavaScriptParser::MethodDefinitionContext::getter() {
  return getRuleContext<JavaScriptParser::GetterContext>(0);
}

JavaScriptParser::SetterContext* JavaScriptParser::MethodDefinitionContext::setter() {
  return getRuleContext<JavaScriptParser::SetterContext>(0);
}


size_t JavaScriptParser::MethodDefinitionContext::getRuleIndex() const {
  return JavaScriptParser::RuleMethodDefinition;
}

void JavaScriptParser::MethodDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDefinition(this);
}

void JavaScriptParser::MethodDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDefinition(this);
}


antlrcpp::Any JavaScriptParser::MethodDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodDefinition(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::MethodDefinitionContext* JavaScriptParser::methodDefinition() {
  MethodDefinitionContext *_localctx = _tracker.createInstance<MethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 86, JavaScriptParser::RuleMethodDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(563);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(519);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Multiply) {
        setState(518);
        match(JavaScriptParser::Multiply);
      }
      setState(522);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Hashtag) {
        setState(521);
        match(JavaScriptParser::Hashtag);
      }
      setState(524);
      propertyName();
      setState(525);
      match(JavaScriptParser::OpenParen);
      setState(527);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(526);
        formalParameterList();
      }
      setState(529);
      match(JavaScriptParser::CloseParen);
      setState(530);
      match(JavaScriptParser::OpenBrace);
      setState(531);
      functionBody();
      setState(532);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(535);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Multiply) {
        setState(534);
        match(JavaScriptParser::Multiply);
      }
      setState(538);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Hashtag) {
        setState(537);
        match(JavaScriptParser::Hashtag);
      }
      setState(540);
      getter();
      setState(541);
      match(JavaScriptParser::OpenParen);
      setState(542);
      match(JavaScriptParser::CloseParen);
      setState(543);
      match(JavaScriptParser::OpenBrace);
      setState(544);
      functionBody();
      setState(545);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(548);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Multiply) {
        setState(547);
        match(JavaScriptParser::Multiply);
      }
      setState(551);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Hashtag) {
        setState(550);
        match(JavaScriptParser::Hashtag);
      }
      setState(553);
      setter();
      setState(554);
      match(JavaScriptParser::OpenParen);
      setState(556);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(555);
        formalParameterList();
      }
      setState(558);
      match(JavaScriptParser::CloseParen);
      setState(559);
      match(JavaScriptParser::OpenBrace);
      setState(560);
      functionBody();
      setState(561);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

JavaScriptParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::FormalParameterArgContext *> JavaScriptParser::FormalParameterListContext::formalParameterArg() {
  return getRuleContexts<JavaScriptParser::FormalParameterArgContext>();
}

JavaScriptParser::FormalParameterArgContext* JavaScriptParser::FormalParameterListContext::formalParameterArg(size_t i) {
  return getRuleContext<JavaScriptParser::FormalParameterArgContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::FormalParameterListContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::FormalParameterListContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}

JavaScriptParser::LastFormalParameterArgContext* JavaScriptParser::FormalParameterListContext::lastFormalParameterArg() {
  return getRuleContext<JavaScriptParser::LastFormalParameterArgContext>(0);
}


size_t JavaScriptParser::FormalParameterListContext::getRuleIndex() const {
  return JavaScriptParser::RuleFormalParameterList;
}

void JavaScriptParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void JavaScriptParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any JavaScriptParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 88, JavaScriptParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(578);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::OpenBracket:
      case JavaScriptParser::OpenBrace:
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(565);
        formalParameterArg();
        setState(570);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(566);
            match(JavaScriptParser::Comma);
            setState(567);
            formalParameterArg(); 
          }
          setState(572);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        }
        setState(575);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaScriptParser::Comma) {
          setState(573);
          match(JavaScriptParser::Comma);
          setState(574);
          lastFormalParameterArg();
        }
        break;
      }

      case JavaScriptParser::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(577);
        lastFormalParameterArg();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterArgContext ------------------------------------------------------------------

JavaScriptParser::FormalParameterArgContext::FormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::AssignableContext* JavaScriptParser::FormalParameterArgContext::assignable() {
  return getRuleContext<JavaScriptParser::AssignableContext>(0);
}

tree::TerminalNode* JavaScriptParser::FormalParameterArgContext::Assign() {
  return getToken(JavaScriptParser::Assign, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::FormalParameterArgContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}


size_t JavaScriptParser::FormalParameterArgContext::getRuleIndex() const {
  return JavaScriptParser::RuleFormalParameterArg;
}

void JavaScriptParser::FormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterArg(this);
}

void JavaScriptParser::FormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterArg(this);
}


antlrcpp::Any JavaScriptParser::FormalParameterArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterArg(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::FormalParameterArgContext* JavaScriptParser::formalParameterArg() {
  FormalParameterArgContext *_localctx = _tracker.createInstance<FormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 90, JavaScriptParser::RuleFormalParameterArg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    assignable();
    setState(583);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Assign) {
      setState(581);
      match(JavaScriptParser::Assign);
      setState(582);
      singleExpression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterArgContext ------------------------------------------------------------------

JavaScriptParser::LastFormalParameterArgContext::LastFormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LastFormalParameterArgContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::LastFormalParameterArgContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}


size_t JavaScriptParser::LastFormalParameterArgContext::getRuleIndex() const {
  return JavaScriptParser::RuleLastFormalParameterArg;
}

void JavaScriptParser::LastFormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameterArg(this);
}

void JavaScriptParser::LastFormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameterArg(this);
}


antlrcpp::Any JavaScriptParser::LastFormalParameterArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLastFormalParameterArg(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::LastFormalParameterArgContext* JavaScriptParser::lastFormalParameterArg() {
  LastFormalParameterArgContext *_localctx = _tracker.createInstance<LastFormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 92, JavaScriptParser::RuleLastFormalParameterArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    match(JavaScriptParser::Ellipsis);
    setState(586);
    singleExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

JavaScriptParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::FunctionBodyContext::sourceElements() {
  return getRuleContext<JavaScriptParser::SourceElementsContext>(0);
}


size_t JavaScriptParser::FunctionBodyContext::getRuleIndex() const {
  return JavaScriptParser::RuleFunctionBody;
}

void JavaScriptParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void JavaScriptParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}


antlrcpp::Any JavaScriptParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 94, JavaScriptParser::RuleFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(588);
      sourceElements();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementsContext ------------------------------------------------------------------

JavaScriptParser::SourceElementsContext::SourceElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SourceElementContext *> JavaScriptParser::SourceElementsContext::sourceElement() {
  return getRuleContexts<JavaScriptParser::SourceElementContext>();
}

JavaScriptParser::SourceElementContext* JavaScriptParser::SourceElementsContext::sourceElement(size_t i) {
  return getRuleContext<JavaScriptParser::SourceElementContext>(i);
}


size_t JavaScriptParser::SourceElementsContext::getRuleIndex() const {
  return JavaScriptParser::RuleSourceElements;
}

void JavaScriptParser::SourceElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElements(this);
}

void JavaScriptParser::SourceElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElements(this);
}


antlrcpp::Any JavaScriptParser::SourceElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitSourceElements(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::sourceElements() {
  SourceElementsContext *_localctx = _tracker.createInstance<SourceElementsContext>(_ctx, getState());
  enterRule(_localctx, 96, JavaScriptParser::RuleSourceElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(592); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(591);
              sourceElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(594); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLiteralContext ------------------------------------------------------------------

JavaScriptParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ArrayLiteralContext::OpenBracket() {
  return getToken(JavaScriptParser::OpenBracket, 0);
}

JavaScriptParser::ElementListContext* JavaScriptParser::ArrayLiteralContext::elementList() {
  return getRuleContext<JavaScriptParser::ElementListContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrayLiteralContext::CloseBracket() {
  return getToken(JavaScriptParser::CloseBracket, 0);
}


size_t JavaScriptParser::ArrayLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrayLiteral;
}

void JavaScriptParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}

void JavaScriptParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}


antlrcpp::Any JavaScriptParser::ArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 98, JavaScriptParser::RuleArrayLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(JavaScriptParser::OpenBracket);
    setState(597);
    elementList();
    setState(598);
    match(JavaScriptParser::CloseBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

JavaScriptParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JavaScriptParser::ElementListContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::ElementListContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}

std::vector<JavaScriptParser::ArrayElementContext *> JavaScriptParser::ElementListContext::arrayElement() {
  return getRuleContexts<JavaScriptParser::ArrayElementContext>();
}

JavaScriptParser::ArrayElementContext* JavaScriptParser::ElementListContext::arrayElement(size_t i) {
  return getRuleContext<JavaScriptParser::ArrayElementContext>(i);
}


size_t JavaScriptParser::ElementListContext::getRuleIndex() const {
  return JavaScriptParser::RuleElementList;
}

void JavaScriptParser::ElementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementList(this);
}

void JavaScriptParser::ElementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementList(this);
}


antlrcpp::Any JavaScriptParser::ElementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitElementList(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ElementListContext* JavaScriptParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 100, JavaScriptParser::RuleElementList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(603);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(600);
        match(JavaScriptParser::Comma); 
      }
      setState(605);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
    setState(607);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
      | (1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenParen)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis)
      | (1ULL << JavaScriptParser::PlusPlus)
      | (1ULL << JavaScriptParser::MinusMinus)
      | (1ULL << JavaScriptParser::Plus)
      | (1ULL << JavaScriptParser::Minus)
      | (1ULL << JavaScriptParser::BitNot)
      | (1ULL << JavaScriptParser::Not)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 64))
      | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigHexIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::Typeof - 64))
      | (1ULL << (JavaScriptParser::New - 64))
      | (1ULL << (JavaScriptParser::Void - 64))
      | (1ULL << (JavaScriptParser::Function - 64))
      | (1ULL << (JavaScriptParser::This - 64))
      | (1ULL << (JavaScriptParser::Delete - 64))
      | (1ULL << (JavaScriptParser::Class - 64))
      | (1ULL << (JavaScriptParser::Super - 64))
      | (1ULL << (JavaScriptParser::Import - 64))
      | (1ULL << (JavaScriptParser::Async - 64))
      | (1ULL << (JavaScriptParser::Await - 64))
      | (1ULL << (JavaScriptParser::Yield - 64))
      | (1ULL << (JavaScriptParser::Identifier - 64))
      | (1ULL << (JavaScriptParser::StringLiteral - 64))
      | (1ULL << (JavaScriptParser::TemplateStringLiteral - 64)))) != 0)) {
      setState(606);
      arrayElement();
    }
    setState(617);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(610); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(609);
          match(JavaScriptParser::Comma);
          setState(612); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == JavaScriptParser::Comma);
        setState(614);
        arrayElement(); 
      }
      setState(619);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
    setState(623);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaScriptParser::Comma) {
      setState(620);
      match(JavaScriptParser::Comma);
      setState(625);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayElementContext ------------------------------------------------------------------

JavaScriptParser::ArrayElementContext::ArrayElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArrayElementContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrayElementContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}


size_t JavaScriptParser::ArrayElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrayElement;
}

void JavaScriptParser::ArrayElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElement(this);
}

void JavaScriptParser::ArrayElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElement(this);
}


antlrcpp::Any JavaScriptParser::ArrayElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayElement(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArrayElementContext* JavaScriptParser::arrayElement() {
  ArrayElementContext *_localctx = _tracker.createInstance<ArrayElementContext>(_ctx, getState());
  enterRule(_localctx, 102, JavaScriptParser::RuleArrayElement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Ellipsis) {
      setState(626);
      match(JavaScriptParser::Ellipsis);
    }
    setState(629);
    singleExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectLiteralContext ------------------------------------------------------------------

JavaScriptParser::ObjectLiteralContext::ObjectLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ObjectLiteralContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

tree::TerminalNode* JavaScriptParser::ObjectLiteralContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

std::vector<JavaScriptParser::PropertyAssignmentContext *> JavaScriptParser::ObjectLiteralContext::propertyAssignment() {
  return getRuleContexts<JavaScriptParser::PropertyAssignmentContext>();
}

JavaScriptParser::PropertyAssignmentContext* JavaScriptParser::ObjectLiteralContext::propertyAssignment(size_t i) {
  return getRuleContext<JavaScriptParser::PropertyAssignmentContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ObjectLiteralContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::ObjectLiteralContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}


size_t JavaScriptParser::ObjectLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleObjectLiteral;
}

void JavaScriptParser::ObjectLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteral(this);
}

void JavaScriptParser::ObjectLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteral(this);
}


antlrcpp::Any JavaScriptParser::ObjectLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectLiteral(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::objectLiteral() {
  ObjectLiteralContext *_localctx = _tracker.createInstance<ObjectLiteralContext>(_ctx, getState());
  enterRule(_localctx, 104, JavaScriptParser::RuleObjectLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(JavaScriptParser::OpenBrace);
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
      | (1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenParen)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis)
      | (1ULL << JavaScriptParser::PlusPlus)
      | (1ULL << JavaScriptParser::MinusMinus)
      | (1ULL << JavaScriptParser::Plus)
      | (1ULL << JavaScriptParser::Minus)
      | (1ULL << JavaScriptParser::BitNot)
      | (1ULL << JavaScriptParser::Not)
      | (1ULL << JavaScriptParser::Multiply)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 64))
      | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigHexIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::Break - 64))
      | (1ULL << (JavaScriptParser::Do - 64))
      | (1ULL << (JavaScriptParser::Instanceof - 64))
      | (1ULL << (JavaScriptParser::Typeof - 64))
      | (1ULL << (JavaScriptParser::Case - 64))
      | (1ULL << (JavaScriptParser::Else - 64))
      | (1ULL << (JavaScriptParser::New - 64))
      | (1ULL << (JavaScriptParser::Var - 64))
      | (1ULL << (JavaScriptParser::Catch - 64))
      | (1ULL << (JavaScriptParser::Finally - 64))
      | (1ULL << (JavaScriptParser::Return - 64))
      | (1ULL << (JavaScriptParser::Void - 64))
      | (1ULL << (JavaScriptParser::Continue - 64))
      | (1ULL << (JavaScriptParser::For - 64))
      | (1ULL << (JavaScriptParser::Switch - 64))
      | (1ULL << (JavaScriptParser::While - 64))
      | (1ULL << (JavaScriptParser::Debugger - 64))
      | (1ULL << (JavaScriptParser::Function - 64))
      | (1ULL << (JavaScriptParser::This - 64))
      | (1ULL << (JavaScriptParser::With - 64))
      | (1ULL << (JavaScriptParser::Default - 64))
      | (1ULL << (JavaScriptParser::If - 64))
      | (1ULL << (JavaScriptParser::Throw - 64))
      | (1ULL << (JavaScriptParser::Delete - 64))
      | (1ULL << (JavaScriptParser::In - 64))
      | (1ULL << (JavaScriptParser::Try - 64))
      | (1ULL << (JavaScriptParser::As - 64))
      | (1ULL << (JavaScriptParser::From - 64))
      | (1ULL << (JavaScriptParser::Class - 64))
      | (1ULL << (JavaScriptParser::Enum - 64))
      | (1ULL << (JavaScriptParser::Extends - 64))
      | (1ULL << (JavaScriptParser::Super - 64))
      | (1ULL << (JavaScriptParser::Const - 64))
      | (1ULL << (JavaScriptParser::Export - 64))
      | (1ULL << (JavaScriptParser::Import - 64))
      | (1ULL << (JavaScriptParser::Async - 64))
      | (1ULL << (JavaScriptParser::Await - 64))
      | (1ULL << (JavaScriptParser::Implements - 64))
      | (1ULL << (JavaScriptParser::Let - 64))
      | (1ULL << (JavaScriptParser::Private - 64))
      | (1ULL << (JavaScriptParser::Public - 64))
      | (1ULL << (JavaScriptParser::Interface - 64))
      | (1ULL << (JavaScriptParser::Package - 64))
      | (1ULL << (JavaScriptParser::Protected - 64))
      | (1ULL << (JavaScriptParser::Static - 64))
      | (1ULL << (JavaScriptParser::Yield - 64))
      | (1ULL << (JavaScriptParser::Identifier - 64))
      | (1ULL << (JavaScriptParser::StringLiteral - 64))
      | (1ULL << (JavaScriptParser::TemplateStringLiteral - 64)))) != 0)) {
      setState(632);
      propertyAssignment();
      setState(637);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(633);
          match(JavaScriptParser::Comma);
          setState(634);
          propertyAssignment(); 
        }
        setState(639);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
      }
    }
    setState(643);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Comma) {
      setState(642);
      match(JavaScriptParser::Comma);
    }
    setState(645);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyAssignmentContext ------------------------------------------------------------------

JavaScriptParser::PropertyAssignmentContext::PropertyAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::PropertyAssignmentContext::getRuleIndex() const {
  return JavaScriptParser::RulePropertyAssignment;
}

void JavaScriptParser::PropertyAssignmentContext::copyFrom(PropertyAssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PropertyExpressionAssignmentContext ------------------------------------------------------------------

JavaScriptParser::PropertyNameContext* JavaScriptParser::PropertyExpressionAssignmentContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyExpressionAssignmentContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PropertyExpressionAssignmentContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PropertyExpressionAssignmentContext::PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyExpressionAssignment(this);
}
void JavaScriptParser::PropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyExpressionAssignment(this);
}

antlrcpp::Any JavaScriptParser::PropertyExpressionAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyExpressionAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComputedPropertyExpressionAssignmentContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ComputedPropertyExpressionAssignmentContext::OpenBracket() {
  return getToken(JavaScriptParser::OpenBracket, 0);
}

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ComputedPropertyExpressionAssignmentContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ComputedPropertyExpressionAssignmentContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::ComputedPropertyExpressionAssignmentContext::CloseBracket() {
  return getToken(JavaScriptParser::CloseBracket, 0);
}

tree::TerminalNode* JavaScriptParser::ComputedPropertyExpressionAssignmentContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::ComputedPropertyExpressionAssignmentContext::ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ComputedPropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComputedPropertyExpressionAssignment(this);
}
void JavaScriptParser::ComputedPropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComputedPropertyExpressionAssignment(this);
}

antlrcpp::Any JavaScriptParser::ComputedPropertyExpressionAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitComputedPropertyExpressionAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyShorthandContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PropertyShorthandContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyShorthandContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}

JavaScriptParser::PropertyShorthandContext::PropertyShorthandContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyShorthandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyShorthand(this);
}
void JavaScriptParser::PropertyShorthandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyShorthand(this);
}

antlrcpp::Any JavaScriptParser::PropertyShorthandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyShorthand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertySetterContext ------------------------------------------------------------------

JavaScriptParser::SetterContext* JavaScriptParser::PropertySetterContext::setter() {
  return getRuleContext<JavaScriptParser::SetterContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertySetterContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::FormalParameterArgContext* JavaScriptParser::PropertySetterContext::formalParameterArg() {
  return getRuleContext<JavaScriptParser::FormalParameterArgContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertySetterContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::PropertySetterContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::PropertySetterContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertySetterContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

JavaScriptParser::PropertySetterContext::PropertySetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertySetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySetter(this);
}
void JavaScriptParser::PropertySetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySetter(this);
}

antlrcpp::Any JavaScriptParser::PropertySetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertySetter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyGetterContext ------------------------------------------------------------------

JavaScriptParser::GetterContext* JavaScriptParser::PropertyGetterContext::getter() {
  return getRuleContext<JavaScriptParser::GetterContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyGetterContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::PropertyGetterContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::PropertyGetterContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::PropertyGetterContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyGetterContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

JavaScriptParser::PropertyGetterContext::PropertyGetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyGetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyGetter(this);
}
void JavaScriptParser::PropertyGetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyGetter(this);
}

antlrcpp::Any JavaScriptParser::PropertyGetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyGetter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionPropertyContext ------------------------------------------------------------------

JavaScriptParser::PropertyNameContext* JavaScriptParser::FunctionPropertyContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::FunctionPropertyContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::Async() {
  return getToken(JavaScriptParser::Async, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionPropertyContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::FunctionPropertyContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}

JavaScriptParser::FunctionPropertyContext::FunctionPropertyContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::FunctionPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionProperty(this);
}
void JavaScriptParser::FunctionPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionProperty(this);
}

antlrcpp::Any JavaScriptParser::FunctionPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionProperty(this);
  else
    return visitor->visitChildren(this);
}
JavaScriptParser::PropertyAssignmentContext* JavaScriptParser::propertyAssignment() {
  PropertyAssignmentContext *_localctx = _tracker.createInstance<PropertyAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 106, JavaScriptParser::RulePropertyAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(692);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(647);
      propertyName();
      setState(648);
      match(JavaScriptParser::Colon);
      setState(649);
      singleExpression(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::ComputedPropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(651);
      match(JavaScriptParser::OpenBracket);
      setState(652);
      singleExpression(0);
      setState(653);
      match(JavaScriptParser::CloseBracket);
      setState(654);
      match(JavaScriptParser::Colon);
      setState(655);
      singleExpression(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::FunctionPropertyContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(658);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(657);
        match(JavaScriptParser::Async);
        break;
      }

      }
      setState(661);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Multiply) {
        setState(660);
        match(JavaScriptParser::Multiply);
      }
      setState(663);
      propertyName();
      setState(664);
      match(JavaScriptParser::OpenParen);
      setState(666);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(665);
        formalParameterList();
      }
      setState(668);
      match(JavaScriptParser::CloseParen);
      setState(669);
      match(JavaScriptParser::OpenBrace);
      setState(670);
      functionBody();
      setState(671);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyGetterContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(673);
      getter();
      setState(674);
      match(JavaScriptParser::OpenParen);
      setState(675);
      match(JavaScriptParser::CloseParen);
      setState(676);
      match(JavaScriptParser::OpenBrace);
      setState(677);
      functionBody();
      setState(678);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertySetterContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(680);
      setter();
      setState(681);
      match(JavaScriptParser::OpenParen);
      setState(682);
      formalParameterArg();
      setState(683);
      match(JavaScriptParser::CloseParen);
      setState(684);
      match(JavaScriptParser::OpenBrace);
      setState(685);
      functionBody();
      setState(686);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyShorthandContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(689);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Ellipsis) {
        setState(688);
        match(JavaScriptParser::Ellipsis);
      }
      setState(691);
      singleExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyNameContext ------------------------------------------------------------------

JavaScriptParser::PropertyNameContext::PropertyNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::PropertyNameContext::identifierName() {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyNameContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::PropertyNameContext::numericLiteral() {
  return getRuleContext<JavaScriptParser::NumericLiteralContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyNameContext::OpenBracket() {
  return getToken(JavaScriptParser::OpenBracket, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PropertyNameContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyNameContext::CloseBracket() {
  return getToken(JavaScriptParser::CloseBracket, 0);
}


size_t JavaScriptParser::PropertyNameContext::getRuleIndex() const {
  return JavaScriptParser::RulePropertyName;
}

void JavaScriptParser::PropertyNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyName(this);
}

void JavaScriptParser::PropertyNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyName(this);
}


antlrcpp::Any JavaScriptParser::PropertyNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyName(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::propertyName() {
  PropertyNameContext *_localctx = _tracker.createInstance<PropertyNameContext>(_ctx, getState());
  enterRule(_localctx, 108, JavaScriptParser::RulePropertyName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(701);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::As:
      case JavaScriptParser::From:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Async:
      case JavaScriptParser::Await:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield:
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(694);
        identifierName();
        break;
      }

      case JavaScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(695);
        match(JavaScriptParser::StringLiteral);
        break;
      }

      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(696);
        numericLiteral();
        break;
      }

      case JavaScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 4);
        setState(697);
        match(JavaScriptParser::OpenBracket);
        setState(698);
        singleExpression(0);
        setState(699);
        match(JavaScriptParser::CloseBracket);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

JavaScriptParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ArgumentsContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::ArgumentsContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

std::vector<JavaScriptParser::ArgumentContext *> JavaScriptParser::ArgumentsContext::argument() {
  return getRuleContexts<JavaScriptParser::ArgumentContext>();
}

JavaScriptParser::ArgumentContext* JavaScriptParser::ArgumentsContext::argument(size_t i) {
  return getRuleContext<JavaScriptParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ArgumentsContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::ArgumentsContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}


size_t JavaScriptParser::ArgumentsContext::getRuleIndex() const {
  return JavaScriptParser::RuleArguments;
}

void JavaScriptParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void JavaScriptParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


antlrcpp::Any JavaScriptParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 110, JavaScriptParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(703);
    match(JavaScriptParser::OpenParen);
    setState(715);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
      | (1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenParen)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis)
      | (1ULL << JavaScriptParser::PlusPlus)
      | (1ULL << JavaScriptParser::MinusMinus)
      | (1ULL << JavaScriptParser::Plus)
      | (1ULL << JavaScriptParser::Minus)
      | (1ULL << JavaScriptParser::BitNot)
      | (1ULL << JavaScriptParser::Not)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 64))
      | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigHexIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 64))
      | (1ULL << (JavaScriptParser::Typeof - 64))
      | (1ULL << (JavaScriptParser::New - 64))
      | (1ULL << (JavaScriptParser::Void - 64))
      | (1ULL << (JavaScriptParser::Function - 64))
      | (1ULL << (JavaScriptParser::This - 64))
      | (1ULL << (JavaScriptParser::Delete - 64))
      | (1ULL << (JavaScriptParser::Class - 64))
      | (1ULL << (JavaScriptParser::Super - 64))
      | (1ULL << (JavaScriptParser::Import - 64))
      | (1ULL << (JavaScriptParser::Async - 64))
      | (1ULL << (JavaScriptParser::Await - 64))
      | (1ULL << (JavaScriptParser::Yield - 64))
      | (1ULL << (JavaScriptParser::Identifier - 64))
      | (1ULL << (JavaScriptParser::StringLiteral - 64))
      | (1ULL << (JavaScriptParser::TemplateStringLiteral - 64)))) != 0)) {
      setState(704);
      argument();
      setState(709);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(705);
          match(JavaScriptParser::Comma);
          setState(706);
          argument(); 
        }
        setState(711);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
      }
      setState(713);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Comma) {
        setState(712);
        match(JavaScriptParser::Comma);
      }
    }
    setState(717);
    match(JavaScriptParser::CloseParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

JavaScriptParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArgumentContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArgumentContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

tree::TerminalNode* JavaScriptParser::ArgumentContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}


size_t JavaScriptParser::ArgumentContext::getRuleIndex() const {
  return JavaScriptParser::RuleArgument;
}

void JavaScriptParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void JavaScriptParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any JavaScriptParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArgumentContext* JavaScriptParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 112, JavaScriptParser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Ellipsis) {
      setState(719);
      match(JavaScriptParser::Ellipsis);
    }
    setState(724);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      setState(722);
      singleExpression(0);
      break;
    }

    case 2: {
      setState(723);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionSequenceContext ------------------------------------------------------------------

JavaScriptParser::ExpressionSequenceContext::ExpressionSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ExpressionSequenceContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ExpressionSequenceContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

std::vector<tree::TerminalNode *> JavaScriptParser::ExpressionSequenceContext::Comma() {
  return getTokens(JavaScriptParser::Comma);
}

tree::TerminalNode* JavaScriptParser::ExpressionSequenceContext::Comma(size_t i) {
  return getToken(JavaScriptParser::Comma, i);
}


size_t JavaScriptParser::ExpressionSequenceContext::getRuleIndex() const {
  return JavaScriptParser::RuleExpressionSequence;
}

void JavaScriptParser::ExpressionSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionSequence(this);
}

void JavaScriptParser::ExpressionSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionSequence(this);
}


antlrcpp::Any JavaScriptParser::ExpressionSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionSequence(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::expressionSequence() {
  ExpressionSequenceContext *_localctx = _tracker.createInstance<ExpressionSequenceContext>(_ctx, getState());
  enterRule(_localctx, 114, JavaScriptParser::RuleExpressionSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(726);
    singleExpression(0);
    setState(731);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(727);
        match(JavaScriptParser::Comma);
        setState(728);
        singleExpression(0); 
      }
      setState(733);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext::SingleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::SingleExpressionContext::getRuleIndex() const {
  return JavaScriptParser::RuleSingleExpression;
}

void JavaScriptParser::SingleExpressionContext::copyFrom(SingleExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TemplateStringExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TemplateStringExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::TemplateStringExpressionContext::TemplateStringLiteral() {
  return getToken(JavaScriptParser::TemplateStringLiteral, 0);
}

JavaScriptParser::TemplateStringExpressionContext::TemplateStringExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TemplateStringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStringExpression(this);
}
void JavaScriptParser::TemplateStringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStringExpression(this);
}

antlrcpp::Any JavaScriptParser::TemplateStringExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitTemplateStringExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::TernaryExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TernaryExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::TernaryExpressionContext::QuestionMark() {
  return getToken(JavaScriptParser::QuestionMark, 0);
}

tree::TerminalNode* JavaScriptParser::TernaryExpressionContext::Colon() {
  return getToken(JavaScriptParser::Colon, 0);
}

JavaScriptParser::TernaryExpressionContext::TernaryExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TernaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryExpression(this);
}
void JavaScriptParser::TernaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryExpression(this);
}

antlrcpp::Any JavaScriptParser::TernaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitTernaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::LogicalAndExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::LogicalAndExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::LogicalAndExpressionContext::And() {
  return getToken(JavaScriptParser::And, 0);
}

JavaScriptParser::LogicalAndExpressionContext::LogicalAndExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}
void JavaScriptParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}

antlrcpp::Any JavaScriptParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::PowerExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PowerExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::PowerExpressionContext::Power() {
  return getToken(JavaScriptParser::Power, 0);
}

JavaScriptParser::PowerExpressionContext::PowerExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PowerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpression(this);
}
void JavaScriptParser::PowerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpression(this);
}

antlrcpp::Any JavaScriptParser::PowerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPowerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncrementExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::PreIncrementExpressionContext::PlusPlus() {
  return getToken(JavaScriptParser::PlusPlus, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PreIncrementExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PreIncrementExpressionContext::PreIncrementExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PreIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIncrementExpression(this);
}
void JavaScriptParser::PreIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIncrementExpression(this);
}

antlrcpp::Any JavaScriptParser::PreIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPreIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjectLiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::ObjectLiteralExpressionContext::objectLiteral() {
  return getRuleContext<JavaScriptParser::ObjectLiteralContext>(0);
}

JavaScriptParser::ObjectLiteralExpressionContext::ObjectLiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ObjectLiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteralExpression(this);
}
void JavaScriptParser::ObjectLiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteralExpression(this);
}

antlrcpp::Any JavaScriptParser::ObjectLiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MetaExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::MetaExpressionContext::New() {
  return getToken(JavaScriptParser::New, 0);
}

tree::TerminalNode* JavaScriptParser::MetaExpressionContext::Dot() {
  return getToken(JavaScriptParser::Dot, 0);
}

tree::TerminalNode* JavaScriptParser::MetaExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::MetaExpressionContext::MetaExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MetaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetaExpression(this);
}
void JavaScriptParser::MetaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetaExpression(this);
}

antlrcpp::Any JavaScriptParser::MetaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitMetaExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::InExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::InExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::InExpressionContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

JavaScriptParser::InExpressionContext::InExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::InExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInExpression(this);
}
void JavaScriptParser::InExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInExpression(this);
}

antlrcpp::Any JavaScriptParser::InExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitInExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::LogicalOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::LogicalOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::LogicalOrExpressionContext::Or() {
  return getToken(JavaScriptParser::Or, 0);
}

JavaScriptParser::LogicalOrExpressionContext::LogicalOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}
void JavaScriptParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}

antlrcpp::Any JavaScriptParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::NotExpressionContext::Not() {
  return getToken(JavaScriptParser::Not, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::NotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::NotExpressionContext::NotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void JavaScriptParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any JavaScriptParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreDecreaseExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::PreDecreaseExpressionContext::MinusMinus() {
  return getToken(JavaScriptParser::MinusMinus, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PreDecreaseExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PreDecreaseExpressionContext::PreDecreaseExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PreDecreaseExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreDecreaseExpression(this);
}
void JavaScriptParser::PreDecreaseExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreDecreaseExpression(this);
}

antlrcpp::Any JavaScriptParser::PreDecreaseExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPreDecreaseExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgumentsExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArgumentsExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::ArgumentsExpressionContext::arguments() {
  return getRuleContext<JavaScriptParser::ArgumentsContext>(0);
}

JavaScriptParser::ArgumentsExpressionContext::ArgumentsExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArgumentsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentsExpression(this);
}
void JavaScriptParser::ArgumentsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentsExpression(this);
}

antlrcpp::Any JavaScriptParser::ArgumentsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArgumentsExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AwaitExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::AwaitExpressionContext::Await() {
  return getToken(JavaScriptParser::Await, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AwaitExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::AwaitExpressionContext::AwaitExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AwaitExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAwaitExpression(this);
}
void JavaScriptParser::AwaitExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAwaitExpression(this);
}

antlrcpp::Any JavaScriptParser::AwaitExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAwaitExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ThisExpressionContext::This() {
  return getToken(JavaScriptParser::This, 0);
}

JavaScriptParser::ThisExpressionContext::ThisExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ThisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisExpression(this);
}
void JavaScriptParser::ThisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisExpression(this);
}

antlrcpp::Any JavaScriptParser::ThisExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitThisExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

JavaScriptParser::AnoymousFunctionContext* JavaScriptParser::FunctionExpressionContext::anoymousFunction() {
  return getRuleContext<JavaScriptParser::AnoymousFunctionContext>(0);
}

JavaScriptParser::FunctionExpressionContext::FunctionExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::FunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpression(this);
}
void JavaScriptParser::FunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpression(this);
}

antlrcpp::Any JavaScriptParser::FunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::UnaryMinusExpressionContext::Minus() {
  return getToken(JavaScriptParser::Minus, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::UnaryMinusExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::UnaryMinusExpressionContext::UnaryMinusExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::UnaryMinusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusExpression(this);
}
void JavaScriptParser::UnaryMinusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusExpression(this);
}

antlrcpp::Any JavaScriptParser::UnaryMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnaryMinusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AssignmentExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AssignmentExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::AssignmentExpressionContext::Assign() {
  return getToken(JavaScriptParser::Assign, 0);
}

JavaScriptParser::AssignmentExpressionContext::AssignmentExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}
void JavaScriptParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

antlrcpp::Any JavaScriptParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostDecreaseExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PostDecreaseExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::PostDecreaseExpressionContext::MinusMinus() {
  return getToken(JavaScriptParser::MinusMinus, 0);
}

JavaScriptParser::PostDecreaseExpressionContext::PostDecreaseExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PostDecreaseExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecreaseExpression(this);
}
void JavaScriptParser::PostDecreaseExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecreaseExpression(this);
}

antlrcpp::Any JavaScriptParser::PostDecreaseExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPostDecreaseExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::TypeofExpressionContext::Typeof() {
  return getToken(JavaScriptParser::Typeof, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TypeofExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::TypeofExpressionContext::TypeofExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}
void JavaScriptParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}

antlrcpp::Any JavaScriptParser::TypeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstanceofExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::InstanceofExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::InstanceofExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::InstanceofExpressionContext::Instanceof() {
  return getToken(JavaScriptParser::Instanceof, 0);
}

JavaScriptParser::InstanceofExpressionContext::InstanceofExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::InstanceofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceofExpression(this);
}
void JavaScriptParser::InstanceofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceofExpression(this);
}

antlrcpp::Any JavaScriptParser::InstanceofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitInstanceofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPlusExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::UnaryPlusExpressionContext::Plus() {
  return getToken(JavaScriptParser::Plus, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::UnaryPlusExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::UnaryPlusExpressionContext::UnaryPlusExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::UnaryPlusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPlusExpression(this);
}
void JavaScriptParser::UnaryPlusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPlusExpression(this);
}

antlrcpp::Any JavaScriptParser::UnaryPlusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnaryPlusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeleteExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::DeleteExpressionContext::Delete() {
  return getToken(JavaScriptParser::Delete, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::DeleteExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::DeleteExpressionContext::DeleteExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::DeleteExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpression(this);
}
void JavaScriptParser::DeleteExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpression(this);
}

antlrcpp::Any JavaScriptParser::DeleteExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitDeleteExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ImportExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ImportExpressionContext::Import() {
  return getToken(JavaScriptParser::Import, 0);
}

tree::TerminalNode* JavaScriptParser::ImportExpressionContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ImportExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ImportExpressionContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::ImportExpressionContext::ImportExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ImportExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportExpression(this);
}
void JavaScriptParser::ImportExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportExpression(this);
}

antlrcpp::Any JavaScriptParser::ImportExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::EqualityExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::EqualityExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::EqualityExpressionContext::Equals_() {
  return getToken(JavaScriptParser::Equals_, 0);
}

tree::TerminalNode* JavaScriptParser::EqualityExpressionContext::NotEquals() {
  return getToken(JavaScriptParser::NotEquals, 0);
}

tree::TerminalNode* JavaScriptParser::EqualityExpressionContext::IdentityEquals() {
  return getToken(JavaScriptParser::IdentityEquals, 0);
}

tree::TerminalNode* JavaScriptParser::EqualityExpressionContext::IdentityNotEquals() {
  return getToken(JavaScriptParser::IdentityNotEquals, 0);
}

JavaScriptParser::EqualityExpressionContext::EqualityExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}
void JavaScriptParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}

antlrcpp::Any JavaScriptParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitXOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitXOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::BitXOrExpressionContext::BitXOr() {
  return getToken(JavaScriptParser::BitXOr, 0);
}

JavaScriptParser::BitXOrExpressionContext::BitXOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitXOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXOrExpression(this);
}
void JavaScriptParser::BitXOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXOrExpression(this);
}

antlrcpp::Any JavaScriptParser::BitXOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitXOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SuperExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::SuperExpressionContext::Super() {
  return getToken(JavaScriptParser::Super, 0);
}

JavaScriptParser::SuperExpressionContext::SuperExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::SuperExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperExpression(this);
}
void JavaScriptParser::SuperExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperExpression(this);
}

antlrcpp::Any JavaScriptParser::SuperExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitSuperExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::MultiplicativeExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MultiplicativeExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::MultiplicativeExpressionContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

tree::TerminalNode* JavaScriptParser::MultiplicativeExpressionContext::Divide() {
  return getToken(JavaScriptParser::Divide, 0);
}

tree::TerminalNode* JavaScriptParser::MultiplicativeExpressionContext::Modulus() {
  return getToken(JavaScriptParser::Modulus, 0);
}

JavaScriptParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}
void JavaScriptParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}

antlrcpp::Any JavaScriptParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitShiftExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitShiftExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitShiftExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::BitShiftExpressionContext::LeftShiftArithmetic() {
  return getToken(JavaScriptParser::LeftShiftArithmetic, 0);
}

tree::TerminalNode* JavaScriptParser::BitShiftExpressionContext::RightShiftArithmetic() {
  return getToken(JavaScriptParser::RightShiftArithmetic, 0);
}

tree::TerminalNode* JavaScriptParser::BitShiftExpressionContext::RightShiftLogical() {
  return getToken(JavaScriptParser::RightShiftLogical, 0);
}

JavaScriptParser::BitShiftExpressionContext::BitShiftExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitShiftExpression(this);
}
void JavaScriptParser::BitShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitShiftExpression(this);
}

antlrcpp::Any JavaScriptParser::BitShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ParenthesizedExpressionContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ParenthesizedExpressionContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::ParenthesizedExpressionContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}
void JavaScriptParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}

antlrcpp::Any JavaScriptParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AdditiveExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AdditiveExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::AdditiveExpressionContext::Plus() {
  return getToken(JavaScriptParser::Plus, 0);
}

tree::TerminalNode* JavaScriptParser::AdditiveExpressionContext::Minus() {
  return getToken(JavaScriptParser::Minus, 0);
}

JavaScriptParser::AdditiveExpressionContext::AdditiveExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}
void JavaScriptParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}

antlrcpp::Any JavaScriptParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::RelationalExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::RelationalExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::RelationalExpressionContext::LessThan() {
  return getToken(JavaScriptParser::LessThan, 0);
}

tree::TerminalNode* JavaScriptParser::RelationalExpressionContext::MoreThan() {
  return getToken(JavaScriptParser::MoreThan, 0);
}

tree::TerminalNode* JavaScriptParser::RelationalExpressionContext::LessThanEquals() {
  return getToken(JavaScriptParser::LessThanEquals, 0);
}

tree::TerminalNode* JavaScriptParser::RelationalExpressionContext::GreaterThanEquals() {
  return getToken(JavaScriptParser::GreaterThanEquals, 0);
}

JavaScriptParser::RelationalExpressionContext::RelationalExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}
void JavaScriptParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}

antlrcpp::Any JavaScriptParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncrementExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PostIncrementExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::PostIncrementExpressionContext::PlusPlus() {
  return getToken(JavaScriptParser::PlusPlus, 0);
}

JavaScriptParser::PostIncrementExpressionContext::PostIncrementExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PostIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression(this);
}
void JavaScriptParser::PostIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression(this);
}

antlrcpp::Any JavaScriptParser::PostIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitPostIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- YieldExpressionContext ------------------------------------------------------------------

JavaScriptParser::YieldStatementContext* JavaScriptParser::YieldExpressionContext::yieldStatement() {
  return getRuleContext<JavaScriptParser::YieldStatementContext>(0);
}

JavaScriptParser::YieldExpressionContext::YieldExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::YieldExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldExpression(this);
}
void JavaScriptParser::YieldExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldExpression(this);
}

antlrcpp::Any JavaScriptParser::YieldExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitYieldExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitNotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::BitNotExpressionContext::BitNot() {
  return getToken(JavaScriptParser::BitNot, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitNotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::BitNotExpressionContext::BitNotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitNotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitNotExpression(this);
}
void JavaScriptParser::BitNotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitNotExpression(this);
}

antlrcpp::Any JavaScriptParser::BitNotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NewExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::NewExpressionContext::New() {
  return getToken(JavaScriptParser::New, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::NewExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::NewExpressionContext::arguments() {
  return getRuleContext<JavaScriptParser::ArgumentsContext>(0);
}

JavaScriptParser::NewExpressionContext::NewExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}
void JavaScriptParser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}

antlrcpp::Any JavaScriptParser::NewExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitNewExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::LiteralContext* JavaScriptParser::LiteralExpressionContext::literal() {
  return getRuleContext<JavaScriptParser::LiteralContext>(0);
}

JavaScriptParser::LiteralExpressionContext::LiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}
void JavaScriptParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}

antlrcpp::Any JavaScriptParser::LiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayLiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::ArrayLiteralExpressionContext::arrayLiteral() {
  return getRuleContext<JavaScriptParser::ArrayLiteralContext>(0);
}

JavaScriptParser::ArrayLiteralExpressionContext::ArrayLiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArrayLiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteralExpression(this);
}
void JavaScriptParser::ArrayLiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteralExpression(this);
}

antlrcpp::Any JavaScriptParser::ArrayLiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberDotExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MemberDotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::MemberDotExpressionContext::Dot() {
  return getToken(JavaScriptParser::Dot, 0);
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::MemberDotExpressionContext::identifierName() {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::MemberDotExpressionContext::QuestionMark() {
  return getToken(JavaScriptParser::QuestionMark, 0);
}

tree::TerminalNode* JavaScriptParser::MemberDotExpressionContext::Hashtag() {
  return getToken(JavaScriptParser::Hashtag, 0);
}

JavaScriptParser::MemberDotExpressionContext::MemberDotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MemberDotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDotExpression(this);
}
void JavaScriptParser::MemberDotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDotExpression(this);
}

antlrcpp::Any JavaScriptParser::MemberDotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberDotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ClassExpressionContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::ClassExpressionContext::classTail() {
  return getRuleContext<JavaScriptParser::ClassTailContext>(0);
}

tree::TerminalNode* JavaScriptParser::ClassExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ClassExpressionContext::ClassExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ClassExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassExpression(this);
}
void JavaScriptParser::ClassExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassExpression(this);
}

antlrcpp::Any JavaScriptParser::ClassExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberIndexExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MemberIndexExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::MemberIndexExpressionContext::OpenBracket() {
  return getToken(JavaScriptParser::OpenBracket, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::MemberIndexExpressionContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* JavaScriptParser::MemberIndexExpressionContext::CloseBracket() {
  return getToken(JavaScriptParser::CloseBracket, 0);
}

JavaScriptParser::MemberIndexExpressionContext::MemberIndexExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MemberIndexExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberIndexExpression(this);
}
void JavaScriptParser::MemberIndexExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberIndexExpression(this);
}

antlrcpp::Any JavaScriptParser::MemberIndexExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberIndexExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::IdentifierExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::IdentifierExpressionContext::IdentifierExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void JavaScriptParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any JavaScriptParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitAndExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitAndExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::BitAndExpressionContext::BitAnd() {
  return getToken(JavaScriptParser::BitAnd, 0);
}

JavaScriptParser::BitAndExpressionContext::BitAndExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAndExpression(this);
}
void JavaScriptParser::BitAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAndExpression(this);
}

antlrcpp::Any JavaScriptParser::BitAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::BitOrExpressionContext::BitOr() {
  return getToken(JavaScriptParser::BitOr, 0);
}

JavaScriptParser::BitOrExpressionContext::BitOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOrExpression(this);
}
void JavaScriptParser::BitOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOrExpression(this);
}

antlrcpp::Any JavaScriptParser::BitOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentOperatorExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AssignmentOperatorExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AssignmentOperatorExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::AssignmentOperatorContext* JavaScriptParser::AssignmentOperatorExpressionContext::assignmentOperator() {
  return getRuleContext<JavaScriptParser::AssignmentOperatorContext>(0);
}

JavaScriptParser::AssignmentOperatorExpressionContext::AssignmentOperatorExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AssignmentOperatorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperatorExpression(this);
}
void JavaScriptParser::AssignmentOperatorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperatorExpression(this);
}

antlrcpp::Any JavaScriptParser::AssignmentOperatorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperatorExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VoidExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::VoidExpressionContext::Void() {
  return getToken(JavaScriptParser::Void, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::VoidExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::VoidExpressionContext::VoidExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::VoidExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoidExpression(this);
}
void JavaScriptParser::VoidExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoidExpression(this);
}

antlrcpp::Any JavaScriptParser::VoidExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitVoidExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoalesceExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::CoalesceExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::CoalesceExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::CoalesceExpressionContext::NullCoalesce() {
  return getToken(JavaScriptParser::NullCoalesce, 0);
}

JavaScriptParser::CoalesceExpressionContext::CoalesceExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::CoalesceExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoalesceExpression(this);
}
void JavaScriptParser::CoalesceExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoalesceExpression(this);
}

antlrcpp::Any JavaScriptParser::CoalesceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitCoalesceExpression(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::singleExpression() {
   return singleExpression(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::singleExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JavaScriptParser::SingleExpressionContext *_localctx = _tracker.createInstance<SingleExpressionContext>(_ctx, parentState);
  JavaScriptParser::SingleExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 116;
  enterRecursionRule(_localctx, 116, JavaScriptParser::RuleSingleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(785);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(735);
      anoymousFunction();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ClassExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(736);
      match(JavaScriptParser::Class);
      setState(738);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Identifier) {
        setState(737);
        match(JavaScriptParser::Identifier);
      }
      setState(740);
      classTail();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NewExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(741);
      match(JavaScriptParser::New);
      setState(742);
      singleExpression(0);
      setState(744);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
      case 1: {
        setState(743);
        arguments();
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MetaExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(746);
      match(JavaScriptParser::New);
      setState(747);
      match(JavaScriptParser::Dot);
      setState(748);
      match(JavaScriptParser::Identifier);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<DeleteExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(749);
      match(JavaScriptParser::Delete);
      setState(750);
      singleExpression(37);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VoidExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(751);
      match(JavaScriptParser::Void);
      setState(752);
      singleExpression(36);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<TypeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(753);
      match(JavaScriptParser::Typeof);
      setState(754);
      singleExpression(35);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PreIncrementExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(755);
      match(JavaScriptParser::PlusPlus);
      setState(756);
      singleExpression(34);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PreDecreaseExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(757);
      match(JavaScriptParser::MinusMinus);
      setState(758);
      singleExpression(33);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<UnaryPlusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(759);
      match(JavaScriptParser::Plus);
      setState(760);
      singleExpression(32);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(761);
      match(JavaScriptParser::Minus);
      setState(762);
      singleExpression(31);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<BitNotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(763);
      match(JavaScriptParser::BitNot);
      setState(764);
      singleExpression(30);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(765);
      match(JavaScriptParser::Not);
      setState(766);
      singleExpression(29);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<AwaitExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(767);
      match(JavaScriptParser::Await);
      setState(768);
      singleExpression(28);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<ImportExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(769);
      match(JavaScriptParser::Import);
      setState(770);
      match(JavaScriptParser::OpenParen);
      setState(771);
      singleExpression(0);
      setState(772);
      match(JavaScriptParser::CloseParen);
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<YieldExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(774);
      yieldStatement();
      break;
    }

    case 17: {
      _localctx = _tracker.createInstance<ThisExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(775);
      match(JavaScriptParser::This);
      break;
    }

    case 18: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(776);
      match(JavaScriptParser::Identifier);
      break;
    }

    case 19: {
      _localctx = _tracker.createInstance<SuperExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(777);
      match(JavaScriptParser::Super);
      break;
    }

    case 20: {
      _localctx = _tracker.createInstance<LiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(778);
      literal();
      break;
    }

    case 21: {
      _localctx = _tracker.createInstance<ArrayLiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(779);
      arrayLiteral();
      break;
    }

    case 22: {
      _localctx = _tracker.createInstance<ObjectLiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(780);
      objectLiteral();
      break;
    }

    case 23: {
      _localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(781);
      match(JavaScriptParser::OpenParen);
      setState(782);
      expressionSequence();
      setState(783);
      match(JavaScriptParser::CloseParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(868);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(866);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(787);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(788);
          match(JavaScriptParser::Power);
          setState(789);
          singleExpression(27);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicativeExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(790);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(791);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::Multiply)
            | (1ULL << JavaScriptParser::Divide)
            | (1ULL << JavaScriptParser::Modulus))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(792);
          singleExpression(27);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(793);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(794);
          _la = _input->LA(1);
          if (!(_la == JavaScriptParser::Plus

          || _la == JavaScriptParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(795);
          singleExpression(26);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CoalesceExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(796);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(797);
          match(JavaScriptParser::NullCoalesce);
          setState(798);
          singleExpression(25);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BitShiftExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(799);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(800);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::RightShiftArithmetic)
            | (1ULL << JavaScriptParser::LeftShiftArithmetic)
            | (1ULL << JavaScriptParser::RightShiftLogical))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(801);
          singleExpression(24);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<RelationalExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(802);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(803);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::LessThan)
            | (1ULL << JavaScriptParser::MoreThan)
            | (1ULL << JavaScriptParser::LessThanEquals)
            | (1ULL << JavaScriptParser::GreaterThanEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(804);
          singleExpression(23);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<InstanceofExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(805);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(806);
          match(JavaScriptParser::Instanceof);
          setState(807);
          singleExpression(22);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<InExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(808);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(809);
          match(JavaScriptParser::In);
          setState(810);
          singleExpression(21);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<EqualityExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(811);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(812);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::Equals_)
            | (1ULL << JavaScriptParser::NotEquals)
            | (1ULL << JavaScriptParser::IdentityEquals)
            | (1ULL << JavaScriptParser::IdentityNotEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(813);
          singleExpression(20);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitAndExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(814);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(815);
          match(JavaScriptParser::BitAnd);
          setState(816);
          singleExpression(19);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<BitXOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(817);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(818);
          match(JavaScriptParser::BitXOr);
          setState(819);
          singleExpression(18);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<BitOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(820);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(821);
          match(JavaScriptParser::BitOr);
          setState(822);
          singleExpression(17);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<LogicalAndExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(823);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(824);
          match(JavaScriptParser::And);
          setState(825);
          singleExpression(16);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<LogicalOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(826);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(827);
          match(JavaScriptParser::Or);
          setState(828);
          singleExpression(15);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<TernaryExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(829);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(830);
          match(JavaScriptParser::QuestionMark);
          setState(831);
          singleExpression(0);
          setState(832);
          match(JavaScriptParser::Colon);
          setState(833);
          singleExpression(14);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<AssignmentExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(835);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(836);
          match(JavaScriptParser::Assign);
          setState(837);
          singleExpression(12);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<AssignmentOperatorExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(838);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(839);
          assignmentOperator();
          setState(840);
          singleExpression(11);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<MemberIndexExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(842);

          if (!(precpred(_ctx, 44))) throw FailedPredicateException(this, "precpred(_ctx, 44)");
          setState(843);
          match(JavaScriptParser::OpenBracket);
          setState(844);
          expressionSequence();
          setState(845);
          match(JavaScriptParser::CloseBracket);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<MemberDotExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(847);

          if (!(precpred(_ctx, 43))) throw FailedPredicateException(this, "precpred(_ctx, 43)");
          setState(849);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == JavaScriptParser::QuestionMark) {
            setState(848);
            match(JavaScriptParser::QuestionMark);
          }
          setState(851);
          match(JavaScriptParser::Dot);
          setState(853);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == JavaScriptParser::Hashtag) {
            setState(852);
            match(JavaScriptParser::Hashtag);
          }
          setState(855);
          identifierName();
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<ArgumentsExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(856);

          if (!(precpred(_ctx, 42))) throw FailedPredicateException(this, "precpred(_ctx, 42)");
          setState(857);
          arguments();
          break;
        }

        case 21: {
          auto newContext = _tracker.createInstance<PostIncrementExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(858);

          if (!(precpred(_ctx, 39))) throw FailedPredicateException(this, "precpred(_ctx, 39)");
          setState(859);

          if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
          setState(860);
          match(JavaScriptParser::PlusPlus);
          break;
        }

        case 22: {
          auto newContext = _tracker.createInstance<PostDecreaseExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(861);

          if (!(precpred(_ctx, 38))) throw FailedPredicateException(this, "precpred(_ctx, 38)");
          setState(862);

          if (!(this->notLineTerminator())) throw FailedPredicateException(this, "this->notLineTerminator()");
          setState(863);
          match(JavaScriptParser::MinusMinus);
          break;
        }

        case 23: {
          auto newContext = _tracker.createInstance<TemplateStringExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(864);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(865);
          match(JavaScriptParser::TemplateStringLiteral);
          break;
        }

        } 
      }
      setState(870);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignableContext ------------------------------------------------------------------

JavaScriptParser::AssignableContext::AssignableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::AssignableContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::AssignableContext::arrayLiteral() {
  return getRuleContext<JavaScriptParser::ArrayLiteralContext>(0);
}

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::AssignableContext::objectLiteral() {
  return getRuleContext<JavaScriptParser::ObjectLiteralContext>(0);
}


size_t JavaScriptParser::AssignableContext::getRuleIndex() const {
  return JavaScriptParser::RuleAssignable;
}

void JavaScriptParser::AssignableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignable(this);
}

void JavaScriptParser::AssignableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignable(this);
}


antlrcpp::Any JavaScriptParser::AssignableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignable(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::AssignableContext* JavaScriptParser::assignable() {
  AssignableContext *_localctx = _tracker.createInstance<AssignableContext>(_ctx, getState());
  enterRule(_localctx, 118, JavaScriptParser::RuleAssignable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(874);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(871);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 2);
        setState(872);
        arrayLiteral();
        break;
      }

      case JavaScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 3);
        setState(873);
        objectLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnoymousFunctionContext ------------------------------------------------------------------

JavaScriptParser::AnoymousFunctionContext::AnoymousFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::AnoymousFunctionContext::getRuleIndex() const {
  return JavaScriptParser::RuleAnoymousFunction;
}

void JavaScriptParser::AnoymousFunctionContext::copyFrom(AnoymousFunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AnoymousFunctionDeclContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::AnoymousFunctionDeclContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::Async() {
  return getToken(JavaScriptParser::Async, 0);
}

tree::TerminalNode* JavaScriptParser::AnoymousFunctionDeclContext::Multiply() {
  return getToken(JavaScriptParser::Multiply, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::AnoymousFunctionDeclContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}

JavaScriptParser::AnoymousFunctionDeclContext::AnoymousFunctionDeclContext(AnoymousFunctionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AnoymousFunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnoymousFunctionDecl(this);
}
void JavaScriptParser::AnoymousFunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnoymousFunctionDecl(this);
}

antlrcpp::Any JavaScriptParser::AnoymousFunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAnoymousFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrowFunctionContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionParametersContext* JavaScriptParser::ArrowFunctionContext::arrowFunctionParameters() {
  return getRuleContext<JavaScriptParser::ArrowFunctionParametersContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionContext::ARROW() {
  return getToken(JavaScriptParser::ARROW, 0);
}

JavaScriptParser::ArrowFunctionBodyContext* JavaScriptParser::ArrowFunctionContext::arrowFunctionBody() {
  return getRuleContext<JavaScriptParser::ArrowFunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionContext::Async() {
  return getToken(JavaScriptParser::Async, 0);
}

JavaScriptParser::ArrowFunctionContext::ArrowFunctionContext(AnoymousFunctionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArrowFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunction(this);
}
void JavaScriptParser::ArrowFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunction(this);
}

antlrcpp::Any JavaScriptParser::ArrowFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionDeclContext ------------------------------------------------------------------

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::FunctionDeclContext::functionDeclaration() {
  return getRuleContext<JavaScriptParser::FunctionDeclarationContext>(0);
}

JavaScriptParser::FunctionDeclContext::FunctionDeclContext(AnoymousFunctionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}
void JavaScriptParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}

antlrcpp::Any JavaScriptParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}
JavaScriptParser::AnoymousFunctionContext* JavaScriptParser::anoymousFunction() {
  AnoymousFunctionContext *_localctx = _tracker.createInstance<AnoymousFunctionContext>(_ctx, getState());
  enterRule(_localctx, 120, JavaScriptParser::RuleAnoymousFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(900);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AnoymousFunctionContext *>(_tracker.createInstance<JavaScriptParser::FunctionDeclContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(876);
      functionDeclaration();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AnoymousFunctionContext *>(_tracker.createInstance<JavaScriptParser::AnoymousFunctionDeclContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(878);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Async) {
        setState(877);
        match(JavaScriptParser::Async);
      }
      setState(880);
      match(JavaScriptParser::Function);
      setState(882);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Multiply) {
        setState(881);
        match(JavaScriptParser::Multiply);
      }
      setState(884);
      match(JavaScriptParser::OpenParen);
      setState(886);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(885);
        formalParameterList();
      }
      setState(888);
      match(JavaScriptParser::CloseParen);
      setState(889);
      match(JavaScriptParser::OpenBrace);
      setState(890);
      functionBody();
      setState(891);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AnoymousFunctionContext *>(_tracker.createInstance<JavaScriptParser::ArrowFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(894);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Async) {
        setState(893);
        match(JavaScriptParser::Async);
      }
      setState(896);
      arrowFunctionParameters();
      setState(897);
      match(JavaScriptParser::ARROW);
      setState(898);
      arrowFunctionBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionParametersContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionParametersContext::ArrowFunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionParametersContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionParametersContext::OpenParen() {
  return getToken(JavaScriptParser::OpenParen, 0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionParametersContext::CloseParen() {
  return getToken(JavaScriptParser::CloseParen, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::ArrowFunctionParametersContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}


size_t JavaScriptParser::ArrowFunctionParametersContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrowFunctionParameters;
}

void JavaScriptParser::ArrowFunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionParameters(this);
}

void JavaScriptParser::ArrowFunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionParameters(this);
}


antlrcpp::Any JavaScriptParser::ArrowFunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArrowFunctionParametersContext* JavaScriptParser::arrowFunctionParameters() {
  ArrowFunctionParametersContext *_localctx = _tracker.createInstance<ArrowFunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 122, JavaScriptParser::RuleArrowFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(908);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(902);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::OpenParen: {
        enterOuterAlt(_localctx, 2);
        setState(903);
        match(JavaScriptParser::OpenParen);
        setState(905);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
          | (1ULL << JavaScriptParser::OpenBrace)
          | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
          setState(904);
          formalParameterList();
        }
        setState(907);
        match(JavaScriptParser::CloseParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionBodyContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionBodyContext::ArrowFunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArrowFunctionBodyContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionBodyContext::OpenBrace() {
  return getToken(JavaScriptParser::OpenBrace, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::ArrowFunctionBodyContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionBodyContext::CloseBrace() {
  return getToken(JavaScriptParser::CloseBrace, 0);
}


size_t JavaScriptParser::ArrowFunctionBodyContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrowFunctionBody;
}

void JavaScriptParser::ArrowFunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionBody(this);
}

void JavaScriptParser::ArrowFunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionBody(this);
}


antlrcpp::Any JavaScriptParser::ArrowFunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ArrowFunctionBodyContext* JavaScriptParser::arrowFunctionBody() {
  ArrowFunctionBodyContext *_localctx = _tracker.createInstance<ArrowFunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 124, JavaScriptParser::RuleArrowFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(915);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(910);
      singleExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(911);
      match(JavaScriptParser::OpenBrace);
      setState(912);
      functionBody();
      setState(913);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

JavaScriptParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::MultiplyAssign() {
  return getToken(JavaScriptParser::MultiplyAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::DivideAssign() {
  return getToken(JavaScriptParser::DivideAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::ModulusAssign() {
  return getToken(JavaScriptParser::ModulusAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::PlusAssign() {
  return getToken(JavaScriptParser::PlusAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::MinusAssign() {
  return getToken(JavaScriptParser::MinusAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::LeftShiftArithmeticAssign() {
  return getToken(JavaScriptParser::LeftShiftArithmeticAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::RightShiftArithmeticAssign() {
  return getToken(JavaScriptParser::RightShiftArithmeticAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::RightShiftLogicalAssign() {
  return getToken(JavaScriptParser::RightShiftLogicalAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::BitAndAssign() {
  return getToken(JavaScriptParser::BitAndAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::BitXorAssign() {
  return getToken(JavaScriptParser::BitXorAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::BitOrAssign() {
  return getToken(JavaScriptParser::BitOrAssign, 0);
}

tree::TerminalNode* JavaScriptParser::AssignmentOperatorContext::PowerAssign() {
  return getToken(JavaScriptParser::PowerAssign, 0);
}


size_t JavaScriptParser::AssignmentOperatorContext::getRuleIndex() const {
  return JavaScriptParser::RuleAssignmentOperator;
}

void JavaScriptParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void JavaScriptParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any JavaScriptParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::AssignmentOperatorContext* JavaScriptParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 126, JavaScriptParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(917);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::MultiplyAssign)
      | (1ULL << JavaScriptParser::DivideAssign)
      | (1ULL << JavaScriptParser::ModulusAssign)
      | (1ULL << JavaScriptParser::PlusAssign)
      | (1ULL << JavaScriptParser::MinusAssign)
      | (1ULL << JavaScriptParser::LeftShiftArithmeticAssign)
      | (1ULL << JavaScriptParser::RightShiftArithmeticAssign)
      | (1ULL << JavaScriptParser::RightShiftLogicalAssign)
      | (1ULL << JavaScriptParser::BitAndAssign)
      | (1ULL << JavaScriptParser::BitXorAssign)
      | (1ULL << JavaScriptParser::BitOrAssign)
      | (1ULL << JavaScriptParser::PowerAssign))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

JavaScriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LiteralContext::NullLiteral() {
  return getToken(JavaScriptParser::NullLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::BooleanLiteral() {
  return getToken(JavaScriptParser::BooleanLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::TemplateStringLiteral() {
  return getToken(JavaScriptParser::TemplateStringLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::RegularExpressionLiteral() {
  return getToken(JavaScriptParser::RegularExpressionLiteral, 0);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::LiteralContext::numericLiteral() {
  return getRuleContext<JavaScriptParser::NumericLiteralContext>(0);
}

JavaScriptParser::BigintLiteralContext* JavaScriptParser::LiteralContext::bigintLiteral() {
  return getRuleContext<JavaScriptParser::BigintLiteralContext>(0);
}


size_t JavaScriptParser::LiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleLiteral;
}

void JavaScriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void JavaScriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any JavaScriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::LiteralContext* JavaScriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 128, JavaScriptParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(926);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(919);
        match(JavaScriptParser::NullLiteral);
        break;
      }

      case JavaScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(920);
        match(JavaScriptParser::BooleanLiteral);
        break;
      }

      case JavaScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(921);
        match(JavaScriptParser::StringLiteral);
        break;
      }

      case JavaScriptParser::TemplateStringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(922);
        match(JavaScriptParser::TemplateStringLiteral);
        break;
      }

      case JavaScriptParser::RegularExpressionLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(923);
        match(JavaScriptParser::RegularExpressionLiteral);
        break;
      }

      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(924);
        numericLiteral();
        break;
      }

      case JavaScriptParser::BigHexIntegerLiteral:
      case JavaScriptParser::BigOctalIntegerLiteral:
      case JavaScriptParser::BigBinaryIntegerLiteral:
      case JavaScriptParser::BigDecimalIntegerLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(925);
        bigintLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

JavaScriptParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::DecimalLiteral() {
  return getToken(JavaScriptParser::DecimalLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::HexIntegerLiteral() {
  return getToken(JavaScriptParser::HexIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::OctalIntegerLiteral() {
  return getToken(JavaScriptParser::OctalIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::OctalIntegerLiteral2() {
  return getToken(JavaScriptParser::OctalIntegerLiteral2, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::BinaryIntegerLiteral() {
  return getToken(JavaScriptParser::BinaryIntegerLiteral, 0);
}


size_t JavaScriptParser::NumericLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleNumericLiteral;
}

void JavaScriptParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void JavaScriptParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}


antlrcpp::Any JavaScriptParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 130, JavaScriptParser::RuleNumericLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (JavaScriptParser::DecimalLiteral - 61))
      | (1ULL << (JavaScriptParser::HexIntegerLiteral - 61))
      | (1ULL << (JavaScriptParser::OctalIntegerLiteral - 61))
      | (1ULL << (JavaScriptParser::OctalIntegerLiteral2 - 61))
      | (1ULL << (JavaScriptParser::BinaryIntegerLiteral - 61)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BigintLiteralContext ------------------------------------------------------------------

JavaScriptParser::BigintLiteralContext::BigintLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::BigintLiteralContext::BigDecimalIntegerLiteral() {
  return getToken(JavaScriptParser::BigDecimalIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::BigintLiteralContext::BigHexIntegerLiteral() {
  return getToken(JavaScriptParser::BigHexIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::BigintLiteralContext::BigOctalIntegerLiteral() {
  return getToken(JavaScriptParser::BigOctalIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::BigintLiteralContext::BigBinaryIntegerLiteral() {
  return getToken(JavaScriptParser::BigBinaryIntegerLiteral, 0);
}


size_t JavaScriptParser::BigintLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleBigintLiteral;
}

void JavaScriptParser::BigintLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigintLiteral(this);
}

void JavaScriptParser::BigintLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigintLiteral(this);
}


antlrcpp::Any JavaScriptParser::BigintLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitBigintLiteral(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::BigintLiteralContext* JavaScriptParser::bigintLiteral() {
  BigintLiteralContext *_localctx = _tracker.createInstance<BigintLiteralContext>(_ctx, getState());
  enterRule(_localctx, 132, JavaScriptParser::RuleBigintLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    _la = _input->LA(1);
    if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::BigHexIntegerLiteral - 66))
      | (1ULL << (JavaScriptParser::BigOctalIntegerLiteral - 66))
      | (1ULL << (JavaScriptParser::BigBinaryIntegerLiteral - 66))
      | (1ULL << (JavaScriptParser::BigDecimalIntegerLiteral - 66)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierNameContext ------------------------------------------------------------------

JavaScriptParser::IdentifierNameContext::IdentifierNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::IdentifierNameContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ReservedWordContext* JavaScriptParser::IdentifierNameContext::reservedWord() {
  return getRuleContext<JavaScriptParser::ReservedWordContext>(0);
}


size_t JavaScriptParser::IdentifierNameContext::getRuleIndex() const {
  return JavaScriptParser::RuleIdentifierName;
}

void JavaScriptParser::IdentifierNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierName(this);
}

void JavaScriptParser::IdentifierNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierName(this);
}


antlrcpp::Any JavaScriptParser::IdentifierNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierName(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::identifierName() {
  IdentifierNameContext *_localctx = _tracker.createInstance<IdentifierNameContext>(_ctx, getState());
  enterRule(_localctx, 134, JavaScriptParser::RuleIdentifierName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(934);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(932);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::As:
      case JavaScriptParser::From:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Async:
      case JavaScriptParser::Await:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield: {
        enterOuterAlt(_localctx, 2);
        setState(933);
        reservedWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedWordContext ------------------------------------------------------------------

JavaScriptParser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::KeywordContext* JavaScriptParser::ReservedWordContext::keyword() {
  return getRuleContext<JavaScriptParser::KeywordContext>(0);
}

tree::TerminalNode* JavaScriptParser::ReservedWordContext::NullLiteral() {
  return getToken(JavaScriptParser::NullLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::ReservedWordContext::BooleanLiteral() {
  return getToken(JavaScriptParser::BooleanLiteral, 0);
}


size_t JavaScriptParser::ReservedWordContext::getRuleIndex() const {
  return JavaScriptParser::RuleReservedWord;
}

void JavaScriptParser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void JavaScriptParser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}


antlrcpp::Any JavaScriptParser::ReservedWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitReservedWord(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::ReservedWordContext* JavaScriptParser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 136, JavaScriptParser::RuleReservedWord);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(939);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::As:
      case JavaScriptParser::From:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Async:
      case JavaScriptParser::Await:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield: {
        enterOuterAlt(_localctx, 1);
        setState(936);
        keyword();
        break;
      }

      case JavaScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(937);
        match(JavaScriptParser::NullLiteral);
        break;
      }

      case JavaScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(938);
        match(JavaScriptParser::BooleanLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

JavaScriptParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Break() {
  return getToken(JavaScriptParser::Break, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Do() {
  return getToken(JavaScriptParser::Do, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Instanceof() {
  return getToken(JavaScriptParser::Instanceof, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Typeof() {
  return getToken(JavaScriptParser::Typeof, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Case() {
  return getToken(JavaScriptParser::Case, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Else() {
  return getToken(JavaScriptParser::Else, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::New() {
  return getToken(JavaScriptParser::New, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Var() {
  return getToken(JavaScriptParser::Var, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Catch() {
  return getToken(JavaScriptParser::Catch, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Finally() {
  return getToken(JavaScriptParser::Finally, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Return() {
  return getToken(JavaScriptParser::Return, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Void() {
  return getToken(JavaScriptParser::Void, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Continue() {
  return getToken(JavaScriptParser::Continue, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Switch() {
  return getToken(JavaScriptParser::Switch, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Debugger() {
  return getToken(JavaScriptParser::Debugger, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::This() {
  return getToken(JavaScriptParser::This, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::With() {
  return getToken(JavaScriptParser::With, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Default() {
  return getToken(JavaScriptParser::Default, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::If() {
  return getToken(JavaScriptParser::If, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Throw() {
  return getToken(JavaScriptParser::Throw, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Delete() {
  return getToken(JavaScriptParser::Delete, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Try() {
  return getToken(JavaScriptParser::Try, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Enum() {
  return getToken(JavaScriptParser::Enum, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Extends() {
  return getToken(JavaScriptParser::Extends, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Super() {
  return getToken(JavaScriptParser::Super, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Const() {
  return getToken(JavaScriptParser::Const, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Export() {
  return getToken(JavaScriptParser::Export, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Import() {
  return getToken(JavaScriptParser::Import, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Implements() {
  return getToken(JavaScriptParser::Implements, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Let() {
  return getToken(JavaScriptParser::Let, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Private() {
  return getToken(JavaScriptParser::Private, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Public() {
  return getToken(JavaScriptParser::Public, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Interface() {
  return getToken(JavaScriptParser::Interface, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Package() {
  return getToken(JavaScriptParser::Package, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Protected() {
  return getToken(JavaScriptParser::Protected, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Static() {
  return getToken(JavaScriptParser::Static, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Yield() {
  return getToken(JavaScriptParser::Yield, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Async() {
  return getToken(JavaScriptParser::Async, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Await() {
  return getToken(JavaScriptParser::Await, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::From() {
  return getToken(JavaScriptParser::From, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::As() {
  return getToken(JavaScriptParser::As, 0);
}


size_t JavaScriptParser::KeywordContext::getRuleIndex() const {
  return JavaScriptParser::RuleKeyword;
}

void JavaScriptParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void JavaScriptParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any JavaScriptParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::KeywordContext* JavaScriptParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 138, JavaScriptParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(941);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (JavaScriptParser::Break - 70))
      | (1ULL << (JavaScriptParser::Do - 70))
      | (1ULL << (JavaScriptParser::Instanceof - 70))
      | (1ULL << (JavaScriptParser::Typeof - 70))
      | (1ULL << (JavaScriptParser::Case - 70))
      | (1ULL << (JavaScriptParser::Else - 70))
      | (1ULL << (JavaScriptParser::New - 70))
      | (1ULL << (JavaScriptParser::Var - 70))
      | (1ULL << (JavaScriptParser::Catch - 70))
      | (1ULL << (JavaScriptParser::Finally - 70))
      | (1ULL << (JavaScriptParser::Return - 70))
      | (1ULL << (JavaScriptParser::Void - 70))
      | (1ULL << (JavaScriptParser::Continue - 70))
      | (1ULL << (JavaScriptParser::For - 70))
      | (1ULL << (JavaScriptParser::Switch - 70))
      | (1ULL << (JavaScriptParser::While - 70))
      | (1ULL << (JavaScriptParser::Debugger - 70))
      | (1ULL << (JavaScriptParser::Function - 70))
      | (1ULL << (JavaScriptParser::This - 70))
      | (1ULL << (JavaScriptParser::With - 70))
      | (1ULL << (JavaScriptParser::Default - 70))
      | (1ULL << (JavaScriptParser::If - 70))
      | (1ULL << (JavaScriptParser::Throw - 70))
      | (1ULL << (JavaScriptParser::Delete - 70))
      | (1ULL << (JavaScriptParser::In - 70))
      | (1ULL << (JavaScriptParser::Try - 70))
      | (1ULL << (JavaScriptParser::As - 70))
      | (1ULL << (JavaScriptParser::From - 70))
      | (1ULL << (JavaScriptParser::Class - 70))
      | (1ULL << (JavaScriptParser::Enum - 70))
      | (1ULL << (JavaScriptParser::Extends - 70))
      | (1ULL << (JavaScriptParser::Super - 70))
      | (1ULL << (JavaScriptParser::Const - 70))
      | (1ULL << (JavaScriptParser::Export - 70))
      | (1ULL << (JavaScriptParser::Import - 70))
      | (1ULL << (JavaScriptParser::Async - 70))
      | (1ULL << (JavaScriptParser::Await - 70))
      | (1ULL << (JavaScriptParser::Implements - 70))
      | (1ULL << (JavaScriptParser::Let - 70))
      | (1ULL << (JavaScriptParser::Private - 70))
      | (1ULL << (JavaScriptParser::Public - 70))
      | (1ULL << (JavaScriptParser::Interface - 70))
      | (1ULL << (JavaScriptParser::Package - 70))
      | (1ULL << (JavaScriptParser::Protected - 70))
      | (1ULL << (JavaScriptParser::Static - 70))
      | (1ULL << (JavaScriptParser::Yield - 70)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetterContext ------------------------------------------------------------------

JavaScriptParser::GetterContext::GetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::GetterContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::GetterContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}


size_t JavaScriptParser::GetterContext::getRuleIndex() const {
  return JavaScriptParser::RuleGetter;
}

void JavaScriptParser::GetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetter(this);
}

void JavaScriptParser::GetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetter(this);
}


antlrcpp::Any JavaScriptParser::GetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitGetter(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::GetterContext* JavaScriptParser::getter() {
  GetterContext *_localctx = _tracker.createInstance<GetterContext>(_ctx, getState());
  enterRule(_localctx, 140, JavaScriptParser::RuleGetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(943);
    match(JavaScriptParser::Identifier);
    setState(944);

    if (!(this->p("get"))) throw FailedPredicateException(this, "this->p(\"get\")");
    setState(945);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetterContext ------------------------------------------------------------------

JavaScriptParser::SetterContext::SetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::SetterContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::SetterContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}


size_t JavaScriptParser::SetterContext::getRuleIndex() const {
  return JavaScriptParser::RuleSetter;
}

void JavaScriptParser::SetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetter(this);
}

void JavaScriptParser::SetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetter(this);
}


antlrcpp::Any JavaScriptParser::SetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitSetter(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::SetterContext* JavaScriptParser::setter() {
  SetterContext *_localctx = _tracker.createInstance<SetterContext>(_ctx, getState());
  enterRule(_localctx, 142, JavaScriptParser::RuleSetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    match(JavaScriptParser::Identifier);
    setState(948);

    if (!(this->p("set"))) throw FailedPredicateException(this, "this->p(\"set\")");
    setState(949);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

JavaScriptParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::EosContext::SemiColon() {
  return getToken(JavaScriptParser::SemiColon, 0);
}

tree::TerminalNode* JavaScriptParser::EosContext::EOF() {
  return getToken(JavaScriptParser::EOF, 0);
}


size_t JavaScriptParser::EosContext::getRuleIndex() const {
  return JavaScriptParser::RuleEos;
}

void JavaScriptParser::EosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEos(this);
}

void JavaScriptParser::EosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEos(this);
}


antlrcpp::Any JavaScriptParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavaScriptParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

JavaScriptParser::EosContext* JavaScriptParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 144, JavaScriptParser::RuleEos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(955);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(951);
      match(JavaScriptParser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(952);
      match(JavaScriptParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(953);

      if (!(this->lineTerminatorAhead())) throw FailedPredicateException(this, "this->lineTerminatorAhead()");
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(954);

      if (!(this->closeBrace())) throw FailedPredicateException(this, "this->closeBrace()");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool JavaScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return expressionStatementSempred(dynamic_cast<ExpressionStatementContext *>(context), predicateIndex);
    case 21: return iterationStatementSempred(dynamic_cast<IterationStatementContext *>(context), predicateIndex);
    case 23: return continueStatementSempred(dynamic_cast<ContinueStatementContext *>(context), predicateIndex);
    case 24: return breakStatementSempred(dynamic_cast<BreakStatementContext *>(context), predicateIndex);
    case 25: return returnStatementSempred(dynamic_cast<ReturnStatementContext *>(context), predicateIndex);
    case 26: return yieldStatementSempred(dynamic_cast<YieldStatementContext *>(context), predicateIndex);
    case 34: return throwStatementSempred(dynamic_cast<ThrowStatementContext *>(context), predicateIndex);
    case 42: return classElementSempred(dynamic_cast<ClassElementContext *>(context), predicateIndex);
    case 58: return singleExpressionSempred(dynamic_cast<SingleExpressionContext *>(context), predicateIndex);
    case 70: return getterSempred(dynamic_cast<GetterContext *>(context), predicateIndex);
    case 71: return setterSempred(dynamic_cast<SetterContext *>(context), predicateIndex);
    case 72: return eosSempred(dynamic_cast<EosContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return this->notOpenBraceAndNotFunction();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return this->p("of");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return this->notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return this->notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return this->notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::yieldStatementSempred(YieldStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return this->notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return this->notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::classElementSempred(ClassElementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return this->n("static");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::singleExpressionSempred(SingleExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 27);
    case 9: return precpred(_ctx, 26);
    case 10: return precpred(_ctx, 25);
    case 11: return precpred(_ctx, 24);
    case 12: return precpred(_ctx, 23);
    case 13: return precpred(_ctx, 22);
    case 14: return precpred(_ctx, 21);
    case 15: return precpred(_ctx, 20);
    case 16: return precpred(_ctx, 19);
    case 17: return precpred(_ctx, 18);
    case 18: return precpred(_ctx, 17);
    case 19: return precpred(_ctx, 16);
    case 20: return precpred(_ctx, 15);
    case 21: return precpred(_ctx, 14);
    case 22: return precpred(_ctx, 13);
    case 23: return precpred(_ctx, 12);
    case 24: return precpred(_ctx, 11);
    case 25: return precpred(_ctx, 44);
    case 26: return precpred(_ctx, 43);
    case 27: return precpred(_ctx, 42);
    case 28: return precpred(_ctx, 39);
    case 29: return this->notLineTerminator();
    case 30: return precpred(_ctx, 38);
    case 31: return this->notLineTerminator();
    case 32: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::getterSempred(GetterContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return this->p("get");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::setterSempred(SetterContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return this->p("set");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::eosSempred(EosContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return this->lineTerminatorAhead();
    case 36: return this->closeBrace();

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> JavaScriptParser::_decisionToDFA;
atn::PredictionContextCache JavaScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JavaScriptParser::_atn;
std::vector<uint16_t> JavaScriptParser::_serializedATN;

std::vector<std::string> JavaScriptParser::_ruleNames = {
  "program", "sourceElement", "statement", "block", "statementList", "importStatement", 
  "importFromBlock", "moduleItems", "importDefault", "importNamespace", 
  "importFrom", "aliasName", "exportStatement", "exportFromBlock", "declaration", 
  "variableStatement", "variableDeclarationList", "variableDeclaration", 
  "emptyStatement", "expressionStatement", "ifStatement", "iterationStatement", 
  "varModifier", "continueStatement", "breakStatement", "returnStatement", 
  "yieldStatement", "withStatement", "switchStatement", "caseBlock", "caseClauses", 
  "caseClause", "defaultClause", "labelledStatement", "throwStatement", 
  "tryStatement", "catchProduction", "finallyProduction", "debuggerStatement", 
  "functionDeclaration", "classDeclaration", "classTail", "classElement", 
  "methodDefinition", "formalParameterList", "formalParameterArg", "lastFormalParameterArg", 
  "functionBody", "sourceElements", "arrayLiteral", "elementList", "arrayElement", 
  "objectLiteral", "propertyAssignment", "propertyName", "arguments", "argument", 
  "expressionSequence", "singleExpression", "assignable", "anoymousFunction", 
  "arrowFunctionParameters", "arrowFunctionBody", "assignmentOperator", 
  "literal", "numericLiteral", "bigintLiteral", "identifierName", "reservedWord", 
  "keyword", "getter", "setter", "eos"
};

std::vector<std::string> JavaScriptParser::_literalNames = {
  "", "", "", "", "", "'['", "']'", "'('", "')'", "'{'", "'}'", "';'", "','", 
  "'='", "'?'", "':'", "'...'", "'.'", "'++'", "'--'", "'+'", "'-'", "'~'", 
  "'!'", "'*'", "'/'", "'%'", "'**'", "'??'", "'#'", "'>>'", "'<<'", "'>>>'", 
  "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", "'==='", "'!=='", "'&'", 
  "'^'", "'|'", "'&&'", "'||'", "'*='", "'/='", "'%='", "'+='", "'-='", 
  "'<<='", "'>>='", "'>>>='", "'&='", "'^='", "'|='", "'**='", "'=>'", "'null'", 
  "", "", "", "", "", "", "", "", "", "", "'break'", "'do'", "'instanceof'", 
  "'typeof'", "'case'", "'else'", "'new'", "'var'", "'catch'", "'finally'", 
  "'return'", "'void'", "'continue'", "'for'", "'switch'", "'while'", "'debugger'", 
  "'function'", "'this'", "'with'", "'default'", "'if'", "'throw'", "'delete'", 
  "'in'", "'try'", "'as'", "'from'", "'class'", "'enum'", "'extends'", "'super'", 
  "'const'", "'export'", "'import'", "'async'", "'await'", "'implements'", 
  "'let'", "'private'", "'public'", "'interface'", "'package'", "'protected'", 
  "'static'", "'yield'"
};

std::vector<std::string> JavaScriptParser::_symbolicNames = {
  "", "HashBangLine", "MultiLineComment", "SingleLineComment", "RegularExpressionLiteral", 
  "OpenBracket", "CloseBracket", "OpenParen", "CloseParen", "OpenBrace", 
  "CloseBrace", "SemiColon", "Comma", "Assign", "QuestionMark", "Colon", 
  "Ellipsis", "Dot", "PlusPlus", "MinusMinus", "Plus", "Minus", "BitNot", 
  "Not", "Multiply", "Divide", "Modulus", "Power", "NullCoalesce", "Hashtag", 
  "RightShiftArithmetic", "LeftShiftArithmetic", "RightShiftLogical", "LessThan", 
  "MoreThan", "LessThanEquals", "GreaterThanEquals", "Equals_", "NotEquals", 
  "IdentityEquals", "IdentityNotEquals", "BitAnd", "BitXOr", "BitOr", "And", 
  "Or", "MultiplyAssign", "DivideAssign", "ModulusAssign", "PlusAssign", 
  "MinusAssign", "LeftShiftArithmeticAssign", "RightShiftArithmeticAssign", 
  "RightShiftLogicalAssign", "BitAndAssign", "BitXorAssign", "BitOrAssign", 
  "PowerAssign", "ARROW", "NullLiteral", "BooleanLiteral", "DecimalLiteral", 
  "HexIntegerLiteral", "OctalIntegerLiteral", "OctalIntegerLiteral2", "BinaryIntegerLiteral", 
  "BigHexIntegerLiteral", "BigOctalIntegerLiteral", "BigBinaryIntegerLiteral", 
  "BigDecimalIntegerLiteral", "Break", "Do", "Instanceof", "Typeof", "Case", 
  "Else", "New", "Var", "Catch", "Finally", "Return", "Void", "Continue", 
  "For", "Switch", "While", "Debugger", "Function", "This", "With", "Default", 
  "If", "Throw", "Delete", "In", "Try", "As", "From", "Class", "Enum", "Extends", 
  "Super", "Const", "Export", "Import", "Async", "Await", "Implements", 
  "Let", "Private", "Public", "Interface", "Package", "Protected", "Static", 
  "Yield", "Identifier", "StringLiteral", "TemplateStringLiteral", "WhiteSpaces", 
  "LineTerminator", "HtmlComment", "CDataComment", "UnexpectedCharacter"
};

dfa::Vocabulary JavaScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JavaScriptParser::_tokenNames;

JavaScriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7d, 0x3c0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x3, 0x2, 0x5, 0x2, 0x96, 0xa, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0x99, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0xb3, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xb7, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xbc, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 
    0xbd, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x5, 0x8, 0xc4, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc8, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xcf, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xd5, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xd8, 
    0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xdc, 0xa, 0x9, 0x5, 0x9, 0xde, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xe8, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xf0, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xf5, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xfe, 0xa, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x106, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x10a, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x10f, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0x118, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x11b, 0xb, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x120, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x12f, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x143, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x147, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x14b, 0xa, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x153, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x5, 0x17, 0x15c, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x161, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x169, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x170, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x177, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
    0x1b, 0x17e, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x185, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x197, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x19b, 
    0xa, 0x1f, 0x5, 0x1f, 0x19d, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x6, 0x20, 0x1a2, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x1a3, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1aa, 0xa, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1af, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1be, 
    0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1c1, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x5, 0x26, 0x1c6, 0xa, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1c9, 
    0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x5, 0x29, 0x1d4, 0xa, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1d8, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x1dd, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1ea, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x7, 0x2b, 0x1ee, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1f1, 0xb, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 
    0x2c, 0x1f9, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x1fc, 0xb, 0x2c, 0x3, 
    0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x201, 0xa, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x207, 0xa, 0x2c, 0x3, 0x2d, 
    0x5, 0x2d, 0x20a, 0xa, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x20d, 0xa, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x212, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x21a, 
    0xa, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x21d, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
    0x2d, 0x227, 0xa, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x22a, 0xa, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x22f, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x236, 0xa, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x23b, 0xa, 0x2e, 0xc, 0x2e, 
    0xe, 0x2e, 0x23e, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x242, 
    0xa, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x245, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x24a, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x31, 0x5, 0x31, 0x250, 0xa, 0x31, 0x3, 0x32, 0x6, 0x32, 0x253, 
    0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x254, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x7, 0x34, 0x25c, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 
    0x25f, 0xb, 0x34, 0x3, 0x34, 0x5, 0x34, 0x262, 0xa, 0x34, 0x3, 0x34, 
    0x6, 0x34, 0x265, 0xa, 0x34, 0xd, 0x34, 0xe, 0x34, 0x266, 0x3, 0x34, 
    0x7, 0x34, 0x26a, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x26d, 0xb, 0x34, 
    0x3, 0x34, 0x7, 0x34, 0x270, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x273, 
    0xb, 0x34, 0x3, 0x35, 0x5, 0x35, 0x276, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x27e, 0xa, 0x36, 
    0xc, 0x36, 0xe, 0x36, 0x281, 0xb, 0x36, 0x5, 0x36, 0x283, 0xa, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x286, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x295, 0xa, 0x37, 
    0x3, 0x37, 0x5, 0x37, 0x298, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x29d, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2b4, 0xa, 0x37, 
    0x3, 0x37, 0x5, 0x37, 0x2b7, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2c0, 0xa, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x2c6, 0xa, 0x39, 
    0xc, 0x39, 0xe, 0x39, 0x2c9, 0xb, 0x39, 0x3, 0x39, 0x5, 0x39, 0x2cc, 
    0xa, 0x39, 0x5, 0x39, 0x2ce, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 
    0x5, 0x3a, 0x2d3, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2d7, 
    0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x2dc, 0xa, 0x3b, 
    0xc, 0x3b, 0xe, 0x3b, 0x2df, 0xb, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x2e5, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x2eb, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x314, 0xa, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x354, 0xa, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x358, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x365, 0xa, 0x3c, 0xc, 0x3c, 
    0xe, 0x3c, 0x368, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
    0x36d, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x371, 0xa, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x375, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x379, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x381, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x387, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x5, 0x3f, 0x38c, 0xa, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x38f, 
    0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
    0x40, 0x396, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3a1, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 
    0x45, 0x5, 0x45, 0x3a9, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x5, 0x46, 0x3ae, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3be, 0xa, 0x4a, 
    0x3, 0x4a, 0x2, 0x3, 0x76, 0x4b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x2, 0xc, 0x5, 0x2, 0x4f, 0x4f, 
    0x68, 0x68, 0x6e, 0x6e, 0x3, 0x2, 0x1a, 0x1c, 0x3, 0x2, 0x16, 0x17, 
    0x3, 0x2, 0x20, 0x22, 0x3, 0x2, 0x23, 0x26, 0x3, 0x2, 0x27, 0x2a, 0x3, 
    0x2, 0x30, 0x3b, 0x3, 0x2, 0x3f, 0x43, 0x3, 0x2, 0x44, 0x47, 0x3, 0x2, 
    0x48, 0x75, 0x2, 0x435, 0x2, 0x95, 0x3, 0x2, 0x2, 0x2, 0x4, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0x10, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xec, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x109, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x10e, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x110, 0x3, 0x2, 0x2, 0x2, 0x22, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x26, 0x121, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x127, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x168, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x173, 0x3, 0x2, 0x2, 0x2, 0x34, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x181, 0x3, 0x2, 0x2, 0x2, 0x38, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x194, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1b4, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1c2, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1e3, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x56, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x235, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x244, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x24f, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x252, 0x3, 0x2, 0x2, 0x2, 0x64, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x68, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2b6, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x313, 0x3, 0x2, 0x2, 0x2, 0x78, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x386, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x395, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x397, 0x3, 0x2, 0x2, 0x2, 0x82, 0x3a0, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x86, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x3ad, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x3b5, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 
    0x7, 0x3, 0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x5, 0x62, 
    0x32, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x2, 0x2, 0x3, 
    0x9b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x6, 0x4, 0x2, 0x9d, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xb3, 0x5, 0x8, 0x5, 0x2, 0x9f, 0xb3, 
    0x5, 0x20, 0x11, 0x2, 0xa0, 0xb3, 0x5, 0xc, 0x7, 0x2, 0xa1, 0xb3, 0x5, 
    0x1a, 0xe, 0x2, 0xa2, 0xb3, 0x5, 0x26, 0x14, 0x2, 0xa3, 0xb3, 0x5, 0x52, 
    0x2a, 0x2, 0xa4, 0xb3, 0x5, 0x28, 0x15, 0x2, 0xa5, 0xb3, 0x5, 0x2a, 
    0x16, 0x2, 0xa6, 0xb3, 0x5, 0x2c, 0x17, 0x2, 0xa7, 0xb3, 0x5, 0x30, 
    0x19, 0x2, 0xa8, 0xb3, 0x5, 0x32, 0x1a, 0x2, 0xa9, 0xb3, 0x5, 0x34, 
    0x1b, 0x2, 0xaa, 0xb3, 0x5, 0x36, 0x1c, 0x2, 0xab, 0xb3, 0x5, 0x38, 
    0x1d, 0x2, 0xac, 0xb3, 0x5, 0x44, 0x23, 0x2, 0xad, 0xb3, 0x5, 0x3a, 
    0x1e, 0x2, 0xae, 0xb3, 0x5, 0x46, 0x24, 0x2, 0xaf, 0xb3, 0x5, 0x48, 
    0x25, 0x2, 0xb0, 0xb3, 0x5, 0x4e, 0x28, 0x2, 0xb1, 0xb3, 0x5, 0x50, 
    0x29, 0x2, 0xb2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 
    0x7, 0xb, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0xa, 0x6, 0x2, 0xb6, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x7, 0xc, 0x2, 0x2, 0xb9, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xbc, 0x5, 0x6, 0x4, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 
    0x7, 0x6a, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0xe, 0x8, 0x2, 0xc1, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0x12, 0xa, 0x2, 0xc3, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc8, 0x5, 0x14, 0xb, 0x2, 0xc6, 0xc8, 0x5, 0x10, 0x9, 0x2, 
    0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x16, 0xc, 0x2, 0xca, 0xcb, 
    0x5, 0x92, 0x4a, 0x2, 0xcb, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 
    0x77, 0x2, 0x2, 0xcd, 0xcf, 0x5, 0x92, 0x4a, 0x2, 0xce, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xd6, 0x7, 0xb, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x18, 0xd, 0x2, 
    0xd2, 0xd3, 0x7, 0xe, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x5, 0x18, 
    0xd, 0x2, 0xda, 0xdc, 0x7, 0xe, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0xc, 0x2, 0x2, 0xe0, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x18, 0xd, 0x2, 0xe2, 0xe3, 0x7, 
    0xe, 0x2, 0x2, 0xe3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x7, 0x1a, 
    0x2, 0x2, 0xe5, 0xe6, 0x7, 0x62, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x88, 0x45, 
    0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x63, 0x2, 0x2, 0xea, 
    0xeb, 0x7, 0x77, 0x2, 0x2, 0xeb, 0x17, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 
    0x5, 0x88, 0x45, 0x2, 0xed, 0xee, 0x7, 0x62, 0x2, 0x2, 0xee, 0xf0, 0x5, 
    0x88, 0x45, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x7, 0x69, 0x2, 
    0x2, 0xf2, 0xf5, 0x5, 0x1c, 0xf, 0x2, 0xf3, 0xf5, 0x5, 0x1e, 0x10, 0x2, 
    0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x92, 0x4a, 0x2, 0xf7, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x69, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0x5c, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x76, 0x3c, 0x2, 0xfb, 0xfc, 0x5, 0x92, 
    0x4a, 0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x5, 0x14, 0xb, 0x2, 0x100, 0x101, 0x5, 0x16, 0xc, 0x2, 
    0x101, 0x102, 0x5, 0x92, 0x4a, 0x2, 0x102, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x105, 0x5, 0x10, 0x9, 0x2, 0x104, 0x106, 0x5, 0x16, 0xc, 0x2, 
    0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x92, 0x4a, 0x2, 
    0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0xff, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10f, 
    0x5, 0x20, 0x11, 0x2, 0x10c, 0x10f, 0x5, 0x52, 0x2a, 0x2, 0x10d, 0x10f, 
    0x5, 0x50, 0x29, 0x2, 0x10e, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x22, 0x12, 0x2, 0x111, 0x112, 0x5, 
    0x92, 0x4a, 0x2, 0x112, 0x21, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x5, 
    0x2e, 0x18, 0x2, 0x114, 0x119, 0x5, 0x24, 0x13, 0x2, 0x115, 0x116, 0x7, 
    0xe, 0x2, 0x2, 0x116, 0x118, 0x5, 0x24, 0x13, 0x2, 0x117, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x5, 0x78, 
    0x3d, 0x2, 0x11d, 0x11e, 0x7, 0xf, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x76, 
    0x3c, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x25, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0xd, 0x2, 
    0x2, 0x122, 0x27, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x6, 0x15, 0x2, 
    0x2, 0x124, 0x125, 0x5, 0x74, 0x3b, 0x2, 0x125, 0x126, 0x5, 0x92, 0x4a, 
    0x2, 0x126, 0x29, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0x5d, 0x2, 
    0x2, 0x128, 0x129, 0x7, 0x9, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x74, 0x3b, 
    0x2, 0x12a, 0x12b, 0x7, 0xa, 0x2, 0x2, 0x12b, 0x12e, 0x5, 0x6, 0x4, 
    0x2, 0x12c, 0x12d, 0x7, 0x4d, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x6, 0x4, 
    0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x49, 0x2, 
    0x2, 0x131, 0x132, 0x5, 0x6, 0x4, 0x2, 0x132, 0x133, 0x7, 0x57, 0x2, 
    0x2, 0x133, 0x134, 0x7, 0x9, 0x2, 0x2, 0x134, 0x135, 0x5, 0x74, 0x3b, 
    0x2, 0x135, 0x136, 0x7, 0xa, 0x2, 0x2, 0x136, 0x137, 0x5, 0x92, 0x4a, 
    0x2, 0x137, 0x169, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x57, 0x2, 
    0x2, 0x139, 0x13a, 0x7, 0x9, 0x2, 0x2, 0x13a, 0x13b, 0x5, 0x74, 0x3b, 
    0x2, 0x13b, 0x13c, 0x7, 0xa, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x6, 0x4, 
    0x2, 0x13d, 0x169, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x55, 0x2, 
    0x2, 0x13f, 0x142, 0x7, 0x9, 0x2, 0x2, 0x140, 0x143, 0x5, 0x74, 0x3b, 
    0x2, 0x141, 0x143, 0x5, 0x22, 0x12, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x7, 0xd, 0x2, 
    0x2, 0x145, 0x147, 0x5, 0x74, 0x3b, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x148, 0x14a, 0x7, 0xd, 0x2, 0x2, 0x149, 0x14b, 0x5, 0x74, 0x3b, 
    0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0xa, 0x2, 
    0x2, 0x14d, 0x169, 0x5, 0x6, 0x4, 0x2, 0x14e, 0x14f, 0x7, 0x55, 0x2, 
    0x2, 0x14f, 0x152, 0x7, 0x9, 0x2, 0x2, 0x150, 0x153, 0x5, 0x76, 0x3c, 
    0x2, 0x151, 0x153, 0x5, 0x22, 0x12, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x154, 0x155, 0x7, 0x60, 0x2, 0x2, 0x155, 0x156, 0x5, 0x74, 0x3b, 
    0x2, 0x156, 0x157, 0x7, 0xa, 0x2, 0x2, 0x157, 0x158, 0x5, 0x6, 0x4, 
    0x2, 0x158, 0x169, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x7, 0x55, 0x2, 
    0x2, 0x15a, 0x15c, 0x7, 0x6c, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x160, 0x7, 0x9, 0x2, 0x2, 0x15e, 0x161, 0x5, 0x76, 0x3c, 
    0x2, 0x15f, 0x161, 0x5, 0x22, 0x12, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x163, 0x7, 0x76, 0x2, 0x2, 0x163, 0x164, 0x6, 0x17, 0x3, 
    0x2, 0x164, 0x165, 0x5, 0x74, 0x3b, 0x2, 0x165, 0x166, 0x7, 0xa, 0x2, 
    0x2, 0x166, 0x167, 0x5, 0x6, 0x4, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x130, 0x3, 0x2, 0x2, 0x2, 0x168, 0x138, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x168, 0x14e, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x159, 0x3, 0x2, 0x2, 0x2, 0x169, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x16a, 0x16b, 0x9, 0x2, 0x2, 0x2, 0x16b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x16f, 0x7, 0x54, 0x2, 0x2, 0x16d, 0x16e, 0x6, 0x19, 0x4, 0x2, 0x16e, 
    0x170, 0x7, 0x76, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 
    0x172, 0x5, 0x92, 0x4a, 0x2, 0x172, 0x31, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x176, 0x7, 0x48, 0x2, 0x2, 0x174, 0x175, 0x6, 0x1a, 0x5, 0x2, 0x175, 
    0x177, 0x7, 0x76, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x179, 0x5, 0x92, 0x4a, 0x2, 0x179, 0x33, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x17d, 0x7, 0x52, 0x2, 0x2, 0x17b, 0x17c, 0x6, 0x1b, 0x6, 0x2, 0x17c, 
    0x17e, 0x5, 0x74, 0x3b, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 
    0x180, 0x5, 0x92, 0x4a, 0x2, 0x180, 0x35, 0x3, 0x2, 0x2, 0x2, 0x181, 
    0x184, 0x7, 0x75, 0x2, 0x2, 0x182, 0x183, 0x6, 0x1c, 0x7, 0x2, 0x183, 
    0x185, 0x5, 0x74, 0x3b, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 
    0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x187, 0x5, 0x92, 0x4a, 0x2, 0x187, 0x37, 0x3, 0x2, 0x2, 0x2, 0x188, 
    0x189, 0x7, 0x5b, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x9, 0x2, 0x2, 0x18a, 
    0x18b, 0x5, 0x74, 0x3b, 0x2, 0x18b, 0x18c, 0x7, 0xa, 0x2, 0x2, 0x18c, 
    0x18d, 0x5, 0x6, 0x4, 0x2, 0x18d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 
    0x7, 0x56, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x9, 0x2, 0x2, 0x190, 0x191, 
    0x5, 0x74, 0x3b, 0x2, 0x191, 0x192, 0x7, 0xa, 0x2, 0x2, 0x192, 0x193, 
    0x5, 0x3c, 0x1f, 0x2, 0x193, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 
    0x7, 0xb, 0x2, 0x2, 0x195, 0x197, 0x5, 0x3e, 0x20, 0x2, 0x196, 0x195, 
    0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19c, 
    0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x5, 0x42, 0x22, 0x2, 0x199, 0x19b, 
    0x5, 0x3e, 0x20, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x19b, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x198, 
    0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0xc, 0x2, 0x2, 0x19f, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 0x40, 0x21, 0x2, 0x1a1, 0x1a0, 0x3, 
    0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a1, 0x3, 
    0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x4c, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x74, 
    0x3b, 0x2, 0x1a7, 0x1a9, 0x7, 0x11, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0xa, 
    0x6, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x5c, 
    0x2, 0x2, 0x1ac, 0x1ae, 0x7, 0x11, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0xa, 
    0x6, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x76, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x11, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x6, 
    0x4, 0x2, 0x1b3, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x5e, 
    0x2, 0x2, 0x1b5, 0x1b6, 0x6, 0x24, 0x8, 0x2, 0x1b6, 0x1b7, 0x5, 0x74, 
    0x3b, 0x2, 0x1b7, 0x1b8, 0x5, 0x92, 0x4a, 0x2, 0x1b8, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x61, 0x2, 0x2, 0x1ba, 0x1c0, 0x5, 0x8, 
    0x5, 0x2, 0x1bb, 0x1bd, 0x5, 0x4a, 0x26, 0x2, 0x1bc, 0x1be, 0x5, 0x4c, 
    0x27, 0x2, 0x1bd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1be, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c1, 0x5, 0x4c, 
    0x27, 0x2, 0x1c0, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c8, 0x7, 0x50, 
    0x2, 0x2, 0x1c3, 0x1c5, 0x7, 0x9, 0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x78, 
    0x3d, 0x2, 0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0xa, 
    0x2, 0x2, 0x1c8, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x8, 
    0x5, 0x2, 0x1cb, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x51, 
    0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x8, 0x5, 0x2, 0x1ce, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1d0, 0x7, 0x58, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x92, 0x4a, 
    0x2, 0x1d1, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x7, 0x6b, 0x2, 
    0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 0x7, 0x59, 0x2, 
    0x2, 0x1d6, 0x1d8, 0x7, 0x1a, 0x2, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1da, 0x7, 0x76, 0x2, 0x2, 0x1da, 0x1dc, 0x7, 0x9, 0x2, 
    0x2, 0x1db, 0x1dd, 0x5, 0x5a, 0x2e, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 
    0x2, 0x1de, 0x1df, 0x7, 0xa, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0xb, 0x2, 
    0x2, 0x1e0, 0x1e1, 0x5, 0x60, 0x31, 0x2, 0x1e1, 0x1e2, 0x7, 0xc, 0x2, 
    0x2, 0x1e2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x64, 0x2, 
    0x2, 0x1e4, 0x1e5, 0x7, 0x76, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x54, 0x2b, 
    0x2, 0x1e6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x66, 0x2, 
    0x2, 0x1e8, 0x1ea, 0x5, 0x76, 0x3c, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 
    0x2, 0x1e9, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 0x2, 
    0x2, 0x1eb, 0x1ef, 0x7, 0xb, 0x2, 0x2, 0x1ec, 0x1ee, 0x5, 0x56, 0x2c, 
    0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f0, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 
    0x2, 0x1f2, 0x1f3, 0x7, 0xc, 0x2, 0x2, 0x1f3, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f9, 0x7, 0x74, 0x2, 0x2, 0x1f5, 0x1f6, 0x6, 0x2c, 0x9, 0x2, 
    0x1f6, 0x1f9, 0x7, 0x76, 0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0x6b, 0x2, 0x2, 
    0x1f8, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x207, 0x5, 0x58, 0x2d, 0x2, 0x1fe, 0x207, 0x5, 0x26, 0x14, 0x2, 
    0x1ff, 0x201, 0x7, 0x1f, 0x2, 0x2, 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 
    0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 
    0x202, 0x203, 0x5, 0x6e, 0x38, 0x2, 0x203, 0x204, 0x7, 0xf, 0x2, 0x2, 
    0x204, 0x205, 0x5, 0x76, 0x3c, 0x2, 0x205, 0x207, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x206, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x200, 0x3, 0x2, 0x2, 0x2, 0x207, 0x57, 0x3, 0x2, 0x2, 0x2, 0x208, 
    0x20a, 0x7, 0x1a, 0x2, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x209, 
    0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 
    0x20d, 0x7, 0x1f, 0x2, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20c, 
    0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 
    0x20f, 0x5, 0x6e, 0x38, 0x2, 0x20f, 0x211, 0x7, 0x9, 0x2, 0x2, 0x210, 
    0x212, 0x5, 0x5a, 0x2e, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x211, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 
    0x214, 0x7, 0xa, 0x2, 0x2, 0x214, 0x215, 0x7, 0xb, 0x2, 0x2, 0x215, 
    0x216, 0x5, 0x60, 0x31, 0x2, 0x216, 0x217, 0x7, 0xc, 0x2, 0x2, 0x217, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x7, 0x1a, 0x2, 0x2, 0x219, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 
    0x21c, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x7, 0x1f, 0x2, 0x2, 0x21c, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x5, 0x8e, 0x48, 0x2, 0x21f, 
    0x220, 0x7, 0x9, 0x2, 0x2, 0x220, 0x221, 0x7, 0xa, 0x2, 0x2, 0x221, 
    0x222, 0x7, 0xb, 0x2, 0x2, 0x222, 0x223, 0x5, 0x60, 0x31, 0x2, 0x223, 
    0x224, 0x7, 0xc, 0x2, 0x2, 0x224, 0x236, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x227, 0x7, 0x1a, 0x2, 0x2, 0x226, 0x225, 0x3, 0x2, 0x2, 0x2, 0x226, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 0x3, 0x2, 0x2, 0x2, 0x228, 
    0x22a, 0x7, 0x1f, 0x2, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 
    0x22c, 0x5, 0x90, 0x49, 0x2, 0x22c, 0x22e, 0x7, 0x9, 0x2, 0x2, 0x22d, 
    0x22f, 0x5, 0x5a, 0x2e, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22e, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x3, 0x2, 0x2, 0x2, 0x230, 
    0x231, 0x7, 0xa, 0x2, 0x2, 0x231, 0x232, 0x7, 0xb, 0x2, 0x2, 0x232, 
    0x233, 0x5, 0x60, 0x31, 0x2, 0x233, 0x234, 0x7, 0xc, 0x2, 0x2, 0x234, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x235, 0x209, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x235, 0x226, 0x3, 0x2, 0x2, 0x2, 0x236, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x237, 0x23c, 0x5, 0x5c, 0x2f, 0x2, 0x238, 
    0x239, 0x7, 0xe, 0x2, 0x2, 0x239, 0x23b, 0x5, 0x5c, 0x2f, 0x2, 0x23a, 
    0x238, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23c, 
    0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 
    0x241, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23f, 
    0x240, 0x7, 0xe, 0x2, 0x2, 0x240, 0x242, 0x5, 0x5e, 0x30, 0x2, 0x241, 
    0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x5, 0x5e, 0x30, 0x2, 0x244, 
    0x237, 0x3, 0x2, 0x2, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x246, 0x249, 0x5, 0x78, 0x3d, 0x2, 0x247, 
    0x248, 0x7, 0xf, 0x2, 0x2, 0x248, 0x24a, 0x5, 0x76, 0x3c, 0x2, 0x249, 
    0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0x12, 0x2, 0x2, 0x24c, 
    0x24d, 0x5, 0x76, 0x3c, 0x2, 0x24d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x250, 0x5, 0x62, 0x32, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x61, 0x3, 0x2, 0x2, 0x2, 0x251, 0x253, 
    0x5, 0x4, 0x3, 0x2, 0x252, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 
    0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 
    0x3, 0x2, 0x2, 0x2, 0x255, 0x63, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 
    0x7, 0x2, 0x2, 0x257, 0x258, 0x5, 0x66, 0x34, 0x2, 0x258, 0x259, 0x7, 
    0x8, 0x2, 0x2, 0x259, 0x65, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25c, 0x7, 0xe, 
    0x2, 0x2, 0x25b, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x25e, 0x261, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x260, 0x262, 0x5, 0x68, 0x35, 0x2, 0x261, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x26b, 0x3, 0x2, 
    0x2, 0x2, 0x263, 0x265, 0x7, 0xe, 0x2, 0x2, 0x264, 0x263, 0x3, 0x2, 
    0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x26a, 0x5, 0x68, 0x35, 0x2, 0x269, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x26a, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x271, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x270, 0x7, 0xe, 
    0x2, 0x2, 0x26f, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x270, 0x273, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x67, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 
    0x2, 0x274, 0x276, 0x7, 0x12, 0x2, 0x2, 0x275, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x278, 0x5, 0x76, 0x3c, 0x2, 0x278, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x282, 0x7, 0xb, 0x2, 0x2, 0x27a, 0x27f, 0x5, 0x6c, 0x37, 
    0x2, 0x27b, 0x27c, 0x7, 0xe, 0x2, 0x2, 0x27c, 0x27e, 0x5, 0x6c, 0x37, 
    0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x281, 0x3, 0x2, 0x2, 
    0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x283, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 0x3, 0x2, 0x2, 
    0x2, 0x282, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 
    0x2, 0x283, 0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 0x286, 0x7, 0xe, 0x2, 
    0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x3, 0x2, 0x2, 
    0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 0xc, 0x2, 
    0x2, 0x288, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x5, 0x6e, 0x38, 
    0x2, 0x28a, 0x28b, 0x7, 0x11, 0x2, 0x2, 0x28b, 0x28c, 0x5, 0x76, 0x3c, 
    0x2, 0x28c, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0x7, 0x2, 
    0x2, 0x28e, 0x28f, 0x5, 0x76, 0x3c, 0x2, 0x28f, 0x290, 0x7, 0x8, 0x2, 
    0x2, 0x290, 0x291, 0x7, 0x11, 0x2, 0x2, 0x291, 0x292, 0x5, 0x76, 0x3c, 
    0x2, 0x292, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x293, 0x295, 0x7, 0x6b, 0x2, 
    0x2, 0x294, 0x293, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 
    0x2, 0x295, 0x297, 0x3, 0x2, 0x2, 0x2, 0x296, 0x298, 0x7, 0x1a, 0x2, 
    0x2, 0x297, 0x296, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x3, 0x2, 0x2, 
    0x2, 0x298, 0x299, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x5, 0x6e, 0x38, 
    0x2, 0x29a, 0x29c, 0x7, 0x9, 0x2, 0x2, 0x29b, 0x29d, 0x5, 0x5a, 0x2e, 
    0x2, 0x29c, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0xa, 0x2, 
    0x2, 0x29f, 0x2a0, 0x7, 0xb, 0x2, 0x2, 0x2a0, 0x2a1, 0x5, 0x60, 0x31, 
    0x2, 0x2a1, 0x2a2, 0x7, 0xc, 0x2, 0x2, 0x2a2, 0x2b7, 0x3, 0x2, 0x2, 
    0x2, 0x2a3, 0x2a4, 0x5, 0x8e, 0x48, 0x2, 0x2a4, 0x2a5, 0x7, 0x9, 0x2, 
    0x2, 0x2a5, 0x2a6, 0x7, 0xa, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0xb, 0x2, 
    0x2, 0x2a7, 0x2a8, 0x5, 0x60, 0x31, 0x2, 0x2a8, 0x2a9, 0x7, 0xc, 0x2, 
    0x2, 0x2a9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x5, 0x90, 0x49, 
    0x2, 0x2ab, 0x2ac, 0x7, 0x9, 0x2, 0x2, 0x2ac, 0x2ad, 0x5, 0x5c, 0x2f, 
    0x2, 0x2ad, 0x2ae, 0x7, 0xa, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0xb, 0x2, 
    0x2, 0x2af, 0x2b0, 0x5, 0x60, 0x31, 0x2, 0x2b0, 0x2b1, 0x7, 0xc, 0x2, 
    0x2, 0x2b1, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b4, 0x7, 0x12, 0x2, 
    0x2, 0x2b3, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 0x2, 
    0x2, 0x2b4, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b7, 0x5, 0x76, 0x3c, 
    0x2, 0x2b6, 0x289, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x294, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b7, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2c0, 0x5, 0x88, 0x45, 
    0x2, 0x2b9, 0x2c0, 0x7, 0x77, 0x2, 0x2, 0x2ba, 0x2c0, 0x5, 0x84, 0x43, 
    0x2, 0x2bb, 0x2bc, 0x7, 0x7, 0x2, 0x2, 0x2bc, 0x2bd, 0x5, 0x76, 0x3c, 
    0x2, 0x2bd, 0x2be, 0x7, 0x8, 0x2, 0x2, 0x2be, 0x2c0, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b9, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bb, 0x3, 0x2, 0x2, 
    0x2, 0x2c0, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2cd, 0x7, 0x9, 0x2, 0x2, 
    0x2c2, 0x2c7, 0x5, 0x72, 0x3a, 0x2, 0x2c3, 0x2c4, 0x7, 0xe, 0x2, 0x2, 
    0x2c4, 0x2c6, 0x5, 0x72, 0x3a, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x2c6, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c5, 0x3, 0x2, 0x2, 0x2, 
    0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2cb, 0x3, 0x2, 0x2, 0x2, 
    0x2c9, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 0x7, 0xe, 0x2, 0x2, 
    0x2cb, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 
    0x2cc, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2c2, 0x3, 0x2, 0x2, 0x2, 
    0x2cd, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x2cf, 0x2d0, 0x7, 0xa, 0x2, 0x2, 0x2d0, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
    0x2d3, 0x7, 0x12, 0x2, 0x2, 0x2d2, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
    0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d4, 
    0x2d7, 0x5, 0x76, 0x3c, 0x2, 0x2d5, 0x2d7, 0x7, 0x76, 0x2, 0x2, 0x2d6, 
    0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2dd, 0x5, 0x76, 0x3c, 0x2, 0x2d9, 
    0x2da, 0x7, 0xe, 0x2, 0x2, 0x2da, 0x2dc, 0x5, 0x76, 0x3c, 0x2, 0x2db, 
    0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
    0x2db, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2de, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 
    0x8, 0x3c, 0x1, 0x2, 0x2e1, 0x314, 0x5, 0x7a, 0x3e, 0x2, 0x2e2, 0x2e4, 
    0x7, 0x64, 0x2, 0x2, 0x2e3, 0x2e5, 0x7, 0x76, 0x2, 0x2, 0x2e4, 0x2e3, 
    0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2e6, 0x314, 0x5, 0x54, 0x2b, 0x2, 0x2e7, 0x2e8, 
    0x7, 0x4e, 0x2, 0x2, 0x2e8, 0x2ea, 0x5, 0x76, 0x3c, 0x2, 0x2e9, 0x2eb, 
    0x5, 0x70, 0x39, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 
    0x3, 0x2, 0x2, 0x2, 0x2eb, 0x314, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 
    0x7, 0x4e, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x13, 0x2, 0x2, 0x2ee, 0x314, 
    0x7, 0x76, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x5f, 0x2, 0x2, 0x2f0, 0x314, 
    0x5, 0x76, 0x3c, 0x27, 0x2f1, 0x2f2, 0x7, 0x53, 0x2, 0x2, 0x2f2, 0x314, 
    0x5, 0x76, 0x3c, 0x26, 0x2f3, 0x2f4, 0x7, 0x4b, 0x2, 0x2, 0x2f4, 0x314, 
    0x5, 0x76, 0x3c, 0x25, 0x2f5, 0x2f6, 0x7, 0x14, 0x2, 0x2, 0x2f6, 0x314, 
    0x5, 0x76, 0x3c, 0x24, 0x2f7, 0x2f8, 0x7, 0x15, 0x2, 0x2, 0x2f8, 0x314, 
    0x5, 0x76, 0x3c, 0x23, 0x2f9, 0x2fa, 0x7, 0x16, 0x2, 0x2, 0x2fa, 0x314, 
    0x5, 0x76, 0x3c, 0x22, 0x2fb, 0x2fc, 0x7, 0x17, 0x2, 0x2, 0x2fc, 0x314, 
    0x5, 0x76, 0x3c, 0x21, 0x2fd, 0x2fe, 0x7, 0x18, 0x2, 0x2, 0x2fe, 0x314, 
    0x5, 0x76, 0x3c, 0x20, 0x2ff, 0x300, 0x7, 0x19, 0x2, 0x2, 0x300, 0x314, 
    0x5, 0x76, 0x3c, 0x1f, 0x301, 0x302, 0x7, 0x6c, 0x2, 0x2, 0x302, 0x314, 
    0x5, 0x76, 0x3c, 0x1e, 0x303, 0x304, 0x7, 0x6a, 0x2, 0x2, 0x304, 0x305, 
    0x7, 0x9, 0x2, 0x2, 0x305, 0x306, 0x5, 0x76, 0x3c, 0x2, 0x306, 0x307, 
    0x7, 0xa, 0x2, 0x2, 0x307, 0x314, 0x3, 0x2, 0x2, 0x2, 0x308, 0x314, 
    0x5, 0x36, 0x1c, 0x2, 0x309, 0x314, 0x7, 0x5a, 0x2, 0x2, 0x30a, 0x314, 
    0x7, 0x76, 0x2, 0x2, 0x30b, 0x314, 0x7, 0x67, 0x2, 0x2, 0x30c, 0x314, 
    0x5, 0x82, 0x42, 0x2, 0x30d, 0x314, 0x5, 0x64, 0x33, 0x2, 0x30e, 0x314, 
    0x5, 0x6a, 0x36, 0x2, 0x30f, 0x310, 0x7, 0x9, 0x2, 0x2, 0x310, 0x311, 
    0x5, 0x74, 0x3b, 0x2, 0x311, 0x312, 0x7, 0xa, 0x2, 0x2, 0x312, 0x314, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2e2, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2ec, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2f1, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2f5, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2f9, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x313, 0x2fd, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x313, 0x301, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x303, 0x3, 0x2, 0x2, 0x2, 0x313, 0x308, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x309, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30a, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30c, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30e, 
    0x3, 0x2, 0x2, 0x2, 0x313, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x314, 0x366, 
    0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0xc, 0x1d, 0x2, 0x2, 0x316, 0x317, 
    0x7, 0x1d, 0x2, 0x2, 0x317, 0x365, 0x5, 0x76, 0x3c, 0x1d, 0x318, 0x319, 
    0xc, 0x1c, 0x2, 0x2, 0x319, 0x31a, 0x9, 0x3, 0x2, 0x2, 0x31a, 0x365, 
    0x5, 0x76, 0x3c, 0x1d, 0x31b, 0x31c, 0xc, 0x1b, 0x2, 0x2, 0x31c, 0x31d, 
    0x9, 0x4, 0x2, 0x2, 0x31d, 0x365, 0x5, 0x76, 0x3c, 0x1c, 0x31e, 0x31f, 
    0xc, 0x1a, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x1e, 0x2, 0x2, 0x320, 0x365, 
    0x5, 0x76, 0x3c, 0x1b, 0x321, 0x322, 0xc, 0x19, 0x2, 0x2, 0x322, 0x323, 
    0x9, 0x5, 0x2, 0x2, 0x323, 0x365, 0x5, 0x76, 0x3c, 0x1a, 0x324, 0x325, 
    0xc, 0x18, 0x2, 0x2, 0x325, 0x326, 0x9, 0x6, 0x2, 0x2, 0x326, 0x365, 
    0x5, 0x76, 0x3c, 0x19, 0x327, 0x328, 0xc, 0x17, 0x2, 0x2, 0x328, 0x329, 
    0x7, 0x4a, 0x2, 0x2, 0x329, 0x365, 0x5, 0x76, 0x3c, 0x18, 0x32a, 0x32b, 
    0xc, 0x16, 0x2, 0x2, 0x32b, 0x32c, 0x7, 0x60, 0x2, 0x2, 0x32c, 0x365, 
    0x5, 0x76, 0x3c, 0x17, 0x32d, 0x32e, 0xc, 0x15, 0x2, 0x2, 0x32e, 0x32f, 
    0x9, 0x7, 0x2, 0x2, 0x32f, 0x365, 0x5, 0x76, 0x3c, 0x16, 0x330, 0x331, 
    0xc, 0x14, 0x2, 0x2, 0x331, 0x332, 0x7, 0x2b, 0x2, 0x2, 0x332, 0x365, 
    0x5, 0x76, 0x3c, 0x15, 0x333, 0x334, 0xc, 0x13, 0x2, 0x2, 0x334, 0x335, 
    0x7, 0x2c, 0x2, 0x2, 0x335, 0x365, 0x5, 0x76, 0x3c, 0x14, 0x336, 0x337, 
    0xc, 0x12, 0x2, 0x2, 0x337, 0x338, 0x7, 0x2d, 0x2, 0x2, 0x338, 0x365, 
    0x5, 0x76, 0x3c, 0x13, 0x339, 0x33a, 0xc, 0x11, 0x2, 0x2, 0x33a, 0x33b, 
    0x7, 0x2e, 0x2, 0x2, 0x33b, 0x365, 0x5, 0x76, 0x3c, 0x12, 0x33c, 0x33d, 
    0xc, 0x10, 0x2, 0x2, 0x33d, 0x33e, 0x7, 0x2f, 0x2, 0x2, 0x33e, 0x365, 
    0x5, 0x76, 0x3c, 0x11, 0x33f, 0x340, 0xc, 0xf, 0x2, 0x2, 0x340, 0x341, 
    0x7, 0x10, 0x2, 0x2, 0x341, 0x342, 0x5, 0x76, 0x3c, 0x2, 0x342, 0x343, 
    0x7, 0x11, 0x2, 0x2, 0x343, 0x344, 0x5, 0x76, 0x3c, 0x10, 0x344, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0xc, 0xe, 0x2, 0x2, 0x346, 0x347, 
    0x7, 0xf, 0x2, 0x2, 0x347, 0x365, 0x5, 0x76, 0x3c, 0xe, 0x348, 0x349, 
    0xc, 0xd, 0x2, 0x2, 0x349, 0x34a, 0x5, 0x80, 0x41, 0x2, 0x34a, 0x34b, 
    0x5, 0x76, 0x3c, 0xd, 0x34b, 0x365, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 
    0xc, 0x2e, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x7, 0x2, 0x2, 0x34e, 0x34f, 
    0x5, 0x74, 0x3b, 0x2, 0x34f, 0x350, 0x7, 0x8, 0x2, 0x2, 0x350, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x351, 0x353, 0xc, 0x2d, 0x2, 0x2, 0x352, 0x354, 
    0x7, 0x10, 0x2, 0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 
    0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x3, 0x2, 0x2, 0x2, 0x355, 0x357, 
    0x7, 0x13, 0x2, 0x2, 0x356, 0x358, 0x7, 0x1f, 0x2, 0x2, 0x357, 0x356, 
    0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 
    0x3, 0x2, 0x2, 0x2, 0x359, 0x365, 0x5, 0x88, 0x45, 0x2, 0x35a, 0x35b, 
    0xc, 0x2c, 0x2, 0x2, 0x35b, 0x365, 0x5, 0x70, 0x39, 0x2, 0x35c, 0x35d, 
    0xc, 0x29, 0x2, 0x2, 0x35d, 0x35e, 0x6, 0x3c, 0x1f, 0x2, 0x35e, 0x365, 
    0x7, 0x14, 0x2, 0x2, 0x35f, 0x360, 0xc, 0x28, 0x2, 0x2, 0x360, 0x361, 
    0x6, 0x3c, 0x21, 0x2, 0x361, 0x365, 0x7, 0x15, 0x2, 0x2, 0x362, 0x363, 
    0xc, 0xb, 0x2, 0x2, 0x363, 0x365, 0x7, 0x78, 0x2, 0x2, 0x364, 0x315, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x318, 0x3, 0x2, 0x2, 0x2, 0x364, 0x31b, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x364, 0x321, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x324, 0x3, 0x2, 0x2, 0x2, 0x364, 0x327, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x364, 0x32d, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x330, 0x3, 0x2, 0x2, 0x2, 0x364, 0x333, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x336, 0x3, 0x2, 0x2, 0x2, 0x364, 0x339, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x364, 0x33f, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x345, 0x3, 0x2, 0x2, 0x2, 0x364, 0x348, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x364, 0x351, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x364, 0x35c, 
    0x3, 0x2, 0x2, 0x2, 0x364, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x364, 0x362, 
    0x3, 0x2, 0x2, 0x2, 0x365, 0x368, 0x3, 0x2, 0x2, 0x2, 0x366, 0x364, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x3, 0x2, 0x2, 0x2, 0x367, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x368, 0x366, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36d, 0x7, 
    0x76, 0x2, 0x2, 0x36a, 0x36d, 0x5, 0x64, 0x33, 0x2, 0x36b, 0x36d, 0x5, 
    0x6a, 0x36, 0x2, 0x36c, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 0x3, 
    0x2, 0x2, 0x2, 0x36c, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x36e, 0x387, 0x5, 0x50, 0x29, 0x2, 0x36f, 0x371, 0x7, 0x6b, 
    0x2, 0x2, 0x370, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 
    0x2, 0x2, 0x371, 0x372, 0x3, 0x2, 0x2, 0x2, 0x372, 0x374, 0x7, 0x59, 
    0x2, 0x2, 0x373, 0x375, 0x7, 0x1a, 0x2, 0x2, 0x374, 0x373, 0x3, 0x2, 
    0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x376, 0x378, 0x7, 0x9, 0x2, 0x2, 0x377, 0x379, 0x5, 0x5a, 
    0x2e, 0x2, 0x378, 0x377, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 
    0x2, 0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x7, 0xa, 
    0x2, 0x2, 0x37b, 0x37c, 0x7, 0xb, 0x2, 0x2, 0x37c, 0x37d, 0x5, 0x60, 
    0x31, 0x2, 0x37d, 0x37e, 0x7, 0xc, 0x2, 0x2, 0x37e, 0x387, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x381, 0x7, 0x6b, 0x2, 0x2, 0x380, 0x37f, 0x3, 0x2, 
    0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 0x3, 0x2, 
    0x2, 0x2, 0x382, 0x383, 0x5, 0x7c, 0x3f, 0x2, 0x383, 0x384, 0x7, 0x3c, 
    0x2, 0x2, 0x384, 0x385, 0x5, 0x7e, 0x40, 0x2, 0x385, 0x387, 0x3, 0x2, 
    0x2, 0x2, 0x386, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x386, 0x370, 0x3, 0x2, 
    0x2, 0x2, 0x386, 0x380, 0x3, 0x2, 0x2, 0x2, 0x387, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x388, 0x38f, 0x7, 0x76, 0x2, 0x2, 0x389, 0x38b, 0x7, 0x9, 0x2, 
    0x2, 0x38a, 0x38c, 0x5, 0x5a, 0x2e, 0x2, 0x38b, 0x38a, 0x3, 0x2, 0x2, 
    0x2, 0x38b, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x3, 0x2, 0x2, 
    0x2, 0x38d, 0x38f, 0x7, 0xa, 0x2, 0x2, 0x38e, 0x388, 0x3, 0x2, 0x2, 
    0x2, 0x38e, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x390, 0x396, 0x5, 0x76, 0x3c, 0x2, 0x391, 0x392, 0x7, 0xb, 0x2, 0x2, 
    0x392, 0x393, 0x5, 0x60, 0x31, 0x2, 0x393, 0x394, 0x7, 0xc, 0x2, 0x2, 
    0x394, 0x396, 0x3, 0x2, 0x2, 0x2, 0x395, 0x390, 0x3, 0x2, 0x2, 0x2, 
    0x395, 0x391, 0x3, 0x2, 0x2, 0x2, 0x396, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x397, 
    0x398, 0x9, 0x8, 0x2, 0x2, 0x398, 0x81, 0x3, 0x2, 0x2, 0x2, 0x399, 0x3a1, 
    0x7, 0x3d, 0x2, 0x2, 0x39a, 0x3a1, 0x7, 0x3e, 0x2, 0x2, 0x39b, 0x3a1, 
    0x7, 0x77, 0x2, 0x2, 0x39c, 0x3a1, 0x7, 0x78, 0x2, 0x2, 0x39d, 0x3a1, 
    0x7, 0x6, 0x2, 0x2, 0x39e, 0x3a1, 0x5, 0x84, 0x43, 0x2, 0x39f, 0x3a1, 
    0x5, 0x86, 0x44, 0x2, 0x3a0, 0x399, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39a, 
    0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39c, 
    0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39e, 
    0x3, 0x2, 0x2, 0x2, 0x3a0, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x9, 0x9, 0x2, 0x2, 0x3a3, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x3a4, 0x3a5, 0x9, 0xa, 0x2, 0x2, 0x3a5, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x3a6, 0x3a9, 0x7, 0x76, 0x2, 0x2, 0x3a7, 0x3a9, 0x5, 0x8a, 0x46, 
    0x2, 0x3a8, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a7, 0x3, 0x2, 0x2, 
    0x2, 0x3a9, 0x89, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ae, 0x5, 0x8c, 0x47, 
    0x2, 0x3ab, 0x3ae, 0x7, 0x3d, 0x2, 0x2, 0x3ac, 0x3ae, 0x7, 0x3e, 0x2, 
    0x2, 0x3ad, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0x3ad, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x3af, 0x3b0, 0x9, 0xb, 0x2, 0x2, 0x3b0, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3b1, 
    0x3b2, 0x7, 0x76, 0x2, 0x2, 0x3b2, 0x3b3, 0x6, 0x48, 0x23, 0x2, 0x3b3, 
    0x3b4, 0x5, 0x6e, 0x38, 0x2, 0x3b4, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
    0x3b6, 0x7, 0x76, 0x2, 0x2, 0x3b6, 0x3b7, 0x6, 0x49, 0x24, 0x2, 0x3b7, 
    0x3b8, 0x5, 0x6e, 0x38, 0x2, 0x3b8, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
    0x3be, 0x7, 0xd, 0x2, 0x2, 0x3ba, 0x3be, 0x7, 0x2, 0x2, 0x3, 0x3bb, 
    0x3be, 0x6, 0x4a, 0x25, 0x2, 0x3bc, 0x3be, 0x6, 0x4a, 0x26, 0x2, 0x3bd, 
    0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bd, 
    0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3be, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x95, 0x98, 0xb2, 0xb6, 0xbd, 0xc3, 
    0xc7, 0xce, 0xd6, 0xdb, 0xdd, 0xe7, 0xef, 0xf4, 0xfd, 0x105, 0x109, 
    0x10e, 0x119, 0x11f, 0x12e, 0x142, 0x146, 0x14a, 0x152, 0x15b, 0x160, 
    0x168, 0x16f, 0x176, 0x17d, 0x184, 0x196, 0x19a, 0x19c, 0x1a3, 0x1a9, 
    0x1ae, 0x1bd, 0x1c0, 0x1c5, 0x1c8, 0x1d3, 0x1d7, 0x1dc, 0x1e9, 0x1ef, 
    0x1f8, 0x1fa, 0x200, 0x206, 0x209, 0x20c, 0x211, 0x219, 0x21c, 0x226, 
    0x229, 0x22e, 0x235, 0x23c, 0x241, 0x244, 0x249, 0x24f, 0x254, 0x25d, 
    0x261, 0x266, 0x26b, 0x271, 0x275, 0x27f, 0x282, 0x285, 0x294, 0x297, 
    0x29c, 0x2b3, 0x2b6, 0x2bf, 0x2c7, 0x2cb, 0x2cd, 0x2d2, 0x2d6, 0x2dd, 
    0x2e4, 0x2ea, 0x313, 0x353, 0x357, 0x364, 0x366, 0x36c, 0x370, 0x374, 
    0x378, 0x380, 0x386, 0x38b, 0x38e, 0x395, 0x3a0, 0x3a8, 0x3ad, 0x3bd, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JavaScriptParser::Initializer JavaScriptParser::_init;
