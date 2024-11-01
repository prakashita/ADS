//pascel triangle for value n
#include<bits/stdc++.h>
using namespace std;

// // Function to compute nCr without factorial to avoid overflow
// int ncr(int n, int r) {
//     int res = 1;
//     if (r > n - r) {
//         r = n - r; // Since C(n, r) == C(n, n-r)
//     }
//     for (int i = 0; i < r; ++i) {
//         res *= (n - i);
//         res /= (i + 1);
//     }
//     return res;
// }

int main() {
    int n = 7; // Number of rows
    int c;

    for (int i = 0; i < n; i++) {
        c = 1;

        // Print leading spaces to format the triangle
        for (int s = 0; s < n - i - 1; s++) {
            cout << "  "; // Two spaces per unit
        }

        // Print the Pascal's triangle numbers
        for (int j = 0; j <= i; j++) {
            if (i == 0 || j == 0 || i == j) {
                c = 1;
            } else {
                c = c * (i - j + 1) / j;
            }
            cout << c << "   "; // Three spaces between numbers
        }
        cout << "\n";
    }

    return 0;
}