#ifndef JS_INTERPRETER_VISITOR_H
#define JS_INTERPRETER_VISITOR_H

class BaseNode;

class RootNode;

class AssignableNode;

class IfStatementNode;

class VariableDeclarationNode;

class NumericLiteralNode;

class StringLiteralNode;

class BooleanLiteralNode;

class AssignmentExpressionNode;

class AdditiveExpressionNode;

class MultiplicativeExpressionNode;

class UnaryMinusExpressionNode;

class UnaryPlusExpressionNode;

class IdentifierExpressionNode;

class VariableDeclarationNode;

class SequenceExpressionNode;

class EmptyStatementNode;

class VariableDeclarationListNode;

class RelationalExpressionNode;

class EqualityExpressionNode;

class BlockNode;

class WhileStatementNode;

class BreakStatementNode;

class ContinueStatementNode;

class LogicalAndExpressionNode;

class LogicalOrExpressionNode;

class BitXOrExpressionNode;

class BitAndExpressionNode;

class BitOrExpressionNode;

class BitNotExpressionNode;

class BitShiftExpressionNode;

class FunctionDeclarationNode;

class FunctionBodyNode;

class CallExpressionNode;

class ReturnStatementNode;

class ParameterListNode;

class FunctionExpressionNode;

class MemberExpressionNode;

class ArrayExpressionNode;

class NotExpressionNode;

class DeleteExpressionNode;

class ExpressionStatementNode;

class NullLiteralNode;

class NullNode;

class ObjectExpressionNode;

class PropertyNode;

class Visitor {
public:
    virtual void visit(RootNode *node) = 0;

    virtual void visit(AssignableNode *node) = 0;

    virtual void visit(IfStatementNode *node) = 0;

    virtual void visit(VariableDeclarationNode *node) = 0;

    virtual void visit(VariableDeclarationListNode *node) = 0;

    virtual void visit(NumericLiteralNode *node) = 0;

    virtual void visit(StringLiteralNode *node) = 0;

    virtual void visit(BooleanLiteralNode *node) = 0;

    virtual void visit(AssignmentExpressionNode *node) = 0;

    virtual void visit(AdditiveExpressionNode *node) = 0;

    virtual void visit(MultiplicativeExpressionNode *node) = 0;

    virtual void visit(UnaryMinusExpressionNode *node) = 0;

    virtual void visit(UnaryPlusExpressionNode *node) = 0;

    virtual void visit(RelationalExpressionNode *node) = 0;

    virtual void visit(EqualityExpressionNode *node) = 0;

    virtual void visit(IdentifierExpressionNode *node) = 0;

    virtual void visit(SequenceExpressionNode *node) = 0;

    virtual void visit(EmptyStatementNode *node) = 0;

    virtual void visit(BlockNode *node) = 0;

    virtual void visit(WhileStatementNode *node) = 0;

    virtual void visit(BreakStatementNode *node) = 0;

    virtual void visit(ContinueStatementNode *node) = 0;

    virtual void visit(LogicalAndExpressionNode *node) = 0;

    virtual void visit(LogicalOrExpressionNode *node) = 0;

    virtual void visit(BitXOrExpressionNode *node) = 0;

    virtual void visit(BitAndExpressionNode *node) = 0;

    virtual void visit(BitOrExpressionNode *node) = 0;

    virtual void visit(BitNotExpressionNode *node) = 0;

    virtual void visit(BitShiftExpressionNode *node) = 0;

    virtual void visit(FunctionDeclarationNode *node) = 0;

    virtual void visit(FunctionBodyNode *node) = 0;

    virtual void visit(CallExpressionNode *node) = 0;

    virtual void visit(ReturnStatementNode *node) = 0;

    virtual void visit(ParameterListNode *node) = 0;

    virtual void visit(FunctionExpressionNode *node) = 0;

    virtual void visit(MemberExpressionNode *node) = 0;

    virtual void visit(ArrayExpressionNode *node) = 0;

    virtual void visit(NotExpressionNode *node) = 0;

    virtual void visit(DeleteExpressionNode *node) = 0;

    virtual void visit(ExpressionStatementNode *node) = 0;

    virtual void visit(NullLiteralNode *node) = 0;

    virtual void visit(NullNode *node) = 0;

    virtual void visit(ObjectExpressionNode *node) = 0;

    virtual void visit(PropertyNode *node) = 0;
};


#endif //JS_INTERPRETER_VISITOR_H
