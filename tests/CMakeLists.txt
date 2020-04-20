cmake_minimum_required(VERSION 3.15)
project(Tests)

set(CMAKE_CXX_STANDARD 17)

link_libraries(stdc++fs)
add_executable(Tests main.cpp TestClass.cpp TestUtils.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptBaseLexer.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptBaseParser.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptLexer.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptParser.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/JSBaseVisitor/JavaScriptParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptParserListener.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/generated/JavaScriptParserVisitor.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/Nodes.h
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/Visitor.h
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/TreeVisitor.cpp
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/TreeVisitor.h
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/Utils.h
        ${PROJECT_SOURCE_DIR}/../src/Parser/AST/Utils.cpp)

enable_testing()
target_link_libraries(Tests gtest gtest_main)
target_link_libraries(Tests /usr/local/lib/libantlr4-runtime.a)