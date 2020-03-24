parser grammar JavaScriptParser;

options {
    tokenVocab=JavaScriptLexer;
    superClass=JavaScriptBaseParser;
}

@header {
    #include "JavaScriptBaseParser.h"
}

program
    : HashBangLine? sourceElements? EOF
    ;

sourceElement
    : statement
    ;

statement
    : block
    | variableStatement
    | importStatement
    | exportStatement
    | emptyStatement
    | classDeclaration
    | expressionStatement
    | ifStatement
    | iterationStatement
    | continueStatement
    | breakStatement
    | returnStatement
    | yieldStatement /* Не будет реализовано */
    | withStatement /* Не будет реализовано */
    | labelledStatement /* Не будет реализовано */
    | switchStatement /* Не будет реализовано */
    | throwStatement /* Не будет реализовано */
    | tryStatement /* Не будет реализовано */
    | debuggerStatement /* Не будет реализовано */
    | functionDeclaration
    ;

block
    : '{' statementList? '}'
    ;

statementList
    : statement+
    ;

importStatement
    : Import importFromBlock
    ;

importFromBlock
    : importDefault? (importNamespace | moduleItems) importFrom eos
    | StringLiteral eos
    ;

moduleItems
    : '{' (aliasName ',')* (aliasName ','?)? '}'
    ;

importDefault
    : aliasName ','
    ;

importNamespace
    : '*' (As identifierName)?
    ;

importFrom
    : From StringLiteral
    ;

aliasName
    : identifierName (As identifierName )?
    ;

exportStatement
    : Export (exportFromBlock | declaration) eos    # ExportDeclaration
    | Export Default singleExpression eos           # ExportDefaultDeclaration
    ;

exportFromBlock
    : importNamespace importFrom eos
    | moduleItems importFrom? eos
    ;

declaration
    : variableStatement
    | classDeclaration
    | functionDeclaration
    ;

variableStatement
    : variableDeclarationList eos
    ;

variableDeclarationList
    : varModifier variableDeclaration (',' variableDeclaration)*
    ;

variableDeclaration
    : assignable ('=' singleExpression)? // ECMAScript 6: Array & Object Matching
    ;

emptyStatement
    : SemiColon
    ;

expressionStatement
    : {this->notOpenBraceAndNotFunction()}? expressionSequence eos
    ;

ifStatement
    : If '(' expressionSequence ')' statement (Else statement)?
    ;


iterationStatement
    : Do statement While '(' expressionSequence ')' eos                                                                 # DoStatement
    | While '(' expressionSequence ')' statement                                                                        # WhileStatement
    | For '(' (expressionSequence | variableDeclarationList)? ';' expressionSequence? ';' expressionSequence? ')' statement   # ForStatement
    | For '(' (singleExpression | variableDeclarationList) In expressionSequence ')' statement                                # ForInStatement
    // strange, 'of' is an identifier. and this->p("of") not work in sometime.
    | For Await? '(' (singleExpression | variableDeclarationList) Identifier{this->p("of")}? expressionSequence ')' statement  # ForOfStatement /* Await Не будет реализовано */
    ;

varModifier  // let, const - ECMAScript 6
    : Var
    | Let
    | Const
    ;

continueStatement
    : Continue ({this->notLineTerminator()}? Identifier)? eos
    ;

breakStatement
    : Break ({this->notLineTerminator()}? Identifier)? eos
    ;

returnStatement
    : Return ({this->notLineTerminator()}? expressionSequence)? eos
    ;

yieldStatement /* Не будет реализовано */
    : Yield ({this->notLineTerminator()}? expressionSequence)? eos
    ;

withStatement /* Не будет реализовано */
    : With '(' expressionSequence ')' statement
    ;

switchStatement /* Не будет реализовано */
    : Switch '(' expressionSequence ')' caseBlock
    ;

caseBlock /* Не будет реализовано */
    : '{' caseClauses? (defaultClause caseClauses?)? '}'
    ;

caseClauses /* Не будет реализовано */
    : caseClause+
    ;

caseClause /* Не будет реализовано */
    : Case expressionSequence ':' statementList?
    ;

defaultClause
    : Default ':' statementList?
    ;

labelledStatement /* Не будет реализовано */
    : Identifier ':' statement
    ;

throwStatement /* Не будет реализовано */
    : Throw {this->notLineTerminator()}? expressionSequence eos
    ;

