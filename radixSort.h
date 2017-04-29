#include <iostream>
#include <queue>
#include <cmath>
#include "partition.h"
#include "print.h"

int elem_value(int o, int i, int d)
{
    return static_cast<int>(o / (pow(10, d - i))) % 10;
}



void radixSort(std::vector<int>&E, int d)
{
    int in = 0;
    unsigned long maxSize = 0;

    std::queue<int> Q[E.size()];

    for (int i = d; i > 0; i--)
    {
        for (int j = 0; j < E.size(); j++)
        {
            int qIdx = elem_value(E[j], i, d);

            Q[qIdx].push(E[j]);

            in++;

            maxSize = std::max(Q[qIdx].size(), maxSize);
        }
        printf("Długość kolejki: %lu\n", maxSize);
        int k = 0;
        for (int j = 0; j < 10; j++)
        {
            while (!Q[j].empty())
            {
                E[k] = Q[j].front();
                Q[j].pop();
                k++;
            }
        }
    }
    printf("\nPo posortowaniu poprzez %d liczbę składową:\n", d);
    print(E);

    printf("\nLiczba operacji IN we wszystkich kolejkach: %d", in);
}
