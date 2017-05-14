#include <iostream>
#include <algorithm>
#include <vector>
#pragma once

int muted = true;

int partition(std::vector<int> &E) {
    int l = -1, r = 0, size = (int) E.size();

    int p = 0;    // liczba porownan
    int s = 0;    // liczba przestawien

    while (r < size - 1) {
        p++;
        if (!muted) printf("Liczba porównań : %d \n", p);
        if (E[r] < E[size - 1]) {

            if (r > l + 1) {
                std::swap(E[r], E[l + 1]);
                if (r != l + 1) {
                    s++;
                    if (!muted) printf("    swap num: %d\n", s);
                }

            }

            l = l + 1;
            if (!muted) std::cout << " l index: " << l;
        }

        r = r + 1;

        for (int x = 0; x < size; x++) {
            if (!muted) std::cout << " " << E[x] << ",";
        }

        if (!muted) std::cout << std::endl;
    }

    if (l + 1 < size - 1) {
        std::swap(E[l + 1], E[size - 1]);
    }

    if (!muted) std::cout << "Liczba porównań: " << p << std::endl;
    if (!muted) std::cout << "Liczba przestawien: " << s << std::endl;

    return l + 1;
}