tryStatement /* Не будет реализовано */
    : Try block (catchProduction finallyProduction? | finallyProduction)
    ;

catchProduction /* Не будет реализовано */
    : Catch ('(' assignable? ')')? block
    ;

finallyProduction /* Не будет реализовано */
    : Finally block
    ;

debuggerStatement /* Не будет реализовано */
    : Debugger eos
    ;

functionDeclaration
    : Async? Function '*'? Identifier '(' formalParameterList? ')' '{' functionBody '}' /* Async Не будет реализовано */
    ;

classDeclaration
    : Class Identifier classTail
    ;

classTail
    : (Extends singleExpression)? '{' classElement* '}'
    ;

classElement
    : (Static | {this->n("static")}? Identifier | Async)* methodDefinition
    | emptyStatement
    | '#'? propertyName '=' singleExpression
    ;

methodDefinition
    : '*'? '#'? propertyName '(' formalParameterList? ')' '{' functionBody '}'
    | '*'? '#'? getter '(' ')' '{' functionBody '}'
    | '*'? '#'? setter '(' formalParameterList? ')' '{' functionBody '}'
    ;

formalParameterList
    : formalParameterArg (',' formalParameterArg)* (',' lastFormalParameterArg)?
    | lastFormalParameterArg
    ;

formalParameterArg
    : assignable ('=' singleExpression)?      // ECMAScript 6: Initialization
    ;

lastFormalParameterArg                        // ECMAScript 6: Rest Parameter
    : Ellipsis singleExpression
    ;

functionBody
    : sourceElements?
    ;

sourceElements
    : sourceElement+
    ;

arrayLiteral
    : ('[' elementList ']')
    ;

elementList
    : ','* arrayElement? (','+ arrayElement)* ','* // Yes, everything is optional
    ;

arrayElement
    : Ellipsis? singleExpression
    ;

objectLiteral
    : '{' (propertyAssignment (',' propertyAssignment)*)? ','? '}'
    ;

propertyAssignment
    : propertyName ':' singleExpression                                             # PropertyExpressionAssignment
    | '[' singleExpression ']' ':' singleExpression                                 # ComputedPropertyExpressionAssignment
    | Async? '*'? propertyName '(' formalParameterList?  ')'  '{' functionBody '}'  # FunctionProperty /* Async Не будет реализовано */
    | getter '(' ')' '{' functionBody '}'                                           # PropertyGetter
    | setter '(' formalParameterArg ')' '{' functionBody '}'                        # PropertySetter
    | Ellipsis? singleExpression                                                    # PropertyShorthand
    ;

propertyName
    : identifierName
    | StringLiteral
    | numericLiteral
    | '[' singleExpression ']'
    ;

arguments
    : '('(argument (',' argument)* ','?)?')'
    ;

argument
    : Ellipsis? (singleExpression | Identifier)
    ;

expressionSequence
    : singleExpression (',' singleExpression)*
    ;

