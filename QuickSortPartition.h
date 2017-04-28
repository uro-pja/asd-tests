#include <iostream>
#include <algorithm>
#include <vector>
#include "Partition.h"

using namespace std;

void QuickSortPartition(vector<int> E, int &partitionCallAmount) {

    int m = 0, size = (int) E.size();

    partitionCallAmount++;
    m = partition(E);

    if (m > 1) {
        printf("Lewe wywołanie rekurencyjne QuickSortPartition\n");
        QuickSortPartition(vector<int>(&E[0], E.data() + m), partitionCallAmount);
    }

    if ((size - m - 1) > 1) {
        printf("Prawe wywołanie rekurencyjne QuickSortPartition\n");
        QuickSortPartition(vector<int>(&E[m + 1], E.data() + size), partitionCallAmount);
    }
}
