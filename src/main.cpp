#include <iostream>

#include "antlr4-runtime.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"

using namespace antlr4;

int main() {
    ANTLRInputStream input("{var x = 5; var y = 6;}");
    JavaScriptLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    JavaScriptParser parser(&tokens);
    tree::ParseTree* tree = parser.block();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
    return 0;
}
