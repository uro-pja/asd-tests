#include <iostream>
#include "insertionSort.h"
#include "countingSort.h"

int main() {
    std::vector<int> vec{1, 0, 3, 3, 3, 1, 1, 1, 2, 3, 3};
    std::vector<int> vec2{0, 13, 6, 11, 5, 2, 8, 14, 3, 17, 9};

//    insertionSort(vec);

/*
    // Quick sort partition
    int partitionCallAmount = 0;
    quickSortPartition(vec, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n", partitionCallAmount);

    // Quick sort partition check with vector2
    partitionCallAmount = 0;
    quickSortPartition(vec2, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n", partitionCallAmount);
//*/

    CountingSort(vec);

//    mergeSort(vec);
//    for (int x = 0; x < vec.size(); x++) {
//        std::cout << " " << vec[x] << ",";
//    }
//
//    printf("\n\n");
//    mergeSort(vec2);

    return 0;
}