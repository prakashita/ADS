#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    // First compare by frequency, if frequencies are same, compare by element values
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int a[] = {7, 3, 3, 3, 7, 3, 2, 2, 3, 7};
    int n = sizeof(a) / sizeof(a[0]);

    // Map to store frequency of elements
    map<int, int> freqMap;
    
    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freqMap[a[i]]++;
    }

    // Transfer map elements to a vector of pairs for sorting
    vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());

    // Sort the vector based on frequency (and value if frequencies are same)
    sort(freqVec.begin(), freqVec.end(), compare);

    // Output the sorted array based on frequency
    cout << "Sorted by frequency: ";
    for (auto& it : freqVec) {
        for (int i = 0; i < it.second; i++) {
            cout << it.first << " ";
        }
    }

    return 0;
}
