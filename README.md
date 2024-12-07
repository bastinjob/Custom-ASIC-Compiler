# ASIC Compiler Tracer

This project implements a **tracer** for deep learning models targeting a simulated ASIC chip with a custom Instruction Set Architecture (ISA). The tracer parses a TensorFlow or PyTorch model into an Intermediate Representation (IR) that can be progressively lowered to the custom ISA. 

The implementation uses **C++** and is designed to integrate with **MLIR/LLVM** for further optimization and lowering. 

---

## **Features**

- **Graph Parsing**: Parses graph representations of deep learning models from JSON files.
- **Intermediate Representation (IR)**: Represents models using nodes and operations, forming the basis for further compilation stages.
- **Modular Design**: Clean separation of concerns with dedicated classes for `Node`, `Graph`, and `GraphBuilder`.

---

## **Getting Started**

### **Dependencies**

1. **C++17** or higher.
2. **CMake** (version 3.10 or higher).
3. **nlohmann/json** library for JSON parsing:
   - Install on Ubuntu:
     ```bash
     sudo apt install nlohmann-json3-dev
     ```

---

### **Building the Project**

1. Clone the repository and navigate to the project root:
   ```bash
   git clone https://github.com/your-username/compiler_project.git
   cd compiler_project