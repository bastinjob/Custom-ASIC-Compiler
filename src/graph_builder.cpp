#include "graph_builder.hpp"
#include <nlohmann/json.hpp> // JSON library
#include <fstream>
#include <iostream>

Graph GraphBuilder::parseGraph(const std::string& jsonFile) {
    Graph graph;
    std::ifstream file(jsonFile);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << jsonFile << "\n";
        return graph;
    }

    nlohmann::json jsonGraph;
    file >> jsonGraph;

    for (const auto& node : jsonGraph["nodes"]) {
        auto op = node["op"].get<std::string>();
        auto inputs = node["inputs"].get<std::vector<std::string>>();
        auto outputs = node["outputs"].get<std::vector<std::string>>();
        graph.addNode(std::make_shared<Node>(op, inputs, outputs));
    }
    return graph;
}