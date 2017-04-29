#include "partition.h"
#include <vector>

int hoarePartition(std::vector<int> E, int k) {
    int m = 0, tmp = 0, n = (int) E.size();

    std::cout << "ARGUMENT WYKONANIA :";
    for (int x = 0; x < n; x++) {
        std::cout << " " << E[x] << ",";
    }
    std::cout << std::endl << "WYKONANO PARTITION" << std::endl << std::endl;
    m = partition(E);
    if ((n - m) == k) {
        return m;
    } else {
        if (n - m > k) {
            tmp = m + 1 + hoarePartition(std::vector<int>(&E[m + 1], E.data() + n), k);
        } else {
            tmp = hoarePartition(std::vector<int>(&E[0], E.data() + m), k - (n - m));
        }
    }

    return tmp;
}