#ifndef JS_INTERPRETER_UTILS_H
#define JS_INTERPRETER_UTILS_H

#include "Nodes.h"

class Utils {
public:
    static void createTextTree(std::vector<int> &offsets, std::string &textTree, BaseNode *node);

    static std::vector<BaseNode *> makeChilds(int vc, std::vector<BaseNode *> &nodes);
};


#endif //JS_INTERPRETER_UTILS_H
