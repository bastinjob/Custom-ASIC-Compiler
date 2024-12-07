#ifndef GRAPH_BUILDER_HPP
#define GRAPH_BUILDER_HPP

#include "graph.hpp"
#include <string>

class GraphBuilder {
    public:
    static Graph parseGraph(const std::string& jsonFile);

};

#endif