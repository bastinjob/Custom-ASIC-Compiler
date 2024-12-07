#include "graph.hpp"
#include <iostream>

void Graph::printGraph() const {
    for (const auto& node: nodes){
         std::cout << "Operation: " << node->op << "\n";
        std::cout << "Inputs: ";
        for (const auto& input : node->inputs)
            std::cout << input << " ";
        std::cout << "\nOutputs: ";
        for (const auto& output : node->outputs)
            std::cout << output << " ";
        std::cout << "\n\n";
    }
}