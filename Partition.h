#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int muted = true;

int partition(vector<int> &E) {
    int l = -1, r = 0, size = (int) E.size();

    int p = 0;    // liczba porownan
    int s = 0;    // liczba przestawien

    while (r < size - 1) {
        p++;
        if (!muted) printf("Liczba porównań : %d \n", p);
        if (E[r] < E[size - 1]) {

            if (r > l + 1) {
                swap(E[r], E[l + 1]);
                if (r != l + 1) {
                    s++;
                    if (!muted) printf("    swap num: %d\n", s);
                }

            }

            l = l + 1;
            if (!muted) cout << " l index: " << l;
        }

        r = r + 1;

        for (int x = 0; x < size; x++) {
            if (!muted) cout << " " << E[x] << ",";
        }

        if (!muted) cout << endl;
    }

    if (l + 1 < size - 1) {
        swap(E[l + 1], E[size - 1]);
    }

    if (!muted) cout << "Liczba porównań: " << p << endl;
    if (!muted) cout << "Liczba przestawien: " << s << endl;


    return l + 1;
}