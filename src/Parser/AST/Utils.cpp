#include "Utils.h"
#include <iostream>

void Utils::createTextTree(std::vector<int> &offsets, std::string &textTree, BaseNode *node) {
    for (int &offset : offsets) {
        textTree += offset > 0 ? "| " : "  ";
        if (offset == 1) {
            offset -= 1;
        }
    }
    textTree += "\n";
    for (int i = 0; i < offsets.size() - 1; ++i) {
        textTree += offsets[i] > 0 ? "| " : "  ";
    }
    textTree += "+—";
    textTree += node->getNodeName() + "\n";
}

std::vector<BaseNode *> Utils::makeChilds(int vc, std::vector<BaseNode *> &nodes) {
    std::vector<BaseNode *> childNode;
    std::copy(nodes.end() - vc, nodes.end(), std::back_inserter(childNode));
    nodes.erase(nodes.end() - vc, nodes.end());
    return childNode;
}