singleExpression
    : anoymousFunction                                                      # FunctionExpression
    | Class Identifier? classTail                                           # ClassExpression
    | singleExpression '[' expressionSequence ']'                           # MemberIndexExpression
    | singleExpression '?'? '.' '#'? identifierName                         # MemberDotExpression
    | singleExpression arguments                                            # ArgumentsExpression
    | New singleExpression arguments?                                       # NewExpression
    | New '.' Identifier                                                    # MetaExpression // new.target
    | singleExpression {this->notLineTerminator()}? '++'                     # PostIncrementExpression
    | singleExpression {this->notLineTerminator()}? '--'                     # PostDecreaseExpression
    | Delete singleExpression                                               # DeleteExpression
    | Void singleExpression                                                 # VoidExpression
    | Typeof singleExpression                                               # TypeofExpression
    | '++' singleExpression                                                 # PreIncrementExpression
    | '--' singleExpression                                                 # PreDecreaseExpression
    | '+' singleExpression                                                  # UnaryPlusExpression
    | '-' singleExpression                                                  # UnaryMinusExpression
    | '~' singleExpression                                                  # BitNotExpression
    | '!' singleExpression                                                  # NotExpression
    | Await singleExpression                                                # AwaitExpression
    | <assoc=right> singleExpression '**' singleExpression                  # PowerExpression
    | singleExpression ('*' | '/' | '%') singleExpression                   # MultiplicativeExpression
    | singleExpression ('+' | '-') singleExpression                         # AdditiveExpression
    | singleExpression '??' singleExpression                                # CoalesceExpression
    | singleExpression ('<<' | '>>' | '>>>') singleExpression               # BitShiftExpression
    | singleExpression ('<' | '>' | '<=' | '>=') singleExpression           # RelationalExpression
    | singleExpression Instanceof singleExpression                          # InstanceofExpression
    | singleExpression In singleExpression                                  # InExpression
    | singleExpression ('==' | '!=' | '===' | '!==') singleExpression       # EqualityExpression
    | singleExpression '&' singleExpression                                 # BitAndExpression
    | singleExpression '^' singleExpression                                 # BitXOrExpression
    | singleExpression '|' singleExpression                                 # BitOrExpression
    | singleExpression '&&' singleExpression                                # LogicalAndExpression
    | singleExpression '||' singleExpression                                # LogicalOrExpression
    | singleExpression '?' singleExpression ':' singleExpression            # TernaryExpression
    | <assoc=right> singleExpression '=' singleExpression                   # AssignmentExpression
    | <assoc=right> singleExpression assignmentOperator singleExpression    # AssignmentOperatorExpression
    | Import '(' singleExpression ')'                                       # ImportExpression
    | singleExpression TemplateStringLiteral                                # TemplateStringExpression  // ECMAScript 6
    | yieldStatement                                                        # YieldExpression // ECMAScript 6
    | This                                                                  # ThisExpression
    | Identifier                                                            # IdentifierExpression
    | Super                                                                 # SuperExpression
    | literal                                                               # LiteralExpression
    | arrayLiteral                                                          # ArrayLiteralExpression
    | objectLiteral                                                         # ObjectLiteralExpression
    | '(' expressionSequence ')'                                            # ParenthesizedExpression
    ;

assignable
    : Identifier
    | arrayLiteral
    | objectLiteral
    ;

anoymousFunction
    : functionDeclaration                                                       # FunctionDecl
    | Async? Function '*'? '(' formalParameterList? ')' '{' functionBody '}'    # AnoymousFunctionDecl
    | Async? arrowFunctionParameters '=>' arrowFunctionBody                     # ArrowFunction
    ;

arrowFunctionParameters
    : Identifier
    | '(' formalParameterList? ')'
    ;

arrowFunctionBody
    : singleExpression
    | '{' functionBody '}'
    ;

assignmentOperator
    : '*='
    | '/='
    | '%='
    | '+='
    | '-='
    | '<<='
    | '>>='
    | '>>>='
    | '&='
    | '^='
    | '|='
    | '**='
    ;

literal
    : NullLiteral
    | BooleanLiteral
    | StringLiteral
    | TemplateStringLiteral
    | RegularExpressionLiteral
    | numericLiteral
    | bigintLiteral
    ;

numericLiteral
    : DecimalLiteral
    | HexIntegerLiteral
    | OctalIntegerLiteral
    | OctalIntegerLiteral2
    | BinaryIntegerLiteral
    ;

bigintLiteral
    : BigDecimalIntegerLiteral
    | BigHexIntegerLiteral
    | BigOctalIntegerLiteral
    | BigBinaryIntegerLiteral
    ;

identifierName
    : Identifier
    | reservedWord
    ;

reservedWord
    : keyword
    | NullLiteral
    | BooleanLiteral
    ;

keyword
    : Break
    | Do
    | Instanceof
    | Typeof
    | Case
    | Else
    | New
    | Var
    | Catch /* Не будет реализовано */
    | Finally /* Не будет реализовано */
    | Return
    | Void
    | Continue
    | For
    | Switch /* Не будет реализовано */
    | While
    | Debugger /* Не будет реализовано */
    | Function
    | This
    | With /* Не будет реализовано */
    | Default
    | If
    | Throw /* Не будет реализовано */
    | Delete
    | In
    | Try /* Не будет реализовано */

    | Class
    | Enum
    | Extends
    | Super
    | Const
    | Export
    | Import
    | Implements
    | Let
    | Private
    | Public
    | Interface
    | Package
    | Protected
    | Static
    | Yield /* Не будет реализовано */
    | Async /* Не будет реализовано */
    | Await /* Не будет реализовано */
    | From
    | As
    ;

getter
    : Identifier {this->p("get")}? propertyName
    ;

setter
    : Identifier {this->p("set")}? propertyName
    ;

eos
    : SemiColon
    | EOF
    | {this->lineTerminatorAhead()}?
    | {this->closeBrace()}?
    ;
