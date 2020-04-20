#include "TestUtils.h"

std::string TestUtils::getAstProgram(const std::string &filePath) {
    ANTLRFileStream input(filePath);
    JavaScriptLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    JavaScriptParser parser(&tokens);
    JavaScriptParserBaseVisitor visitor;
    tree::ParseTree *tree = parser.statementList();
    visitor.visit(tree);
    tokens.fill();

    auto Treevisitor = new TreeVisitor();
    RootNode *ASTtree = visitor.getTree();
    ASTtree->accept(Treevisitor);
    std::string textTree = Treevisitor->getTextTree();
    delete Treevisitor;
    return textTree;
}

std::string TestUtils::getAstFile(const std::string &filePath) {
    std::ifstream file(filePath);
    std::string tree, line;
    if (!file.is_open())
        return "Error reading the file";
    while (getline(file, line, '\n')) {
        tree += line + "\n";
    }
    file.close();
    return tree;

}

void TestUtils::compareFiles() {
    std::string dir = "../../tests/AstTests";
    std::vector<std::string> checkFiles;
    for (auto &file : recursive_directory_iterator(dir)) {
        if (file.path().extension() == ".js" || file.path().extension() == ".txt") {
            checkFiles.emplace_back(file.path());
        }
        if (file.is_directory()) {
            continue;
        }
    }
    std::sort(checkFiles.begin(), checkFiles.end());

    int n = checkFiles.size();
    for (int i = 0; i < n; i += 2) {
        ASSERT_EQ(getAstProgram(checkFiles[i]), getAstFile(checkFiles[i + 1])) << "Failed in " + checkFiles[i];
    }

}