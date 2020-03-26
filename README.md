# JS_Interpreter

Грамматика взята с репозитория antlr4: https://github.com/antlr/grammars-v4/tree/master/javascript/javascript

Для работы программы необходимо скачать ANTLR 4.8 по ссылке: https://www.antlr.org/download.html

Далее необходимо установить библиотеку Antlr C++ runtime. 
Репозиторий и инструкция по ссылке: https://github.com/antlr/antlr4/tree/master/runtime/Cpp

Также необходимо в директорию src/Parser/generated добавить классы BaseLexer, BaseParser и файл pitch.sed. 
Ссылка на файлы: https://github.com/antlr/grammars-v4/tree/master/javascript/javascript/Cpp

После этого для генерации всех необходимых файлов в директории src/Parser находится скрипт generate.sh
В нём необходимо заменить переменную LOCATION, прописав там путь до файла antlr-4.8-complete. После чего необходимо его запустить.