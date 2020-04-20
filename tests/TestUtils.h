#ifndef JS_INTERPRETER_TESTUTILS_H
#define JS_INTERPRETER_TESTUTILS_H

#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <gtest/gtest.h>
#include "../src/Parser/AST/Nodes.h"
#include "../src/Parser/AST/TreeVisitor.h"
#include "../src/Parser/generated/JavaScriptLexer.h"
#include "../src/Parser/generated/JavaScriptParser.h"
#include "../src/Parser/JSBaseVisitor/JavaScriptParserBaseVisitor.h"
#include "antlr4-runtime.h"

using namespace antlr4;

using namespace std::filesystem;

class TestUtils {
public:
    static std::string getAstFile(const std::string &filePath);

    static std::string getAstProgram(const std::string &filePath);

    static void compareFiles();
};


#endif //JS_INTERPRETER_TESTUTILS_H
