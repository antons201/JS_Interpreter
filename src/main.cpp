#include <iostream>
#include "Parser/JSBaseVisitor/JavaScriptParserBaseVisitor.h"

#include "antlr4-runtime.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"
#include "Parser/AST/TreeVisitor.h"

using namespace antlr4;

int main() {
    ANTLRInputStream input("var x = 5;"); //Enter your code
    JavaScriptLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    JavaScriptParser parser(&tokens);
    JavaScriptParserBaseVisitor visitor;
    tree::ParseTree* tree = parser.statementList();
    visitor.visit(tree);

    auto Treevisitor = new TreeVisitor();
    RootNode* ASTtree = visitor.getTree();
    ASTtree->accept(Treevisitor);

    std::cout << Treevisitor->getTextTree();
    delete Treevisitor;
    return 0;
}
