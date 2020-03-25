# JS_Interpreter

Грамматика взята с репозитория antlr4: https://github.com/antlr/grammars-v4/tree/master/javascript/javascript

Для работы программы необходимо скачать ANTLR 4.8 по ссылке: https://www.antlr.org/download.html

Далее необходимо установить библиотеку Antlr C++ runtime. 
Репозиторий и инструкция по ссылке: https://github.com/antlr/antlr4/tree/master/runtime/Cpp


Для генерации всех необходимых файлов в директории src/Parser находится скрипт generate.sh
В нём необходимо заменить переменную LOCATION, прописав там путь до файла antlr-4.8-complete.

Также необходимо в директорию src/Parser/generated добавить классы BaseLexer и BaseParser и произвести некоторые модификации по инструкции. 
Ссылка на файлы: https://github.com/antlr/grammars-v4/tree/master/javascript/javascript/Cpp