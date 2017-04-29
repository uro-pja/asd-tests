#include <iostream>
#include "insertionSort.h"
#include "radixSort.h"
#include "mergeSort.h"
#include "countingSort.h"
#include "quickSortPartition.h"

//19:17
int main() {
    std::vector<int> vec{7,16,12,11,5,10,0,1,3,19,14};
    std::vector<int> vec2{19,14,11,0,5,3,10,16,1,12,7};

//    insertionSort(vec);

///*
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