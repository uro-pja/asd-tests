#include <vector>
#pragma once

void print(std::vector<int> &Tab) {
    int size = (int) Tab.size();

    for (int i = 0; i < size; ++i) {
        printf(" %d,", Tab[i]);
    }
    printf("\n");
}