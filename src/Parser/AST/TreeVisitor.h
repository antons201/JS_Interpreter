//
// Created by anton on 13.04.2020.
//

#ifndef JS_INTERPRETER_TREEVISITOR_H
#define JS_INTERPRETER_TREEVISITOR_H

#include <vector>
#include "Visitor.h"
#include "Utils.h"

class TreeVisitor : public Visitor {
public:
    void visit(RootNode *node) override;

    void visit(AssignableNode *node) override;

    void visit(NumericLiteralNode *node) override;

    void visit(StringLiteralNode *node) override;

    void visit(BooleanLiteralNode *node) override;

    void visit(NullLiteralNode *node) override;

    void visit(VariableDeclarationNode *node) override;

    void visit(VariableDeclarationListNode *node) override;

    void visit(IfStatementNode *node) override;

    void visit(AssignmentExpressionNode *node) override;

    void visit(AdditiveExpressionNode *node) override;

    void visit(MultiplicativeExpressionNode *node) override;

    void visit(UnaryMinusExpressionNode *node) override;

    void visit(UnaryPlusExpressionNode *node) override;

    void visit(RelationalExpressionNode *node) override;

    void visit(EqualityExpressionNode *node) override;

    void visit(IdentifierExpressionNode *node) override;

    void visit(SequenceExpressionNode *node) override;

    void visit(EmptyStatementNode *node) override;

    void visit(BlockNode *node) override;

    void visit(WhileStatementNode *node) override;

    void visit(BreakStatementNode *node) override;

    void visit(ContinueStatementNode *node) override;

    void visit(LogicalAndExpressionNode *node) override;

    void visit(LogicalOrExpressionNode *node) override;

    void visit(BitXOrExpressionNode *node) override;

    void visit(BitAndExpressionNode *node) override;

    void visit(BitOrExpressionNode *node) override;

    void visit(BitNotExpressionNode *node) override;

    void visit(BitShiftExpressionNode *node) override;

    void visit(FunctionDeclarationNode *node) override;

    void visit(FunctionBodyNode *node) override;

    void visit(CallExpressionNode *node) override;

    void visit(ReturnStatementNode *node) override;

    void visit(ParameterListNode *node) override;

    void visit(FunctionExpressionNode *node) override;

    void visit(MemberExpressionNode *node) override;

    void visit(ArrayExpressionNode *node) override;

    void visit(NotExpressionNode *node) override;

    void visit(DeleteExpressionNode *node) override;

    void visit(ExpressionStatementNode *node) override;

    void visit(NullNode *node) override;

    void visit(ObjectExpressionNode *node) override;

    void visit(PropertyNode *node) override;

    void visitChilds(BaseNode *node);

    std::string getTextTree();

private:
    std::vector<int> offsets;
    std::string textTree;
};


#endif //JS_INTERPRETER_TREEVISITOR_H
