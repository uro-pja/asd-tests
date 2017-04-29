#include <iostream>
#include "insertionSort.h"
#include "radixSort.h"
#include "mergeSort.h"

int main() {
    std::vector<int> vec{19, 3, 12, 17, 5, 0, 2, 18, 16, 6, 15, 7, 14};
    std::vector<int> vec2{12, 15,6,3,7,17,16,5,0,19,2,18,14};

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

//    countingSort(vec);

//    radixSort(vec, 3);
    printf("\n\nPierwszy mergeSort: \n");
    mergeSort(vec.data(), vec.size());
    printf("\n\nDrugi mergeSort: \n");
    mergeSort(vec2.data(), vec2.size());
//    for (int x = 0; x < vec.size(); x++) {
//        std::cout << " " << vec[x] << ",";
//    }
//
//    printf("\n\n");
//    mergeSort(vec2);

    return 0;
}