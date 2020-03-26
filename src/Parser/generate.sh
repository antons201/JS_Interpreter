#!/bin/bash
sed -i -f pitch.sed ./*.g4
set -o errexit
LOCATION=/home/anton/Desktop/antlr-4.8-complete.jar
java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ JavaScriptLexer.g4 JavaScriptParser.g4