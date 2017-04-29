#include <iostream>
#include "insertionSort.h"
#include "radixSort.h"
#include "mergeSort.h"

int main() {
    std::vector<int> vec{4,11,3,10,8,19,12,18,1,0,6};
    std::vector<int> vec2{13, 0, 6, 5, 11, 16, 15, 11, 8, 17, 3, 10, 4, 14};

    insertionSort(vec);

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

//    radixSort(vec, 2);


//    printf("\n\nPierwszy mergeSort: \n");
//    mergeSort(vec.data(), vec.size());
//    printf("\n\nDrugi mergeSort: \n");
//    mergeSort(vec2.data(), vec2.size());
//    for (int x = 0; x < vec.size(); x++) {
//        std::cout << " " << vec[x] << ",";
//    }
//
//    printf("\n\n");
//    mergeSort(vec2);

    return 0;
}