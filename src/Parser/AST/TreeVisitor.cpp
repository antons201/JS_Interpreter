#include <iostream>
#include "TreeVisitor.h"
#include "Nodes.h"

void TreeVisitor::visitChilds(BaseNode *node) {
    auto childs = node->getChilds();
    offsets.emplace_back(childs.size());
    for (auto &child: childs) {
        child->accept(this);
        offsets[offsets.size() - 1] -= 1;
    }
    offsets.pop_back();
    delete node;
}

void TreeVisitor::visit(RootNode *node) {
    textTree += node->getNodeName() + "\n";
    visitChilds(node);
}

void TreeVisitor::visit(AssignableNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(NumericLiteralNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(StringLiteralNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BooleanLiteralNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(NullLiteralNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(VariableDeclarationNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(VariableDeclarationListNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(IfStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(AssignmentExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(AdditiveExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(MultiplicativeExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(UnaryMinusExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(UnaryPlusExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(RelationalExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(EqualityExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(IdentifierExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(SequenceExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(EmptyStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BlockNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(WhileStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BreakStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ContinueStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(LogicalAndExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(LogicalOrExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BitXOrExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BitAndExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BitOrExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BitNotExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(BitShiftExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(FunctionDeclarationNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(FunctionBodyNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(CallExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ReturnStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ParameterListNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(FunctionExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(MemberExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ArrayExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(NotExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(DeleteExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ExpressionStatementNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(NullNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(ObjectExpressionNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

void TreeVisitor::visit(PropertyNode *node) {
    Utils::createTextTree(offsets, textTree, node);
    visitChilds(node);
}

std::string TreeVisitor::getTextTree() {
    return textTree;
}