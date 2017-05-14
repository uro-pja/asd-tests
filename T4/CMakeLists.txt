cmake_minimum_required(VERSION 3.6)
project(T4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ExpressionValue.h DFS.h Graph.cpp Graph.h Vertex.cpp Vertex.h)
add_executable(T4 ${SOURCE_FILES})