#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "node.hpp"
#include <vector>
#include <memory>

class Graph{
    public:
    std::vector<std::shared_ptr<Node>> nodes;

    void addNode(const std::shared_ptr<Node>& node){
        nodes.push_back(node);
    }

    void printGraph() const;
};
#endif