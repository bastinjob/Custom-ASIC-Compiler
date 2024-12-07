cmake_minimum_required(VERSION 3.10)
project(ASICCompiler)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES src/*.cpp)

# Add executable
add_executable(tracer ${SOURCES})

# Link JSON library
find_package(nlohmann_json REQUIRED)
target_link_libraries(tracer nlohmann_json::nlohmann_json)
