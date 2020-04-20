#include "../generated/JavaScriptBaseParser.h"


// Generated from JavaScriptParser.g4 by ANTLR 4.8


#include "JavaScriptParserBaseVisitor.h"

antlrcpp::Any JavaScriptParserBaseVisitor::visitStatementList(JavaScriptParser::StatementListContext *ctx) {
    auto vc = visitChildren(ctx);
    tree = new RootNode(nodes);
    return vc;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitVarModifier(JavaScriptParser::VarModifierContext *ctx) {
    if (ctx->Let() || ctx->Const()) {
        throw std::logic_error("Let and const not realized");
    }
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignable(JavaScriptParser::AssignableContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new AssignableNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitLiteral(JavaScriptParser::LiteralContext *ctx) {
    int vc = visitChildren(ctx);
    if (ctx->NullLiteral()) {
        nodes.emplace_back(new NullLiteralNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    } else if (ctx->StringLiteral()) {
        nodes.emplace_back(new StringLiteralNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    } else if (ctx->BooleanLiteral()) {
        nodes.emplace_back(new BooleanLiteralNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    } else if (ctx->RegularExpressionLiteral() || ctx->TemplateStringLiteral()) {
        throw std::logic_error("Regular expression and Template string not realized");
    }

    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitNumericLiteral(JavaScriptParser::NumericLiteralContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new NumericLiteralNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new VariableDeclarationNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new VariableDeclarationListNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new AssignmentExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    std::string statement = ctx->Plus() ? ctx->Plus()->getText() : ctx->Minus()->getText();
    nodes.emplace_back(new AdditiveExpressionNode(Utils::makeChilds(vc, nodes), statement));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    std::string statement = ctx->Multiply() ? ctx->Multiply()->getText() : ctx->Divide() ? ctx->Divide()->getText() :
                                                                           ctx->Modulus()->getText();
    nodes.emplace_back(new MultiplicativeExpressionNode(Utils::makeChilds(vc, nodes), statement));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new UnaryMinusExpressionNode(Utils::makeChilds(vc, nodes), "-"));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new UnaryPlusExpressionNode(Utils::makeChilds(vc, nodes), "+"));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    std::string statement = ctx->LessThan() ? ctx->LessThan()->getText() : ctx->LessThanEquals() ?
            ctx->LessThanEquals()->getText() : ctx->MoreThan() ? ctx->MoreThan()->getText()
            : ctx->GreaterThanEquals()->getText();
    nodes.emplace_back(new RelationalExpressionNode(Utils::makeChilds(vc, nodes), statement));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    std::string statement = ctx->Equals_() ? ctx->Equals_()->getText() : ctx->NotEquals() ? ctx->NotEquals()->getText()
            : ctx->IdentityEquals() ? ctx->IdentityEquals()->getText() : ctx->IdentityNotEquals()->getText();
    nodes.emplace_back(new EqualityExpressionNode(Utils::makeChilds(vc, nodes), statement));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) {
    int vc = visitChildren(ctx).as<int>();
    nodes.emplace_back(new IdentifierExpressionNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitIfStatement(JavaScriptParser::IfStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new IfStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new SequenceExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new EmptyStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBlock(JavaScriptParser::BlockContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BlockNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new WhileStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BreakStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ContinueStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ExpressionStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new LogicalAndExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new LogicalOrExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BitXOrExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BitAndExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BitOrExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new BitNotExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    std::string statement = ctx->LeftShiftArithmetic() ? ctx->LeftShiftArithmetic()->getText() :
            ctx->RightShiftArithmetic() ? ctx->RightShiftArithmetic()->getText() : ctx->RightShiftLogical()->getText();
    nodes.emplace_back(new BitShiftExpressionNode(Utils::makeChilds(vc, nodes), statement));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) {
    int vc = visitChildren(ctx);
    std::vector<BaseNode *> childNode = Utils::makeChilds(vc, nodes);
    std::vector<BaseNode *> emptyChild;
    childNode.insert(childNode.begin(), new IdentifierExpressionNode(emptyChild, ctx->Identifier()->getText()));
    nodes.emplace_back(new FunctionDeclarationNode(childNode));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new FunctionBodyNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new CallExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ReturnStatementNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ParameterListNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new FunctionExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new MemberExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new MemberExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitIdentifierName(JavaScriptParser::IdentifierNameContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new IdentifierExpressionNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitArrayLiteralExpression(JavaScriptParser::ArrayLiteralExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ArrayExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new NotExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitDeleteExpression(JavaScriptParser::DeleteExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new DeleteExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitObjectLiteralExpression(JavaScriptParser::ObjectLiteralExpressionContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new ObjectExpressionNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertyExpressionAssignment(
        JavaScriptParser::PropertyExpressionAssignmentContext *ctx) {
    int vc = visitChildren(ctx);
    nodes.emplace_back(new PropertyNode(Utils::makeChilds(vc, nodes)));
    return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertyName(JavaScriptParser::PropertyNameContext *ctx) {
    int vc = visitChildren(ctx);
    if (ctx->StringLiteral()) {
        nodes.emplace_back(new StringLiteralNode(Utils::makeChilds(vc, nodes), ctx->start->getText()));
        return 1;
    }
    return vc;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitElementList(JavaScriptParser::ElementListContext *ctx) {
    std::vector<BaseNode *> emptyChild;
    auto ch = ctx->children;
    int i = 0;
    int count = 0;
    int n = ch.size();
    while (i < n) {
        if ((ch[i]->getText() == ",") && (i != n - 1)) {
            count++;
            nodes.emplace_back(new NullNode(emptyChild));
            i++;
        } else {
            ch[i]->accept(this);
            count++;
            i += 2;
        }

    }
    return count;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitProgram(JavaScriptParser::ProgramContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitSourceElement(JavaScriptParser::SourceElementContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitStatement(JavaScriptParser::StatementContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitVariableStatement(JavaScriptParser::VariableStatementContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArrayLiteral(JavaScriptParser::ArrayLiteralContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArrayElement(JavaScriptParser::ArrayElementContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArguments(JavaScriptParser::ArgumentsContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArgument(JavaScriptParser::ArgumentContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitSourceElements(JavaScriptParser::SourceElementsContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitObjectLiteral(JavaScriptParser::ObjectLiteralContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitComputedPropertyExpressionAssignment(
        JavaScriptParser::ComputedPropertyExpressionAssignmentContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionProperty(JavaScriptParser::FunctionPropertyContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertyGetter(JavaScriptParser::PropertyGetterContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertySetter(JavaScriptParser::PropertySetterContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertyShorthand(JavaScriptParser::PropertyShorthandContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitTemplateStringExpression(JavaScriptParser::TemplateStringExpressionContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitParenthesizedExpression(JavaScriptParser::ParenthesizedExpressionContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignmentOperatorExpression(
        JavaScriptParser::AssignmentOperatorExpressionContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionDecl(JavaScriptParser::FunctionDeclContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBigintLiteral(JavaScriptParser::BigintLiteralContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitReservedWord(JavaScriptParser::ReservedWordContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitKeyword(JavaScriptParser::KeywordContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitGetter(JavaScriptParser::GetterContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitSetter(JavaScriptParser::SetterContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitEos(JavaScriptParser::EosContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) {
    throw std::logic_error("Assignment operator not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportStatement(JavaScriptParser::ImportStatementContext *ctx) {
    throw std::logic_error("Import statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArrowFunction(JavaScriptParser::ArrowFunctionContext *ctx) {
    throw std::logic_error("Arrow function not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *ctx) {
    throw std::logic_error("Arrow function not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *ctx) {
    throw std::logic_error("Arrow function not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitVoidExpression(JavaScriptParser::VoidExpressionContext *ctx) {
    throw std::logic_error("Void expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *ctx) {
    throw std::logic_error("Coalesce expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitClassExpression(JavaScriptParser::ClassExpressionContext *ctx) {
    throw std::logic_error("Class expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitYieldExpression(JavaScriptParser::YieldExpressionContext *ctx) {
    throw std::logic_error("Yield expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitNewExpression(JavaScriptParser::NewExpressionContext *ctx) {
    throw std::logic_error("New expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportExpression(JavaScriptParser::ImportExpressionContext *ctx) {
    throw std::logic_error("Import expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitSuperExpression(JavaScriptParser::SuperExpressionContext *ctx) {
    throw std::logic_error("Super expression not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *ctx) {
    throw std::logic_error("Post decrease expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitTypeofExpression(JavaScriptParser::TypeofExpressionContext *ctx) {
    throw std::logic_error("Typeof expression not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitInstanceofExpression(JavaScriptParser::InstanceofExpressionContext *ctx) {
    throw std::logic_error("Instanceof expression not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *ctx) {
    throw std::logic_error("Pre decrease expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *ctx) {
    throw std::logic_error("Await expression ot realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitThisExpression(JavaScriptParser::ThisExpressionContext *ctx) {
    throw std::logic_error("This expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitMetaExpression(JavaScriptParser::MetaExpressionContext *ctx) {
    throw std::logic_error("Meta expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitInExpression(JavaScriptParser::InExpressionContext *ctx) {
    throw std::logic_error("In expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *ctx) {
    throw std::logic_error("Ternary expression not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *ctx) {
    throw std::logic_error("Pre increment expression not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *ctx) {
    throw std::logic_error("Post increment expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) {
    throw std::logic_error("Power expression not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitDoStatement(JavaScriptParser::DoStatementContext *ctx) {
    throw std::logic_error("Do statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitForStatement(JavaScriptParser::ForStatementContext *ctx) {
    throw std::logic_error("For statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *ctx) {
    throw std::logic_error("Import statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitModuleItems(JavaScriptParser::ModuleItemsContext *ctx) {
    throw std::logic_error("Module not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportDefault(JavaScriptParser::ImportDefaultContext *ctx) {
    throw std::logic_error("Import statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportNamespace(JavaScriptParser::ImportNamespaceContext *ctx) {
    throw std::logic_error("Import statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitImportFrom(JavaScriptParser::ImportFromContext *ctx) {
    throw std::logic_error("Import statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitAliasName(JavaScriptParser::AliasNameContext *ctx) {
    throw std::logic_error("Alias not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *ctx) {
    throw std::logic_error("Export not realized");
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *ctx) {
    throw std::logic_error("Export not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *ctx) {
    throw std::logic_error("Export not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitDeclaration(JavaScriptParser::DeclarationContext *ctx) {
    throw std::logic_error("Declaration not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitForInStatement(JavaScriptParser::ForInStatementContext *ctx) {
    throw std::logic_error("For in not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitForOfStatement(JavaScriptParser::ForOfStatementContext *ctx) {
    throw std::logic_error("For of not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitYieldStatement(JavaScriptParser::YieldStatementContext *ctx) {
    throw std::logic_error("Yield statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitWithStatement(JavaScriptParser::WithStatementContext *ctx) {
    throw std::logic_error("With statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitSwitchStatement(JavaScriptParser::SwitchStatementContext *ctx) {
    throw std::logic_error("Switch statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseBlock(JavaScriptParser::CaseBlockContext *ctx) {
    throw std::logic_error("Case not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClauses(JavaScriptParser::CaseClausesContext *ctx) {
    throw std::logic_error("Case not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClause(JavaScriptParser::CaseClauseContext *ctx) {
    throw std::logic_error("Case not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitDefaultClause(JavaScriptParser::DefaultClauseContext *ctx) {
    throw std::logic_error("Default clause not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitLabelledStatement(JavaScriptParser::LabelledStatementContext *ctx) {
    throw std::logic_error("Labelled statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) {
    throw std::logic_error("ThrowS statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitTryStatement(JavaScriptParser::TryStatementContext *ctx) {
    throw std::logic_error("Try statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) {
    throw std::logic_error("Catch not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) {
    throw std::logic_error("Finally not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) {
    throw std::logic_error("Debugger statement not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *ctx) {
    throw std::logic_error("Class not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitClassTail(JavaScriptParser::ClassTailContext *ctx) {
    throw std::logic_error("Class Tail not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitClassElement(JavaScriptParser::ClassElementContext *ctx) {
    throw std::logic_error("Class element not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *ctx) {
    throw std::logic_error("Method definition not realized");
}

antlrcpp::Any JavaScriptParserBaseVisitor::defaultResult() { return 0; }

antlrcpp::Any JavaScriptParserBaseVisitor::aggregateResult(antlrcpp::Any result, const antlrcpp::Any &nextResult) {
    return result.as<int>() + nextResult.as<int>();
};