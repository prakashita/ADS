#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10] = {2, 1, 0, 1, 2, 1, 1, 0, 0, 1}; // Initialize the array
    int l = 0, m = 0, h = 9; // Initialize the pointers

    while (m <= h) {
        if (a[m] == 0) {
            // Swap a[m] and a[l] and move l and m pointers forward
            swap(a[m], a[l]);
            l++;
            m++;
        } else if (a[m] == 1) {
            // Just move the mid pointer forward
            m++;
        } else {
            // Swap a[m] and a[h] and move h pointer backward
            swap(a[m], a[h]);
            h--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

