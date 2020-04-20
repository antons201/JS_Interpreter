cmake_minimum_required(VERSION 3.15)
project(JS_Interpreter)

set(CMAKE_CXX_STANDARD 17)

add_executable(antlr4 main.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptBaseLexer.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptBaseParser.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptLexer.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptParser.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/Parser/JSBaseVisitor/JavaScriptParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptParserListener.cpp
        ${PROJECT_SOURCE_DIR}/Parser/generated/JavaScriptParserVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Parser/AST/Nodes.h
        ${PROJECT_SOURCE_DIR}/Parser/AST/Visitor.h
        ${PROJECT_SOURCE_DIR}/Parser/AST/TreeVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Parser/AST/TreeVisitor.h
        ${PROJECT_SOURCE_DIR}/Parser/AST/Utils.h
        ${PROJECT_SOURCE_DIR}/Parser/AST/Utils.cpp)

include_directories(${PROJECT_SOURCE_DIR}/Parser/generated)

target_link_libraries(antlr4 /usr/local/lib/libantlr4-runtime.a)
