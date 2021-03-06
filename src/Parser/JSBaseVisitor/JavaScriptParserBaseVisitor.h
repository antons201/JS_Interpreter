#include "../generated/JavaScriptBaseParser.h"
#include "../AST/Utils.h"

// Generated from JavaScriptParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "../generated/JavaScriptParserVisitor.h"


/**
 * This class provides an empty implementation of JavaScriptParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class JavaScriptParserBaseVisitor : public JavaScriptParserVisitor {
public:

    antlrcpp::Any visitProgram(JavaScriptParser::ProgramContext *ctx) override;

    antlrcpp::Any visitSourceElement(JavaScriptParser::SourceElementContext *ctx) override;

    antlrcpp::Any visitStatement(JavaScriptParser::StatementContext *ctx) override;

    antlrcpp::Any visitBlock(JavaScriptParser::BlockContext *ctx) override;

    antlrcpp::Any visitStatementList(JavaScriptParser::StatementListContext *ctx) override;

    antlrcpp::Any visitImportStatement(JavaScriptParser::ImportStatementContext *ctx) override;

    antlrcpp::Any visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *ctx) override;

    antlrcpp::Any visitModuleItems(JavaScriptParser::ModuleItemsContext *ctx) override;

    antlrcpp::Any visitImportDefault(JavaScriptParser::ImportDefaultContext *ctx) override;

    antlrcpp::Any visitImportNamespace(JavaScriptParser::ImportNamespaceContext *ctx) override;

    antlrcpp::Any visitImportFrom(JavaScriptParser::ImportFromContext *ctx) override;

    antlrcpp::Any visitAliasName(JavaScriptParser::AliasNameContext *ctx) override;

    antlrcpp::Any visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *ctx) override;

    antlrcpp::Any visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *ctx) override;

    antlrcpp::Any visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *ctx) override;

    antlrcpp::Any visitDeclaration(JavaScriptParser::DeclarationContext *ctx) override;

    antlrcpp::Any visitVariableStatement(JavaScriptParser::VariableStatementContext *ctx) override;

    antlrcpp::Any visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) override;

    antlrcpp::Any visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) override;

    antlrcpp::Any visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) override;

    antlrcpp::Any visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) override;

    antlrcpp::Any visitIfStatement(JavaScriptParser::IfStatementContext *ctx) override;

    antlrcpp::Any visitDoStatement(JavaScriptParser::DoStatementContext *ctx) override;

    antlrcpp::Any visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) override;

    antlrcpp::Any visitForStatement(JavaScriptParser::ForStatementContext *ctx) override;

    antlrcpp::Any visitForInStatement(JavaScriptParser::ForInStatementContext *ctx) override;

    antlrcpp::Any visitForOfStatement(JavaScriptParser::ForOfStatementContext *ctx) override;

    antlrcpp::Any visitVarModifier(JavaScriptParser::VarModifierContext *ctx) override;

    antlrcpp::Any visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) override;

    antlrcpp::Any visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) override;

    antlrcpp::Any visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) override;

    antlrcpp::Any visitYieldStatement(JavaScriptParser::YieldStatementContext *ctx) override;

    antlrcpp::Any visitWithStatement(JavaScriptParser::WithStatementContext *ctx) override;

    antlrcpp::Any visitSwitchStatement(JavaScriptParser::SwitchStatementContext *ctx) override;

    antlrcpp::Any visitCaseBlock(JavaScriptParser::CaseBlockContext *ctx) override;

    antlrcpp::Any visitCaseClauses(JavaScriptParser::CaseClausesContext *ctx) override;

    antlrcpp::Any visitCaseClause(JavaScriptParser::CaseClauseContext *ctx) override;

    antlrcpp::Any visitDefaultClause(JavaScriptParser::DefaultClauseContext *ctx) override;

    antlrcpp::Any visitLabelledStatement(JavaScriptParser::LabelledStatementContext *ctx) override;

    antlrcpp::Any visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) override;

    antlrcpp::Any visitTryStatement(JavaScriptParser::TryStatementContext *ctx) override;

    antlrcpp::Any visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) override;

    antlrcpp::Any visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) override;

    antlrcpp::Any visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) override;

    antlrcpp::Any visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;

    antlrcpp::Any visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *ctx) override;

    antlrcpp::Any visitClassTail(JavaScriptParser::ClassTailContext *ctx) override;

    antlrcpp::Any visitClassElement(JavaScriptParser::ClassElementContext *ctx) override;

    antlrcpp::Any visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *ctx) override;

    antlrcpp::Any visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) override;

    antlrcpp::Any visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) override;

    antlrcpp::Any visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *ctx) override;

    antlrcpp::Any visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) override;

    antlrcpp::Any visitSourceElements(JavaScriptParser::SourceElementsContext *ctx) override;

    antlrcpp::Any visitArrayLiteral(JavaScriptParser::ArrayLiteralContext *ctx) override;

    antlrcpp::Any visitElementList(JavaScriptParser::ElementListContext *ctx) override;

    antlrcpp::Any visitArrayElement(JavaScriptParser::ArrayElementContext *ctx) override;

    antlrcpp::Any visitObjectLiteral(JavaScriptParser::ObjectLiteralContext *ctx) override;

    antlrcpp::Any
    visitPropertyExpressionAssignment(JavaScriptParser::PropertyExpressionAssignmentContext *ctx) override;

    antlrcpp::Any visitComputedPropertyExpressionAssignment(
            JavaScriptParser::ComputedPropertyExpressionAssignmentContext *ctx) override;

    antlrcpp::Any visitFunctionProperty(JavaScriptParser::FunctionPropertyContext *ctx) override;

    antlrcpp::Any visitPropertyGetter(JavaScriptParser::PropertyGetterContext *ctx) override;

    antlrcpp::Any visitPropertySetter(JavaScriptParser::PropertySetterContext *ctx) override;

    antlrcpp::Any visitPropertyShorthand(JavaScriptParser::PropertyShorthandContext *ctx) override;

    antlrcpp::Any visitPropertyName(JavaScriptParser::PropertyNameContext *ctx) override;

    antlrcpp::Any visitArguments(JavaScriptParser::ArgumentsContext *ctx) override;

    antlrcpp::Any visitArgument(JavaScriptParser::ArgumentContext *ctx) override;

    antlrcpp::Any visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) override;

    antlrcpp::Any visitTemplateStringExpression(JavaScriptParser::TemplateStringExpressionContext *ctx) override;

    antlrcpp::Any visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *ctx) override;

    antlrcpp::Any visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) override;

    antlrcpp::Any visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) override;

    antlrcpp::Any visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *ctx) override;

    antlrcpp::Any visitObjectLiteralExpression(JavaScriptParser::ObjectLiteralExpressionContext *ctx) override;

    antlrcpp::Any visitMetaExpression(JavaScriptParser::MetaExpressionContext *ctx) override;

    antlrcpp::Any visitInExpression(JavaScriptParser::InExpressionContext *ctx) override;

    antlrcpp::Any visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) override;

    antlrcpp::Any visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) override;

    antlrcpp::Any visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *ctx) override;

    antlrcpp::Any visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) override;

    antlrcpp::Any visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *ctx) override;

    antlrcpp::Any visitThisExpression(JavaScriptParser::ThisExpressionContext *ctx) override;

    antlrcpp::Any visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) override;

    antlrcpp::Any visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) override;

    antlrcpp::Any visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) override;

    antlrcpp::Any visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *ctx) override;

    antlrcpp::Any visitTypeofExpression(JavaScriptParser::TypeofExpressionContext *ctx) override;

    antlrcpp::Any visitInstanceofExpression(JavaScriptParser::InstanceofExpressionContext *ctx) override;

    antlrcpp::Any visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) override;

    antlrcpp::Any visitDeleteExpression(JavaScriptParser::DeleteExpressionContext *ctx) override;

    antlrcpp::Any visitImportExpression(JavaScriptParser::ImportExpressionContext *ctx) override;

    antlrcpp::Any visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) override;

    antlrcpp::Any visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) override;

    antlrcpp::Any visitSuperExpression(JavaScriptParser::SuperExpressionContext *ctx) override;

    antlrcpp::Any visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) override;

    antlrcpp::Any visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) override;

    antlrcpp::Any visitParenthesizedExpression(JavaScriptParser::ParenthesizedExpressionContext *ctx) override;

    antlrcpp::Any visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) override;

    antlrcpp::Any visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) override;

    antlrcpp::Any visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *ctx) override;

    antlrcpp::Any visitYieldExpression(JavaScriptParser::YieldExpressionContext *ctx) override;

    antlrcpp::Any visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) override;

    antlrcpp::Any visitNewExpression(JavaScriptParser::NewExpressionContext *ctx) override;

    antlrcpp::Any visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) override;

    antlrcpp::Any visitArrayLiteralExpression(JavaScriptParser::ArrayLiteralExpressionContext *ctx) override;

    antlrcpp::Any visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) override;

    antlrcpp::Any visitClassExpression(JavaScriptParser::ClassExpressionContext *ctx) override;

    antlrcpp::Any visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) override;

    antlrcpp::Any visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) override;

    antlrcpp::Any visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) override;

    antlrcpp::Any visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) override;

    antlrcpp::Any
    visitAssignmentOperatorExpression(JavaScriptParser::AssignmentOperatorExpressionContext *ctx) override;

    antlrcpp::Any visitVoidExpression(JavaScriptParser::VoidExpressionContext *ctx) override;

    antlrcpp::Any visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *ctx) override;

    antlrcpp::Any visitAssignable(JavaScriptParser::AssignableContext *ctx) override;

    antlrcpp::Any visitFunctionDecl(JavaScriptParser::FunctionDeclContext *ctx) override;

    antlrcpp::Any visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *ctx) override;

    antlrcpp::Any visitArrowFunction(JavaScriptParser::ArrowFunctionContext *ctx) override;

    antlrcpp::Any visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *ctx) override;

    antlrcpp::Any visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *ctx) override;

    antlrcpp::Any visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) override;

    antlrcpp::Any visitLiteral(JavaScriptParser::LiteralContext *ctx) override;

    antlrcpp::Any visitNumericLiteral(JavaScriptParser::NumericLiteralContext *ctx) override;

    antlrcpp::Any visitBigintLiteral(JavaScriptParser::BigintLiteralContext *ctx) override;

    antlrcpp::Any visitIdentifierName(JavaScriptParser::IdentifierNameContext *ctx) override;

    antlrcpp::Any visitReservedWord(JavaScriptParser::ReservedWordContext *ctx) override;

    antlrcpp::Any visitKeyword(JavaScriptParser::KeywordContext *ctx) override;

    antlrcpp::Any visitGetter(JavaScriptParser::GetterContext *ctx) override;

    antlrcpp::Any visitSetter(JavaScriptParser::SetterContext *ctx) override;

    antlrcpp::Any visitEos(JavaScriptParser::EosContext *ctx) override;

    antlrcpp::Any defaultResult() override;

    antlrcpp::Any aggregateResult(antlrcpp::Any result, const antlrcpp::Any &nextResult) override;

    RootNode *getTree() {
        return tree;
    }

private:
    std::vector<BaseNode *> nodes;
    RootNode *tree;
};

