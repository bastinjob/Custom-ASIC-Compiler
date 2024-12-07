#ifndef NODE_HPP
#define NODE_HPP


#include <string>
#include <vector>

class Node {

    public:

    std::string op; //operation type - relu, linear etc
    std::vector<std::string> inputs; //input tensor names
    std::vector<std::string> outputs; //output tensor names

    Node(const std::string& opType,
          const std::vector<std::string>& in,
          const std::vector<std::string>& out)
          {
            op = opType;
            inputs = in;
            outputs = out;

          }

};
#endif