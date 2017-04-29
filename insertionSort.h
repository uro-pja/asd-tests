#include <vector>

void insertionSort(std::vector<int> E) {
    int i = 0, j = 0, swapAmount = 0, size = (int) E.size();

    for (i = 0; i < size; ++i) {

        printf("Outer loop iteration num: %d \n", i);
        j = i;
        while ((j > 0) && (E[j - 1] > E[j])) {
            std::swap(E[j - 1], E[j]);
            j--;
            swapAmount++;

            printf("    Swap amount: %d\n", swapAmount);
        }
    }
}