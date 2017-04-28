#include <iostream>
#include "InsertionSort.h"
#include "QuickSortPartition.h"

using namespace std;

int main() {
    vector<int> vec{13, 0, 19, 6, 2, 8, 1, 16, 18, 4, 14};
    vector<int> vec2{2, 8, 0, 6, 1, 13, 16, 18, 4, 19, 14};

//    InsertionSort(vec);

    int partitionCallAmount = 0;
    QuickSortPartition(vec, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n", partitionCallAmount);

    partitionCallAmount = 0;
    QuickSortPartition(vec2, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n", partitionCallAmount);


    return 0;
}