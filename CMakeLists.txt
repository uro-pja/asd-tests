cmake_minimum_required(VERSION 3.6)
project(ALG3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Partition.h
        InsertionSort.h
        QuickSortPartition.h
        HoarePartition.h
        RadixSort.h
        MergeSort.h)

add_executable(ALG3 ${SOURCE_FILES})