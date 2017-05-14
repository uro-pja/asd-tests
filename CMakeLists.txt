cmake_minimum_required(VERSION 3.6)
project(asd_testy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        T3/countingSort.h
        T3/hoarePartition.h
        T3/insertionSort.h
        T3/main.cpp
        T3/mergeSort.h
        T3/partition.h
        T3/print.h
        T3/quickSortPartition.h
        T3/radixSort.h
        T4/DFS.h
        T4/ExpressionValue.h
        T4/Graph.cpp
        T4/Graph.h
        T4/main.cpp
        T4/Vertex.cpp
        T4/Vertex.h)

add_executable(asd_testy ${SOURCE_FILES})