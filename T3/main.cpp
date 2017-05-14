#include <iostream>
#include "insertionSort.h"
#include "radixSort.h"
#include "mergeSort.h"
#include "countingSort.h"
#include "quickSortPartition.h"

int main() {
    std::vector<int> vec{659,867,438,593,941,359,225,995,368,101,886};
    std::vector<int> vec2{941,101,593,225,995,886,867,438,368,659,359};

    insertionSort(vec);

/*
    // Quick sort partition
    int partitionCallAmount = 0;
    quickSortPartition(vec, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n\n", partitionCallAmount);

    // Quick sort partition check with vector2
    partitionCallAmount = 0;
    quickSortPartition(vec2, partitionCallAmount);
    printf("Ilość wywołań algorytmu partition: %d\n\n", partitionCallAmount);
//*/

//    countingSort(vec);

    radixSort(vec, 1);


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