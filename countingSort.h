#include <iostream>
#include <vector>

void print(std::vector<int> E);

void countingSort(std::vector<int> E) {

    int printIterator = 1;

    int maxElement = *std::max_element(std::begin(E), std::end(E));
    std::vector<int> Tmp((unsigned long) (maxElement + 1), 0);

    int size = (int) E.size();
    std::vector<int> Out((unsigned long) size, 0);

    // Zliczenie
    for (int i = 0; i < size; i++) {
        Tmp[E[i]] = Tmp[E[i]] + 1;
    }

    // Sumowanie
    printf("\nPętla sumowania:\n");
    for (int i = 1; i < maxElement + 1; i++) {
        Tmp[i] = Tmp[i] + Tmp[i - 1];

        printf("    nr: %d. Postać tablicy pomocniczej:    ", printIterator++);
        print(Tmp);
    }

    printIterator = 1;
    printf("\nPętla wypisania:\n");
    for (int i = size - 1; i >= 0; i--) {
        Out[Tmp[E[i]] - 1] = E[i];
        Tmp[E[i]] = Tmp[E[i]] - 1;

        printf("    nr: %d. Postać tablicy pomocniczej:    ", printIterator++);
        print(Tmp);
    }

    printf("\nPosortowana tablica:\n");
    print(Out);
}

void print(std::vector<int> Tab) {
    int size = (int) Tab.size();

    for (int i = 0; i < size; ++i) {
        printf(" %d,", Tab[i]);
    }
    printf("\n");
}
