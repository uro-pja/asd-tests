#include <vector>
#include <iostream>

void print(int *tab, size_t size);

void merge(int *arr, size_t size) {
    std::vector<int> tmpArr(size);

    int div = (int) (size / 2);
    int lC = 0;
    int rC = (int) (size / 2);
    int idx = 0;

    while (idx < size) {
        if (arr[lC] < arr[rC] && lC < div) {
            tmpArr[idx] = arr[lC];
            lC++;
        } else if (rC < size) {
            tmpArr[idx] = arr[rC];
            rC++;
        }

        idx++;
    }

    std::copy(tmpArr.begin(), tmpArr.end(), arr);
}

void mergeSort(int *tab, size_t size) {
    print(tab, size);

    int n = (int) size;

    if (n > 1) {
        if (n / 2 > 1) {
            mergeSort(tab, (size_t) (n / 2));
        }

        if ((n - n / 2) > 1) {
            mergeSort(tab + n / 2, (size_t) (n - n / 2));
        }

        merge(tab, size);
    }
}

void print(int *tab, size_t size) {
    for (int i = 0; i < size; i++) {
        std::cout << tab[i] << " ";
    }

    std::cout << std::endl;
}
