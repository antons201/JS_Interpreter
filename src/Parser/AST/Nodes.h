#ifndef JS_INTERPRETER_NODES_H
#define JS_INTERPRETER_NODES_H

#include <string>
#include <utility>
#include <vector>
#include "TreeVisitor.h"

class BaseNode {
public:
    BaseNode() = default;

    virtual ~BaseNode() = default;

    virtual void accept(Visitor *v) = 0;

    std::vector<BaseNode *> getChilds() {
        return childs;
    }

    std::string getNodeName() {
        return nodeName;
    }

protected:
    std::vector<BaseNode *> childs;
    std::string nodeName;
};

class RootNode : public BaseNode {
public:
    explicit RootNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "Program";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class AssignableNode : public BaseNode {
public:
    explicit AssignableNode(std::vector<BaseNode *> _childs, std::string _assignable) {
        childs = std::move(_childs);
        nodeName = "Identifier (" + std::move(_assignable) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class NumericLiteralNode : public BaseNode {
public:
    explicit NumericLiteralNode(std::vector<BaseNode *> _childs, std::string _literal) {
        childs = std::move(_childs);
        nodeName = "NumericLiteral (" + std::move(_literal) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class StringLiteralNode : public BaseNode {
public:
    explicit StringLiteralNode(std::vector<BaseNode *> _childs, std::string _literal) {
        childs = std::move(_childs);
        nodeName = "StringLiteral (" + std::move(_literal) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BooleanLiteralNode : public BaseNode {
public:
    explicit BooleanLiteralNode(std::vector<BaseNode *> _childs, std::string _literal) {
        childs = std::move(_childs);
        nodeName = "BooleanLiteral (" + std::move(_literal) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class NullLiteralNode : public BaseNode {
public:
    explicit NullLiteralNode(std::vector<BaseNode *> _childs, std::string _literal) {
        childs = std::move(_childs);
        nodeName = "NullLiteral (" + std::move(_literal) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class VariableDeclarationNode : public BaseNode {
public:
    explicit VariableDeclarationNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "VariableDeclarator";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class VariableDeclarationListNode : public BaseNode {
public:
    explicit VariableDeclarationListNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "VariableDeclaration";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class AdditiveExpressionNode : public BaseNode {
public:
    explicit AdditiveExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class MultiplicativeExpressionNode : public BaseNode {
public:
    explicit MultiplicativeExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class UnaryMinusExpressionNode : public BaseNode {
public:
    explicit UnaryMinusExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "UnaryExpression + (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class UnaryPlusExpressionNode : public BaseNode {
public:
    explicit UnaryPlusExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "UnaryExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class RelationalExpressionNode : public BaseNode {
public:
    explicit RelationalExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class EqualityExpressionNode : public BaseNode {
public:
    explicit EqualityExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "EqualityExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class IdentifierExpressionNode : public BaseNode {
public:
    explicit IdentifierExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "Identifier (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class IfStatementNode : public BaseNode {
public:
    explicit IfStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "IfStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class SequenceExpressionNode : public BaseNode {
public:
    explicit SequenceExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "SequenceExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class EmptyStatementNode : public BaseNode {
public:
    explicit EmptyStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "EmptyStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};


class BlockNode : public BaseNode {
public:
    explicit BlockNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "BlockStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class AssignmentExpressionNode : public BaseNode {
public:
    explicit AssignmentExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "AssignmentExpression (=)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class WhileStatementNode : public BaseNode {
public:
    explicit WhileStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "WhileStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BreakStatementNode : public BaseNode {
public:
    explicit BreakStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "BreakStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ContinueStatementNode : public BaseNode {
public:
    explicit ContinueStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ContinueStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class LogicalAndExpressionNode : public BaseNode {
public:
    explicit LogicalAndExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "LogicalExpression (&&)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class LogicalOrExpressionNode : public BaseNode {
public:
    explicit LogicalOrExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "LogicalExpression (||)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BitXOrExpressionNode : public BaseNode {
public:
    explicit BitXOrExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (^)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BitAndExpressionNode : public BaseNode {
public:
    explicit BitAndExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (&)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BitOrExpressionNode : public BaseNode {
public:
    explicit BitOrExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (|)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BitNotExpressionNode : public BaseNode {
public:
    explicit BitNotExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "UnaryyExpression (~)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class BitShiftExpressionNode : public BaseNode {
public:
    explicit BitShiftExpressionNode(std::vector<BaseNode *> _childs, std::string _statement) {
        childs = std::move(_childs);
        nodeName = "BinaryExpression (" + std::move(_statement) + ")";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class FunctionDeclarationNode : public BaseNode {
public:
    explicit FunctionDeclarationNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "FunctionDeclaration";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class FunctionBodyNode : public BaseNode {
public:
    explicit FunctionBodyNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "FunctionBody";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class CallExpressionNode : public BaseNode {
public:
    explicit CallExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "CallExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ReturnStatementNode : public BaseNode {
public:
    explicit ReturnStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ReturnStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ParameterListNode : public BaseNode {
public:
    explicit ParameterListNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ParameterList";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class FunctionExpressionNode : public BaseNode {
public:
    explicit FunctionExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "FunctionExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class MemberExpressionNode : public BaseNode {
public:
    explicit MemberExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "MemberExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ArrayExpressionNode : public BaseNode {
public:
    explicit ArrayExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ArrayExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class NotExpressionNode : public BaseNode {
public:
    explicit NotExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "UnaryExpression (!)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class DeleteExpressionNode : public BaseNode {
public:
    explicit DeleteExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "UnaryExpression (Delete)";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ExpressionStatementNode : public BaseNode {
public:
    explicit ExpressionStatementNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ExpressionStatement";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class NullNode : public BaseNode {
public:
    explicit NullNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "Null";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class ObjectExpressionNode : public BaseNode {
public:
    explicit ObjectExpressionNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "ObjectExpression";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

class PropertyNode : public BaseNode {
public:
    explicit PropertyNode(std::vector<BaseNode *> _childs) {
        childs = std::move(_childs);
        nodeName = "Property";
    }

    void accept(Visitor *v) override { v->visit(this); }
};

#endif