#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> res;

    // Check for number of 2s that divide n
    if (n % 2 == 0) {
        res.push_back(2);
        while (n % 2 == 0) {
            n = n / 2;
        }
    }

    // Check for number of 3s that divide n
    if (n % 3 == 0) {
        res.push_back(3);
        while (n % 3 == 0) {
            n = n / 3;
        }
    }

    // Check for all odd numbers from 5 onwards
    for (int i = 5; i * i <= n; i += 6) {
        // Check divisibility by i (i.e. 5, 11, 17, etc.)
        if (n % i == 0) {
            res.push_back(i);
            while (n % i == 0) {
                n = n / i;
            }
        }
        // Check divisibility by i + 2 (i.e. 7, 13, 19, etc.)
        if (n % (i + 2) == 0) {
            res.push_back(i + 2);
            while (n % (i + 2) == 0) {
                n = n / (i + 2);
            }
        }
    }

    // If n is still greater than 1, then it's a prime number
    if (n > 1) {
        res.push_back(n);
    }

    return res;
}

int main() {
    int n = 315;
    vector<int> factors = primeFactors(n);
    
    cout << "Prime factors of " << n << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    
    return 0;
}
