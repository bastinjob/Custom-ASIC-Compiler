#include "graph_builder.hpp"
#include <iostream>

int main() {
    const std::string graphFile = "../data/example_graph.json"; // Adjust path as needed

    // Parse graph
    Graph graph = GraphBuilder::parseGraph(graphFile);

    // Print graph structure
    graph.printGraph();

    return 0;
}