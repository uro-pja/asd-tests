cmake_minimum_required(VERSION 3.6)
project(T3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        partition.h
        insertionSort.h
        quickSortPartition.h
        hoarePartition.h
        radixSort.h
        mergeSort.h countingSort.h print.h)

add_executable(T3 ${SOURCE_FILES})